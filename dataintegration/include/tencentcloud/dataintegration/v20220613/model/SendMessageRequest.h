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

#ifndef TENCENTCLOUD_DATAINTEGRATION_V20220613_MODEL_SENDMESSAGEREQUEST_H_
#define TENCENTCLOUD_DATAINTEGRATION_V20220613_MODEL_SENDMESSAGEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dataintegration/v20220613/model/BatchContent.h>


namespace TencentCloud
{
    namespace Dataintegration
    {
        namespace V20220613
        {
            namespace Model
            {
                /**
                * SendMessage请求参数结构体
                */
                class SendMessageRequest : public AbstractModel
                {
                public:
                    SendMessageRequest();
                    ~SendMessageRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取接入资源ID
                     * @return DataHubId 接入资源ID
                     * 
                     */
                    std::string GetDataHubId() const;

                    /**
                     * 设置接入资源ID
                     * @param _dataHubId 接入资源ID
                     * 
                     */
                    void SetDataHubId(const std::string& _dataHubId);

                    /**
                     * 判断参数 DataHubId 是否已赋值
                     * @return DataHubId 是否已赋值
                     * 
                     */
                    bool DataHubIdHasBeenSet() const;

                    /**
                     * 获取批量消息
                     * @return Message 批量消息
                     * 
                     */
                    std::vector<BatchContent> GetMessage() const;

                    /**
                     * 设置批量消息
                     * @param _message 批量消息
                     * 
                     */
                    void SetMessage(const std::vector<BatchContent>& _message);

                    /**
                     * 判断参数 Message 是否已赋值
                     * @return Message 是否已赋值
                     * 
                     */
                    bool MessageHasBeenSet() const;

                private:

                    /**
                     * 接入资源ID
                     */
                    std::string m_dataHubId;
                    bool m_dataHubIdHasBeenSet;

                    /**
                     * 批量消息
                     */
                    std::vector<BatchContent> m_message;
                    bool m_messageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATAINTEGRATION_V20220613_MODEL_SENDMESSAGEREQUEST_H_
