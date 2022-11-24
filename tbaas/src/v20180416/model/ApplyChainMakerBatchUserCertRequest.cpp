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

#include <tencentcloud/tbaas/v20180416/model/ApplyChainMakerBatchUserCertRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tbaas::V20180416::Model;
using namespace std;

ApplyChainMakerBatchUserCertRequest::ApplyChainMakerBatchUserCertRequest() :
    m_clusterIdHasBeenSet(false),
    m_signUserCsrListHasBeenSet(false)
{
}

string ApplyChainMakerBatchUserCertRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_clusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_signUserCsrListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SignUserCsrList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_signUserCsrList.begin(); itr != m_signUserCsrList.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ApplyChainMakerBatchUserCertRequest::GetClusterId() const
{
    return m_clusterId;
}

void ApplyChainMakerBatchUserCertRequest::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool ApplyChainMakerBatchUserCertRequest::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

vector<SignCertCsr> ApplyChainMakerBatchUserCertRequest::GetSignUserCsrList() const
{
    return m_signUserCsrList;
}

void ApplyChainMakerBatchUserCertRequest::SetSignUserCsrList(const vector<SignCertCsr>& _signUserCsrList)
{
    m_signUserCsrList = _signUserCsrList;
    m_signUserCsrListHasBeenSet = true;
}

bool ApplyChainMakerBatchUserCertRequest::SignUserCsrListHasBeenSet() const
{
    return m_signUserCsrListHasBeenSet;
}


