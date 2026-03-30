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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBELLMCONTENTSECCHECKREQUEST_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBELLMCONTENTSECCHECKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * DescribeLLMContentSecCheck请求参数结构体
                */
                class DescribeLLMContentSecCheckRequest : public AbstractModel
                {
                public:
                    DescribeLLMContentSecCheckRequest();
                    ~DescribeLLMContentSecCheckRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取 服务id,使用哪一套防护策略，就需要传哪一套服务id，模型会检测该服务id下的所有规则
                     * @return ServiceId  服务id,使用哪一套防护策略，就需要传哪一套服务id，模型会检测该服务id下的所有规则
                     * 
                     */
                    std::string GetServiceId() const;

                    /**
                     * 设置 服务id,使用哪一套防护策略，就需要传哪一套服务id，模型会检测该服务id下的所有规则
                     * @param _serviceId  服务id,使用哪一套防护策略，就需要传哪一套服务id，模型会检测该服务id下的所有规则
                     * 
                     */
                    void SetServiceId(const std::string& _serviceId);

                    /**
                     * 判断参数 ServiceId 是否已赋值
                     * @return ServiceId 是否已赋值
                     * 
                     */
                    bool ServiceIdHasBeenSet() const;

                    /**
                     * 获取要审核的内容
                     * @return Content 要审核的内容
                     * 
                     */
                    std::string GetContent() const;

                    /**
                     * 设置要审核的内容
                     * @param _content 要审核的内容
                     * 
                     */
                    void SetContent(const std::string& _content);

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     * 
                     */
                    bool ContentHasBeenSet() const;

                    /**
                     * 获取流量类型，是入向流量还是出向流量，入向：1，出向：2；入向和出向必填
                     * @return Type 流量类型，是入向流量还是出向流量，入向：1，出向：2；入向和出向必填
                     * 
                     */
                    uint64_t GetType() const;

                    /**
                     * 设置流量类型，是入向流量还是出向流量，入向：1，出向：2；入向和出向必填
                     * @param _type 流量类型，是入向流量还是出向流量，入向：1，出向：2；入向和出向必填
                     * 
                     */
                    void SetType(const uint64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取实例id，必传
                     * @return InstanceId 实例id，必传
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例id，必传
                     * @param _instanceId 实例id，必传
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取对话的id
                     * @return ChatId 对话的id
                     * 
                     */
                    std::string GetChatId() const;

                    /**
                     * 设置对话的id
                     * @param _chatId 对话的id
                     * 
                     */
                    void SetChatId(const std::string& _chatId);

                    /**
                     * 判断参数 ChatId 是否已赋值
                     * @return ChatId 是否已赋值
                     * 
                     */
                    bool ChatIdHasBeenSet() const;

                    /**
                     * 获取标识用户的id，限速使用，不填，则限速会不生效
                     * @return UserId 标识用户的id，限速使用，不填，则限速会不生效
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置标识用户的id，限速使用，不填，则限速会不生效
                     * @param _userId 标识用户的id，限速使用，不填，则限速会不生效
                     * 
                     */
                    void SetUserId(const std::string& _userId);

                    /**
                     * 判断参数 UserId 是否已赋值
                     * @return UserId 是否已赋值
                     * 
                     */
                    bool UserIdHasBeenSet() const;

                    /**
                     * 获取token使用量，不填，会采用默认的token计算方法，计算的是模型的消耗，因为该值时在出向方向上添加，即Type=2
                     * @return TokenUsage token使用量，不填，会采用默认的token计算方法，计算的是模型的消耗，因为该值时在出向方向上添加，即Type=2
                     * 
                     */
                    uint64_t GetTokenUsage() const;

                    /**
                     * 设置token使用量，不填，会采用默认的token计算方法，计算的是模型的消耗，因为该值时在出向方向上添加，即Type=2
                     * @param _tokenUsage token使用量，不填，会采用默认的token计算方法，计算的是模型的消耗，因为该值时在出向方向上添加，即Type=2
                     * 
                     */
                    void SetTokenUsage(const uint64_t& _tokenUsage);

                    /**
                     * 判断参数 TokenUsage 是否已赋值
                     * @return TokenUsage 是否已赋值
                     * 
                     */
                    bool TokenUsageHasBeenSet() const;

                private:

                    /**
                     *  服务id,使用哪一套防护策略，就需要传哪一套服务id，模型会检测该服务id下的所有规则
                     */
                    std::string m_serviceId;
                    bool m_serviceIdHasBeenSet;

                    /**
                     * 要审核的内容
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * 流量类型，是入向流量还是出向流量，入向：1，出向：2；入向和出向必填
                     */
                    uint64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 实例id，必传
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 对话的id
                     */
                    std::string m_chatId;
                    bool m_chatIdHasBeenSet;

                    /**
                     * 标识用户的id，限速使用，不填，则限速会不生效
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * token使用量，不填，会采用默认的token计算方法，计算的是模型的消耗，因为该值时在出向方向上添加，即Type=2
                     */
                    uint64_t m_tokenUsage;
                    bool m_tokenUsageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBELLMCONTENTSECCHECKREQUEST_H_
