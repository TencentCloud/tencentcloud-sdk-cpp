/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_CREATEMODELCHATTASKREQUEST_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_CREATEMODELCHATTASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/ModelChatMessageItem.h>
#include <tencentcloud/mps/v20190612/model/ModelChatTaskNotifyConfig.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * CreateModelChatTask请求参数结构体
                */
                class CreateModelChatTaskRequest : public AbstractModel
                {
                public:
                    CreateModelChatTaskRequest();
                    ~CreateModelChatTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>模型标识</p>
                     * @return Model <p>模型标识</p>
                     * 
                     */
                    std::string GetModel() const;

                    /**
                     * 设置<p>模型标识</p>
                     * @param _model <p>模型标识</p>
                     * 
                     */
                    void SetModel(const std::string& _model);

                    /**
                     * 判断参数 Model 是否已赋值
                     * @return Model 是否已赋值
                     * 
                     */
                    bool ModelHasBeenSet() const;

                    /**
                     * 获取<p>对话消息数组</p>
                     * @return Messages <p>对话消息数组</p>
                     * 
                     */
                    std::vector<ModelChatMessageItem> GetMessages() const;

                    /**
                     * 设置<p>对话消息数组</p>
                     * @param _messages <p>对话消息数组</p>
                     * 
                     */
                    void SetMessages(const std::vector<ModelChatMessageItem>& _messages);

                    /**
                     * 判断参数 Messages 是否已赋值
                     * @return Messages 是否已赋值
                     * 
                     */
                    bool MessagesHasBeenSet() const;

                    /**
                     * 获取<p>回调通知配置</p>
                     * @return TaskNotifyConfig <p>回调通知配置</p>
                     * 
                     */
                    ModelChatTaskNotifyConfig GetTaskNotifyConfig() const;

                    /**
                     * 设置<p>回调通知配置</p>
                     * @param _taskNotifyConfig <p>回调通知配置</p>
                     * 
                     */
                    void SetTaskNotifyConfig(const ModelChatTaskNotifyConfig& _taskNotifyConfig);

                    /**
                     * 判断参数 TaskNotifyConfig 是否已赋值
                     * @return TaskNotifyConfig 是否已赋值
                     * 
                     */
                    bool TaskNotifyConfigHasBeenSet() const;

                private:

                    /**
                     * <p>模型标识</p>
                     */
                    std::string m_model;
                    bool m_modelHasBeenSet;

                    /**
                     * <p>对话消息数组</p>
                     */
                    std::vector<ModelChatMessageItem> m_messages;
                    bool m_messagesHasBeenSet;

                    /**
                     * <p>回调通知配置</p>
                     */
                    ModelChatTaskNotifyConfig m_taskNotifyConfig;
                    bool m_taskNotifyConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_CREATEMODELCHATTASKREQUEST_H_
