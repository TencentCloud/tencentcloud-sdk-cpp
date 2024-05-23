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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_CREATEROCKETMQVIPINSTANCEREQUEST_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_CREATEROCKETMQVIPINSTANCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tdmq/v20200217/model/VpcInfo.h>
#include <tencentcloud/tdmq/v20200217/model/PublicAccessRule.h>
#include <tencentcloud/tdmq/v20200217/model/Tag.h>


namespace TencentCloud
{
    namespace Tdmq
    {
        namespace V20200217
        {
            namespace Model
            {
                /**
                * CreateRocketMQVipInstance请求参数结构体
                */
                class CreateRocketMQVipInstanceRequest : public AbstractModel
                {
                public:
                    CreateRocketMQVipInstanceRequest();
                    ~CreateRocketMQVipInstanceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例名称
                     * @return Name 实例名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置实例名称
                     * @param _name 实例名称
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取集群规格，支持规格有 1.通用型:rocket-vip-basic-0; 2.基础型:rocket-vip-basic-1; 3.标准型:rocket-vip-basic-2; 4.高阶Ⅰ型:rocket-vip-basic-3; 5.高阶Ⅱ型:rocket-vip-basic-4
                     * @return Spec 集群规格，支持规格有 1.通用型:rocket-vip-basic-0; 2.基础型:rocket-vip-basic-1; 3.标准型:rocket-vip-basic-2; 4.高阶Ⅰ型:rocket-vip-basic-3; 5.高阶Ⅱ型:rocket-vip-basic-4
                     * 
                     */
                    std::string GetSpec() const;

                    /**
                     * 设置集群规格，支持规格有 1.通用型:rocket-vip-basic-0; 2.基础型:rocket-vip-basic-1; 3.标准型:rocket-vip-basic-2; 4.高阶Ⅰ型:rocket-vip-basic-3; 5.高阶Ⅱ型:rocket-vip-basic-4
                     * @param _spec 集群规格，支持规格有 1.通用型:rocket-vip-basic-0; 2.基础型:rocket-vip-basic-1; 3.标准型:rocket-vip-basic-2; 4.高阶Ⅰ型:rocket-vip-basic-3; 5.高阶Ⅱ型:rocket-vip-basic-4
                     * 
                     */
                    void SetSpec(const std::string& _spec);

                    /**
                     * 判断参数 Spec 是否已赋值
                     * @return Spec 是否已赋值
                     * 
                     */
                    bool SpecHasBeenSet() const;

                    /**
                     * 获取节点数量，最小2，最大20
                     * @return NodeCount 节点数量，最小2，最大20
                     * 
                     */
                    int64_t GetNodeCount() const;

                    /**
                     * 设置节点数量，最小2，最大20
                     * @param _nodeCount 节点数量，最小2，最大20
                     * 
                     */
                    void SetNodeCount(const int64_t& _nodeCount);

                    /**
                     * 判断参数 NodeCount 是否已赋值
                     * @return NodeCount 是否已赋值
                     * 
                     */
                    bool NodeCountHasBeenSet() const;

                    /**
                     * 获取单节点存储空间，GB为单位，最低200GB
                     * @return StorageSize 单节点存储空间，GB为单位，最低200GB
                     * 
                     */
                    int64_t GetStorageSize() const;

                    /**
                     * 设置单节点存储空间，GB为单位，最低200GB
                     * @param _storageSize 单节点存储空间，GB为单位，最低200GB
                     * 
                     */
                    void SetStorageSize(const int64_t& _storageSize);

                    /**
                     * 判断参数 StorageSize 是否已赋值
                     * @return StorageSize 是否已赋值
                     * 
                     */
                    bool StorageSizeHasBeenSet() const;

                    /**
                     * 获取节点部署的区域ID列表，如广州一区，则是100001，具体可查询腾讯云官网
                     * @return ZoneIds 节点部署的区域ID列表，如广州一区，则是100001，具体可查询腾讯云官网
                     * 
                     */
                    std::vector<std::string> GetZoneIds() const;

                    /**
                     * 设置节点部署的区域ID列表，如广州一区，则是100001，具体可查询腾讯云官网
                     * @param _zoneIds 节点部署的区域ID列表，如广州一区，则是100001，具体可查询腾讯云官网
                     * 
                     */
                    void SetZoneIds(const std::vector<std::string>& _zoneIds);

                    /**
                     * 判断参数 ZoneIds 是否已赋值
                     * @return ZoneIds 是否已赋值
                     * 
                     */
                    bool ZoneIdsHasBeenSet() const;

                    /**
                     * 获取VPC信息
                     * @return VpcInfo VPC信息
                     * 
                     */
                    VpcInfo GetVpcInfo() const;

                    /**
                     * 设置VPC信息
                     * @param _vpcInfo VPC信息
                     * 
                     */
                    void SetVpcInfo(const VpcInfo& _vpcInfo);

                    /**
                     * 判断参数 VpcInfo 是否已赋值
                     * @return VpcInfo 是否已赋值
                     * 
                     */
                    bool VpcInfoHasBeenSet() const;

                    /**
                     * 获取购买时长，月为单位
                     * @return TimeSpan 购买时长，月为单位
                     * 
                     */
                    int64_t GetTimeSpan() const;

                    /**
                     * 设置购买时长，月为单位
                     * @param _timeSpan 购买时长，月为单位
                     * 
                     */
                    void SetTimeSpan(const int64_t& _timeSpan);

                    /**
                     * 判断参数 TimeSpan 是否已赋值
                     * @return TimeSpan 是否已赋值
                     * 
                     */
                    bool TimeSpanHasBeenSet() const;

                    /**
                     * 获取是否用于迁移上云，默认为false
                     * @return SupportsMigrateToCloud 是否用于迁移上云，默认为false
                     * 
                     */
                    bool GetSupportsMigrateToCloud() const;

                    /**
                     * 设置是否用于迁移上云，默认为false
                     * @param _supportsMigrateToCloud 是否用于迁移上云，默认为false
                     * 
                     */
                    void SetSupportsMigrateToCloud(const bool& _supportsMigrateToCloud);

                    /**
                     * 判断参数 SupportsMigrateToCloud 是否已赋值
                     * @return SupportsMigrateToCloud 是否已赋值
                     * 
                     */
                    bool SupportsMigrateToCloudHasBeenSet() const;

                    /**
                     * 获取是否开启公网
                     * @return EnablePublic 是否开启公网
                     * 
                     */
                    bool GetEnablePublic() const;

                    /**
                     * 设置是否开启公网
                     * @param _enablePublic 是否开启公网
                     * 
                     */
                    void SetEnablePublic(const bool& _enablePublic);

                    /**
                     * 判断参数 EnablePublic 是否已赋值
                     * @return EnablePublic 是否已赋值
                     * 
                     */
                    bool EnablePublicHasBeenSet() const;

                    /**
                     * 获取公网带宽，在开启公网情况下为必传字段
                     * @return Bandwidth 公网带宽，在开启公网情况下为必传字段
                     * 
                     */
                    int64_t GetBandwidth() const;

                    /**
                     * 设置公网带宽，在开启公网情况下为必传字段
                     * @param _bandwidth 公网带宽，在开启公网情况下为必传字段
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
                     * 获取公网白名单
                     * @return IpRules 公网白名单
                     * 
                     */
                    std::vector<PublicAccessRule> GetIpRules() const;

                    /**
                     * 设置公网白名单
                     * @param _ipRules 公网白名单
                     * 
                     */
                    void SetIpRules(const std::vector<PublicAccessRule>& _ipRules);

                    /**
                     * 判断参数 IpRules 是否已赋值
                     * @return IpRules 是否已赋值
                     * 
                     */
                    bool IpRulesHasBeenSet() const;

                    /**
                     * 获取标签
                     * @return Tags 标签
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置标签
                     * @param _tags 标签
                     * 
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                private:

                    /**
                     * 实例名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 集群规格，支持规格有 1.通用型:rocket-vip-basic-0; 2.基础型:rocket-vip-basic-1; 3.标准型:rocket-vip-basic-2; 4.高阶Ⅰ型:rocket-vip-basic-3; 5.高阶Ⅱ型:rocket-vip-basic-4
                     */
                    std::string m_spec;
                    bool m_specHasBeenSet;

                    /**
                     * 节点数量，最小2，最大20
                     */
                    int64_t m_nodeCount;
                    bool m_nodeCountHasBeenSet;

                    /**
                     * 单节点存储空间，GB为单位，最低200GB
                     */
                    int64_t m_storageSize;
                    bool m_storageSizeHasBeenSet;

                    /**
                     * 节点部署的区域ID列表，如广州一区，则是100001，具体可查询腾讯云官网
                     */
                    std::vector<std::string> m_zoneIds;
                    bool m_zoneIdsHasBeenSet;

                    /**
                     * VPC信息
                     */
                    VpcInfo m_vpcInfo;
                    bool m_vpcInfoHasBeenSet;

                    /**
                     * 购买时长，月为单位
                     */
                    int64_t m_timeSpan;
                    bool m_timeSpanHasBeenSet;

                    /**
                     * 是否用于迁移上云，默认为false
                     */
                    bool m_supportsMigrateToCloud;
                    bool m_supportsMigrateToCloudHasBeenSet;

                    /**
                     * 是否开启公网
                     */
                    bool m_enablePublic;
                    bool m_enablePublicHasBeenSet;

                    /**
                     * 公网带宽，在开启公网情况下为必传字段
                     */
                    int64_t m_bandwidth;
                    bool m_bandwidthHasBeenSet;

                    /**
                     * 公网白名单
                     */
                    std::vector<PublicAccessRule> m_ipRules;
                    bool m_ipRulesHasBeenSet;

                    /**
                     * 标签
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_CREATEROCKETMQVIPINSTANCEREQUEST_H_
