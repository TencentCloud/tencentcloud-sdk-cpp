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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_PRIVATENATDESTINATIONIPPORTTRANSLATIONNATRULE_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_PRIVATENATDESTINATIONIPPORTTRANSLATIONNATRULE_H_

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
                class PrivateNatDestinationIpPortTranslationNatRule : public AbstractModel
                {
                public:
                    PrivateNatDestinationIpPortTranslationNatRule();
                    ~PrivateNatDestinationIpPortTranslationNatRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取协议
                     * @return Protocol 协议
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置协议
                     * @param _protocol 协议
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
                     * 获取原端口
                     * @return OriginalPort 原端口
                     * 
                     */
                    int64_t GetOriginalPort() const;

                    /**
                     * 设置原端口
                     * @param _originalPort 原端口
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
                     * 获取原IP
                     * @return OriginalIp 原IP
                     * 
                     */
                    std::string GetOriginalIp() const;

                    /**
                     * 设置原IP
                     * @param _originalIp 原IP
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
                     * 获取映射端口
                     * @return TranslationPort 映射端口
                     * 
                     */
                    int64_t GetTranslationPort() const;

                    /**
                     * 设置映射端口
                     * @param _translationPort 映射端口
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
                     * 获取映射IP
                     * @return TranslationIp 映射IP
                     * 
                     */
                    std::string GetTranslationIp() const;

                    /**
                     * 设置映射IP
                     * @param _translationIp 映射IP
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

                    /**
                     * 获取创建时间。
                     * @return CreateTime 创建时间。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间。
                     * @param _createTime 创建时间。
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取更新时间。
                     * @return UpdateTime 更新时间。
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置更新时间。
                     * @param _updateTime 更新时间。
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                private:

                    /**
                     * 协议
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * 原端口
                     */
                    int64_t m_originalPort;
                    bool m_originalPortHasBeenSet;

                    /**
                     * 原IP
                     */
                    std::string m_originalIp;
                    bool m_originalIpHasBeenSet;

                    /**
                     * 映射端口
                     */
                    int64_t m_translationPort;
                    bool m_translationPortHasBeenSet;

                    /**
                     * 映射IP
                     */
                    std::string m_translationIp;
                    bool m_translationIpHasBeenSet;

                    /**
                     * 描述
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 创建时间。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 更新时间。
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_PRIVATENATDESTINATIONIPPORTTRANSLATIONNATRULE_H_
