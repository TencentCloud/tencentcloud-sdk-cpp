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
                     * 获取<p>ckafka集群实例Name，是一个不超过 128 个字符的任意字符串。</p>
                     * @return InstanceName <p>ckafka集群实例Name，是一个不超过 128 个字符的任意字符串。</p>
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置<p>ckafka集群实例Name，是一个不超过 128 个字符的任意字符串。</p>
                     * @param _instanceName <p>ckafka集群实例Name，是一个不超过 128 个字符的任意字符串。</p>
                     * 
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     * 
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取<p>可用区。当购买多可用区实例时，当前参数为主可用区。  <a href="https://cloud.tencent.com/document/product/597/55246">查看可用区</a></p>
                     * @return ZoneId <p>可用区。当购买多可用区实例时，当前参数为主可用区。  <a href="https://cloud.tencent.com/document/product/597/55246">查看可用区</a></p>
                     * 
                     */
                    int64_t GetZoneId() const;

                    /**
                     * 设置<p>可用区。当购买多可用区实例时，当前参数为主可用区。  <a href="https://cloud.tencent.com/document/product/597/55246">查看可用区</a></p>
                     * @param _zoneId <p>可用区。当购买多可用区实例时，当前参数为主可用区。  <a href="https://cloud.tencent.com/document/product/597/55246">查看可用区</a></p>
                     * 
                     */
                    void SetZoneId(const int64_t& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取<p>预付费购买时长，例如 "1m",就是一个月,取值范围 1m~36m</p>
                     * @return Period <p>预付费购买时长，例如 "1m",就是一个月,取值范围 1m~36m</p>
                     * 
                     */
                    std::string GetPeriod() const;

                    /**
                     * 设置<p>预付费购买时长，例如 "1m",就是一个月,取值范围 1m~36m</p>
                     * @param _period <p>预付费购买时长，例如 "1m",就是一个月,取值范围 1m~36m</p>
                     * 
                     */
                    void SetPeriod(const std::string& _period);

                    /**
                     * 判断参数 Period 是否已赋值
                     * @return Period 是否已赋值
                     * 
                     */
                    bool PeriodHasBeenSet() const;

                    /**
                     * 获取<p>国际站标准版实例规格。目前只有国际站标准版使用当前字段区分规格，国内站标准版使用峰值带宽区分规格。除了国际站标准版外的所有实例填写 1 即可。国际站标准版实例：入门型(general)]填写1；[标准型(standard)]填写2；[进阶型(advanced)]填写3；[容量型(capacity)]填写4；[高阶型1(specialized-1)]填写5；[高阶型2(specialized-2)]填写6；[高阶型3(specialized-3)]填写7；[高阶型4(specialized-4)]填写8。</p>
                     * @return InstanceType <p>国际站标准版实例规格。目前只有国际站标准版使用当前字段区分规格，国内站标准版使用峰值带宽区分规格。除了国际站标准版外的所有实例填写 1 即可。国际站标准版实例：入门型(general)]填写1；[标准型(standard)]填写2；[进阶型(advanced)]填写3；[容量型(capacity)]填写4；[高阶型1(specialized-1)]填写5；[高阶型2(specialized-2)]填写6；[高阶型3(specialized-3)]填写7；[高阶型4(specialized-4)]填写8。</p>
                     * 
                     */
                    int64_t GetInstanceType() const;

                    /**
                     * 设置<p>国际站标准版实例规格。目前只有国际站标准版使用当前字段区分规格，国内站标准版使用峰值带宽区分规格。除了国际站标准版外的所有实例填写 1 即可。国际站标准版实例：入门型(general)]填写1；[标准型(standard)]填写2；[进阶型(advanced)]填写3；[容量型(capacity)]填写4；[高阶型1(specialized-1)]填写5；[高阶型2(specialized-2)]填写6；[高阶型3(specialized-3)]填写7；[高阶型4(specialized-4)]填写8。</p>
                     * @param _instanceType <p>国际站标准版实例规格。目前只有国际站标准版使用当前字段区分规格，国内站标准版使用峰值带宽区分规格。除了国际站标准版外的所有实例填写 1 即可。国际站标准版实例：入门型(general)]填写1；[标准型(standard)]填写2；[进阶型(advanced)]填写3；[容量型(capacity)]填写4；[高阶型1(specialized-1)]填写5；[高阶型2(specialized-2)]填写6；[高阶型3(specialized-3)]填写7；[高阶型4(specialized-4)]填写8。</p>
                     * 
                     */
                    void SetInstanceType(const int64_t& _instanceType);

                    /**
                     * 判断参数 InstanceType 是否已赋值
                     * @return InstanceType 是否已赋值
                     * 
                     */
                    bool InstanceTypeHasBeenSet() const;

                    /**
                     * 获取<p>私有网络Id</p>
                     * @return VpcId <p>私有网络Id</p>
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置<p>私有网络Id</p>
                     * @param _vpcId <p>私有网络Id</p>
                     * 
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     * 
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取<p>子网id</p>
                     * @return SubnetId <p>子网id</p>
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置<p>子网id</p>
                     * @param _subnetId <p>子网id</p>
                     * 
                     */
                    void SetSubnetId(const std::string& _subnetId);

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     * 
                     */
                    bool SubnetIdHasBeenSet() const;

                    /**
                     * 获取<p>可选。实例日志的最长保留时间，单位分钟，不填默认为1440（1天），可设置范围为1分钟到90天。</p>
                     * @return MsgRetentionTime <p>可选。实例日志的最长保留时间，单位分钟，不填默认为1440（1天），可设置范围为1分钟到90天。</p>
                     * 
                     */
                    int64_t GetMsgRetentionTime() const;

                    /**
                     * 设置<p>可选。实例日志的最长保留时间，单位分钟，不填默认为1440（1天），可设置范围为1分钟到90天。</p>
                     * @param _msgRetentionTime <p>可选。实例日志的最长保留时间，单位分钟，不填默认为1440（1天），可设置范围为1分钟到90天。</p>
                     * 
                     */
                    void SetMsgRetentionTime(const int64_t& _msgRetentionTime);

                    /**
                     * 判断参数 MsgRetentionTime 是否已赋值
                     * @return MsgRetentionTime 是否已赋值
                     * 
                     */
                    bool MsgRetentionTimeHasBeenSet() const;

                    /**
                     * 获取<p>创建实例时可以选择集群Id, 该入参表示集群Id</p>
                     * @return ClusterId <p>创建实例时可以选择集群Id, 该入参表示集群Id</p>
                     * 
                     */
                    int64_t GetClusterId() const;

                    /**
                     * 设置<p>创建实例时可以选择集群Id, 该入参表示集群Id</p>
                     * @param _clusterId <p>创建实例时可以选择集群Id, 该入参表示集群Id</p>
                     * 
                     */
                    void SetClusterId(const int64_t& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取<p>预付费自动续费标记，0表示默认状态(用户未设置，即初始状态)， 1表示自动续费，2表示明确不自动续费(用户设置)</p>
                     * @return RenewFlag <p>预付费自动续费标记，0表示默认状态(用户未设置，即初始状态)， 1表示自动续费，2表示明确不自动续费(用户设置)</p>
                     * 
                     */
                    int64_t GetRenewFlag() const;

                    /**
                     * 设置<p>预付费自动续费标记，0表示默认状态(用户未设置，即初始状态)， 1表示自动续费，2表示明确不自动续费(用户设置)</p>
                     * @param _renewFlag <p>预付费自动续费标记，0表示默认状态(用户未设置，即初始状态)， 1表示自动续费，2表示明确不自动续费(用户设置)</p>
                     * 
                     */
                    void SetRenewFlag(const int64_t& _renewFlag);

                    /**
                     * 判断参数 RenewFlag 是否已赋值
                     * @return RenewFlag 是否已赋值
                     * 
                     */
                    bool RenewFlagHasBeenSet() const;

                    /**
                     * 获取<p>CKafka版本号[2.4.1, 2.4.2, 2.8.1, 3.2.3], 默认取值是2.4.1。2.4.1 与 2.4.2 属于同一个版本，传任意一个均可。</p>
                     * @return KafkaVersion <p>CKafka版本号[2.4.1, 2.4.2, 2.8.1, 3.2.3], 默认取值是2.4.1。2.4.1 与 2.4.2 属于同一个版本，传任意一个均可。</p>
                     * 
                     */
                    std::string GetKafkaVersion() const;

                    /**
                     * 设置<p>CKafka版本号[2.4.1, 2.4.2, 2.8.1, 3.2.3], 默认取值是2.4.1。2.4.1 与 2.4.2 属于同一个版本，传任意一个均可。</p>
                     * @param _kafkaVersion <p>CKafka版本号[2.4.1, 2.4.2, 2.8.1, 3.2.3], 默认取值是2.4.1。2.4.1 与 2.4.2 属于同一个版本，传任意一个均可。</p>
                     * 
                     */
                    void SetKafkaVersion(const std::string& _kafkaVersion);

                    /**
                     * 判断参数 KafkaVersion 是否已赋值
                     * @return KafkaVersion 是否已赋值
                     * 
                     */
                    bool KafkaVersionHasBeenSet() const;

                    /**
                     * 获取<p>实例类型: [标准版实例]填写 "standard" (默认), [专业版实例]填写 "profession",[高级版实例]填写"premium"</p>
                     * @return SpecificationsType <p>实例类型: [标准版实例]填写 "standard" (默认), [专业版实例]填写 "profession",[高级版实例]填写"premium"</p>
                     * 
                     */
                    std::string GetSpecificationsType() const;

                    /**
                     * 设置<p>实例类型: [标准版实例]填写 "standard" (默认), [专业版实例]填写 "profession",[高级版实例]填写"premium"</p>
                     * @param _specificationsType <p>实例类型: [标准版实例]填写 "standard" (默认), [专业版实例]填写 "profession",[高级版实例]填写"premium"</p>
                     * 
                     */
                    void SetSpecificationsType(const std::string& _specificationsType);

                    /**
                     * 判断参数 SpecificationsType 是否已赋值
                     * @return SpecificationsType 是否已赋值
                     * 
                     */
                    bool SpecificationsTypeHasBeenSet() const;

                    /**
                     * 获取<p>磁盘大小，如果跟控制台规格配比不相符，则无法创建成功。默认取值为500，步长设置为100。可以通过以下链接查看计费规格：https://cloud.tencent.com/document/product/597/122562</p>
                     * @return DiskSize <p>磁盘大小，如果跟控制台规格配比不相符，则无法创建成功。默认取值为500，步长设置为100。可以通过以下链接查看计费规格：https://cloud.tencent.com/document/product/597/122562</p>
                     * 
                     */
                    int64_t GetDiskSize() const;

                    /**
                     * 设置<p>磁盘大小，如果跟控制台规格配比不相符，则无法创建成功。默认取值为500，步长设置为100。可以通过以下链接查看计费规格：https://cloud.tencent.com/document/product/597/122562</p>
                     * @param _diskSize <p>磁盘大小，如果跟控制台规格配比不相符，则无法创建成功。默认取值为500，步长设置为100。可以通过以下链接查看计费规格：https://cloud.tencent.com/document/product/597/122562</p>
                     * 
                     */
                    void SetDiskSize(const int64_t& _diskSize);

                    /**
                     * 判断参数 DiskSize 是否已赋值
                     * @return DiskSize 是否已赋值
                     * 
                     */
                    bool DiskSizeHasBeenSet() const;

                    /**
                     * 获取<p>实例带宽,默认值为40，单位MB/s; 最小值:20MB/s, 高级版最大值:360MB/s,专业版最大值:100000MB/s  标准版固定带宽规格: 40MB/s, 100MB/s, 150MB/s。可以通过以下链接查看计费规格：https://cloud.tencent.com/document/product/597/11745</p>
                     * @return BandWidth <p>实例带宽,默认值为40，单位MB/s; 最小值:20MB/s, 高级版最大值:360MB/s,专业版最大值:100000MB/s  标准版固定带宽规格: 40MB/s, 100MB/s, 150MB/s。可以通过以下链接查看计费规格：https://cloud.tencent.com/document/product/597/11745</p>
                     * 
                     */
                    int64_t GetBandWidth() const;

                    /**
                     * 设置<p>实例带宽,默认值为40，单位MB/s; 最小值:20MB/s, 高级版最大值:360MB/s,专业版最大值:100000MB/s  标准版固定带宽规格: 40MB/s, 100MB/s, 150MB/s。可以通过以下链接查看计费规格：https://cloud.tencent.com/document/product/597/11745</p>
                     * @param _bandWidth <p>实例带宽,默认值为40，单位MB/s; 最小值:20MB/s, 高级版最大值:360MB/s,专业版最大值:100000MB/s  标准版固定带宽规格: 40MB/s, 100MB/s, 150MB/s。可以通过以下链接查看计费规格：https://cloud.tencent.com/document/product/597/11745</p>
                     * 
                     */
                    void SetBandWidth(const int64_t& _bandWidth);

                    /**
                     * 判断参数 BandWidth 是否已赋值
                     * @return BandWidth 是否已赋值
                     * 
                     */
                    bool BandWidthHasBeenSet() const;

                    /**
                     * 获取<p>分区大小，如果跟控制台规格配比不相符，则无法创建成功。默认值为800，步长为100。可以通过以下链接查看计费规格：https://cloud.tencent.com/document/product/597/122563</p>
                     * @return Partition <p>分区大小，如果跟控制台规格配比不相符，则无法创建成功。默认值为800，步长为100。可以通过以下链接查看计费规格：https://cloud.tencent.com/document/product/597/122563</p>
                     * 
                     */
                    int64_t GetPartition() const;

                    /**
                     * 设置<p>分区大小，如果跟控制台规格配比不相符，则无法创建成功。默认值为800，步长为100。可以通过以下链接查看计费规格：https://cloud.tencent.com/document/product/597/122563</p>
                     * @param _partition <p>分区大小，如果跟控制台规格配比不相符，则无法创建成功。默认值为800，步长为100。可以通过以下链接查看计费规格：https://cloud.tencent.com/document/product/597/122563</p>
                     * 
                     */
                    void SetPartition(const int64_t& _partition);

                    /**
                     * 判断参数 Partition 是否已赋值
                     * @return Partition 是否已赋值
                     * 
                     */
                    bool PartitionHasBeenSet() const;

                    /**
                     * 获取<p>标签</p>
                     * @return Tags <p>标签</p>
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置<p>标签</p>
                     * @param _tags <p>标签</p>
                     * 
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取<p>专业版/高级版实例磁盘类型，标准版实例不需要填写。"CLOUD_SSD"：SSD云硬盘；"CLOUD_BASIC"：高性能云硬盘。不传默认为 "CLOUD_BASIC"</p>
                     * @return DiskType <p>专业版/高级版实例磁盘类型，标准版实例不需要填写。"CLOUD_SSD"：SSD云硬盘；"CLOUD_BASIC"：高性能云硬盘。不传默认为 "CLOUD_BASIC"</p>
                     * 
                     */
                    std::string GetDiskType() const;

                    /**
                     * 设置<p>专业版/高级版实例磁盘类型，标准版实例不需要填写。"CLOUD_SSD"：SSD云硬盘；"CLOUD_BASIC"：高性能云硬盘。不传默认为 "CLOUD_BASIC"</p>
                     * @param _diskType <p>专业版/高级版实例磁盘类型，标准版实例不需要填写。"CLOUD_SSD"：SSD云硬盘；"CLOUD_BASIC"：高性能云硬盘。不传默认为 "CLOUD_BASIC"</p>
                     * 
                     */
                    void SetDiskType(const std::string& _diskType);

                    /**
                     * 判断参数 DiskType 是否已赋值
                     * @return DiskType 是否已赋值
                     * 
                     */
                    bool DiskTypeHasBeenSet() const;

                    /**
                     * 获取<p>是否创建跨可用区实例，当前参数为 true 时，zoneIds必填</p>
                     * @return MultiZoneFlag <p>是否创建跨可用区实例，当前参数为 true 时，zoneIds必填</p>
                     * 
                     */
                    bool GetMultiZoneFlag() const;

                    /**
                     * 设置<p>是否创建跨可用区实例，当前参数为 true 时，zoneIds必填</p>
                     * @param _multiZoneFlag <p>是否创建跨可用区实例，当前参数为 true 时，zoneIds必填</p>
                     * 
                     */
                    void SetMultiZoneFlag(const bool& _multiZoneFlag);

                    /**
                     * 判断参数 MultiZoneFlag 是否已赋值
                     * @return MultiZoneFlag 是否已赋值
                     * 
                     */
                    bool MultiZoneFlagHasBeenSet() const;

                    /**
                     * 获取<p>可用区列表，购买多可用区实例时为必填项</p>
                     * @return ZoneIds <p>可用区列表，购买多可用区实例时为必填项</p>
                     * 
                     */
                    std::vector<int64_t> GetZoneIds() const;

                    /**
                     * 设置<p>可用区列表，购买多可用区实例时为必填项</p>
                     * @param _zoneIds <p>可用区列表，购买多可用区实例时为必填项</p>
                     * 
                     */
                    void SetZoneIds(const std::vector<int64_t>& _zoneIds);

                    /**
                     * 判断参数 ZoneIds 是否已赋值
                     * @return ZoneIds 是否已赋值
                     * 
                     */
                    bool ZoneIdsHasBeenSet() const;

                    /**
                     * 获取<p>公网带宽大小，单位 Mbps。默认是没有加上免费 3Mbps 带宽。例如总共需要 3Mbps 公网带宽，此处传 0；总共需要 6Mbps 公网带宽，此处传 3。默认值为 0。需要保证传入参数为 3 的整数倍</p>
                     * @return PublicNetworkMonthly <p>公网带宽大小，单位 Mbps。默认是没有加上免费 3Mbps 带宽。例如总共需要 3Mbps 公网带宽，此处传 0；总共需要 6Mbps 公网带宽，此处传 3。默认值为 0。需要保证传入参数为 3 的整数倍</p>
                     * 
                     */
                    int64_t GetPublicNetworkMonthly() const;

                    /**
                     * 设置<p>公网带宽大小，单位 Mbps。默认是没有加上免费 3Mbps 带宽。例如总共需要 3Mbps 公网带宽，此处传 0；总共需要 6Mbps 公网带宽，此处传 3。默认值为 0。需要保证传入参数为 3 的整数倍</p>
                     * @param _publicNetworkMonthly <p>公网带宽大小，单位 Mbps。默认是没有加上免费 3Mbps 带宽。例如总共需要 3Mbps 公网带宽，此处传 0；总共需要 6Mbps 公网带宽，此处传 3。默认值为 0。需要保证传入参数为 3 的整数倍</p>
                     * 
                     */
                    void SetPublicNetworkMonthly(const int64_t& _publicNetworkMonthly);

                    /**
                     * 判断参数 PublicNetworkMonthly 是否已赋值
                     * @return PublicNetworkMonthly 是否已赋值
                     * 
                     */
                    bool PublicNetworkMonthlyHasBeenSet() const;

                    /**
                     * 获取<p>购买实例数量。非必填，默认值为 1。当传入该参数时，会创建多个 instanceName 加后缀区分的实例</p>
                     * @return InstanceNum <p>购买实例数量。非必填，默认值为 1。当传入该参数时，会创建多个 instanceName 加后缀区分的实例</p>
                     * 
                     */
                    int64_t GetInstanceNum() const;

                    /**
                     * 设置<p>购买实例数量。非必填，默认值为 1。当传入该参数时，会创建多个 instanceName 加后缀区分的实例</p>
                     * @param _instanceNum <p>购买实例数量。非必填，默认值为 1。当传入该参数时，会创建多个 instanceName 加后缀区分的实例</p>
                     * 
                     */
                    void SetInstanceNum(const int64_t& _instanceNum);

                    /**
                     * 判断参数 InstanceNum 是否已赋值
                     * @return InstanceNum 是否已赋值
                     * 
                     */
                    bool InstanceNumHasBeenSet() const;

                    /**
                     * 获取<p>是否自动选择代金券:1-是;0否。默认为0</p>
                     * @return AutoVoucher <p>是否自动选择代金券:1-是;0否。默认为0</p>
                     * 
                     */
                    int64_t GetAutoVoucher() const;

                    /**
                     * 设置<p>是否自动选择代金券:1-是;0否。默认为0</p>
                     * @param _autoVoucher <p>是否自动选择代金券:1-是;0否。默认为0</p>
                     * 
                     */
                    void SetAutoVoucher(const int64_t& _autoVoucher);

                    /**
                     * 判断参数 AutoVoucher 是否已赋值
                     * @return AutoVoucher 是否已赋值
                     * 
                     */
                    bool AutoVoucherHasBeenSet() const;

                    /**
                     * 获取<p>弹性带宽开关 0不开启  1开启（0默认）</p>
                     * @return ElasticBandwidthSwitch <p>弹性带宽开关 0不开启  1开启（0默认）</p>
                     * 
                     */
                    int64_t GetElasticBandwidthSwitch() const;

                    /**
                     * 设置<p>弹性带宽开关 0不开启  1开启（0默认）</p>
                     * @param _elasticBandwidthSwitch <p>弹性带宽开关 0不开启  1开启（0默认）</p>
                     * 
                     */
                    void SetElasticBandwidthSwitch(const int64_t& _elasticBandwidthSwitch);

                    /**
                     * 判断参数 ElasticBandwidthSwitch 是否已赋值
                     * @return ElasticBandwidthSwitch 是否已赋值
                     * 
                     */
                    bool ElasticBandwidthSwitchHasBeenSet() const;

                    /**
                     * 获取<p>自定义证书Id,仅当SpecificationsType为profession时生效,支持自定义证书能力</p><p>可通过<a href="https://cloud.tencent.com/document/product/400/41673">DescribeCertificateDetail</a>接口获取</p>
                     * @return CustomSSLCertId <p>自定义证书Id,仅当SpecificationsType为profession时生效,支持自定义证书能力</p><p>可通过<a href="https://cloud.tencent.com/document/product/400/41673">DescribeCertificateDetail</a>接口获取</p>
                     * 
                     */
                    std::string GetCustomSSLCertId() const;

                    /**
                     * 设置<p>自定义证书Id,仅当SpecificationsType为profession时生效,支持自定义证书能力</p><p>可通过<a href="https://cloud.tencent.com/document/product/400/41673">DescribeCertificateDetail</a>接口获取</p>
                     * @param _customSSLCertId <p>自定义证书Id,仅当SpecificationsType为profession时生效,支持自定义证书能力</p><p>可通过<a href="https://cloud.tencent.com/document/product/400/41673">DescribeCertificateDetail</a>接口获取</p>
                     * 
                     */
                    void SetCustomSSLCertId(const std::string& _customSSLCertId);

                    /**
                     * 判断参数 CustomSSLCertId 是否已赋值
                     * @return CustomSSLCertId 是否已赋值
                     * 
                     */
                    bool CustomSSLCertIdHasBeenSet() const;

                private:

                    /**
                     * <p>ckafka集群实例Name，是一个不超过 128 个字符的任意字符串。</p>
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * <p>可用区。当购买多可用区实例时，当前参数为主可用区。  <a href="https://cloud.tencent.com/document/product/597/55246">查看可用区</a></p>
                     */
                    int64_t m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * <p>预付费购买时长，例如 "1m",就是一个月,取值范围 1m~36m</p>
                     */
                    std::string m_period;
                    bool m_periodHasBeenSet;

                    /**
                     * <p>国际站标准版实例规格。目前只有国际站标准版使用当前字段区分规格，国内站标准版使用峰值带宽区分规格。除了国际站标准版外的所有实例填写 1 即可。国际站标准版实例：入门型(general)]填写1；[标准型(standard)]填写2；[进阶型(advanced)]填写3；[容量型(capacity)]填写4；[高阶型1(specialized-1)]填写5；[高阶型2(specialized-2)]填写6；[高阶型3(specialized-3)]填写7；[高阶型4(specialized-4)]填写8。</p>
                     */
                    int64_t m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * <p>私有网络Id</p>
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * <p>子网id</p>
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * <p>可选。实例日志的最长保留时间，单位分钟，不填默认为1440（1天），可设置范围为1分钟到90天。</p>
                     */
                    int64_t m_msgRetentionTime;
                    bool m_msgRetentionTimeHasBeenSet;

                    /**
                     * <p>创建实例时可以选择集群Id, 该入参表示集群Id</p>
                     */
                    int64_t m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * <p>预付费自动续费标记，0表示默认状态(用户未设置，即初始状态)， 1表示自动续费，2表示明确不自动续费(用户设置)</p>
                     */
                    int64_t m_renewFlag;
                    bool m_renewFlagHasBeenSet;

                    /**
                     * <p>CKafka版本号[2.4.1, 2.4.2, 2.8.1, 3.2.3], 默认取值是2.4.1。2.4.1 与 2.4.2 属于同一个版本，传任意一个均可。</p>
                     */
                    std::string m_kafkaVersion;
                    bool m_kafkaVersionHasBeenSet;

                    /**
                     * <p>实例类型: [标准版实例]填写 "standard" (默认), [专业版实例]填写 "profession",[高级版实例]填写"premium"</p>
                     */
                    std::string m_specificationsType;
                    bool m_specificationsTypeHasBeenSet;

                    /**
                     * <p>磁盘大小，如果跟控制台规格配比不相符，则无法创建成功。默认取值为500，步长设置为100。可以通过以下链接查看计费规格：https://cloud.tencent.com/document/product/597/122562</p>
                     */
                    int64_t m_diskSize;
                    bool m_diskSizeHasBeenSet;

                    /**
                     * <p>实例带宽,默认值为40，单位MB/s; 最小值:20MB/s, 高级版最大值:360MB/s,专业版最大值:100000MB/s  标准版固定带宽规格: 40MB/s, 100MB/s, 150MB/s。可以通过以下链接查看计费规格：https://cloud.tencent.com/document/product/597/11745</p>
                     */
                    int64_t m_bandWidth;
                    bool m_bandWidthHasBeenSet;

                    /**
                     * <p>分区大小，如果跟控制台规格配比不相符，则无法创建成功。默认值为800，步长为100。可以通过以下链接查看计费规格：https://cloud.tencent.com/document/product/597/122563</p>
                     */
                    int64_t m_partition;
                    bool m_partitionHasBeenSet;

                    /**
                     * <p>标签</p>
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * <p>专业版/高级版实例磁盘类型，标准版实例不需要填写。"CLOUD_SSD"：SSD云硬盘；"CLOUD_BASIC"：高性能云硬盘。不传默认为 "CLOUD_BASIC"</p>
                     */
                    std::string m_diskType;
                    bool m_diskTypeHasBeenSet;

                    /**
                     * <p>是否创建跨可用区实例，当前参数为 true 时，zoneIds必填</p>
                     */
                    bool m_multiZoneFlag;
                    bool m_multiZoneFlagHasBeenSet;

                    /**
                     * <p>可用区列表，购买多可用区实例时为必填项</p>
                     */
                    std::vector<int64_t> m_zoneIds;
                    bool m_zoneIdsHasBeenSet;

                    /**
                     * <p>公网带宽大小，单位 Mbps。默认是没有加上免费 3Mbps 带宽。例如总共需要 3Mbps 公网带宽，此处传 0；总共需要 6Mbps 公网带宽，此处传 3。默认值为 0。需要保证传入参数为 3 的整数倍</p>
                     */
                    int64_t m_publicNetworkMonthly;
                    bool m_publicNetworkMonthlyHasBeenSet;

                    /**
                     * <p>购买实例数量。非必填，默认值为 1。当传入该参数时，会创建多个 instanceName 加后缀区分的实例</p>
                     */
                    int64_t m_instanceNum;
                    bool m_instanceNumHasBeenSet;

                    /**
                     * <p>是否自动选择代金券:1-是;0否。默认为0</p>
                     */
                    int64_t m_autoVoucher;
                    bool m_autoVoucherHasBeenSet;

                    /**
                     * <p>弹性带宽开关 0不开启  1开启（0默认）</p>
                     */
                    int64_t m_elasticBandwidthSwitch;
                    bool m_elasticBandwidthSwitchHasBeenSet;

                    /**
                     * <p>自定义证书Id,仅当SpecificationsType为profession时生效,支持自定义证书能力</p><p>可通过<a href="https://cloud.tencent.com/document/product/400/41673">DescribeCertificateDetail</a>接口获取</p>
                     */
                    std::string m_customSSLCertId;
                    bool m_customSSLCertIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_CREATEINSTANCEPREREQUEST_H_
