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

#ifndef TENCENTCLOUD_GME_V20180711_GMECLIENT_H_
#define TENCENTCLOUD_GME_V20180711_GMECLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/gme/v20180711/model/DescribeFilterResultRequest.h>
#include <tencentcloud/gme/v20180711/model/DescribeFilterResultResponse.h>
#include <tencentcloud/gme/v20180711/model/DescribeFilterResultListRequest.h>
#include <tencentcloud/gme/v20180711/model/DescribeFilterResultListResponse.h>
#include <tencentcloud/gme/v20180711/model/VoiceFilterRequest.h>
#include <tencentcloud/gme/v20180711/model/VoiceFilterResponse.h>


namespace TencentCloud
{
    namespace Gme
    {
        namespace V20180711
        {
            class GmeClient : public AbstractClient
            {
            public:
                GmeClient(const Credential &credential, const std::string &region);
                GmeClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Error, Model::DescribeFilterResultResponse> DescribeFilterResultOutcome;
                typedef std::future<DescribeFilterResultOutcome> DescribeFilterResultOutcomeCallable;
                typedef std::function<void(const GmeClient*, const Model::DescribeFilterResultRequest&, DescribeFilterResultOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFilterResultAsyncHandler;
                typedef Outcome<Error, Model::DescribeFilterResultListResponse> DescribeFilterResultListOutcome;
                typedef std::future<DescribeFilterResultListOutcome> DescribeFilterResultListOutcomeCallable;
                typedef std::function<void(const GmeClient*, const Model::DescribeFilterResultListRequest&, DescribeFilterResultListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFilterResultListAsyncHandler;
                typedef Outcome<Error, Model::VoiceFilterResponse> VoiceFilterOutcome;
                typedef std::future<VoiceFilterOutcome> VoiceFilterOutcomeCallable;
                typedef std::function<void(const GmeClient*, const Model::VoiceFilterRequest&, VoiceFilterOutcome, const std::shared_ptr<const AsyncCallerContext>&)> VoiceFilterAsyncHandler;



                /**
                 *根据应用ID和文件ID查询识别结果
                 * @param req DescribeFilterResultRequest
                 * @return DescribeFilterResultOutcome
                 */
                DescribeFilterResultOutcome DescribeFilterResult(const Model::DescribeFilterResultRequest &request);
                void DescribeFilterResultAsync(const Model::DescribeFilterResultRequest& request, const DescribeFilterResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeFilterResultOutcomeCallable DescribeFilterResultCallable(const Model::DescribeFilterResultRequest& request);

                /**
                 *根据日期查询识别结果列表
                 * @param req DescribeFilterResultListRequest
                 * @return DescribeFilterResultListOutcome
                 */
                DescribeFilterResultListOutcome DescribeFilterResultList(const Model::DescribeFilterResultListRequest &request);
                void DescribeFilterResultListAsync(const Model::DescribeFilterResultListRequest& request, const DescribeFilterResultListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeFilterResultListOutcomeCallable DescribeFilterResultListCallable(const Model::DescribeFilterResultListRequest& request);

                /**
                 *本接口用于识别涉黄、涉政等违规音频，成功会回调配置在应用的回调地址。回调示例如下：
{"BizId":0,"FileId":"test_file_id","FileName":"test_file_name","FileUrl":"test_file_url","OpenId":"test_open_id","TimeStamp":"0000-00-00 00:00:00","Data":[{"Type":1,"Word":"xx"}]}
Type表示过滤类型，1：政治，2：色情，3：谩骂
                 * @param req VoiceFilterRequest
                 * @return VoiceFilterOutcome
                 */
                VoiceFilterOutcome VoiceFilter(const Model::VoiceFilterRequest &request);
                void VoiceFilterAsync(const Model::VoiceFilterRequest& request, const VoiceFilterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                VoiceFilterOutcomeCallable VoiceFilterCallable(const Model::VoiceFilterRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_GME_V20180711_GMECLIENT_H_
