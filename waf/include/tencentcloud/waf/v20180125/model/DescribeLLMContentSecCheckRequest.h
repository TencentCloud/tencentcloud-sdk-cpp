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
                     * 获取<p>服务id,使用哪一套防护策略，就需要传哪一套服务id，模型会检测该服务id下的所有规则</p>
                     * @return ServiceId <p>服务id,使用哪一套防护策略，就需要传哪一套服务id，模型会检测该服务id下的所有规则</p>
                     * 
                     */
                    std::string GetServiceId() const;

                    /**
                     * 设置<p>服务id,使用哪一套防护策略，就需要传哪一套服务id，模型会检测该服务id下的所有规则</p>
                     * @param _serviceId <p>服务id,使用哪一套防护策略，就需要传哪一套服务id，模型会检测该服务id下的所有规则</p>
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
                     * 获取<p>流量类型，是入向流量还是出向流量，入向：1，出向：2；入向和出向必填</p>
                     * @return Type <p>流量类型，是入向流量还是出向流量，入向：1，出向：2；入向和出向必填</p>
                     * 
                     */
                    uint64_t GetType() const;

                    /**
                     * 设置<p>流量类型，是入向流量还是出向流量，入向：1，出向：2；入向和出向必填</p>
                     * @param _type <p>流量类型，是入向流量还是出向流量，入向：1，出向：2；入向和出向必填</p>
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
                     * 获取<p>实例id，必传</p>
                     * @return InstanceId <p>实例id，必传</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>实例id，必传</p>
                     * @param _instanceId <p>实例id，必传</p>
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
                     * 获取<p>要审核的内容</p>
                     * @return Content <p>要审核的内容</p>
                     * 
                     */
                    std::string GetContent() const;

                    /**
                     * 设置<p>要审核的内容</p>
                     * @param _content <p>要审核的内容</p>
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
                     * 获取<p>对话的id</p>
                     * @return ChatId <p>对话的id</p>
                     * 
                     */
                    std::string GetChatId() const;

                    /**
                     * 设置<p>对话的id</p>
                     * @param _chatId <p>对话的id</p>
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
                     * 获取<p>标识用户的id，限速使用，不填，则限速会不生效</p>
                     * @return UserId <p>标识用户的id，限速使用，不填，则限速会不生效</p>
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置<p>标识用户的id，限速使用，不填，则限速会不生效</p>
                     * @param _userId <p>标识用户的id，限速使用，不填，则限速会不生效</p>
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
                     * 获取<p>token使用量，不填，会采用默认的token计算方法，计算的是模型的消耗，因为该值时在出向方向上添加，即Type=2</p>
                     * @return TokenUsage <p>token使用量，不填，会采用默认的token计算方法，计算的是模型的消耗，因为该值时在出向方向上添加，即Type=2</p>
                     * 
                     */
                    uint64_t GetTokenUsage() const;

                    /**
                     * 设置<p>token使用量，不填，会采用默认的token计算方法，计算的是模型的消耗，因为该值时在出向方向上添加，即Type=2</p>
                     * @param _tokenUsage <p>token使用量，不填，会采用默认的token计算方法，计算的是模型的消耗，因为该值时在出向方向上添加，即Type=2</p>
                     * 
                     */
                    void SetTokenUsage(const uint64_t& _tokenUsage);

                    /**
                     * 判断参数 TokenUsage 是否已赋值
                     * @return TokenUsage 是否已赋值
                     * 
                     */
                    bool TokenUsageHasBeenSet() const;

                    /**
                     * 获取<p>图片base64编码后的数据,body大小最大支持10M</p>
                     * @return ImageEncode <p>图片base64编码后的数据,body大小最大支持10M</p>
                     * 
                     */
                    std::string GetImageEncode() const;

                    /**
                     * 设置<p>图片base64编码后的数据,body大小最大支持10M</p>
                     * @param _imageEncode <p>图片base64编码后的数据,body大小最大支持10M</p>
                     * 
                     */
                    void SetImageEncode(const std::string& _imageEncode);

                    /**
                     * 判断参数 ImageEncode 是否已赋值
                     * @return ImageEncode 是否已赋值
                     * 
                     */
                    bool ImageEncodeHasBeenSet() const;

                private:

                    /**
                     * <p>服务id,使用哪一套防护策略，就需要传哪一套服务id，模型会检测该服务id下的所有规则</p>
                     */
                    std::string m_serviceId;
                    bool m_serviceIdHasBeenSet;

                    /**
                     * <p>流量类型，是入向流量还是出向流量，入向：1，出向：2；入向和出向必填</p>
                     */
                    uint64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>实例id，必传</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>要审核的内容</p>
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * <p>对话的id</p>
                     */
                    std::string m_chatId;
                    bool m_chatIdHasBeenSet;

                    /**
                     * <p>标识用户的id，限速使用，不填，则限速会不生效</p>
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * <p>token使用量，不填，会采用默认的token计算方法，计算的是模型的消耗，因为该值时在出向方向上添加，即Type=2</p>
                     */
                    uint64_t m_tokenUsage;
                    bool m_tokenUsageHasBeenSet;

                    /**
                     * <p>图片base64编码后的数据,body大小最大支持10M</p>
                     */
                    std::string m_imageEncode;
                    bool m_imageEncodeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBELLMCONTENTSECCHECKREQUEST_H_
