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

#ifndef TENCENTCLOUD_AMS_V20201229_MODEL_CREATEAUDIOMODERATIONTASKREQUEST_H_
#define TENCENTCLOUD_AMS_V20201229_MODEL_CREATEAUDIOMODERATIONTASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ams/v20201229/model/TaskInput.h>


namespace TencentCloud
{
    namespace Ams
    {
        namespace V20201229
        {
            namespace Model
            {
                /**
                * CreateAudioModerationTask请求参数结构体
                */
                class CreateAudioModerationTaskRequest : public AbstractModel
                {
                public:
                    CreateAudioModerationTaskRequest();
                    ~CreateAudioModerationTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取输入的任务信息，最多可以同时创建10个任务
                     * @return Tasks 输入的任务信息，最多可以同时创建10个任务
                     */
                    std::vector<TaskInput> GetTasks() const;

                    /**
                     * 设置输入的任务信息，最多可以同时创建10个任务
                     * @param Tasks 输入的任务信息，最多可以同时创建10个任务
                     */
                    void SetTasks(const std::vector<TaskInput>& _tasks);

                    /**
                     * 判断参数 Tasks 是否已赋值
                     * @return Tasks 是否已赋值
                     */
                    bool TasksHasBeenSet() const;

                    /**
                     * 获取默认为：default，客户可以在音频审核控制台配置自己的BizType
                     * @return BizType 默认为：default，客户可以在音频审核控制台配置自己的BizType
                     */
                    std::string GetBizType() const;

                    /**
                     * 设置默认为：default，客户可以在音频审核控制台配置自己的BizType
                     * @param BizType 默认为：default，客户可以在音频审核控制台配置自己的BizType
                     */
                    void SetBizType(const std::string& _bizType);

                    /**
                     * 判断参数 BizType 是否已赋值
                     * @return BizType 是否已赋值
                     */
                    bool BizTypeHasBeenSet() const;

                    /**
                     * 获取审核类型，这里可选：AUDIO (点播音频)和 LIVE_AUDIO（直播音频），默认为 AUDIIO
                     * @return Type 审核类型，这里可选：AUDIO (点播音频)和 LIVE_AUDIO（直播音频），默认为 AUDIIO
                     */
                    std::string GetType() const;

                    /**
                     * 设置审核类型，这里可选：AUDIO (点播音频)和 LIVE_AUDIO（直播音频），默认为 AUDIIO
                     * @param Type 审核类型，这里可选：AUDIO (点播音频)和 LIVE_AUDIO（直播音频），默认为 AUDIIO
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取（可选）回调签名key，具体可以查看 回调签名示例
                     * @return Seed （可选）回调签名key，具体可以查看 回调签名示例
                     */
                    std::string GetSeed() const;

                    /**
                     * 设置（可选）回调签名key，具体可以查看 回调签名示例
                     * @param Seed （可选）回调签名key，具体可以查看 回调签名示例
                     */
                    void SetSeed(const std::string& _seed);

                    /**
                     * 判断参数 Seed 是否已赋值
                     * @return Seed 是否已赋值
                     */
                    bool SeedHasBeenSet() const;

                    /**
                     * 获取接收审核信息回调地址，如果设置，则审核过程中产生的违规音频片段和画面截帧发送此接口
                     * @return CallbackUrl 接收审核信息回调地址，如果设置，则审核过程中产生的违规音频片段和画面截帧发送此接口
                     */
                    std::string GetCallbackUrl() const;

                    /**
                     * 设置接收审核信息回调地址，如果设置，则审核过程中产生的违规音频片段和画面截帧发送此接口
                     * @param CallbackUrl 接收审核信息回调地址，如果设置，则审核过程中产生的违规音频片段和画面截帧发送此接口
                     */
                    void SetCallbackUrl(const std::string& _callbackUrl);

                    /**
                     * 判断参数 CallbackUrl 是否已赋值
                     * @return CallbackUrl 是否已赋值
                     */
                    bool CallbackUrlHasBeenSet() const;

                private:

                    /**
                     * 输入的任务信息，最多可以同时创建10个任务
                     */
                    std::vector<TaskInput> m_tasks;
                    bool m_tasksHasBeenSet;

                    /**
                     * 默认为：default，客户可以在音频审核控制台配置自己的BizType
                     */
                    std::string m_bizType;
                    bool m_bizTypeHasBeenSet;

                    /**
                     * 审核类型，这里可选：AUDIO (点播音频)和 LIVE_AUDIO（直播音频），默认为 AUDIIO
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * （可选）回调签名key，具体可以查看 回调签名示例
                     */
                    std::string m_seed;
                    bool m_seedHasBeenSet;

                    /**
                     * 接收审核信息回调地址，如果设置，则审核过程中产生的违规音频片段和画面截帧发送此接口
                     */
                    std::string m_callbackUrl;
                    bool m_callbackUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AMS_V20201229_MODEL_CREATEAUDIOMODERATIONTASKREQUEST_H_
