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

#ifndef TENCENTCLOUD_DSGC_V20190723_MODEL_ASSESSMENTRISK_H_
#define TENCENTCLOUD_DSGC_V20190723_MODEL_ASSESSMENTRISK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dsgc/v20190723/model/SecurityProduct.h>


namespace TencentCloud
{
    namespace Dsgc
    {
        namespace V20190723
        {
            namespace Model
            {
                /**
                * DSPA评估风险项
                */
                class AssessmentRisk : public AbstractModel
                {
                public:
                    AssessmentRisk();
                    ~AssessmentRisk() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取风险项Id
                     * @return RiskId 风险项Id
                     * 
                     */
                    std::string GetRiskId() const;

                    /**
                     * 设置风险项Id
                     * @param _riskId 风险项Id
                     * 
                     */
                    void SetRiskId(const std::string& _riskId);

                    /**
                     * 判断参数 RiskId 是否已赋值
                     * @return RiskId 是否已赋值
                     * 
                     */
                    bool RiskIdHasBeenSet() const;

                    /**
                     * 获取风险项描述
                     * @return RiskDescription 风险项描述
                     * 
                     */
                    std::string GetRiskDescription() const;

                    /**
                     * 设置风险项描述
                     * @param _riskDescription 风险项描述
                     * 
                     */
                    void SetRiskDescription(const std::string& _riskDescription);

                    /**
                     * 判断参数 RiskDescription 是否已赋值
                     * @return RiskDescription 是否已赋值
                     * 
                     */
                    bool RiskDescriptionHasBeenSet() const;

                    /**
                     * 获取评估模板Id
                     * @return TemplateId 评估模板Id
                     * 
                     */
                    std::string GetTemplateId() const;

                    /**
                     * 设置评估模板Id
                     * @param _templateId 评估模板Id
                     * 
                     */
                    void SetTemplateId(const std::string& _templateId);

                    /**
                     * 判断参数 TemplateId 是否已赋值
                     * @return TemplateId 是否已赋值
                     * 
                     */
                    bool TemplateIdHasBeenSet() const;

                    /**
                     * 获取评估模板名称
                     * @return TemplateName 评估模板名称
                     * 
                     */
                    std::string GetTemplateName() const;

                    /**
                     * 设置评估模板名称
                     * @param _templateName 评估模板名称
                     * 
                     */
                    void SetTemplateName(const std::string& _templateName);

                    /**
                     * 判断参数 TemplateName 是否已赋值
                     * @return TemplateName 是否已赋值
                     * 
                     */
                    bool TemplateNameHasBeenSet() const;

                    /**
                     * 获取评估项Id
                     * @return ControlItemId 评估项Id
                     * 
                     */
                    std::string GetControlItemId() const;

                    /**
                     * 设置评估项Id
                     * @param _controlItemId 评估项Id
                     * 
                     */
                    void SetControlItemId(const std::string& _controlItemId);

                    /**
                     * 判断参数 ControlItemId 是否已赋值
                     * @return ControlItemId 是否已赋值
                     * 
                     */
                    bool ControlItemIdHasBeenSet() const;

                    /**
                     * 获取评估项名称
                     * @return ControlItemName 评估项名称
                     * 
                     */
                    std::string GetControlItemName() const;

                    /**
                     * 设置评估项名称
                     * @param _controlItemName 评估项名称
                     * 
                     */
                    void SetControlItemName(const std::string& _controlItemName);

                    /**
                     * 判断参数 ControlItemName 是否已赋值
                     * @return ControlItemName 是否已赋值
                     * 
                     */
                    bool ControlItemNameHasBeenSet() const;

                    /**
                     * 获取评估描述
                     * @return ControlItemDesc 评估描述
                     * 
                     */
                    std::string GetControlItemDesc() const;

                    /**
                     * 设置评估描述
                     * @param _controlItemDesc 评估描述
                     * 
                     */
                    void SetControlItemDesc(const std::string& _controlItemDesc);

                    /**
                     * 判断参数 ControlItemDesc 是否已赋值
                     * @return ControlItemDesc 是否已赋值
                     * 
                     */
                    bool ControlItemDescHasBeenSet() const;

                    /**
                     * 获取风险等级，取值（high，medium，low）
                     * @return RiskLevel 风险等级，取值（high，medium，low）
                     * 
                     */
                    std::string GetRiskLevel() const;

                    /**
                     * 设置风险等级，取值（high，medium，low）
                     * @param _riskLevel 风险等级，取值（high，medium，low）
                     * 
                     */
                    void SetRiskLevel(const std::string& _riskLevel);

                    /**
                     * 判断参数 RiskLevel 是否已赋值
                     * @return RiskLevel 是否已赋值
                     * 
                     */
                    bool RiskLevelHasBeenSet() const;

                    /**
                     * 获取风险缓解措施
                     * @return RiskMitigation 风险缓解措施
                     * 
                     */
                    std::string GetRiskMitigation() const;

                    /**
                     * 设置风险缓解措施
                     * @param _riskMitigation 风险缓解措施
                     * 
                     */
                    void SetRiskMitigation(const std::string& _riskMitigation);

                    /**
                     * 判断参数 RiskMitigation 是否已赋值
                     * @return RiskMitigation 是否已赋值
                     * 
                     */
                    bool RiskMitigationHasBeenSet() const;

                    /**
                     * 获取风险处理状态。(waiting待处理, processing处理中, finished已处理)
                     * @return Status 风险处理状态。(waiting待处理, processing处理中, finished已处理)
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置风险处理状态。(waiting待处理, processing处理中, finished已处理)
                     * @param _status 风险处理状态。(waiting待处理, processing处理中, finished已处理)
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取风险生成时间
                     * @return CreatedTime 风险生成时间
                     * 
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置风险生成时间
                     * @param _createdTime 风险生成时间
                     * 
                     */
                    void SetCreatedTime(const std::string& _createdTime);

                    /**
                     * 判断参数 CreatedTime 是否已赋值
                     * @return CreatedTime 是否已赋值
                     * 
                     */
                    bool CreatedTimeHasBeenSet() const;

                    /**
                     * 获取风险负责人
                     * @return RiskOwner 风险负责人
                     * 
                     */
                    std::string GetRiskOwner() const;

                    /**
                     * 设置风险负责人
                     * @param _riskOwner 风险负责人
                     * 
                     */
                    void SetRiskOwner(const std::string& _riskOwner);

                    /**
                     * 判断参数 RiskOwner 是否已赋值
                     * @return RiskOwner 是否已赋值
                     * 
                     */
                    bool RiskOwnerHasBeenSet() const;

                    /**
                     * 获取风险涉及资产
                     * @return RelatedAsset 风险涉及资产
                     * 
                     */
                    std::string GetRelatedAsset() const;

                    /**
                     * 设置风险涉及资产
                     * @param _relatedAsset 风险涉及资产
                     * 
                     */
                    void SetRelatedAsset(const std::string& _relatedAsset);

                    /**
                     * 判断参数 RelatedAsset 是否已赋值
                     * @return RelatedAsset 是否已赋值
                     * 
                     */
                    bool RelatedAssetHasBeenSet() const;

                    /**
                     * 获取风险涉及资产id
                     * @return DataSourceId 风险涉及资产id
                     * 
                     */
                    std::string GetDataSourceId() const;

                    /**
                     * 设置风险涉及资产id
                     * @param _dataSourceId 风险涉及资产id
                     * 
                     */
                    void SetDataSourceId(const std::string& _dataSourceId);

                    /**
                     * 判断参数 DataSourceId 是否已赋值
                     * @return DataSourceId 是否已赋值
                     * 
                     */
                    bool DataSourceIdHasBeenSet() const;

                    /**
                     * 获取风险涉及资产名称
                     * @return DataSourceName 风险涉及资产名称
                     * 
                     */
                    std::string GetDataSourceName() const;

                    /**
                     * 设置风险涉及资产名称
                     * @param _dataSourceName 风险涉及资产名称
                     * 
                     */
                    void SetDataSourceName(const std::string& _dataSourceName);

                    /**
                     * 判断参数 DataSourceName 是否已赋值
                     * @return DataSourceName 是否已赋值
                     * 
                     */
                    bool DataSourceNameHasBeenSet() const;

                    /**
                     * 获取资产名称
                     * @return AssetName 资产名称
                     * 
                     */
                    std::string GetAssetName() const;

                    /**
                     * 设置资产名称
                     * @param _assetName 资产名称
                     * 
                     */
                    void SetAssetName(const std::string& _assetName);

                    /**
                     * 判断参数 AssetName 是否已赋值
                     * @return AssetName 是否已赋值
                     * 
                     */
                    bool AssetNameHasBeenSet() const;

                    /**
                     * 获取建议使用安全产品
                     * @return SecurityProduct 建议使用安全产品
                     * 
                     */
                    std::vector<SecurityProduct> GetSecurityProduct() const;

                    /**
                     * 设置建议使用安全产品
                     * @param _securityProduct 建议使用安全产品
                     * 
                     */
                    void SetSecurityProduct(const std::vector<SecurityProduct>& _securityProduct);

                    /**
                     * 判断参数 SecurityProduct 是否已赋值
                     * @return SecurityProduct 是否已赋值
                     * 
                     */
                    bool SecurityProductHasBeenSet() const;

                    /**
                     * 获取风险类型
                     * @return RiskType 风险类型
                     * 
                     */
                    std::string GetRiskType() const;

                    /**
                     * 设置风险类型
                     * @param _riskType 风险类型
                     * 
                     */
                    void SetRiskType(const std::string& _riskType);

                    /**
                     * 判断参数 RiskType 是否已赋值
                     * @return RiskType 是否已赋值
                     * 
                     */
                    bool RiskTypeHasBeenSet() const;

                    /**
                     * 获取风险面
                     * @return RiskSide 风险面
                     * 
                     */
                    std::string GetRiskSide() const;

                    /**
                     * 设置风险面
                     * @param _riskSide 风险面
                     * 
                     */
                    void SetRiskSide(const std::string& _riskSide);

                    /**
                     * 判断参数 RiskSide 是否已赋值
                     * @return RiskSide 是否已赋值
                     * 
                     */
                    bool RiskSideHasBeenSet() const;

                    /**
                     * 获取数据源类型
                     * @return DataSourceType 数据源类型
                     * 
                     */
                    std::string GetDataSourceType() const;

                    /**
                     * 设置数据源类型
                     * @param _dataSourceType 数据源类型
                     * 
                     */
                    void SetDataSourceType(const std::string& _dataSourceType);

                    /**
                     * 判断参数 DataSourceType 是否已赋值
                     * @return DataSourceType 是否已赋值
                     * 
                     */
                    bool DataSourceTypeHasBeenSet() const;

                private:

                    /**
                     * 风险项Id
                     */
                    std::string m_riskId;
                    bool m_riskIdHasBeenSet;

                    /**
                     * 风险项描述
                     */
                    std::string m_riskDescription;
                    bool m_riskDescriptionHasBeenSet;

                    /**
                     * 评估模板Id
                     */
                    std::string m_templateId;
                    bool m_templateIdHasBeenSet;

                    /**
                     * 评估模板名称
                     */
                    std::string m_templateName;
                    bool m_templateNameHasBeenSet;

                    /**
                     * 评估项Id
                     */
                    std::string m_controlItemId;
                    bool m_controlItemIdHasBeenSet;

                    /**
                     * 评估项名称
                     */
                    std::string m_controlItemName;
                    bool m_controlItemNameHasBeenSet;

                    /**
                     * 评估描述
                     */
                    std::string m_controlItemDesc;
                    bool m_controlItemDescHasBeenSet;

                    /**
                     * 风险等级，取值（high，medium，low）
                     */
                    std::string m_riskLevel;
                    bool m_riskLevelHasBeenSet;

                    /**
                     * 风险缓解措施
                     */
                    std::string m_riskMitigation;
                    bool m_riskMitigationHasBeenSet;

                    /**
                     * 风险处理状态。(waiting待处理, processing处理中, finished已处理)
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 风险生成时间
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * 风险负责人
                     */
                    std::string m_riskOwner;
                    bool m_riskOwnerHasBeenSet;

                    /**
                     * 风险涉及资产
                     */
                    std::string m_relatedAsset;
                    bool m_relatedAssetHasBeenSet;

                    /**
                     * 风险涉及资产id
                     */
                    std::string m_dataSourceId;
                    bool m_dataSourceIdHasBeenSet;

                    /**
                     * 风险涉及资产名称
                     */
                    std::string m_dataSourceName;
                    bool m_dataSourceNameHasBeenSet;

                    /**
                     * 资产名称
                     */
                    std::string m_assetName;
                    bool m_assetNameHasBeenSet;

                    /**
                     * 建议使用安全产品
                     */
                    std::vector<SecurityProduct> m_securityProduct;
                    bool m_securityProductHasBeenSet;

                    /**
                     * 风险类型
                     */
                    std::string m_riskType;
                    bool m_riskTypeHasBeenSet;

                    /**
                     * 风险面
                     */
                    std::string m_riskSide;
                    bool m_riskSideHasBeenSet;

                    /**
                     * 数据源类型
                     */
                    std::string m_dataSourceType;
                    bool m_dataSourceTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DSGC_V20190723_MODEL_ASSESSMENTRISK_H_
