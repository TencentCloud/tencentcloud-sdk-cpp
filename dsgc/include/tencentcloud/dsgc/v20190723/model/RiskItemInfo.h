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

#ifndef TENCENTCLOUD_DSGC_V20190723_MODEL_RISKITEMINFO_H_
#define TENCENTCLOUD_DSGC_V20190723_MODEL_RISKITEMINFO_H_

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
                * 最新的风险详情信息数据
                */
                class RiskItemInfo : public AbstractModel
                {
                public:
                    RiskItemInfo();
                    ~RiskItemInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取最新风险项id
                     * @return Id 最新风险项id
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置最新风险项id
                     * @param _id 最新风险项id
                     * 
                     */
                    void SetId(const int64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取数据源id
                     * @return DataSourceId 数据源id
                     * 
                     */
                    std::string GetDataSourceId() const;

                    /**
                     * 设置数据源id
                     * @param _dataSourceId 数据源id
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
                     * 获取数据源名称
                     * @return DataSourceName 数据源名称
                     * 
                     */
                    std::string GetDataSourceName() const;

                    /**
                     * 设置数据源名称
                     * @param _dataSourceName 数据源名称
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

                    /**
                     * 获取资源地域
                     * @return ResourceRegion 资源地域
                     * 
                     */
                    std::string GetResourceRegion() const;

                    /**
                     * 设置资源地域
                     * @param _resourceRegion 资源地域
                     * 
                     */
                    void SetResourceRegion(const std::string& _resourceRegion);

                    /**
                     * 判断参数 ResourceRegion 是否已赋值
                     * @return ResourceRegion 是否已赋值
                     * 
                     */
                    bool ResourceRegionHasBeenSet() const;

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
                     * 获取风险项
                     * @return RiskName 风险项
                     * 
                     */
                    std::string GetRiskName() const;

                    /**
                     * 设置风险项
                     * @param _riskName 风险项
                     * 
                     */
                    void SetRiskName(const std::string& _riskName);

                    /**
                     * 判断参数 RiskName 是否已赋值
                     * @return RiskName 是否已赋值
                     * 
                     */
                    bool RiskNameHasBeenSet() const;

                    /**
                     * 获取风险级别
                     * @return RiskLevel 风险级别
                     * 
                     */
                    std::string GetRiskLevel() const;

                    /**
                     * 设置风险级别
                     * @param _riskLevel 风险级别
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
                     * 获取风险描述
                     * @return RiskDescription 风险描述
                     * 
                     */
                    std::string GetRiskDescription() const;

                    /**
                     * 设置风险描述
                     * @param _riskDescription 风险描述
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
                     * 获取建议措施
                     * @return SuggestAction 建议措施
                     * 
                     */
                    std::string GetSuggestAction() const;

                    /**
                     * 设置建议措施
                     * @param _suggestAction 建议措施
                     * 
                     */
                    void SetSuggestAction(const std::string& _suggestAction);

                    /**
                     * 判断参数 SuggestAction 是否已赋值
                     * @return SuggestAction 是否已赋值
                     * 
                     */
                    bool SuggestActionHasBeenSet() const;

                    /**
                     * 获取安全产品（可能有多个）
                     * @return SecurityProduct 安全产品（可能有多个）
                     * 
                     */
                    std::vector<SecurityProduct> GetSecurityProduct() const;

                    /**
                     * 设置安全产品（可能有多个）
                     * @param _securityProduct 安全产品（可能有多个）
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
                     * 获取状态(waiting:待处理，processing:处理中，finished:已处理，ignored:已忽略)
                     * @return Status 状态(waiting:待处理，processing:处理中，finished:已处理，ignored:已忽略)
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置状态(waiting:待处理，processing:处理中，finished:已处理，ignored:已忽略)
                     * @param _status 状态(waiting:待处理，processing:处理中，finished:已处理，ignored:已忽略)
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取扫描时间
                     * @return ScanTime 扫描时间
                     * 
                     */
                    std::string GetScanTime() const;

                    /**
                     * 设置扫描时间
                     * @param _scanTime 扫描时间
                     * 
                     */
                    void SetScanTime(const std::string& _scanTime);

                    /**
                     * 判断参数 ScanTime 是否已赋值
                     * @return ScanTime 是否已赋值
                     * 
                     */
                    bool ScanTimeHasBeenSet() const;

                    /**
                     * 获取最后处置时间
                     * @return LastProcessTime 最后处置时间
                     * 
                     */
                    std::string GetLastProcessTime() const;

                    /**
                     * 设置最后处置时间
                     * @param _lastProcessTime 最后处置时间
                     * 
                     */
                    void SetLastProcessTime(const std::string& _lastProcessTime);

                    /**
                     * 判断参数 LastProcessTime 是否已赋值
                     * @return LastProcessTime 是否已赋值
                     * 
                     */
                    bool LastProcessTimeHasBeenSet() const;

                    /**
                     * 获取分类分级合规组Id
                     * @return IdentifyComplianceId 分类分级合规组Id
                     * 
                     */
                    int64_t GetIdentifyComplianceId() const;

                    /**
                     * 设置分类分级合规组Id
                     * @param _identifyComplianceId 分类分级合规组Id
                     * 
                     */
                    void SetIdentifyComplianceId(const int64_t& _identifyComplianceId);

                    /**
                     * 判断参数 IdentifyComplianceId 是否已赋值
                     * @return IdentifyComplianceId 是否已赋值
                     * 
                     */
                    bool IdentifyComplianceIdHasBeenSet() const;

                    /**
                     * 获取类型
                     * @return ItemSubType 类型
                     * 
                     */
                    std::string GetItemSubType() const;

                    /**
                     * 设置类型
                     * @param _itemSubType 类型
                     * 
                     */
                    void SetItemSubType(const std::string& _itemSubType);

                    /**
                     * 判断参数 ItemSubType 是否已赋值
                     * @return ItemSubType 是否已赋值
                     * 
                     */
                    bool ItemSubTypeHasBeenSet() const;

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
                     * 获取API安全风险链接
                     * @return APIRiskLinkURL API安全风险链接
                     * 
                     */
                    std::string GetAPIRiskLinkURL() const;

                    /**
                     * 设置API安全风险链接
                     * @param _aPIRiskLinkURL API安全风险链接
                     * 
                     */
                    void SetAPIRiskLinkURL(const std::string& _aPIRiskLinkURL);

                    /**
                     * 判断参数 APIRiskLinkURL 是否已赋值
                     * @return APIRiskLinkURL 是否已赋值
                     * 
                     */
                    bool APIRiskLinkURLHasBeenSet() const;

                    /**
                     * 获取备注
                     * @return Remark 备注
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置备注
                     * @param _remark 备注
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                private:

                    /**
                     * 最新风险项id
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 数据源id
                     */
                    std::string m_dataSourceId;
                    bool m_dataSourceIdHasBeenSet;

                    /**
                     * 数据源名称
                     */
                    std::string m_dataSourceName;
                    bool m_dataSourceNameHasBeenSet;

                    /**
                     * 数据源类型
                     */
                    std::string m_dataSourceType;
                    bool m_dataSourceTypeHasBeenSet;

                    /**
                     * 资源地域
                     */
                    std::string m_resourceRegion;
                    bool m_resourceRegionHasBeenSet;

                    /**
                     * 资产名称
                     */
                    std::string m_assetName;
                    bool m_assetNameHasBeenSet;

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
                     * 风险级别
                     */
                    std::string m_riskLevel;
                    bool m_riskLevelHasBeenSet;

                    /**
                     * 风险描述
                     */
                    std::string m_riskDescription;
                    bool m_riskDescriptionHasBeenSet;

                    /**
                     * 建议措施
                     */
                    std::string m_suggestAction;
                    bool m_suggestActionHasBeenSet;

                    /**
                     * 安全产品（可能有多个）
                     */
                    std::vector<SecurityProduct> m_securityProduct;
                    bool m_securityProductHasBeenSet;

                    /**
                     * 状态(waiting:待处理，processing:处理中，finished:已处理，ignored:已忽略)
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 扫描时间
                     */
                    std::string m_scanTime;
                    bool m_scanTimeHasBeenSet;

                    /**
                     * 最后处置时间
                     */
                    std::string m_lastProcessTime;
                    bool m_lastProcessTimeHasBeenSet;

                    /**
                     * 分类分级合规组Id
                     */
                    int64_t m_identifyComplianceId;
                    bool m_identifyComplianceIdHasBeenSet;

                    /**
                     * 类型
                     */
                    std::string m_itemSubType;
                    bool m_itemSubTypeHasBeenSet;

                    /**
                     * 风险面
                     */
                    std::string m_riskSide;
                    bool m_riskSideHasBeenSet;

                    /**
                     * API安全风险链接
                     */
                    std::string m_aPIRiskLinkURL;
                    bool m_aPIRiskLinkURLHasBeenSet;

                    /**
                     * 备注
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DSGC_V20190723_MODEL_RISKITEMINFO_H_
