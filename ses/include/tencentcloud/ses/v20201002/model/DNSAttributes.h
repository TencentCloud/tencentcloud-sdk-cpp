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

#ifndef TENCENTCLOUD_SES_V20201002_MODEL_DNSATTRIBUTES_H_
#define TENCENTCLOUD_SES_V20201002_MODEL_DNSATTRIBUTES_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ses
    {
        namespace V20201002
        {
            namespace Model
            {
                /**
                * 用于描述DNS记录的域名、记录类型、期望得到的值、目前配置的值
                */
                class DNSAttributes : public AbstractModel
                {
                public:
                    DNSAttributes();
                    ~DNSAttributes() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取记录类型 CNAME | A | TXT | MX
                     * @return Type 记录类型 CNAME | A | TXT | MX
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置记录类型 CNAME | A | TXT | MX
                     * @param _type 记录类型 CNAME | A | TXT | MX
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
                     * 获取域名
                     * @return SendDomain 域名
                     * 
                     */
                    std::string GetSendDomain() const;

                    /**
                     * 设置域名
                     * @param _sendDomain 域名
                     * 
                     */
                    void SetSendDomain(const std::string& _sendDomain);

                    /**
                     * 判断参数 SendDomain 是否已赋值
                     * @return SendDomain 是否已赋值
                     * 
                     */
                    bool SendDomainHasBeenSet() const;

                    /**
                     * 获取需要配置的值
                     * @return ExpectedValue 需要配置的值
                     * 
                     */
                    std::string GetExpectedValue() const;

                    /**
                     * 设置需要配置的值
                     * @param _expectedValue 需要配置的值
                     * 
                     */
                    void SetExpectedValue(const std::string& _expectedValue);

                    /**
                     * 判断参数 ExpectedValue 是否已赋值
                     * @return ExpectedValue 是否已赋值
                     * 
                     */
                    bool ExpectedValueHasBeenSet() const;

                    /**
                     * 获取腾讯云目前检测到的值
                     * @return CurrentValue 腾讯云目前检测到的值
                     * 
                     */
                    std::string GetCurrentValue() const;

                    /**
                     * 设置腾讯云目前检测到的值
                     * @param _currentValue 腾讯云目前检测到的值
                     * 
                     */
                    void SetCurrentValue(const std::string& _currentValue);

                    /**
                     * 判断参数 CurrentValue 是否已赋值
                     * @return CurrentValue 是否已赋值
                     * 
                     */
                    bool CurrentValueHasBeenSet() const;

                    /**
                     * 获取检测是否通过，创建时默认为false
                     * @return Status 检测是否通过，创建时默认为false
                     * 
                     */
                    bool GetStatus() const;

                    /**
                     * 设置检测是否通过，创建时默认为false
                     * @param _status 检测是否通过，创建时默认为false
                     * 
                     */
                    void SetStatus(const bool& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * 记录类型 CNAME | A | TXT | MX
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 域名
                     */
                    std::string m_sendDomain;
                    bool m_sendDomainHasBeenSet;

                    /**
                     * 需要配置的值
                     */
                    std::string m_expectedValue;
                    bool m_expectedValueHasBeenSet;

                    /**
                     * 腾讯云目前检测到的值
                     */
                    std::string m_currentValue;
                    bool m_currentValueHasBeenSet;

                    /**
                     * 检测是否通过，创建时默认为false
                     */
                    bool m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SES_V20201002_MODEL_DNSATTRIBUTES_H_
