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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEDSPMIDENTIFYDISTRIBUTIONSTATISTICSREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEDSPMIDENTIFYDISTRIBUTIONSTATISTICSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DescribeDspmIdentifyDistributionStatistics请求参数结构体
                */
                class DescribeDspmIdentifyDistributionStatisticsRequest : public AbstractModel
                {
                public:
                    DescribeDspmIdentifyDistributionStatisticsRequest();
                    ~DescribeDspmIdentifyDistributionStatisticsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>统计类型</p><p>枚举值：</p><ul><li>FieldTop5Asset： 识别字段Top5</li><li>FieldCategoryDistribution： 识别字段分类分布</li><li>FieldLevelDistribution： 识别字段级别分布</li><li>AssetDistribution： 识别资产分布</li></ul>
                     * @return StatType <p>统计类型</p><p>枚举值：</p><ul><li>FieldTop5Asset： 识别字段Top5</li><li>FieldCategoryDistribution： 识别字段分类分布</li><li>FieldLevelDistribution： 识别字段级别分布</li><li>AssetDistribution： 识别资产分布</li></ul>
                     * 
                     */
                    std::string GetStatType() const;

                    /**
                     * 设置<p>统计类型</p><p>枚举值：</p><ul><li>FieldTop5Asset： 识别字段Top5</li><li>FieldCategoryDistribution： 识别字段分类分布</li><li>FieldLevelDistribution： 识别字段级别分布</li><li>AssetDistribution： 识别资产分布</li></ul>
                     * @param _statType <p>统计类型</p><p>枚举值：</p><ul><li>FieldTop5Asset： 识别字段Top5</li><li>FieldCategoryDistribution： 识别字段分类分布</li><li>FieldLevelDistribution： 识别字段级别分布</li><li>AssetDistribution： 识别资产分布</li></ul>
                     * 
                     */
                    void SetStatType(const std::string& _statType);

                    /**
                     * 判断参数 StatType 是否已赋值
                     * @return StatType 是否已赋值
                     * 
                     */
                    bool StatTypeHasBeenSet() const;

                    /**
                     * 获取<p>集团账号的成员id</p>
                     * @return MemberId <p>集团账号的成员id</p>
                     * 
                     */
                    std::vector<std::string> GetMemberId() const;

                    /**
                     * 设置<p>集团账号的成员id</p>
                     * @param _memberId <p>集团账号的成员id</p>
                     * 
                     */
                    void SetMemberId(const std::vector<std::string>& _memberId);

                    /**
                     * 判断参数 MemberId 是否已赋值
                     * @return MemberId 是否已赋值
                     * 
                     */
                    bool MemberIdHasBeenSet() const;

                    /**
                     * 获取<p>资产类型</p><p>枚举值：</p><ul><li>cdb： 云数据库MySQL</li><li>mariadb： 云数据库MariaDB</li></ul>
                     * @return AssetType <p>资产类型</p><p>枚举值：</p><ul><li>cdb： 云数据库MySQL</li><li>mariadb： 云数据库MariaDB</li></ul>
                     * 
                     */
                    std::string GetAssetType() const;

                    /**
                     * 设置<p>资产类型</p><p>枚举值：</p><ul><li>cdb： 云数据库MySQL</li><li>mariadb： 云数据库MariaDB</li></ul>
                     * @param _assetType <p>资产类型</p><p>枚举值：</p><ul><li>cdb： 云数据库MySQL</li><li>mariadb： 云数据库MariaDB</li></ul>
                     * 
                     */
                    void SetAssetType(const std::string& _assetType);

                    /**
                     * 判断参数 AssetType 是否已赋值
                     * @return AssetType 是否已赋值
                     * 
                     */
                    bool AssetTypeHasBeenSet() const;

                    /**
                     * 获取<p>识别模板id</p>
                     * @return ComplianceId <p>识别模板id</p>
                     * 
                     */
                    uint64_t GetComplianceId() const;

                    /**
                     * 设置<p>识别模板id</p>
                     * @param _complianceId <p>识别模板id</p>
                     * 
                     */
                    void SetComplianceId(const uint64_t& _complianceId);

                    /**
                     * 判断参数 ComplianceId 是否已赋值
                     * @return ComplianceId 是否已赋值
                     * 
                     */
                    bool ComplianceIdHasBeenSet() const;

                private:

                    /**
                     * <p>统计类型</p><p>枚举值：</p><ul><li>FieldTop5Asset： 识别字段Top5</li><li>FieldCategoryDistribution： 识别字段分类分布</li><li>FieldLevelDistribution： 识别字段级别分布</li><li>AssetDistribution： 识别资产分布</li></ul>
                     */
                    std::string m_statType;
                    bool m_statTypeHasBeenSet;

                    /**
                     * <p>集团账号的成员id</p>
                     */
                    std::vector<std::string> m_memberId;
                    bool m_memberIdHasBeenSet;

                    /**
                     * <p>资产类型</p><p>枚举值：</p><ul><li>cdb： 云数据库MySQL</li><li>mariadb： 云数据库MariaDB</li></ul>
                     */
                    std::string m_assetType;
                    bool m_assetTypeHasBeenSet;

                    /**
                     * <p>识别模板id</p>
                     */
                    uint64_t m_complianceId;
                    bool m_complianceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEDSPMIDENTIFYDISTRIBUTIONSTATISTICSREQUEST_H_
