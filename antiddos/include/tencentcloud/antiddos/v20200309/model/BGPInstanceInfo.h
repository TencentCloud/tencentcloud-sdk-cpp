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

#ifndef TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_BGPINSTANCEINFO_H_
#define TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_BGPINSTANCEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * {
    "InstanceId": "bgp-00000436",
    "InstanceChargePrepaid": {
        "Period": 3,
        "RenewFlag": "NOTIFY_AND_AUTO_RENEW"
    },
    "EnterprisePackageConfig": null,
    "StandardPackageConfig": null,
    "StandardPlusPackageConfig": {
        "Region": "ap-guangzhou",
        "ProtectCount": "TWO_TIMES",
        "ProtectIpCount": 1,
        "Bandwidth": 100,
        "ElasticBandwidthFlag": true
    },
    "TagInfoList": [
    ],
    "PackageType": "StandardPlus",
    "InstanceCount": 1,
    "InstanceChargeType": "PREPAID",
    "DryRun": false
}
                */
                class BGPInstanceInfo : public AbstractModel
                {
                public:
                    BGPInstanceInfo();
                    ~BGPInstanceInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取实例Id
                     * @return InstanceId 实例Id
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例Id
                     * @param _instanceId 实例Id
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取续费周期相关
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceChargePrepaid 续费周期相关
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    InstanceChargePrepaid GetInstanceChargePrepaid() const;

                    /**
                     * 设置续费周期相关
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _instanceChargePrepaid 续费周期相关
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取企业版高防包配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EnterprisePackageConfig 企业版高防包配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    EnterprisePackageConfig GetEnterprisePackageConfig() const;

                    /**
                     * 设置企业版高防包配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _enterprisePackageConfig 企业版高防包配置
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取标准版高防包配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StandardPackageConfig 标准版高防包配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    StandardPackageConfig GetStandardPackageConfig() const;

                    /**
                     * 设置标准版高防包配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _standardPackageConfig 标准版高防包配置
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取标准版2.0高防包配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StandardPlusPackageConfig 标准版2.0高防包配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    StandardPlusPackageConfig GetStandardPlusPackageConfig() const;

                    /**
                     * 设置标准版2.0高防包配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _standardPlusPackageConfig 标准版2.0高防包配置
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取tag信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TagInfoList tag信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<TagInfo> GetTagInfoList() const;

                    /**
                     * 设置tag信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tagInfoList tag信息
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取高防包类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PackageType 高防包类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPackageType() const;

                    /**
                     * 设置高防包类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _packageType 高防包类型
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取数量1
                     * @return InstanceCount 数量1
                     * 
                     */
                    uint64_t GetInstanceCount() const;

                    /**
                     * 设置数量1
                     * @param _instanceCount 数量1
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
                     * 获取付费方式
                     * @return InstanceChargeType 付费方式
                     * 
                     */
                    std::string GetInstanceChargeType() const;

                    /**
                     * 设置付费方式
                     * @param _instanceChargeType 付费方式
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
                     * 获取无实际意义，创建时如果为true，只进行参数校验，默认为false
                     * @return DryRun 无实际意义，创建时如果为true，只进行参数校验，默认为false
                     * 
                     */
                    bool GetDryRun() const;

                    /**
                     * 设置无实际意义，创建时如果为true，只进行参数校验，默认为false
                     * @param _dryRun 无实际意义，创建时如果为true，只进行参数校验，默认为false
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
                     * 实例Id
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 续费周期相关
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    InstanceChargePrepaid m_instanceChargePrepaid;
                    bool m_instanceChargePrepaidHasBeenSet;

                    /**
                     * 企业版高防包配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    EnterprisePackageConfig m_enterprisePackageConfig;
                    bool m_enterprisePackageConfigHasBeenSet;

                    /**
                     * 标准版高防包配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    StandardPackageConfig m_standardPackageConfig;
                    bool m_standardPackageConfigHasBeenSet;

                    /**
                     * 标准版2.0高防包配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    StandardPlusPackageConfig m_standardPlusPackageConfig;
                    bool m_standardPlusPackageConfigHasBeenSet;

                    /**
                     * tag信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<TagInfo> m_tagInfoList;
                    bool m_tagInfoListHasBeenSet;

                    /**
                     * 高防包类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_packageType;
                    bool m_packageTypeHasBeenSet;

                    /**
                     * 数量1
                     */
                    uint64_t m_instanceCount;
                    bool m_instanceCountHasBeenSet;

                    /**
                     * 付费方式
                     */
                    std::string m_instanceChargeType;
                    bool m_instanceChargeTypeHasBeenSet;

                    /**
                     * 无实际意义，创建时如果为true，只进行参数校验，默认为false
                     */
                    bool m_dryRun;
                    bool m_dryRunHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_BGPINSTANCEINFO_H_
