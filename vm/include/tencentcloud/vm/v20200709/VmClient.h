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

#ifndef TENCENTCLOUD_VM_V20200709_VMCLIENT_H_
#define TENCENTCLOUD_VM_V20200709_VMCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/vm/v20200709/model/CancelTaskRequest.h>
#include <tencentcloud/vm/v20200709/model/CancelTaskResponse.h>
#include <tencentcloud/vm/v20200709/model/CreateBizConfigRequest.h>
#include <tencentcloud/vm/v20200709/model/CreateBizConfigResponse.h>
#include <tencentcloud/vm/v20200709/model/CreateVideoModerationTaskRequest.h>
#include <tencentcloud/vm/v20200709/model/CreateVideoModerationTaskResponse.h>
#include <tencentcloud/vm/v20200709/model/DescribeTaskDetailRequest.h>
#include <tencentcloud/vm/v20200709/model/DescribeTaskDetailResponse.h>
#include <tencentcloud/vm/v20200709/model/DescribeVideoStatRequest.h>
#include <tencentcloud/vm/v20200709/model/DescribeVideoStatResponse.h>


namespace TencentCloud
{
    namespace Vm
    {
        namespace V20200709
        {
            class VmClient : public AbstractClient
            {
            public:
                VmClient(const Credential &credential, const std::string &region);
                VmClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::CancelTaskResponse> CancelTaskOutcome;
                typedef std::future<CancelTaskOutcome> CancelTaskOutcomeCallable;
                typedef std::function<void(const VmClient*, const Model::CancelTaskRequest&, CancelTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CancelTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateBizConfigResponse> CreateBizConfigOutcome;
                typedef std::future<CreateBizConfigOutcome> CreateBizConfigOutcomeCallable;
                typedef std::function<void(const VmClient*, const Model::CreateBizConfigRequest&, CreateBizConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateBizConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateVideoModerationTaskResponse> CreateVideoModerationTaskOutcome;
                typedef std::future<CreateVideoModerationTaskOutcome> CreateVideoModerationTaskOutcomeCallable;
                typedef std::function<void(const VmClient*, const Model::CreateVideoModerationTaskRequest&, CreateVideoModerationTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateVideoModerationTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTaskDetailResponse> DescribeTaskDetailOutcome;
                typedef std::future<DescribeTaskDetailOutcome> DescribeTaskDetailOutcomeCallable;
                typedef std::function<void(const VmClient*, const Model::DescribeTaskDetailRequest&, DescribeTaskDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTaskDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeVideoStatResponse> DescribeVideoStatOutcome;
                typedef std::future<DescribeVideoStatOutcome> DescribeVideoStatOutcomeCallable;
                typedef std::function<void(const VmClient*, const Model::DescribeVideoStatRequest&, DescribeVideoStatOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVideoStatAsyncHandler;



                /**
                 *取消任务
                 * @param req CancelTaskRequest
                 * @return CancelTaskOutcome
                 */
                CancelTaskOutcome CancelTask(const Model::CancelTaskRequest &request);
                void CancelTaskAsync(const Model::CancelTaskRequest& request, const CancelTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CancelTaskOutcomeCallable CancelTaskCallable(const Model::CancelTaskRequest& request);

                /**
                 *创建业务配置，1个账号最多可以创建20个配置，可定义音频审核的场景，如色情、谩骂等，

在创建业务配置之前，你需要以下步骤：
1. 开通COS存储捅功能，新建存储桶，例如 cms_segments，用来存储 视频转换过程中生成对音频和图片。
2. 然后在COS控制台，授权天御内容安全主账号 对 cms_segments 存储桶对读写权限。具体授权操作，参考https://cloud.tencent.com/document/product/436/38648

                 * @param req CreateBizConfigRequest
                 * @return CreateBizConfigOutcome
                 */
                CreateBizConfigOutcome CreateBizConfig(const Model::CreateBizConfigRequest &request);
                void CreateBizConfigAsync(const Model::CreateBizConfigRequest& request, const CreateBizConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateBizConfigOutcomeCallable CreateBizConfigCallable(const Model::CreateBizConfigRequest& request);

                /**
                 *通过URL或存储桶创建审核任务
                 * @param req CreateVideoModerationTaskRequest
                 * @return CreateVideoModerationTaskOutcome
                 */
                CreateVideoModerationTaskOutcome CreateVideoModerationTask(const Model::CreateVideoModerationTaskRequest &request);
                void CreateVideoModerationTaskAsync(const Model::CreateVideoModerationTaskRequest& request, const CreateVideoModerationTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateVideoModerationTaskOutcomeCallable CreateVideoModerationTaskCallable(const Model::CreateVideoModerationTaskRequest& request);

                /**
                 *查看任务详情DescribeTaskDetail 
                 * @param req DescribeTaskDetailRequest
                 * @return DescribeTaskDetailOutcome
                 */
                DescribeTaskDetailOutcome DescribeTaskDetail(const Model::DescribeTaskDetailRequest &request);
                void DescribeTaskDetailAsync(const Model::DescribeTaskDetailRequest& request, const DescribeTaskDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTaskDetailOutcomeCallable DescribeTaskDetailCallable(const Model::DescribeTaskDetailRequest& request);

                /**
                 *控制台识别统计
                 * @param req DescribeVideoStatRequest
                 * @return DescribeVideoStatOutcome
                 */
                DescribeVideoStatOutcome DescribeVideoStat(const Model::DescribeVideoStatRequest &request);
                void DescribeVideoStatAsync(const Model::DescribeVideoStatRequest& request, const DescribeVideoStatAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVideoStatOutcomeCallable DescribeVideoStatCallable(const Model::DescribeVideoStatRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_VM_V20200709_VMCLIENT_H_
