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

#ifndef TENCENTCLOUD_DSGC_V20190723_MODEL_DESCRIBEDSPAASSESSMENTLATESTRISKDETAILINFORESPONSE_H_
#define TENCENTCLOUD_DSGC_V20190723_MODEL_DESCRIBEDSPAASSESSMENTLATESTRISKDETAILINFORESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dsgc/v20190723/model/SecurityProduct.h>
#include <tencentcloud/dsgc/v20190723/model/AccountRisk.h>
#include <tencentcloud/dsgc/v20190723/model/PrivilegeRisk.h>
#include <tencentcloud/dsgc/v20190723/model/AKSKLeak.h>


namespace TencentCloud
{
    namespace Dsgc
    {
        namespace V20190723
        {
            namespace Model
            {
                /**
                * DescribeDSPAAssessmentLatestRiskDetailInfo返回参数结构体
                */
                class DescribeDSPAAssessmentLatestRiskDetailInfoResponse : public AbstractModel
                {
                public:
                    DescribeDSPAAssessmentLatestRiskDetailInfoResponse();
                    ~DescribeDSPAAssessmentLatestRiskDetailInfoResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取数据源id
                     * @return DataSourceId 数据源id
                     * 
                     */
                    std::string GetDataSourceId() const;

                    /**
                     * 判断参数 DataSourceId 是否已赋值
                     * @return DataSourceId 是否已赋值
                     * 
                     */
                    bool DataSourceIdHasBeenSet() const;

                    /**
                     * 获取数据源name
                     * @return DataSourceName 数据源name
                     * 
                     */
                    std::string GetDataSourceName() const;

                    /**
                     * 判断参数 DataSourceName 是否已赋值
                     * @return DataSourceName 是否已赋值
                     * 
                     */
                    bool DataSourceNameHasBeenSet() const;

                    /**
                     * 获取资产对象名称
                     * @return AssetName 资产对象名称
                     * 
                     */
                    std::string GetAssetName() const;

                    /**
                     * 判断参数 AssetName 是否已赋值
                     * @return AssetName 是否已赋值
                     * 
                     */
                    bool AssetNameHasBeenSet() const;

                    /**
                     * 获取风险评估模板id
                     * @return AssessmentTemplateId 风险评估模板id
                     * 
                     */
                    int64_t GetAssessmentTemplateId() const;

                    /**
                     * 判断参数 AssessmentTemplateId 是否已赋值
                     * @return AssessmentTemplateId 是否已赋值
                     * 
                     */
                    bool AssessmentTemplateIdHasBeenSet() const;

                    /**
                     * 获取分类分级的模板id
                     * @return IdentifyTemplateId 分类分级的模板id
                     * 
                     */
                    int64_t GetIdentifyTemplateId() const;

                    /**
                     * 判断参数 IdentifyTemplateId 是否已赋值
                     * @return IdentifyTemplateId 是否已赋值
                     * 
                     */
                    bool IdentifyTemplateIdHasBeenSet() const;

                    /**
                     * 获取风险类型
                     * @return RiskType 风险类型
                     * 
                     */
                    std::string GetRiskType() const;

                    /**
                     * 判断参数 RiskType 是否已赋值
                     * @return RiskType 是否已赋值
                     * 
                     */
                    bool RiskTypeHasBeenSet() const;

                    /**
                     * 获取风险项
                     * @return RiskName 风险项
                     * 
                     */
                    std::string GetRiskName() const;

                    /**
                     * 判断参数 RiskName 是否已赋值
                     * @return RiskName 是否已赋值
                     * 
                     */
                    bool RiskNameHasBeenSet() const;

                    /**
                     * 获取风险的描述
                     * @return RiskDescription 风险的描述
                     * 
                     */
                    std::string GetRiskDescription() const;

                    /**
                     * 判断参数 RiskDescription 是否已赋值
                     * @return RiskDescription 是否已赋值
                     * 
                     */
                    bool RiskDescriptionHasBeenSet() const;

                    /**
                     * 获取风险的级别
                     * @return RiskLevel 风险的级别
                     * 
                     */
                    std::string GetRiskLevel() const;

                    /**
                     * 判断参数 RiskLevel 是否已赋值
                     * @return RiskLevel 是否已赋值
                     * 
                     */
                    bool RiskLevelHasBeenSet() const;

                    /**
                     * 获取处置的建议
                     * @return SuggestAction 处置的建议
                     * 
                     */
                    std::string GetSuggestAction() const;

                    /**
                     * 判断参数 SuggestAction 是否已赋值
                     * @return SuggestAction 是否已赋值
                     * 
                     */
                    bool SuggestActionHasBeenSet() const;

                    /**
                     * 获取处置状态
                     * @return Status 处置状态
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取备注
                     * @return Remark 备注
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取安全产品
                     * @return SecurityProduct 安全产品
                     * 
                     */
                    std::vector<SecurityProduct> GetSecurityProduct() const;

                    /**
                     * 判断参数 SecurityProduct 是否已赋值
                     * @return SecurityProduct 是否已赋值
                     * 
                     */
                    bool SecurityProductHasBeenSet() const;

                    /**
                     * 获取风险归属
                     * @return RiskDimension 风险归属
                     * 
                     */
                    std::string GetRiskDimension() const;

                    /**
                     * 判断参数 RiskDimension 是否已赋值
                     * @return RiskDimension 是否已赋值
                     * 
                     */
                    bool RiskDimensionHasBeenSet() const;

                    /**
                     * 获取关联数据库（如果风险归属是instance）
                     * @return RelationAsset 关联数据库（如果风险归属是instance）
                     * 
                     */
                    std::vector<std::string> GetRelationAsset() const;

                    /**
                     * 判断参数 RelationAsset 是否已赋值
                     * @return RelationAsset 是否已赋值
                     * 
                     */
                    bool RelationAssetHasBeenSet() const;

                    /**
                     * 获取风险账号详情
                     * @return AccountRiskDetail 风险账号详情
                     * 
                     */
                    std::vector<AccountRisk> GetAccountRiskDetail() const;

                    /**
                     * 判断参数 AccountRiskDetail 是否已赋值
                     * @return AccountRiskDetail 是否已赋值
                     * 
                     */
                    bool AccountRiskDetailHasBeenSet() const;

                    /**
                     * 获取权限风险详情
                     * @return PrivilegeRiskDetail 权限风险详情
                     * 
                     */
                    std::vector<PrivilegeRisk> GetPrivilegeRiskDetail() const;

                    /**
                     * 判断参数 PrivilegeRiskDetail 是否已赋值
                     * @return PrivilegeRiskDetail 是否已赋值
                     * 
                     */
                    bool PrivilegeRiskDetailHasBeenSet() const;

                    /**
                     * 获取策略风险的cos风险文件列表
                     * @return PolicyRiskCosFileList 策略风险的cos风险文件列表
                     * 
                     */
                    std::vector<std::string> GetPolicyRiskCosFileList() const;

                    /**
                     * 判断参数 PolicyRiskCosFileList 是否已赋值
                     * @return PolicyRiskCosFileList 是否已赋值
                     * 
                     */
                    bool PolicyRiskCosFileListHasBeenSet() const;

                    /**
                     * 获取AKSK泄漏列表
                     * @return AKSKLeak AKSK泄漏列表
                     * 
                     */
                    std::vector<AKSKLeak> GetAKSKLeak() const;

                    /**
                     * 判断参数 AKSKLeak 是否已赋值
                     * @return AKSKLeak 是否已赋值
                     * 
                     */
                    bool AKSKLeakHasBeenSet() const;

                private:

                    /**
                     * 数据源id
                     */
                    std::string m_dataSourceId;
                    bool m_dataSourceIdHasBeenSet;

                    /**
                     * 数据源name
                     */
                    std::string m_dataSourceName;
                    bool m_dataSourceNameHasBeenSet;

                    /**
                     * 资产对象名称
                     */
                    std::string m_assetName;
                    bool m_assetNameHasBeenSet;

                    /**
                     * 风险评估模板id
                     */
                    int64_t m_assessmentTemplateId;
                    bool m_assessmentTemplateIdHasBeenSet;

                    /**
                     * 分类分级的模板id
                     */
                    int64_t m_identifyTemplateId;
                    bool m_identifyTemplateIdHasBeenSet;

                    /**
                     * 风险类型
                     */
                    std::string m_riskType;
                    bool m_riskTypeHasBeenSet;

                    /**
                     * 风险项
                     */
                    std::string m_riskName;
                    bool m_riskNameHasBeenSet;

                    /**
                     * 风险的描述
                     */
                    std::string m_riskDescription;
                    bool m_riskDescriptionHasBeenSet;

                    /**
                     * 风险的级别
                     */
                    std::string m_riskLevel;
                    bool m_riskLevelHasBeenSet;

                    /**
                     * 处置的建议
                     */
                    std::string m_suggestAction;
                    bool m_suggestActionHasBeenSet;

                    /**
                     * 处置状态
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 备注
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * 安全产品
                     */
                    std::vector<SecurityProduct> m_securityProduct;
                    bool m_securityProductHasBeenSet;

                    /**
                     * 风险归属
                     */
                    std::string m_riskDimension;
                    bool m_riskDimensionHasBeenSet;

                    /**
                     * 关联数据库（如果风险归属是instance）
                     */
                    std::vector<std::string> m_relationAsset;
                    bool m_relationAssetHasBeenSet;

                    /**
                     * 风险账号详情
                     */
                    std::vector<AccountRisk> m_accountRiskDetail;
                    bool m_accountRiskDetailHasBeenSet;

                    /**
                     * 权限风险详情
                     */
                    std::vector<PrivilegeRisk> m_privilegeRiskDetail;
                    bool m_privilegeRiskDetailHasBeenSet;

                    /**
                     * 策略风险的cos风险文件列表
                     */
                    std::vector<std::string> m_policyRiskCosFileList;
                    bool m_policyRiskCosFileListHasBeenSet;

                    /**
                     * AKSK泄漏列表
                     */
                    std::vector<AKSKLeak> m_aKSKLeak;
                    bool m_aKSKLeakHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DSGC_V20190723_MODEL_DESCRIBEDSPAASSESSMENTLATESTRISKDETAILINFORESPONSE_H_
