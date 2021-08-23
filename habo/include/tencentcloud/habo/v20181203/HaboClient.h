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

#ifndef TENCENTCLOUD_HABO_V20181203_HABOCLIENT_H_
#define TENCENTCLOUD_HABO_V20181203_HABOCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/habo/v20181203/model/DescribeStatusRequest.h>
#include <tencentcloud/habo/v20181203/model/DescribeStatusResponse.h>
#include <tencentcloud/habo/v20181203/model/StartAnalyseRequest.h>
#include <tencentcloud/habo/v20181203/model/StartAnalyseResponse.h>


namespace TencentCloud
{
    namespace Habo
    {
        namespace V20181203
        {
            class HaboClient : public AbstractClient
            {
            public:
                HaboClient(const Credential &credential, const std::string &region);
                HaboClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::DescribeStatusResponse> DescribeStatusOutcome;
                typedef std::future<DescribeStatusOutcome> DescribeStatusOutcomeCallable;
                typedef std::function<void(const HaboClient*, const Model::DescribeStatusRequest&, DescribeStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::StartAnalyseResponse> StartAnalyseOutcome;
                typedef std::future<StartAnalyseOutcome> StartAnalyseOutcomeCallable;
                typedef std::function<void(const HaboClient*, const Model::StartAnalyseRequest&, StartAnalyseOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StartAnalyseAsyncHandler;



                /**
                 *查询指定md5样本是否分析完成，并获取分析日志下载地址。
                 * @param req DescribeStatusRequest
                 * @return DescribeStatusOutcome
                 */
                DescribeStatusOutcome DescribeStatus(const Model::DescribeStatusRequest &request);
                void DescribeStatusAsync(const Model::DescribeStatusRequest& request, const DescribeStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeStatusOutcomeCallable DescribeStatusCallable(const Model::DescribeStatusRequest& request);

                /**
                 *上传样本到哈勃进行分析，异步生成分析日志。
                 * @param req StartAnalyseRequest
                 * @return StartAnalyseOutcome
                 */
                StartAnalyseOutcome StartAnalyse(const Model::StartAnalyseRequest &request);
                void StartAnalyseAsync(const Model::StartAnalyseRequest& request, const StartAnalyseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StartAnalyseOutcomeCallable StartAnalyseCallable(const Model::StartAnalyseRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_HABO_V20181203_HABOCLIENT_H_
