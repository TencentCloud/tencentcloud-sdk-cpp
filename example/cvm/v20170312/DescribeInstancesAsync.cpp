/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <tencentcloud/core/TencentCloud.h>
#include <tencentcloud/core/profile/HttpProfile.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/NetworkProxy.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/cvm/v20170312/CvmClient.h>
#include <tencentcloud/cvm/v20170312/model/DescribeInstancesRequest.h>
#include <tencentcloud/cvm/v20170312/model/DescribeInstancesResponse.h>
#include <tencentcloud/cvm/v20170312/model/Instance.h>

#include <iostream>
#include <string>
#include <thread>
#include <chrono>

using namespace TencentCloud;
using namespace TencentCloud::Cvm::V20170312;
using namespace TencentCloud::Cvm::V20170312::Model;
using namespace std;

int main()
{
    TencentCloud::InitAPI();

    // use the sdk

    string secretId = "<your secret id>";
    string secretKey = "<your secret key>";
    Credential cred = Credential(secretId, secretKey);

    DescribeInstancesRequest req = DescribeInstancesRequest();
    req.SetOffset(0);
    req.SetLimit(5);

    CvmClient cvm_client = CvmClient(cred, "ap-guangzhou");

    // use callback
    cout<<"Use callback..."<<endl;
    auto callback = [](const CvmClient* client, const DescribeInstancesRequest& req, CvmClient::DescribeInstancesOutcome outcome, const shared_ptr<const AsyncCallerContext>& context)
    {
        cout<<"context uuid="<<context->GetUuid()<<endl;
        if (!outcome.IsSuccess())
        {
            cout << outcome.GetError().PrintAll() << endl;
            return;
        }
        DescribeInstancesResponse rsp = outcome.GetResult();
        cout<<"RequestId="<<rsp.GetRequestId()<<endl;
        cout<<"TotalCount="<<rsp.GetTotalCount()<<endl;
        if (rsp.InstanceSetHasBeenSet())
        {
            vector<Instance> instanceSet = rsp.GetInstanceSet();
            for (auto itr=instanceSet.begin(); itr!=instanceSet.end(); ++itr)
            {
                cout<<(*itr).GetPlacement().GetZone()<<endl;
            }
        }
    };
    shared_ptr<const AsyncCallerContext> context(new AsyncCallerContext);

    cvm_client.DescribeInstancesAsync(req, callback, context);

    this_thread::sleep_for(chrono::seconds(5));


    // use future
    cout<<"Use future..."<<endl;
    auto ret = cvm_client.DescribeInstancesCallable(req);
    auto outcome = ret.get();

    if (!outcome.IsSuccess())
    {
        cout << outcome.GetError().PrintAll() << endl;
        TencentCloud::ShutdownAPI();
        return -1;
    }
    DescribeInstancesResponse rsp = outcome.GetResult();
    cout<<"RequestId="<<rsp.GetRequestId()<<endl;
    cout<<"TotalCount="<<rsp.GetTotalCount()<<endl;
    if (rsp.InstanceSetHasBeenSet())
    {
        vector<Instance> instanceSet = rsp.GetInstanceSet();
        for (auto itr=instanceSet.begin(); itr!=instanceSet.end(); ++itr)
        {
            cout<<(*itr).GetPlacement().GetZone()<<endl;
        }
    }

    TencentCloud::ShutdownAPI();

    return 0;
}
