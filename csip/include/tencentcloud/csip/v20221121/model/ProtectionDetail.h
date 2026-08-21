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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_PROTECTIONDETAIL_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_PROTECTIONDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/ProtectionConfigItem.h>
#include <tencentcloud/csip/v20221121/model/ExpiringProduct.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * 防护配置详情
                */
                class ProtectionDetail : public AbstractModel
                {
                public:
                    ProtectionDetail();
                    ~ProtectionDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取各配置项开启状态
                     * @return ConfigItems 各配置项开启状态
                     * 
                     */
                    std::vector<ProtectionConfigItem> GetConfigItems() const;

                    /**
                     * 设置各配置项开启状态
                     * @param _configItems 各配置项开启状态
                     * 
                     */
                    void SetConfigItems(const std::vector<ProtectionConfigItem>& _configItems);

                    /**
                     * 判断参数 ConfigItems 是否已赋值
                     * @return ConfigItems 是否已赋值
                     * 
                     */
                    bool ConfigItemsHasBeenSet() const;

                    /**
                     * 获取应防护资产数
                     * @return EligibleAssetCount 应防护资产数
                     * 
                     */
                    int64_t GetEligibleAssetCount() const;

                    /**
                     * 设置应防护资产数
                     * @param _eligibleAssetCount 应防护资产数
                     * 
                     */
                    void SetEligibleAssetCount(const int64_t& _eligibleAssetCount);

                    /**
                     * 判断参数 EligibleAssetCount 是否已赋值
                     * @return EligibleAssetCount 是否已赋值
                     * 
                     */
                    bool EligibleAssetCountHasBeenSet() const;

                    /**
                     * 获取已防护资产数
                     * @return ProtectedAssetCount 已防护资产数
                     * 
                     */
                    int64_t GetProtectedAssetCount() const;

                    /**
                     * 设置已防护资产数
                     * @param _protectedAssetCount 已防护资产数
                     * 
                     */
                    void SetProtectedAssetCount(const int64_t& _protectedAssetCount);

                    /**
                     * 判断参数 ProtectedAssetCount 是否已赋值
                     * @return ProtectedAssetCount 是否已赋值
                     * 
                     */
                    bool ProtectedAssetCountHasBeenSet() const;

                    /**
                     * 获取覆盖率百分比
取值范围：[0, 100]
                     * @return CoveragePercent 覆盖率百分比
取值范围：[0, 100]
                     * 
                     */
                    int64_t GetCoveragePercent() const;

                    /**
                     * 设置覆盖率百分比
取值范围：[0, 100]
                     * @param _coveragePercent 覆盖率百分比
取值范围：[0, 100]
                     * 
                     */
                    void SetCoveragePercent(const int64_t& _coveragePercent);

                    /**
                     * 判断参数 CoveragePercent 是否已赋值
                     * @return CoveragePercent 是否已赋值
                     * 
                     */
                    bool CoveragePercentHasBeenSet() const;

                    /**
                     * 获取即将到期产品列表
                     * @return ExpiringProducts 即将到期产品列表
                     * 
                     */
                    std::vector<ExpiringProduct> GetExpiringProducts() const;

                    /**
                     * 设置即将到期产品列表
                     * @param _expiringProducts 即将到期产品列表
                     * 
                     */
                    void SetExpiringProducts(const std::vector<ExpiringProduct>& _expiringProducts);

                    /**
                     * 判断参数 ExpiringProducts 是否已赋值
                     * @return ExpiringProducts 是否已赋值
                     * 
                     */
                    bool ExpiringProductsHasBeenSet() const;

                private:

                    /**
                     * 各配置项开启状态
                     */
                    std::vector<ProtectionConfigItem> m_configItems;
                    bool m_configItemsHasBeenSet;

                    /**
                     * 应防护资产数
                     */
                    int64_t m_eligibleAssetCount;
                    bool m_eligibleAssetCountHasBeenSet;

                    /**
                     * 已防护资产数
                     */
                    int64_t m_protectedAssetCount;
                    bool m_protectedAssetCountHasBeenSet;

                    /**
                     * 覆盖率百分比
取值范围：[0, 100]
                     */
                    int64_t m_coveragePercent;
                    bool m_coveragePercentHasBeenSet;

                    /**
                     * 即将到期产品列表
                     */
                    std::vector<ExpiringProduct> m_expiringProducts;
                    bool m_expiringProductsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_PROTECTIONDETAIL_H_
