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

#ifndef TENCENTCLOUD_AMS_V20200608_AMSCLIENT_H_
#define TENCENTCLOUD_AMS_V20200608_AMSCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/ams/v20200608/model/CancelTaskRequest.h>
#include <tencentcloud/ams/v20200608/model/CancelTaskResponse.h>
#include <tencentcloud/ams/v20200608/model/CreateAudioModerationTaskRequest.h>
#include <tencentcloud/ams/v20200608/model/CreateAudioModerationTaskResponse.h>
#include <tencentcloud/ams/v20200608/model/CreateBizConfigRequest.h>
#include <tencentcloud/ams/v20200608/model/CreateBizConfigResponse.h>
#include <tencentcloud/ams/v20200608/model/DescribeAmsListRequest.h>
#include <tencentcloud/ams/v20200608/model/DescribeAmsListResponse.h>
#include <tencentcloud/ams/v20200608/model/DescribeAudioStatRequest.h>
#include <tencentcloud/ams/v20200608/model/DescribeAudioStatResponse.h>
#include <tencentcloud/ams/v20200608/model/DescribeBizConfigRequest.h>
#include <tencentcloud/ams/v20200608/model/DescribeBizConfigResponse.h>
#include <tencentcloud/ams/v20200608/model/DescribeTaskDetailRequest.h>
#include <tencentcloud/ams/v20200608/model/DescribeTaskDetailResponse.h>


namespace TencentCloud
{
    namespace Ams
    {
        namespace V20200608
        {
            class AmsClient : public AbstractClient
            {
            public:
                AmsClient(const Credential &credential, const std::string &region);
                AmsClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::CancelTaskResponse> CancelTaskOutcome;
                typedef std::future<CancelTaskOutcome> CancelTaskOutcomeCallable;
                typedef std::function<void(const AmsClient*, const Model::CancelTaskRequest&, CancelTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CancelTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateAudioModerationTaskResponse> CreateAudioModerationTaskOutcome;
                typedef std::future<CreateAudioModerationTaskOutcome> CreateAudioModerationTaskOutcomeCallable;
                typedef std::function<void(const AmsClient*, const Model::CreateAudioModerationTaskRequest&, CreateAudioModerationTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAudioModerationTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateBizConfigResponse> CreateBizConfigOutcome;
                typedef std::future<CreateBizConfigOutcome> CreateBizConfigOutcomeCallable;
                typedef std::function<void(const AmsClient*, const Model::CreateBizConfigRequest&, CreateBizConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateBizConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAmsListResponse> DescribeAmsListOutcome;
                typedef std::future<DescribeAmsListOutcome> DescribeAmsListOutcomeCallable;
                typedef std::function<void(const AmsClient*, const Model::DescribeAmsListRequest&, DescribeAmsListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAmsListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAudioStatResponse> DescribeAudioStatOutcome;
                typedef std::future<DescribeAudioStatOutcome> DescribeAudioStatOutcomeCallable;
                typedef std::function<void(const AmsClient*, const Model::DescribeAudioStatRequest&, DescribeAudioStatOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAudioStatAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBizConfigResponse> DescribeBizConfigOutcome;
                typedef std::future<DescribeBizConfigOutcome> DescribeBizConfigOutcomeCallable;
                typedef std::function<void(const AmsClient*, const Model::DescribeBizConfigRequest&, DescribeBizConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBizConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTaskDetailResponse> DescribeTaskDetailOutcome;
                typedef std::future<DescribeTaskDetailOutcome> DescribeTaskDetailOutcomeCallable;
                typedef std::function<void(const AmsClient*, const Model::DescribeTaskDetailRequest&, DescribeTaskDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTaskDetailAsyncHandler;



                /**
                 *取消任务
                 * @param req CancelTaskRequest
                 * @return CancelTaskOutcome
                 */
                CancelTaskOutcome CancelTask(const Model::CancelTaskRequest &request);
                void CancelTaskAsync(const Model::CancelTaskRequest& request, const CancelTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CancelTaskOutcomeCallable CancelTaskCallable(const Model::CancelTaskRequest& request);

                /**
                 *本接口（Audio Moderation）用于提交音频内容（包括音频文件或流地址）进行智能审核任务，使用前请您登陆控制台开通音频内容安全服务。

### 功能使用说明：
- 前往“内容安全控制台-音频内容安全”开启使用音频内容安全服务，首次开通可获得20小时免费调用时长

### 接口功能说明：
- 支持对音频流或音频文件进行检测，判断其中是否包含违规内容；
- 支持设置回调地址 Callback 获取检测结果，或通过接口(查询音频检测结果)主动轮询获取检测结果；
- 支持识别违规内容，包括：低俗、谩骂、色情、涉政、广告等场景；
- 支持批量提交检测任务。检测任务列表最多支持10个；

### 音频文件调用说明：
- 音频文件大小支持：文件 < 500M；
- 音频文件时长支持：< 1小时；
- 音频码率类型支持：128 Kbps - 256 Kbps ；
- 音频文件支持格式：wav、mp3、aac、flac、amr、3gp、 m4a、wma、ogg、ape；
- 支持音视频文件分离并对音频文件进行独立识别；

### 音频流调用说明：
- 音频流时长支持：< 3小时；
- 音频码率类型支持：128 Kbps - 256 Kbps ；
- 音频流支持的传输协议：RTMP、HTTP、HTTPS；
- 音频流格式支持的类型：rtp、srtp、rtmp、rtmps、mmsh、 mmst、hls、http、tcp、https、m3u8；
- 支持音视频流分离并对音频流进行独立识别；
                 * @param req CreateAudioModerationTaskRequest
                 * @return CreateAudioModerationTaskOutcome
                 */
                CreateAudioModerationTaskOutcome CreateAudioModerationTask(const Model::CreateAudioModerationTaskRequest &request);
                void CreateAudioModerationTaskAsync(const Model::CreateAudioModerationTaskRequest& request, const CreateAudioModerationTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAudioModerationTaskOutcomeCallable CreateAudioModerationTaskCallable(const Model::CreateAudioModerationTaskRequest& request);

                /**
                 *创建业务配置，1个账号最多可以创建20个配置，可定义音频审核的场景，如色情、谩骂等，

在创建业务配置之前，你需要以下步骤：
1. 开通COS存储桶功能，新建存储桶，例如 cms_segments，用来存储 视频转换过程中生成对音频和图片。
2. 然后在COS控制台，授权天御内容安全主账号 对 cms_segments 存储桶对读写权限。具体授权操作，参考https://cloud.tencent.com/document/product/436/38648

                 * @param req CreateBizConfigRequest
                 * @return CreateBizConfigOutcome
                 */
                CreateBizConfigOutcome CreateBizConfig(const Model::CreateBizConfigRequest &request);
                void CreateBizConfigAsync(const Model::CreateBizConfigRequest& request, const CreateBizConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateBizConfigOutcomeCallable CreateBizConfigCallable(const Model::CreateBizConfigRequest& request);

                /**
                 *音频审核明细列表
                 * @param req DescribeAmsListRequest
                 * @return DescribeAmsListOutcome
                 */
                DescribeAmsListOutcome DescribeAmsList(const Model::DescribeAmsListRequest &request);
                void DescribeAmsListAsync(const Model::DescribeAmsListRequest& request, const DescribeAmsListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAmsListOutcomeCallable DescribeAmsListCallable(const Model::DescribeAmsListRequest& request);

                /**
                 *控制台识别统计
                 * @param req DescribeAudioStatRequest
                 * @return DescribeAudioStatOutcome
                 */
                DescribeAudioStatOutcome DescribeAudioStat(const Model::DescribeAudioStatRequest &request);
                void DescribeAudioStatAsync(const Model::DescribeAudioStatRequest& request, const DescribeAudioStatAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAudioStatOutcomeCallable DescribeAudioStatCallable(const Model::DescribeAudioStatRequest& request);

                /**
                 *查看单个配置
                 * @param req DescribeBizConfigRequest
                 * @return DescribeBizConfigOutcome
                 */
                DescribeBizConfigOutcome DescribeBizConfig(const Model::DescribeBizConfigRequest &request);
                void DescribeBizConfigAsync(const Model::DescribeBizConfigRequest& request, const DescribeBizConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBizConfigOutcomeCallable DescribeBizConfigCallable(const Model::DescribeBizConfigRequest& request);

                /**
                 *查看任务详情
                 * @param req DescribeTaskDetailRequest
                 * @return DescribeTaskDetailOutcome
                 */
                DescribeTaskDetailOutcome DescribeTaskDetail(const Model::DescribeTaskDetailRequest &request);
                void DescribeTaskDetailAsync(const Model::DescribeTaskDetailRequest& request, const DescribeTaskDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTaskDetailOutcomeCallable DescribeTaskDetailCallable(const Model::DescribeTaskDetailRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_AMS_V20200608_AMSCLIENT_H_
