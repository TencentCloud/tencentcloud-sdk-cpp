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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_MODEL_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_MODEL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/ModelBadge.h>
#include <tencentcloud/adp/v20260520/model/ModelLimit.h>
#include <tencentcloud/adp/v20260520/model/ModelBasic.h>
#include <tencentcloud/adp/v20260520/model/ModelParameter.h>
#include <tencentcloud/adp/v20260520/model/ModelProperty.h>
#include <tencentcloud/adp/v20260520/model/ModelProviderBasic.h>
#include <tencentcloud/adp/v20260520/model/ModelStatus.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * 模型完整信息
                */
                class Model : public AbstractModel
                {
                public:
                    Model();
                    ~Model() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取模型徽章列表
                     * @return BadgeList 模型徽章列表
                     * 
                     */
                    std::vector<ModelBadge> GetBadgeList() const;

                    /**
                     * 设置模型徽章列表
                     * @param _badgeList 模型徽章列表
                     * 
                     */
                    void SetBadgeList(const std::vector<ModelBadge>& _badgeList);

                    /**
                     * 判断参数 BadgeList 是否已赋值
                     * @return BadgeList 是否已赋值
                     * 
                     */
                    bool BadgeListHasBeenSet() const;

                    /**
                     * 获取模型限制信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LimitInfo 模型限制信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ModelLimit GetLimitInfo() const;

                    /**
                     * 设置模型限制信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _limitInfo 模型限制信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLimitInfo(const ModelLimit& _limitInfo);

                    /**
                     * 判断参数 LimitInfo 是否已赋值
                     * @return LimitInfo 是否已赋值
                     * 
                     */
                    bool LimitInfoHasBeenSet() const;

                    /**
                     * 获取模型基本信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ModelBasic 模型基本信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ModelBasic GetModelBasic() const;

                    /**
                     * 设置模型基本信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _modelBasic 模型基本信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetModelBasic(const ModelBasic& _modelBasic);

                    /**
                     * 判断参数 ModelBasic 是否已赋值
                     * @return ModelBasic 是否已赋值
                     * 
                     */
                    bool ModelBasicHasBeenSet() const;

                    /**
                     * 获取模型超参配置
                     * @return ParameterList 模型超参配置
                     * 
                     */
                    std::vector<ModelParameter> GetParameterList() const;

                    /**
                     * 设置模型超参配置
                     * @param _parameterList 模型超参配置
                     * 
                     */
                    void SetParameterList(const std::vector<ModelParameter>& _parameterList);

                    /**
                     * 判断参数 ParameterList 是否已赋值
                     * @return ParameterList 是否已赋值
                     * 
                     */
                    bool ParameterListHasBeenSet() const;

                    /**
                     * 获取模型属性配置
                     * @return PropertyList 模型属性配置
                     * 
                     */
                    std::vector<ModelProperty> GetPropertyList() const;

                    /**
                     * 设置模型属性配置
                     * @param _propertyList 模型属性配置
                     * 
                     */
                    void SetPropertyList(const std::vector<ModelProperty>& _propertyList);

                    /**
                     * 判断参数 PropertyList 是否已赋值
                     * @return PropertyList 是否已赋值
                     * 
                     */
                    bool PropertyListHasBeenSet() const;

                    /**
                     * 获取模型提供商信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProviderInfo 模型提供商信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ModelProviderBasic GetProviderInfo() const;

                    /**
                     * 设置模型提供商信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _providerInfo 模型提供商信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetProviderInfo(const ModelProviderBasic& _providerInfo);

                    /**
                     * 判断参数 ProviderInfo 是否已赋值
                     * @return ProviderInfo 是否已赋值
                     * 
                     */
                    bool ProviderInfoHasBeenSet() const;

                    /**
                     * 获取模型状态信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StatusInfo 模型状态信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ModelStatus GetStatusInfo() const;

                    /**
                     * 设置模型状态信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _statusInfo 模型状态信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStatusInfo(const ModelStatus& _statusInfo);

                    /**
                     * 判断参数 StatusInfo 是否已赋值
                     * @return StatusInfo 是否已赋值
                     * 
                     */
                    bool StatusInfoHasBeenSet() const;

                    /**
                     * 获取模型标签列表
                     * @return TagList 模型标签列表
                     * 
                     */
                    std::vector<std::string> GetTagList() const;

                    /**
                     * 设置模型标签列表
                     * @param _tagList 模型标签列表
                     * 
                     */
                    void SetTagList(const std::vector<std::string>& _tagList);

                    /**
                     * 判断参数 TagList 是否已赋值
                     * @return TagList 是否已赋值
                     * 
                     */
                    bool TagListHasBeenSet() const;

                private:

                    /**
                     * 模型徽章列表
                     */
                    std::vector<ModelBadge> m_badgeList;
                    bool m_badgeListHasBeenSet;

                    /**
                     * 模型限制信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ModelLimit m_limitInfo;
                    bool m_limitInfoHasBeenSet;

                    /**
                     * 模型基本信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ModelBasic m_modelBasic;
                    bool m_modelBasicHasBeenSet;

                    /**
                     * 模型超参配置
                     */
                    std::vector<ModelParameter> m_parameterList;
                    bool m_parameterListHasBeenSet;

                    /**
                     * 模型属性配置
                     */
                    std::vector<ModelProperty> m_propertyList;
                    bool m_propertyListHasBeenSet;

                    /**
                     * 模型提供商信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ModelProviderBasic m_providerInfo;
                    bool m_providerInfoHasBeenSet;

                    /**
                     * 模型状态信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ModelStatus m_statusInfo;
                    bool m_statusInfoHasBeenSet;

                    /**
                     * 模型标签列表
                     */
                    std::vector<std::string> m_tagList;
                    bool m_tagListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_MODEL_H_
