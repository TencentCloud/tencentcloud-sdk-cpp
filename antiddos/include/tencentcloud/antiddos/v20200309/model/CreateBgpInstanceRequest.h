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

#ifndef TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_CREATEBGPINSTANCEREQUEST_H_
#define TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_CREATEBGPINSTANCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/antiddos/v20200309/model/InstanceChargePrepaid.h>
#include <tencentcloud/antiddos/v20200309/model/EnterprisePackageConfig.h>
#include <tencentcloud/antiddos/v20200309/model/StandardPackageConfig.h>
#include <tencentcloud/antiddos/v20200309/model/StandardPlusPackageConfig.h>
#include <tencentcloud/antiddos/v20200309/model/TagInfo.h>


namespace TencentCloud
{
    namespace Antiddos
    {
        namespace V20200309
        {
            namespace Model
            {
                /**
                * CreateBgpInstance请求参数结构体
                */
                class CreateBgpInstanceRequest : public AbstractModel
                {
                public:
                    CreateBgpInstanceRequest();
                    ~CreateBgpInstanceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取付费类型：付费模式：PREPAID 预付费 POSTPAID_BY_MONTH 后付费
                     * @return InstanceChargeType 付费类型：付费模式：PREPAID 预付费 POSTPAID_BY_MONTH 后付费
                     * 
                     */
                    std::string GetInstanceChargeType() const;

                    /**
                     * 设置付费类型：付费模式：PREPAID 预付费 POSTPAID_BY_MONTH 后付费
                     * @param _instanceChargeType 付费类型：付费模式：PREPAID 预付费 POSTPAID_BY_MONTH 后付费
                     * 
                     */
                    void SetInstanceChargeType(const std::string& _instanceChargeType);

                    /**
                     * 判断参数 InstanceChargeType 是否已赋值
                     * @return InstanceChargeType 是否已赋值
                     * 
                     */
                    bool InstanceChargeTypeHasBeenSet() const;

                    /**
                     * 获取高防包类型：高防包类型，Enterprise(企业版) Standard(标准版) StandardPlus(标准版2.0)
                     * @return PackageType 高防包类型：高防包类型，Enterprise(企业版) Standard(标准版) StandardPlus(标准版2.0)
                     * 
                     */
                    std::string GetPackageType() const;

                    /**
                     * 设置高防包类型：高防包类型，Enterprise(企业版) Standard(标准版) StandardPlus(标准版2.0)
                     * @param _packageType 高防包类型：高防包类型，Enterprise(企业版) Standard(标准版) StandardPlus(标准版2.0)
                     * 
                     */
                    void SetPackageType(const std::string& _packageType);

                    /**
                     * 判断参数 PackageType 是否已赋值
                     * @return PackageType 是否已赋值
                     * 
                     */
                    bool PackageTypeHasBeenSet() const;

                    /**
                     * 获取购买高防包的数量，一次购买数量不超过10
                     * @return InstanceCount 购买高防包的数量，一次购买数量不超过10
                     * 
                     */
                    uint64_t GetInstanceCount() const;

                    /**
                     * 设置购买高防包的数量，一次购买数量不超过10
                     * @param _instanceCount 购买高防包的数量，一次购买数量不超过10
                     * 
                     */
                    void SetInstanceCount(const uint64_t& _instanceCount);

                    /**
                     * 判断参数 InstanceCount 是否已赋值
                     * @return InstanceCount 是否已赋值
                     * 
                     */
                    bool InstanceCountHasBeenSet() const;

                    /**
                     * 获取{ "Period": 3, "RenewFlag": "NOTIFY_AND_AUTO_RENEW" }
                     * @return InstanceChargePrepaid { "Period": 3, "RenewFlag": "NOTIFY_AND_AUTO_RENEW" }
                     * 
                     */
                    InstanceChargePrepaid GetInstanceChargePrepaid() const;

                    /**
                     * 设置{ "Period": 3, "RenewFlag": "NOTIFY_AND_AUTO_RENEW" }
                     * @param _instanceChargePrepaid { "Period": 3, "RenewFlag": "NOTIFY_AND_AUTO_RENEW" }
                     * 
                     */
                    void SetInstanceChargePrepaid(const InstanceChargePrepaid& _instanceChargePrepaid);

                    /**
                     * 判断参数 InstanceChargePrepaid 是否已赋值
                     * @return InstanceChargePrepaid 是否已赋值
                     * 
                     */
                    bool InstanceChargePrepaidHasBeenSet() const;

                    /**
                     * 获取{ "Region": "ap-guangzhou", "ProtectIpCount": 1, "BasicProtectBandwidth": 300, "Bandwidth": 100, "ElasticProtectLimit": 0, "ElasticBandwidthFlag": true }
                     * @return EnterprisePackageConfig { "Region": "ap-guangzhou", "ProtectIpCount": 1, "BasicProtectBandwidth": 300, "Bandwidth": 100, "ElasticProtectLimit": 0, "ElasticBandwidthFlag": true }
                     * 
                     */
                    EnterprisePackageConfig GetEnterprisePackageConfig() const;

                    /**
                     * 设置{ "Region": "ap-guangzhou", "ProtectIpCount": 1, "BasicProtectBandwidth": 300, "Bandwidth": 100, "ElasticProtectLimit": 0, "ElasticBandwidthFlag": true }
                     * @param _enterprisePackageConfig { "Region": "ap-guangzhou", "ProtectIpCount": 1, "BasicProtectBandwidth": 300, "Bandwidth": 100, "ElasticProtectLimit": 0, "ElasticBandwidthFlag": true }
                     * 
                     */
                    void SetEnterprisePackageConfig(const EnterprisePackageConfig& _enterprisePackageConfig);

                    /**
                     * 判断参数 EnterprisePackageConfig 是否已赋值
                     * @return EnterprisePackageConfig 是否已赋值
                     * 
                     */
                    bool EnterprisePackageConfigHasBeenSet() const;

                    /**
                     * 获取{ "Region": "ap-guangzhou", "ProtectIpCount": 1, "BasicProtectBandwidth": 300, "Bandwidth": 100, "ElasticProtectLimit": 0, "ElasticBandwidthFlag": true }
                     * @return StandardPackageConfig { "Region": "ap-guangzhou", "ProtectIpCount": 1, "BasicProtectBandwidth": 300, "Bandwidth": 100, "ElasticProtectLimit": 0, "ElasticBandwidthFlag": true }
                     * 
                     */
                    StandardPackageConfig GetStandardPackageConfig() const;

                    /**
                     * 设置{ "Region": "ap-guangzhou", "ProtectIpCount": 1, "BasicProtectBandwidth": 300, "Bandwidth": 100, "ElasticProtectLimit": 0, "ElasticBandwidthFlag": true }
                     * @param _standardPackageConfig { "Region": "ap-guangzhou", "ProtectIpCount": 1, "BasicProtectBandwidth": 300, "Bandwidth": 100, "ElasticProtectLimit": 0, "ElasticBandwidthFlag": true }
                     * 
                     */
                    void SetStandardPackageConfig(const StandardPackageConfig& _standardPackageConfig);

                    /**
                     * 判断参数 StandardPackageConfig 是否已赋值
                     * @return StandardPackageConfig 是否已赋值
                     * 
                     */
                    bool StandardPackageConfigHasBeenSet() const;

                    /**
                     * 获取{ "Region": "ap-guangzhou", "ProtectCount": "TWO_TIMES", "ProtectIpCount": 1, "Bandwidth": 100, "ElasticBandwidthFlag": true }
                     * @return StandardPlusPackageConfig { "Region": "ap-guangzhou", "ProtectCount": "TWO_TIMES", "ProtectIpCount": 1, "Bandwidth": 100, "ElasticBandwidthFlag": true }
                     * 
                     */
                    StandardPlusPackageConfig GetStandardPlusPackageConfig() const;

                    /**
                     * 设置{ "Region": "ap-guangzhou", "ProtectCount": "TWO_TIMES", "ProtectIpCount": 1, "Bandwidth": 100, "ElasticBandwidthFlag": true }
                     * @param _standardPlusPackageConfig { "Region": "ap-guangzhou", "ProtectCount": "TWO_TIMES", "ProtectIpCount": 1, "Bandwidth": 100, "ElasticBandwidthFlag": true }
                     * 
                     */
                    void SetStandardPlusPackageConfig(const StandardPlusPackageConfig& _standardPlusPackageConfig);

                    /**
                     * 判断参数 StandardPlusPackageConfig 是否已赋值
                     * @return StandardPlusPackageConfig 是否已赋值
                     * 
                     */
                    bool StandardPlusPackageConfigHasBeenSet() const;

                    /**
                     * 获取[ { "TagKey": "beal-test",                 "TagValue": "beal-test"               }             ]
                     * @return TagInfoList [ { "TagKey": "beal-test",                 "TagValue": "beal-test"               }             ]
                     * 
                     */
                    std::vector<TagInfo> GetTagInfoList() const;

                    /**
                     * 设置[ { "TagKey": "beal-test",                 "TagValue": "beal-test"               }             ]
                     * @param _tagInfoList [ { "TagKey": "beal-test",                 "TagValue": "beal-test"               }             ]
                     * 
                     */
                    void SetTagInfoList(const std::vector<TagInfo>& _tagInfoList);

                    /**
                     * 判断参数 TagInfoList 是否已赋值
                     * @return TagInfoList 是否已赋值
                     * 
                     */
                    bool TagInfoListHasBeenSet() const;

                    /**
                     * 获取默认为false,true表示只进行参数校验，不进行实际购买
                     * @return DryRun 默认为false,true表示只进行参数校验，不进行实际购买
                     * 
                     */
                    bool GetDryRun() const;

                    /**
                     * 设置默认为false,true表示只进行参数校验，不进行实际购买
                     * @param _dryRun 默认为false,true表示只进行参数校验，不进行实际购买
                     * 
                     */
                    void SetDryRun(const bool& _dryRun);

                    /**
                     * 判断参数 DryRun 是否已赋值
                     * @return DryRun 是否已赋值
                     * 
                     */
                    bool DryRunHasBeenSet() const;

                private:

                    /**
                     * 付费类型：付费模式：PREPAID 预付费 POSTPAID_BY_MONTH 后付费
                     */
                    std::string m_instanceChargeType;
                    bool m_instanceChargeTypeHasBeenSet;

                    /**
                     * 高防包类型：高防包类型，Enterprise(企业版) Standard(标准版) StandardPlus(标准版2.0)
                     */
                    std::string m_packageType;
                    bool m_packageTypeHasBeenSet;

                    /**
                     * 购买高防包的数量，一次购买数量不超过10
                     */
                    uint64_t m_instanceCount;
                    bool m_instanceCountHasBeenSet;

                    /**
                     * { "Period": 3, "RenewFlag": "NOTIFY_AND_AUTO_RENEW" }
                     */
                    InstanceChargePrepaid m_instanceChargePrepaid;
                    bool m_instanceChargePrepaidHasBeenSet;

                    /**
                     * { "Region": "ap-guangzhou", "ProtectIpCount": 1, "BasicProtectBandwidth": 300, "Bandwidth": 100, "ElasticProtectLimit": 0, "ElasticBandwidthFlag": true }
                     */
                    EnterprisePackageConfig m_enterprisePackageConfig;
                    bool m_enterprisePackageConfigHasBeenSet;

                    /**
                     * { "Region": "ap-guangzhou", "ProtectIpCount": 1, "BasicProtectBandwidth": 300, "Bandwidth": 100, "ElasticProtectLimit": 0, "ElasticBandwidthFlag": true }
                     */
                    StandardPackageConfig m_standardPackageConfig;
                    bool m_standardPackageConfigHasBeenSet;

                    /**
                     * { "Region": "ap-guangzhou", "ProtectCount": "TWO_TIMES", "ProtectIpCount": 1, "Bandwidth": 100, "ElasticBandwidthFlag": true }
                     */
                    StandardPlusPackageConfig m_standardPlusPackageConfig;
                    bool m_standardPlusPackageConfigHasBeenSet;

                    /**
                     * [ { "TagKey": "beal-test",                 "TagValue": "beal-test"               }             ]
                     */
                    std::vector<TagInfo> m_tagInfoList;
                    bool m_tagInfoListHasBeenSet;

                    /**
                     * 默认为false,true表示只进行参数校验，不进行实际购买
                     */
                    bool m_dryRun;
                    bool m_dryRunHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_CREATEBGPINSTANCEREQUEST_H_
