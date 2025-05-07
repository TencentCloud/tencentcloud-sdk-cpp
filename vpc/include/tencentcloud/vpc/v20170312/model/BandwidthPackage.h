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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_BANDWIDTHPACKAGE_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_BANDWIDTHPACKAGE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vpc/v20170312/model/Resource.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * 描述带宽包信息的结构
                */
                class BandwidthPackage : public AbstractModel
                {
                public:
                    BandwidthPackage();
                    ~BandwidthPackage() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取带宽包唯一标识Id
                     * @return BandwidthPackageId 带宽包唯一标识Id
                     * 
                     */
                    std::string GetBandwidthPackageId() const;

                    /**
                     * 设置带宽包唯一标识Id
                     * @param _bandwidthPackageId 带宽包唯一标识Id
                     * 
                     */
                    void SetBandwidthPackageId(const std::string& _bandwidthPackageId);

                    /**
                     * 判断参数 BandwidthPackageId 是否已赋值
                     * @return BandwidthPackageId 是否已赋值
                     * 
                     */
                    bool BandwidthPackageIdHasBeenSet() const;

                    /**
                     * 获取带宽包类型，包括：
<li>BGP: 普通BGP共享带宽包</li>
<li>HIGH_QUALITY_BGP: 精品BGP共享带宽包</li>
<li>ANYCAST：公网加速带宽包</li>
<li>SINGLEISP_CMCC: 中国移动共享带宽包</li>
<li>SINGLEISP_CTCC: 中国电信共享带宽包</li>
<li>SINGLEISP_CUCC: 中国联通共享带宽包</li>
                     * @return NetworkType 带宽包类型，包括：
<li>BGP: 普通BGP共享带宽包</li>
<li>HIGH_QUALITY_BGP: 精品BGP共享带宽包</li>
<li>ANYCAST：公网加速带宽包</li>
<li>SINGLEISP_CMCC: 中国移动共享带宽包</li>
<li>SINGLEISP_CTCC: 中国电信共享带宽包</li>
<li>SINGLEISP_CUCC: 中国联通共享带宽包</li>
                     * 
                     */
                    std::string GetNetworkType() const;

                    /**
                     * 设置带宽包类型，包括：
<li>BGP: 普通BGP共享带宽包</li>
<li>HIGH_QUALITY_BGP: 精品BGP共享带宽包</li>
<li>ANYCAST：公网加速带宽包</li>
<li>SINGLEISP_CMCC: 中国移动共享带宽包</li>
<li>SINGLEISP_CTCC: 中国电信共享带宽包</li>
<li>SINGLEISP_CUCC: 中国联通共享带宽包</li>
                     * @param _networkType 带宽包类型，包括：
<li>BGP: 普通BGP共享带宽包</li>
<li>HIGH_QUALITY_BGP: 精品BGP共享带宽包</li>
<li>ANYCAST：公网加速带宽包</li>
<li>SINGLEISP_CMCC: 中国移动共享带宽包</li>
<li>SINGLEISP_CTCC: 中国电信共享带宽包</li>
<li>SINGLEISP_CUCC: 中国联通共享带宽包</li>
                     * 
                     */
                    void SetNetworkType(const std::string& _networkType);

                    /**
                     * 判断参数 NetworkType 是否已赋值
                     * @return NetworkType 是否已赋值
                     * 
                     */
                    bool NetworkTypeHasBeenSet() const;

                    /**
                     * 获取带宽包计费类型, 包括:
<li>ENHANCED95_POSTPAID_BY_MONTH: 后付费-增强型95计费</li>
<li>PRIMARY_TRAFFIC_POSTPAID_BY_HOUR: 后付费-按主流量计费</li>
<li>BANDWIDTH_POSTPAID_BY_DAY: 常规BGP-后付费-按带宽计费</li>
<li>FIXED_PREPAID_BY_MONTH: 常规BGP-预付费</li>
<li>PEAK_BANDWIDTH_POSTPAID_BY_DAY: 静态单线-后付费-按日结算</li>
<li>TOP5_POSTPAID_BY_MONTH: 后付费-TOP5计费，如需使用，请提交工单申请</li>
                     * @return ChargeType 带宽包计费类型, 包括:
<li>ENHANCED95_POSTPAID_BY_MONTH: 后付费-增强型95计费</li>
<li>PRIMARY_TRAFFIC_POSTPAID_BY_HOUR: 后付费-按主流量计费</li>
<li>BANDWIDTH_POSTPAID_BY_DAY: 常规BGP-后付费-按带宽计费</li>
<li>FIXED_PREPAID_BY_MONTH: 常规BGP-预付费</li>
<li>PEAK_BANDWIDTH_POSTPAID_BY_DAY: 静态单线-后付费-按日结算</li>
<li>TOP5_POSTPAID_BY_MONTH: 后付费-TOP5计费，如需使用，请提交工单申请</li>
                     * 
                     */
                    std::string GetChargeType() const;

                    /**
                     * 设置带宽包计费类型, 包括:
<li>ENHANCED95_POSTPAID_BY_MONTH: 后付费-增强型95计费</li>
<li>PRIMARY_TRAFFIC_POSTPAID_BY_HOUR: 后付费-按主流量计费</li>
<li>BANDWIDTH_POSTPAID_BY_DAY: 常规BGP-后付费-按带宽计费</li>
<li>FIXED_PREPAID_BY_MONTH: 常规BGP-预付费</li>
<li>PEAK_BANDWIDTH_POSTPAID_BY_DAY: 静态单线-后付费-按日结算</li>
<li>TOP5_POSTPAID_BY_MONTH: 后付费-TOP5计费，如需使用，请提交工单申请</li>
                     * @param _chargeType 带宽包计费类型, 包括:
<li>ENHANCED95_POSTPAID_BY_MONTH: 后付费-增强型95计费</li>
<li>PRIMARY_TRAFFIC_POSTPAID_BY_HOUR: 后付费-按主流量计费</li>
<li>BANDWIDTH_POSTPAID_BY_DAY: 常规BGP-后付费-按带宽计费</li>
<li>FIXED_PREPAID_BY_MONTH: 常规BGP-预付费</li>
<li>PEAK_BANDWIDTH_POSTPAID_BY_DAY: 静态单线-后付费-按日结算</li>
<li>TOP5_POSTPAID_BY_MONTH: 后付费-TOP5计费，如需使用，请提交工单申请</li>
                     * 
                     */
                    void SetChargeType(const std::string& _chargeType);

                    /**
                     * 判断参数 ChargeType 是否已赋值
                     * @return ChargeType 是否已赋值
                     * 
                     */
                    bool ChargeTypeHasBeenSet() const;

                    /**
                     * 获取带宽包名称
                     * @return BandwidthPackageName 带宽包名称
                     * 
                     */
                    std::string GetBandwidthPackageName() const;

                    /**
                     * 设置带宽包名称
                     * @param _bandwidthPackageName 带宽包名称
                     * 
                     */
                    void SetBandwidthPackageName(const std::string& _bandwidthPackageName);

                    /**
                     * 判断参数 BandwidthPackageName 是否已赋值
                     * @return BandwidthPackageName 是否已赋值
                     * 
                     */
                    bool BandwidthPackageNameHasBeenSet() const;

                    /**
                     * 获取带宽包创建时间。按照`ISO8601`标准表示，并且使用`UTC`时间。格式为：`YYYY-MM-DDThh:mm:ssZ`。
                     * @return CreatedTime 带宽包创建时间。按照`ISO8601`标准表示，并且使用`UTC`时间。格式为：`YYYY-MM-DDThh:mm:ssZ`。
                     * 
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置带宽包创建时间。按照`ISO8601`标准表示，并且使用`UTC`时间。格式为：`YYYY-MM-DDThh:mm:ssZ`。
                     * @param _createdTime 带宽包创建时间。按照`ISO8601`标准表示，并且使用`UTC`时间。格式为：`YYYY-MM-DDThh:mm:ssZ`。
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
                     * 获取带宽包状态，包括'CREATING','CREATED','DELETING','DELETED'
                     * @return Status 带宽包状态，包括'CREATING','CREATED','DELETING','DELETED'
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置带宽包状态，包括'CREATING','CREATED','DELETING','DELETED'
                     * @param _status 带宽包状态，包括'CREATING','CREATED','DELETING','DELETED'
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
                     * 获取带宽包资源信息
                     * @return ResourceSet 带宽包资源信息
                     * 
                     */
                    std::vector<Resource> GetResourceSet() const;

                    /**
                     * 设置带宽包资源信息
                     * @param _resourceSet 带宽包资源信息
                     * 
                     */
                    void SetResourceSet(const std::vector<Resource>& _resourceSet);

                    /**
                     * 判断参数 ResourceSet 是否已赋值
                     * @return ResourceSet 是否已赋值
                     * 
                     */
                    bool ResourceSetHasBeenSet() const;

                    /**
                     * 获取带宽包限速大小。单位：Mbps，-1表示不限速。
                     * @return Bandwidth 带宽包限速大小。单位：Mbps，-1表示不限速。
                     * 
                     */
                    int64_t GetBandwidth() const;

                    /**
                     * 设置带宽包限速大小。单位：Mbps，-1表示不限速。
                     * @param _bandwidth 带宽包限速大小。单位：Mbps，-1表示不限速。
                     * 
                     */
                    void SetBandwidth(const int64_t& _bandwidth);

                    /**
                     * 判断参数 Bandwidth 是否已赋值
                     * @return Bandwidth 是否已赋值
                     * 
                     */
                    bool BandwidthHasBeenSet() const;

                    /**
                     * 获取网络出口
                     * @return Egress 网络出口
                     * 
                     */
                    std::string GetEgress() const;

                    /**
                     * 设置网络出口
                     * @param _egress 网络出口
                     * 
                     */
                    void SetEgress(const std::string& _egress);

                    /**
                     * 判断参数 Egress 是否已赋值
                     * @return Egress 是否已赋值
                     * 
                     */
                    bool EgressHasBeenSet() const;

                    /**
                     * 获取带宽包到期时间，只有预付费会返回，按量计费返回为null
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Deadline 带宽包到期时间，只有预付费会返回，按量计费返回为null
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDeadline() const;

                    /**
                     * 设置带宽包到期时间，只有预付费会返回，按量计费返回为null
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _deadline 带宽包到期时间，只有预付费会返回，按量计费返回为null
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDeadline(const std::string& _deadline);

                    /**
                     * 判断参数 Deadline 是否已赋值
                     * @return Deadline 是否已赋值
                     * 
                     */
                    bool DeadlineHasBeenSet() const;

                private:

                    /**
                     * 带宽包唯一标识Id
                     */
                    std::string m_bandwidthPackageId;
                    bool m_bandwidthPackageIdHasBeenSet;

                    /**
                     * 带宽包类型，包括：
<li>BGP: 普通BGP共享带宽包</li>
<li>HIGH_QUALITY_BGP: 精品BGP共享带宽包</li>
<li>ANYCAST：公网加速带宽包</li>
<li>SINGLEISP_CMCC: 中国移动共享带宽包</li>
<li>SINGLEISP_CTCC: 中国电信共享带宽包</li>
<li>SINGLEISP_CUCC: 中国联通共享带宽包</li>
                     */
                    std::string m_networkType;
                    bool m_networkTypeHasBeenSet;

                    /**
                     * 带宽包计费类型, 包括:
<li>ENHANCED95_POSTPAID_BY_MONTH: 后付费-增强型95计费</li>
<li>PRIMARY_TRAFFIC_POSTPAID_BY_HOUR: 后付费-按主流量计费</li>
<li>BANDWIDTH_POSTPAID_BY_DAY: 常规BGP-后付费-按带宽计费</li>
<li>FIXED_PREPAID_BY_MONTH: 常规BGP-预付费</li>
<li>PEAK_BANDWIDTH_POSTPAID_BY_DAY: 静态单线-后付费-按日结算</li>
<li>TOP5_POSTPAID_BY_MONTH: 后付费-TOP5计费，如需使用，请提交工单申请</li>
                     */
                    std::string m_chargeType;
                    bool m_chargeTypeHasBeenSet;

                    /**
                     * 带宽包名称
                     */
                    std::string m_bandwidthPackageName;
                    bool m_bandwidthPackageNameHasBeenSet;

                    /**
                     * 带宽包创建时间。按照`ISO8601`标准表示，并且使用`UTC`时间。格式为：`YYYY-MM-DDThh:mm:ssZ`。
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * 带宽包状态，包括'CREATING','CREATED','DELETING','DELETED'
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 带宽包资源信息
                     */
                    std::vector<Resource> m_resourceSet;
                    bool m_resourceSetHasBeenSet;

                    /**
                     * 带宽包限速大小。单位：Mbps，-1表示不限速。
                     */
                    int64_t m_bandwidth;
                    bool m_bandwidthHasBeenSet;

                    /**
                     * 网络出口
                     */
                    std::string m_egress;
                    bool m_egressHasBeenSet;

                    /**
                     * 带宽包到期时间，只有预付费会返回，按量计费返回为null
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_deadline;
                    bool m_deadlineHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_BANDWIDTHPACKAGE_H_
