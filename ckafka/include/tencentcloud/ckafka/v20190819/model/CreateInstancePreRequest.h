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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_CREATEINSTANCEPREREQUEST_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_CREATEINSTANCEPREREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ckafka/v20190819/model/Tag.h>


namespace TencentCloud
{
    namespace Ckafka
    {
        namespace V20190819
        {
            namespace Model
            {
                /**
                * CreateInstancePre请求参数结构体
                */
                class CreateInstancePreRequest : public AbstractModel
                {
                public:
                    CreateInstancePreRequest();
                    ~CreateInstancePreRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例名称，是一个不超过 64 个字符的字符串，必须以字母为首字符，剩余部分可以包含字母、数字和横划线(-)
                     * @return InstanceName 实例名称，是一个不超过 64 个字符的字符串，必须以字母为首字符，剩余部分可以包含字母、数字和横划线(-)
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置实例名称，是一个不超过 64 个字符的字符串，必须以字母为首字符，剩余部分可以包含字母、数字和横划线(-)
                     * @param InstanceName 实例名称，是一个不超过 64 个字符的字符串，必须以字母为首字符，剩余部分可以包含字母、数字和横划线(-)
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取可用区
                     * @return ZoneId 可用区
                     */
                    int64_t GetZoneId() const;

                    /**
                     * 设置可用区
                     * @param ZoneId 可用区
                     */
                    void SetZoneId(const int64_t& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取预付费购买时长，例如 "1m",就是一个月
                     * @return Period 预付费购买时长，例如 "1m",就是一个月
                     */
                    std::string GetPeriod() const;

                    /**
                     * 设置预付费购买时长，例如 "1m",就是一个月
                     * @param Period 预付费购买时长，例如 "1m",就是一个月
                     */
                    void SetPeriod(const std::string& _period);

                    /**
                     * 判断参数 Period 是否已赋值
                     * @return Period 是否已赋值
                     */
                    bool PeriodHasBeenSet() const;

                    /**
                     * 获取实例规格说明 专业版实例[所有规格]填写1.
标准版实例 ([入门型]填写1，[标准型]填写2，[进阶型]填写3，[容量型]填写4，[高阶型1]填写5，[高阶性2]填写6,[高阶型3]填写7,[高阶型4]填写8，[独占型]填写9。
                     * @return InstanceType 实例规格说明 专业版实例[所有规格]填写1.
标准版实例 ([入门型]填写1，[标准型]填写2，[进阶型]填写3，[容量型]填写4，[高阶型1]填写5，[高阶性2]填写6,[高阶型3]填写7,[高阶型4]填写8，[独占型]填写9。
                     */
                    int64_t GetInstanceType() const;

                    /**
                     * 设置实例规格说明 专业版实例[所有规格]填写1.
标准版实例 ([入门型]填写1，[标准型]填写2，[进阶型]填写3，[容量型]填写4，[高阶型1]填写5，[高阶性2]填写6,[高阶型3]填写7,[高阶型4]填写8，[独占型]填写9。
                     * @param InstanceType 实例规格说明 专业版实例[所有规格]填写1.
标准版实例 ([入门型]填写1，[标准型]填写2，[进阶型]填写3，[容量型]填写4，[高阶型1]填写5，[高阶性2]填写6,[高阶型3]填写7,[高阶型4]填写8，[独占型]填写9。
                     */
                    void SetInstanceType(const int64_t& _instanceType);

                    /**
                     * 判断参数 InstanceType 是否已赋值
                     * @return InstanceType 是否已赋值
                     */
                    bool InstanceTypeHasBeenSet() const;

                    /**
                     * 获取vpcId，不填默认基础网络
                     * @return VpcId vpcId，不填默认基础网络
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置vpcId，不填默认基础网络
                     * @param VpcId vpcId，不填默认基础网络
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取子网id，vpc网络需要传该参数，基础网络可以不传
                     * @return SubnetId 子网id，vpc网络需要传该参数，基础网络可以不传
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置子网id，vpc网络需要传该参数，基础网络可以不传
                     * @param SubnetId 子网id，vpc网络需要传该参数，基础网络可以不传
                     */
                    void SetSubnetId(const std::string& _subnetId);

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     */
                    bool SubnetIdHasBeenSet() const;

                    /**
                     * 获取可选。实例日志的最长保留时间，单位分钟，默认为10080（7天），最大30天，不填默认0，代表不开启日志保留时间回收策略
                     * @return MsgRetentionTime 可选。实例日志的最长保留时间，单位分钟，默认为10080（7天），最大30天，不填默认0，代表不开启日志保留时间回收策略
                     */
                    int64_t GetMsgRetentionTime() const;

                    /**
                     * 设置可选。实例日志的最长保留时间，单位分钟，默认为10080（7天），最大30天，不填默认0，代表不开启日志保留时间回收策略
                     * @param MsgRetentionTime 可选。实例日志的最长保留时间，单位分钟，默认为10080（7天），最大30天，不填默认0，代表不开启日志保留时间回收策略
                     */
                    void SetMsgRetentionTime(const int64_t& _msgRetentionTime);

                    /**
                     * 判断参数 MsgRetentionTime 是否已赋值
                     * @return MsgRetentionTime 是否已赋值
                     */
                    bool MsgRetentionTimeHasBeenSet() const;

                    /**
                     * 获取创建实例时可以选择集群Id, 该入参表示集群Id
                     * @return ClusterId 创建实例时可以选择集群Id, 该入参表示集群Id
                     */
                    int64_t GetClusterId() const;

                    /**
                     * 设置创建实例时可以选择集群Id, 该入参表示集群Id
                     * @param ClusterId 创建实例时可以选择集群Id, 该入参表示集群Id
                     */
                    void SetClusterId(const int64_t& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取预付费自动续费标记，0表示默认状态(用户未设置，即初始状态)， 1表示自动续费，2表示明确不自动续费(用户设置)
                     * @return RenewFlag 预付费自动续费标记，0表示默认状态(用户未设置，即初始状态)， 1表示自动续费，2表示明确不自动续费(用户设置)
                     */
                    int64_t GetRenewFlag() const;

                    /**
                     * 设置预付费自动续费标记，0表示默认状态(用户未设置，即初始状态)， 1表示自动续费，2表示明确不自动续费(用户设置)
                     * @param RenewFlag 预付费自动续费标记，0表示默认状态(用户未设置，即初始状态)， 1表示自动续费，2表示明确不自动续费(用户设置)
                     */
                    void SetRenewFlag(const int64_t& _renewFlag);

                    /**
                     * 判断参数 RenewFlag 是否已赋值
                     * @return RenewFlag 是否已赋值
                     */
                    bool RenewFlagHasBeenSet() const;

                    /**
                     * 获取CKafka版本号[0.10.2、1.1.1、2.4.1], 默认是1.1.1
                     * @return KafkaVersion CKafka版本号[0.10.2、1.1.1、2.4.1], 默认是1.1.1
                     */
                    std::string GetKafkaVersion() const;

                    /**
                     * 设置CKafka版本号[0.10.2、1.1.1、2.4.1], 默认是1.1.1
                     * @param KafkaVersion CKafka版本号[0.10.2、1.1.1、2.4.1], 默认是1.1.1
                     */
                    void SetKafkaVersion(const std::string& _kafkaVersion);

                    /**
                     * 判断参数 KafkaVersion 是否已赋值
                     * @return KafkaVersion 是否已赋值
                     */
                    bool KafkaVersionHasBeenSet() const;

                    /**
                     * 获取实例类型: [标准版实例]填写 standard(默认), [专业版实例]填写 profession
                     * @return SpecificationsType 实例类型: [标准版实例]填写 standard(默认), [专业版实例]填写 profession
                     */
                    std::string GetSpecificationsType() const;

                    /**
                     * 设置实例类型: [标准版实例]填写 standard(默认), [专业版实例]填写 profession
                     * @param SpecificationsType 实例类型: [标准版实例]填写 standard(默认), [专业版实例]填写 profession
                     */
                    void SetSpecificationsType(const std::string& _specificationsType);

                    /**
                     * 判断参数 SpecificationsType 是否已赋值
                     * @return SpecificationsType 是否已赋值
                     */
                    bool SpecificationsTypeHasBeenSet() const;

                    /**
                     * 获取磁盘大小,专业版不填写默认最小磁盘,填写后根据磁盘带宽分区数弹性计算
                     * @return DiskSize 磁盘大小,专业版不填写默认最小磁盘,填写后根据磁盘带宽分区数弹性计算
                     */
                    int64_t GetDiskSize() const;

                    /**
                     * 设置磁盘大小,专业版不填写默认最小磁盘,填写后根据磁盘带宽分区数弹性计算
                     * @param DiskSize 磁盘大小,专业版不填写默认最小磁盘,填写后根据磁盘带宽分区数弹性计算
                     */
                    void SetDiskSize(const int64_t& _diskSize);

                    /**
                     * 判断参数 DiskSize 是否已赋值
                     * @return DiskSize 是否已赋值
                     */
                    bool DiskSizeHasBeenSet() const;

                    /**
                     * 获取带宽,专业版不填写默认最小带宽,填写后根据磁盘带宽分区数弹性计算
                     * @return BandWidth 带宽,专业版不填写默认最小带宽,填写后根据磁盘带宽分区数弹性计算
                     */
                    int64_t GetBandWidth() const;

                    /**
                     * 设置带宽,专业版不填写默认最小带宽,填写后根据磁盘带宽分区数弹性计算
                     * @param BandWidth 带宽,专业版不填写默认最小带宽,填写后根据磁盘带宽分区数弹性计算
                     */
                    void SetBandWidth(const int64_t& _bandWidth);

                    /**
                     * 判断参数 BandWidth 是否已赋值
                     * @return BandWidth 是否已赋值
                     */
                    bool BandWidthHasBeenSet() const;

                    /**
                     * 获取分区大小,专业版不填写默认最小分区数,填写后根据磁盘带宽分区数弹性计算
                     * @return Partition 分区大小,专业版不填写默认最小分区数,填写后根据磁盘带宽分区数弹性计算
                     */
                    int64_t GetPartition() const;

                    /**
                     * 设置分区大小,专业版不填写默认最小分区数,填写后根据磁盘带宽分区数弹性计算
                     * @param Partition 分区大小,专业版不填写默认最小分区数,填写后根据磁盘带宽分区数弹性计算
                     */
                    void SetPartition(const int64_t& _partition);

                    /**
                     * 判断参数 Partition 是否已赋值
                     * @return Partition 是否已赋值
                     */
                    bool PartitionHasBeenSet() const;

                    /**
                     * 获取标签
                     * @return Tags 标签
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置标签
                     * @param Tags 标签
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取磁盘类型（ssd填写CLOUD_SSD，sata填写CLOUD_BASIC）
                     * @return DiskType 磁盘类型（ssd填写CLOUD_SSD，sata填写CLOUD_BASIC）
                     */
                    std::string GetDiskType() const;

                    /**
                     * 设置磁盘类型（ssd填写CLOUD_SSD，sata填写CLOUD_BASIC）
                     * @param DiskType 磁盘类型（ssd填写CLOUD_SSD，sata填写CLOUD_BASIC）
                     */
                    void SetDiskType(const std::string& _diskType);

                    /**
                     * 判断参数 DiskType 是否已赋值
                     * @return DiskType 是否已赋值
                     */
                    bool DiskTypeHasBeenSet() const;

                    /**
                     * 获取跨可用区，zoneIds必填
                     * @return MultiZoneFlag 跨可用区，zoneIds必填
                     */
                    bool GetMultiZoneFlag() const;

                    /**
                     * 设置跨可用区，zoneIds必填
                     * @param MultiZoneFlag 跨可用区，zoneIds必填
                     */
                    void SetMultiZoneFlag(const bool& _multiZoneFlag);

                    /**
                     * 判断参数 MultiZoneFlag 是否已赋值
                     * @return MultiZoneFlag 是否已赋值
                     */
                    bool MultiZoneFlagHasBeenSet() const;

                    /**
                     * 获取可用区列表
                     * @return ZoneIds 可用区列表
                     */
                    std::vector<int64_t> GetZoneIds() const;

                    /**
                     * 设置可用区列表
                     * @param ZoneIds 可用区列表
                     */
                    void SetZoneIds(const std::vector<int64_t>& _zoneIds);

                    /**
                     * 判断参数 ZoneIds 是否已赋值
                     * @return ZoneIds 是否已赋值
                     */
                    bool ZoneIdsHasBeenSet() const;

                private:

                    /**
                     * 实例名称，是一个不超过 64 个字符的字符串，必须以字母为首字符，剩余部分可以包含字母、数字和横划线(-)
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * 可用区
                     */
                    int64_t m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * 预付费购买时长，例如 "1m",就是一个月
                     */
                    std::string m_period;
                    bool m_periodHasBeenSet;

                    /**
                     * 实例规格说明 专业版实例[所有规格]填写1.
标准版实例 ([入门型]填写1，[标准型]填写2，[进阶型]填写3，[容量型]填写4，[高阶型1]填写5，[高阶性2]填写6,[高阶型3]填写7,[高阶型4]填写8，[独占型]填写9。
                     */
                    int64_t m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * vpcId，不填默认基础网络
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 子网id，vpc网络需要传该参数，基础网络可以不传
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * 可选。实例日志的最长保留时间，单位分钟，默认为10080（7天），最大30天，不填默认0，代表不开启日志保留时间回收策略
                     */
                    int64_t m_msgRetentionTime;
                    bool m_msgRetentionTimeHasBeenSet;

                    /**
                     * 创建实例时可以选择集群Id, 该入参表示集群Id
                     */
                    int64_t m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 预付费自动续费标记，0表示默认状态(用户未设置，即初始状态)， 1表示自动续费，2表示明确不自动续费(用户设置)
                     */
                    int64_t m_renewFlag;
                    bool m_renewFlagHasBeenSet;

                    /**
                     * CKafka版本号[0.10.2、1.1.1、2.4.1], 默认是1.1.1
                     */
                    std::string m_kafkaVersion;
                    bool m_kafkaVersionHasBeenSet;

                    /**
                     * 实例类型: [标准版实例]填写 standard(默认), [专业版实例]填写 profession
                     */
                    std::string m_specificationsType;
                    bool m_specificationsTypeHasBeenSet;

                    /**
                     * 磁盘大小,专业版不填写默认最小磁盘,填写后根据磁盘带宽分区数弹性计算
                     */
                    int64_t m_diskSize;
                    bool m_diskSizeHasBeenSet;

                    /**
                     * 带宽,专业版不填写默认最小带宽,填写后根据磁盘带宽分区数弹性计算
                     */
                    int64_t m_bandWidth;
                    bool m_bandWidthHasBeenSet;

                    /**
                     * 分区大小,专业版不填写默认最小分区数,填写后根据磁盘带宽分区数弹性计算
                     */
                    int64_t m_partition;
                    bool m_partitionHasBeenSet;

                    /**
                     * 标签
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 磁盘类型（ssd填写CLOUD_SSD，sata填写CLOUD_BASIC）
                     */
                    std::string m_diskType;
                    bool m_diskTypeHasBeenSet;

                    /**
                     * 跨可用区，zoneIds必填
                     */
                    bool m_multiZoneFlag;
                    bool m_multiZoneFlagHasBeenSet;

                    /**
                     * 可用区列表
                     */
                    std::vector<int64_t> m_zoneIds;
                    bool m_zoneIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_CREATEINSTANCEPREREQUEST_H_
