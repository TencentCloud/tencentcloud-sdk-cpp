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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_TRANSLATIONNATRULEDIFF_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_TRANSLATIONNATRULEDIFF_H_

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
                * 私网网关Snat转发规则修改
                */
                class TranslationNatRuleDiff : public AbstractModel
                {
                public:
                    TranslationNatRuleDiff();
                    ~TranslationNatRuleDiff() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取转发规则目标，可选值"LOCAL","PEER"。
                     * @return TranslationDirection 转发规则目标，可选值"LOCAL","PEER"。
                     * 
                     */
                    std::string GetTranslationDirection() const;

                    /**
                     * 设置转发规则目标，可选值"LOCAL","PEER"。
                     * @param _translationDirection 转发规则目标，可选值"LOCAL","PEER"。
                     * 
                     */
                    void SetTranslationDirection(const std::string& _translationDirection);

                    /**
                     * 判断参数 TranslationDirection 是否已赋值
                     * @return TranslationDirection 是否已赋值
                     * 
                     */
                    bool TranslationDirectionHasBeenSet() const;

                    /**
                     * 获取转发规则类型，可选值"NETWORK_LAYER","TRANSPORT_LAYER"。
                     * @return TranslationType 转发规则类型，可选值"NETWORK_LAYER","TRANSPORT_LAYER"。
                     * 
                     */
                    std::string GetTranslationType() const;

                    /**
                     * 设置转发规则类型，可选值"NETWORK_LAYER","TRANSPORT_LAYER"。
                     * @param _translationType 转发规则类型，可选值"NETWORK_LAYER","TRANSPORT_LAYER"。
                     * 
                     */
                    void SetTranslationType(const std::string& _translationType);

                    /**
                     * 判断参数 TranslationType 是否已赋值
                     * @return TranslationType 是否已赋值
                     * 
                     */
                    bool TranslationTypeHasBeenSet() const;

                    /**
                     * 获取转发规则映射`IP`,当转发规则类型为四层时为`IP`池
                     * @return TranslationIp 转发规则映射`IP`,当转发规则类型为四层时为`IP`池
                     * 
                     */
                    std::string GetTranslationIp() const;

                    /**
                     * 设置转发规则映射`IP`,当转发规则类型为四层时为`IP`池
                     * @param _translationIp 转发规则映射`IP`,当转发规则类型为四层时为`IP`池
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
                     * 获取转发规则描述。
                     * @return Description 转发规则描述。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置转发规则描述。
                     * @param _description 转发规则描述。
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
                     * 获取旧转发规则映射`IP`,当转发规则类型为四层时为`IP`池
                     * @return OldTranslationIp 旧转发规则映射`IP`,当转发规则类型为四层时为`IP`池
                     * 
                     */
                    std::string GetOldTranslationIp() const;

                    /**
                     * 设置旧转发规则映射`IP`,当转发规则类型为四层时为`IP`池
                     * @param _oldTranslationIp 旧转发规则映射`IP`,当转发规则类型为四层时为`IP`池
                     * 
                     */
                    void SetOldTranslationIp(const std::string& _oldTranslationIp);

                    /**
                     * 判断参数 OldTranslationIp 是否已赋值
                     * @return OldTranslationIp 是否已赋值
                     * 
                     */
                    bool OldTranslationIpHasBeenSet() const;

                    /**
                     * 获取新转发规则源`IP`,当转发规则类型为三层时有效
                     * @return OriginalIp 新转发规则源`IP`,当转发规则类型为三层时有效
                     * 
                     */
                    std::string GetOriginalIp() const;

                    /**
                     * 设置新转发规则源`IP`,当转发规则类型为三层时有效
                     * @param _originalIp 新转发规则源`IP`,当转发规则类型为三层时有效
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
                     * 获取旧转发规则源`IP`,当转发规则类型为三层时有效
                     * @return OldOriginalIp 旧转发规则源`IP`,当转发规则类型为三层时有效
                     * 
                     */
                    std::string GetOldOriginalIp() const;

                    /**
                     * 设置旧转发规则源`IP`,当转发规则类型为三层时有效
                     * @param _oldOriginalIp 旧转发规则源`IP`,当转发规则类型为三层时有效
                     * 
                     */
                    void SetOldOriginalIp(const std::string& _oldOriginalIp);

                    /**
                     * 判断参数 OldOriginalIp 是否已赋值
                     * @return OldOriginalIp 是否已赋值
                     * 
                     */
                    bool OldOriginalIpHasBeenSet() const;

                private:

                    /**
                     * 转发规则目标，可选值"LOCAL","PEER"。
                     */
                    std::string m_translationDirection;
                    bool m_translationDirectionHasBeenSet;

                    /**
                     * 转发规则类型，可选值"NETWORK_LAYER","TRANSPORT_LAYER"。
                     */
                    std::string m_translationType;
                    bool m_translationTypeHasBeenSet;

                    /**
                     * 转发规则映射`IP`,当转发规则类型为四层时为`IP`池
                     */
                    std::string m_translationIp;
                    bool m_translationIpHasBeenSet;

                    /**
                     * 转发规则描述。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 旧转发规则映射`IP`,当转发规则类型为四层时为`IP`池
                     */
                    std::string m_oldTranslationIp;
                    bool m_oldTranslationIpHasBeenSet;

                    /**
                     * 新转发规则源`IP`,当转发规则类型为三层时有效
                     */
                    std::string m_originalIp;
                    bool m_originalIpHasBeenSet;

                    /**
                     * 旧转发规则源`IP`,当转发规则类型为三层时有效
                     */
                    std::string m_oldOriginalIp;
                    bool m_oldOriginalIpHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_TRANSLATIONNATRULEDIFF_H_
