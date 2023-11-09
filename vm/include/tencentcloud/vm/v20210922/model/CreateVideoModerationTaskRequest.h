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

#ifndef TENCENTCLOUD_VM_V20210922_MODEL_CREATEVIDEOMODERATIONTASKREQUEST_H_
#define TENCENTCLOUD_VM_V20210922_MODEL_CREATEVIDEOMODERATIONTASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vm/v20210922/model/TaskInput.h>


namespace TencentCloud
{
    namespace Vm
    {
        namespace V20210922
        {
            namespace Model
            {
                /**
                * CreateVideoModerationTask请求参数结构体
                */
                class CreateVideoModerationTaskRequest : public AbstractModel
                {
                public:
                    CreateVideoModerationTaskRequest();
                    ~CreateVideoModerationTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取该字段表示策略的具体编号，用于接口调度，在[内容安全控制台](https://console.cloud.tencent.com/cms/clouds/manage)中可配置。若不传入Biztype参数（留空），则代表采用默认的识别策略；传入则会在审核时根据业务场景采取不同的审核策略。
备注：Biztype仅为数字、字母与下划线的组合，长度为3-32个字符；不同Biztype关联不同的业务场景与识别能力策略，调用前请确认正确的Biztype。
                     * @return BizType 该字段表示策略的具体编号，用于接口调度，在[内容安全控制台](https://console.cloud.tencent.com/cms/clouds/manage)中可配置。若不传入Biztype参数（留空），则代表采用默认的识别策略；传入则会在审核时根据业务场景采取不同的审核策略。
备注：Biztype仅为数字、字母与下划线的组合，长度为3-32个字符；不同Biztype关联不同的业务场景与识别能力策略，调用前请确认正确的Biztype。
                     * 
                     */
                    std::string GetBizType() const;

                    /**
                     * 设置该字段表示策略的具体编号，用于接口调度，在[内容安全控制台](https://console.cloud.tencent.com/cms/clouds/manage)中可配置。若不传入Biztype参数（留空），则代表采用默认的识别策略；传入则会在审核时根据业务场景采取不同的审核策略。
备注：Biztype仅为数字、字母与下划线的组合，长度为3-32个字符；不同Biztype关联不同的业务场景与识别能力策略，调用前请确认正确的Biztype。
                     * @param _bizType 该字段表示策略的具体编号，用于接口调度，在[内容安全控制台](https://console.cloud.tencent.com/cms/clouds/manage)中可配置。若不传入Biztype参数（留空），则代表采用默认的识别策略；传入则会在审核时根据业务场景采取不同的审核策略。
备注：Biztype仅为数字、字母与下划线的组合，长度为3-32个字符；不同Biztype关联不同的业务场景与识别能力策略，调用前请确认正确的Biztype。
                     * 
                     */
                    void SetBizType(const std::string& _bizType);

                    /**
                     * 判断参数 BizType 是否已赋值
                     * @return BizType 是否已赋值
                     * 
                     */
                    bool BizTypeHasBeenSet() const;

                    /**
                     * 获取任务类型：可选VIDEO（点播视频），LIVE_VIDEO（直播视频）
                     * @return Type 任务类型：可选VIDEO（点播视频），LIVE_VIDEO（直播视频）
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置任务类型：可选VIDEO（点播视频），LIVE_VIDEO（直播视频）
                     * @param _type 任务类型：可选VIDEO（点播视频），LIVE_VIDEO（直播视频）
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取输入的任务信息，最多可以同时创建10个任务
                     * @return Tasks 输入的任务信息，最多可以同时创建10个任务
                     * 
                     */
                    std::vector<TaskInput> GetTasks() const;

                    /**
                     * 设置输入的任务信息，最多可以同时创建10个任务
                     * @param _tasks 输入的任务信息，最多可以同时创建10个任务
                     * 
                     */
                    void SetTasks(const std::vector<TaskInput>& _tasks);

                    /**
                     * 判断参数 Tasks 是否已赋值
                     * @return Tasks 是否已赋值
                     * 
                     */
                    bool TasksHasBeenSet() const;

                    /**
                     * 获取回调签名key，具体可以查看签名文档。
                     * @return Seed 回调签名key，具体可以查看签名文档。
                     * 
                     */
                    std::string GetSeed() const;

                    /**
                     * 设置回调签名key，具体可以查看签名文档。
                     * @param _seed 回调签名key，具体可以查看签名文档。
                     * 
                     */
                    void SetSeed(const std::string& _seed);

                    /**
                     * 判断参数 Seed 是否已赋值
                     * @return Seed 是否已赋值
                     * 
                     */
                    bool SeedHasBeenSet() const;

                    /**
                     * 获取接收审核信息回调地址，如果设置，则审核过程中产生的违规音频片段和画面截帧发送此接口
                     * @return CallbackUrl 接收审核信息回调地址，如果设置，则审核过程中产生的违规音频片段和画面截帧发送此接口
                     * 
                     */
                    std::string GetCallbackUrl() const;

                    /**
                     * 设置接收审核信息回调地址，如果设置，则审核过程中产生的违规音频片段和画面截帧发送此接口
                     * @param _callbackUrl 接收审核信息回调地址，如果设置，则审核过程中产生的违规音频片段和画面截帧发送此接口
                     * 
                     */
                    void SetCallbackUrl(const std::string& _callbackUrl);

                    /**
                     * 判断参数 CallbackUrl 是否已赋值
                     * @return CallbackUrl 是否已赋值
                     * 
                     */
                    bool CallbackUrlHasBeenSet() const;

                    /**
                     * 获取审核排队优先级。当您有多个视频审核任务排队时，可以根据这个参数控制排队优先级。用于处理插队等逻辑。默认该参数为0
                     * @return Priority 审核排队优先级。当您有多个视频审核任务排队时，可以根据这个参数控制排队优先级。用于处理插队等逻辑。默认该参数为0
                     * 
                     */
                    int64_t GetPriority() const;

                    /**
                     * 设置审核排队优先级。当您有多个视频审核任务排队时，可以根据这个参数控制排队优先级。用于处理插队等逻辑。默认该参数为0
                     * @param _priority 审核排队优先级。当您有多个视频审核任务排队时，可以根据这个参数控制排队优先级。用于处理插队等逻辑。默认该参数为0
                     * 
                     */
                    void SetPriority(const int64_t& _priority);

                    /**
                     * 判断参数 Priority 是否已赋值
                     * @return Priority 是否已赋值
                     * 
                     */
                    bool PriorityHasBeenSet() const;

                private:

                    /**
                     * 该字段表示策略的具体编号，用于接口调度，在[内容安全控制台](https://console.cloud.tencent.com/cms/clouds/manage)中可配置。若不传入Biztype参数（留空），则代表采用默认的识别策略；传入则会在审核时根据业务场景采取不同的审核策略。
备注：Biztype仅为数字、字母与下划线的组合，长度为3-32个字符；不同Biztype关联不同的业务场景与识别能力策略，调用前请确认正确的Biztype。
                     */
                    std::string m_bizType;
                    bool m_bizTypeHasBeenSet;

                    /**
                     * 任务类型：可选VIDEO（点播视频），LIVE_VIDEO（直播视频）
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 输入的任务信息，最多可以同时创建10个任务
                     */
                    std::vector<TaskInput> m_tasks;
                    bool m_tasksHasBeenSet;

                    /**
                     * 回调签名key，具体可以查看签名文档。
                     */
                    std::string m_seed;
                    bool m_seedHasBeenSet;

                    /**
                     * 接收审核信息回调地址，如果设置，则审核过程中产生的违规音频片段和画面截帧发送此接口
                     */
                    std::string m_callbackUrl;
                    bool m_callbackUrlHasBeenSet;

                    /**
                     * 审核排队优先级。当您有多个视频审核任务排队时，可以根据这个参数控制排队优先级。用于处理插队等逻辑。默认该参数为0
                     */
                    int64_t m_priority;
                    bool m_priorityHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VM_V20210922_MODEL_CREATEVIDEOMODERATIONTASKREQUEST_H_
