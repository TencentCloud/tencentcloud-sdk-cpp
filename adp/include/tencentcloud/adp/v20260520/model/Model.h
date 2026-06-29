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
#include <tencentcloud/adp/v20260520/model/ModelDeveloperBasic.h>


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
                     * 获取<p>模型徽章列表</p>
                     * @return BadgeList <p>模型徽章列表</p>
                     * 
                     */
                    std::vector<ModelBadge> GetBadgeList() const;

                    /**
                     * 设置<p>模型徽章列表</p>
                     * @param _badgeList <p>模型徽章列表</p>
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
                     * 获取<p>模型限制信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LimitInfo <p>模型限制信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ModelLimit GetLimitInfo() const;

                    /**
                     * 设置<p>模型限制信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _limitInfo <p>模型限制信息</p>
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
                     * 获取<p>模型基本信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ModelBasic <p>模型基本信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ModelBasic GetModelBasic() const;

                    /**
                     * 设置<p>模型基本信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _modelBasic <p>模型基本信息</p>
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
                     * 获取<p>模型超参配置</p>
                     * @return ParameterList <p>模型超参配置</p>
                     * 
                     */
                    std::vector<ModelParameter> GetParameterList() const;

                    /**
                     * 设置<p>模型超参配置</p>
                     * @param _parameterList <p>模型超参配置</p>
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
                     * 获取<p>模型属性配置</p>
                     * @return PropertyList <p>模型属性配置</p>
                     * 
                     */
                    std::vector<ModelProperty> GetPropertyList() const;

                    /**
                     * 设置<p>模型属性配置</p>
                     * @param _propertyList <p>模型属性配置</p>
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
                     * 获取<p>模型提供商信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProviderInfo <p>模型提供商信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ModelProviderBasic GetProviderInfo() const;

                    /**
                     * 设置<p>模型提供商信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _providerInfo <p>模型提供商信息</p>
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
                     * 获取<p>模型状态信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StatusInfo <p>模型状态信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ModelStatus GetStatusInfo() const;

                    /**
                     * 设置<p>模型状态信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _statusInfo <p>模型状态信息</p>
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
                     * 获取<p>模型标签列表</p>
                     * @return TagList <p>模型标签列表</p>
                     * 
                     */
                    std::vector<std::string> GetTagList() const;

                    /**
                     * 设置<p>模型标签列表</p>
                     * @param _tagList <p>模型标签列表</p>
                     * 
                     */
                    void SetTagList(const std::vector<std::string>& _tagList);

                    /**
                     * 判断参数 TagList 是否已赋值
                     * @return TagList 是否已赋值
                     * 
                     */
                    bool TagListHasBeenSet() const;

                    /**
                     * 获取<p>模型作者信息</p>
                     * @return DeveloperInfo <p>模型作者信息</p>
                     * 
                     */
                    ModelDeveloperBasic GetDeveloperInfo() const;

                    /**
                     * 设置<p>模型作者信息</p>
                     * @param _developerInfo <p>模型作者信息</p>
                     * 
                     */
                    void SetDeveloperInfo(const ModelDeveloperBasic& _developerInfo);

                    /**
                     * 判断参数 DeveloperInfo 是否已赋值
                     * @return DeveloperInfo 是否已赋值
                     * 
                     */
                    bool DeveloperInfoHasBeenSet() const;

                private:

                    /**
                     * <p>模型徽章列表</p>
                     */
                    std::vector<ModelBadge> m_badgeList;
                    bool m_badgeListHasBeenSet;

                    /**
                     * <p>模型限制信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ModelLimit m_limitInfo;
                    bool m_limitInfoHasBeenSet;

                    /**
                     * <p>模型基本信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ModelBasic m_modelBasic;
                    bool m_modelBasicHasBeenSet;

                    /**
                     * <p>模型超参配置</p>
                     */
                    std::vector<ModelParameter> m_parameterList;
                    bool m_parameterListHasBeenSet;

                    /**
                     * <p>模型属性配置</p>
                     */
                    std::vector<ModelProperty> m_propertyList;
                    bool m_propertyListHasBeenSet;

                    /**
                     * <p>模型提供商信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ModelProviderBasic m_providerInfo;
                    bool m_providerInfoHasBeenSet;

                    /**
                     * <p>模型状态信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ModelStatus m_statusInfo;
                    bool m_statusInfoHasBeenSet;

                    /**
                     * <p>模型标签列表</p>
                     */
                    std::vector<std::string> m_tagList;
                    bool m_tagListHasBeenSet;

                    /**
                     * <p>模型作者信息</p>
                     */
                    ModelDeveloperBasic m_developerInfo;
                    bool m_developerInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_MODEL_H_
