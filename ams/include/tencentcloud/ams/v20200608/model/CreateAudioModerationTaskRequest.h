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

#ifndef TENCENTCLOUD_AMS_V20200608_MODEL_CREATEAUDIOMODERATIONTASKREQUEST_H_
#define TENCENTCLOUD_AMS_V20200608_MODEL_CREATEAUDIOMODERATIONTASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ams/v20200608/model/TaskInput.h>


namespace TencentCloud
{
    namespace Ams
    {
        namespace V20200608
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
                     * 获取业务类型, 定义 模版策略，输出存储配置。如果没有BizType，可以先参考 【创建业务配置】接口进行创建
                     * @return BizType 业务类型, 定义 模版策略，输出存储配置。如果没有BizType，可以先参考 【创建业务配置】接口进行创建
                     * 
                     */
                    std::string GetBizType() const;

                    /**
                     * 设置业务类型, 定义 模版策略，输出存储配置。如果没有BizType，可以先参考 【创建业务配置】接口进行创建
                     * @param _bizType 业务类型, 定义 模版策略，输出存储配置。如果没有BizType，可以先参考 【创建业务配置】接口进行创建
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
                     * 获取审核类型，这里可选：AUDIO (点播音频)和 LIVE_AUDIO（直播音频）
                     * @return Type 审核类型，这里可选：AUDIO (点播音频)和 LIVE_AUDIO（直播音频）
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置审核类型，这里可选：AUDIO (点播音频)和 LIVE_AUDIO（直播音频）
                     * @param _type 审核类型，这里可选：AUDIO (点播音频)和 LIVE_AUDIO（直播音频）
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

                private:

                    /**
                     * 业务类型, 定义 模版策略，输出存储配置。如果没有BizType，可以先参考 【创建业务配置】接口进行创建
                     */
                    std::string m_bizType;
                    bool m_bizTypeHasBeenSet;

                    /**
                     * 审核类型，这里可选：AUDIO (点播音频)和 LIVE_AUDIO（直播音频）
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

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
                     * 输入的任务信息，最多可以同时创建10个任务
                     */
                    std::vector<TaskInput> m_tasks;
                    bool m_tasksHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AMS_V20200608_MODEL_CREATEAUDIOMODERATIONTASKREQUEST_H_
