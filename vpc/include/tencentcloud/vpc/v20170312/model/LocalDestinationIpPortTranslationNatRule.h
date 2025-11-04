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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_LOCALDESTINATIONIPPORTTRANSLATIONNATRULE_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_LOCALDESTINATIONIPPORTTRANSLATIONNATRULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * 本端目的IP端口转换复杂结构
                */
                class LocalDestinationIpPortTranslationNatRule : public AbstractModel
                {
                public:
                    LocalDestinationIpPortTranslationNatRule();
                    ~LocalDestinationIpPortTranslationNatRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取协议，包含TCP和UDP
                     * @return Protocol 协议，包含TCP和UDP
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置协议，包含TCP和UDP
                     * @param _protocol 协议，包含TCP和UDP
                     * 
                     */
                    void SetProtocol(const std::string& _protocol);

                    /**
                     * 判断参数 Protocol 是否已赋值
                     * @return Protocol 是否已赋值
                     * 
                     */
                    bool ProtocolHasBeenSet() const;

                    /**
                     * 获取映射前端口
                     * @return OriginalPort 映射前端口
                     * 
                     */
                    int64_t GetOriginalPort() const;

                    /**
                     * 设置映射前端口
                     * @param _originalPort 映射前端口
                     * 
                     */
                    void SetOriginalPort(const int64_t& _originalPort);

                    /**
                     * 判断参数 OriginalPort 是否已赋值
                     * @return OriginalPort 是否已赋值
                     * 
                     */
                    bool OriginalPortHasBeenSet() const;

                    /**
                     * 获取映射前IP
                     * @return OriginalIp 映射前IP
                     * 
                     */
                    std::string GetOriginalIp() const;

                    /**
                     * 设置映射前IP
                     * @param _originalIp 映射前IP
                     * 
                     */
                    void SetOriginalIp(const std::string& _originalIp);

                    /**
                     * 判断参数 OriginalIp 是否已赋值
                     * @return OriginalIp 是否已赋值
                     * 
                     */
                    bool OriginalIpHasBeenSet() const;

                    /**
                     * 获取映射后端口
                     * @return TranslationPort 映射后端口
                     * 
                     */
                    int64_t GetTranslationPort() const;

                    /**
                     * 设置映射后端口
                     * @param _translationPort 映射后端口
                     * 
                     */
                    void SetTranslationPort(const int64_t& _translationPort);

                    /**
                     * 判断参数 TranslationPort 是否已赋值
                     * @return TranslationPort 是否已赋值
                     * 
                     */
                    bool TranslationPortHasBeenSet() const;

                    /**
                     * 获取映射后IP
                     * @return TranslationIp 映射后IP
                     * 
                     */
                    std::string GetTranslationIp() const;

                    /**
                     * 设置映射后IP
                     * @param _translationIp 映射后IP
                     * 
                     */
                    void SetTranslationIp(const std::string& _translationIp);

                    /**
                     * 判断参数 TranslationIp 是否已赋值
                     * @return TranslationIp 是否已赋值
                     * 
                     */
                    bool TranslationIpHasBeenSet() const;

                    /**
                     * 获取描述
                     * @return Description 描述
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置描述
                     * @param _description 描述
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                private:

                    /**
                     * 协议，包含TCP和UDP
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * 映射前端口
                     */
                    int64_t m_originalPort;
                    bool m_originalPortHasBeenSet;

                    /**
                     * 映射前IP
                     */
                    std::string m_originalIp;
                    bool m_originalIpHasBeenSet;

                    /**
                     * 映射后端口
                     */
                    int64_t m_translationPort;
                    bool m_translationPortHasBeenSet;

                    /**
                     * 映射后IP
                     */
                    std::string m_translationIp;
                    bool m_translationIpHasBeenSet;

                    /**
                     * 描述
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_LOCALDESTINATIONIPPORTTRANSLATIONNATRULE_H_
