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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_TRANSLATIONNATRULE_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_TRANSLATIONNATRULE_H_

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
                * 私网网关Snat转发规则
                */
                class TranslationNatRule : public AbstractModel
                {
                public:
                    TranslationNatRule();
                    ~TranslationNatRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取转换规则目标，可选值"LOCAL","PEER"。
                     * @return TranslationDirection 转换规则目标，可选值"LOCAL","PEER"。
                     * 
                     */
                    std::string GetTranslationDirection() const;

                    /**
                     * 设置转换规则目标，可选值"LOCAL","PEER"。
                     * @param _translationDirection 转换规则目标，可选值"LOCAL","PEER"。
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
                     * 获取转换规则类型，可选值"NETWORK_LAYER","TRANSPORT_LAYER"。
                     * @return TranslationType 转换规则类型，可选值"NETWORK_LAYER","TRANSPORT_LAYER"。
                     * 
                     */
                    std::string GetTranslationType() const;

                    /**
                     * 设置转换规则类型，可选值"NETWORK_LAYER","TRANSPORT_LAYER"。
                     * @param _translationType 转换规则类型，可选值"NETWORK_LAYER","TRANSPORT_LAYER"。
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
                     * 获取转换`IP`,当转换规则类型为四层时为`IP`池。
                     * @return TranslationIp 转换`IP`,当转换规则类型为四层时为`IP`池。
                     * 
                     */
                    std::string GetTranslationIp() const;

                    /**
                     * 设置转换`IP`,当转换规则类型为四层时为`IP`池。
                     * @param _translationIp 转换`IP`,当转换规则类型为四层时为`IP`池。
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
                     * 获取转换规则描述。
                     * @return Description 转换规则描述。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置转换规则描述。
                     * @param _description 转换规则描述。
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
                     * 获取源`IP`,当转换规则类型为三层时有效。
                     * @return OriginalIp 源`IP`,当转换规则类型为三层时有效。
                     * 
                     */
                    std::string GetOriginalIp() const;

                    /**
                     * 设置源`IP`,当转换规则类型为三层时有效。
                     * @param _originalIp 源`IP`,当转换规则类型为三层时有效。
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
                     * 转换规则目标，可选值"LOCAL","PEER"。
                     */
                    std::string m_translationDirection;
                    bool m_translationDirectionHasBeenSet;

                    /**
                     * 转换规则类型，可选值"NETWORK_LAYER","TRANSPORT_LAYER"。
                     */
                    std::string m_translationType;
                    bool m_translationTypeHasBeenSet;

                    /**
                     * 转换`IP`,当转换规则类型为四层时为`IP`池。
                     */
                    std::string m_translationIp;
                    bool m_translationIpHasBeenSet;

                    /**
                     * 转换规则描述。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 源`IP`,当转换规则类型为三层时有效。
                     */
                    std::string m_originalIp;
                    bool m_originalIpHasBeenSet;

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

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_TRANSLATIONNATRULE_H_
