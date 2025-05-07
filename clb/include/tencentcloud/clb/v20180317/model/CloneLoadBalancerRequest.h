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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_CLONELOADBALANCERREQUEST_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_CLONELOADBALANCERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/clb/v20180317/model/InternetAccessible.h>
#include <tencentcloud/clb/v20180317/model/TagInfo.h>
#include <tencentcloud/clb/v20180317/model/ExclusiveCluster.h>
#include <tencentcloud/clb/v20180317/model/SnatIp.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * CloneLoadBalancer请求参数结构体
                */
                class CloneLoadBalancerRequest : public AbstractModel
                {
                public:
                    CloneLoadBalancerRequest();
                    ~CloneLoadBalancerRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取负载均衡ID，可以通过 [DescribeLoadBalancers](https://cloud.tencent.com/document/product/214/30685) 接口获取。
                     * @return LoadBalancerId 负载均衡ID，可以通过 [DescribeLoadBalancers](https://cloud.tencent.com/document/product/214/30685) 接口获取。
                     * 
                     */
                    std::string GetLoadBalancerId() const;

                    /**
                     * 设置负载均衡ID，可以通过 [DescribeLoadBalancers](https://cloud.tencent.com/document/product/214/30685) 接口获取。
                     * @param _loadBalancerId 负载均衡ID，可以通过 [DescribeLoadBalancers](https://cloud.tencent.com/document/product/214/30685) 接口获取。
                     * 
                     */
                    void SetLoadBalancerId(const std::string& _loadBalancerId);

                    /**
                     * 判断参数 LoadBalancerId 是否已赋值
                     * @return LoadBalancerId 是否已赋值
                     * 
                     */
                    bool LoadBalancerIdHasBeenSet() const;

                    /**
                     * 获取克隆出负载均衡实例的名称，规则：1-60 个英文、汉字、数字、连接线“-”或下划线“_”。
注意：如果名称与系统中已有负载均衡实例的名称相同，则系统将会自动生成此次创建的负载均衡实例的名称。
                     * @return LoadBalancerName 克隆出负载均衡实例的名称，规则：1-60 个英文、汉字、数字、连接线“-”或下划线“_”。
注意：如果名称与系统中已有负载均衡实例的名称相同，则系统将会自动生成此次创建的负载均衡实例的名称。
                     * 
                     */
                    std::string GetLoadBalancerName() const;

                    /**
                     * 设置克隆出负载均衡实例的名称，规则：1-60 个英文、汉字、数字、连接线“-”或下划线“_”。
注意：如果名称与系统中已有负载均衡实例的名称相同，则系统将会自动生成此次创建的负载均衡实例的名称。
                     * @param _loadBalancerName 克隆出负载均衡实例的名称，规则：1-60 个英文、汉字、数字、连接线“-”或下划线“_”。
注意：如果名称与系统中已有负载均衡实例的名称相同，则系统将会自动生成此次创建的负载均衡实例的名称。
                     * 
                     */
                    void SetLoadBalancerName(const std::string& _loadBalancerName);

                    /**
                     * 判断参数 LoadBalancerName 是否已赋值
                     * @return LoadBalancerName 是否已赋值
                     * 
                     */
                    bool LoadBalancerNameHasBeenSet() const;

                    /**
                     * 获取负载均衡实例所属的项目 ID，默认项目 ID 为0，可以通过 [DescribeLoadBalancers](https://cloud.tencent.com/document/product/214/30685) 接口获取。不传此参数则视为默认项目。
                     * @return ProjectId 负载均衡实例所属的项目 ID，默认项目 ID 为0，可以通过 [DescribeLoadBalancers](https://cloud.tencent.com/document/product/214/30685) 接口获取。不传此参数则视为默认项目。
                     * 
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 设置负载均衡实例所属的项目 ID，默认项目 ID 为0，可以通过 [DescribeLoadBalancers](https://cloud.tencent.com/document/product/214/30685) 接口获取。不传此参数则视为默认项目。
                     * @param _projectId 负载均衡实例所属的项目 ID，默认项目 ID 为0，可以通过 [DescribeLoadBalancers](https://cloud.tencent.com/document/product/214/30685) 接口获取。不传此参数则视为默认项目。
                     * 
                     */
                    void SetProjectId(const int64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取仅适用于公网负载均衡。设置跨可用区容灾时的主可用区ID，可用区 ID 和名称均支持，例如 100001 或 ap-guangzhou-1。
注：主可用区是需要承载流量的可用区，备可用区默认不承载流量，主可用区不可用时才使用备可用区，平台将为您自动选择最佳备可用区。可通过 [DescribeResources](https://cloud.tencent.com/document/api/214/70213) 接口查询一个地域的主可用区的列表。
                     * @return MasterZoneId 仅适用于公网负载均衡。设置跨可用区容灾时的主可用区ID，可用区 ID 和名称均支持，例如 100001 或 ap-guangzhou-1。
注：主可用区是需要承载流量的可用区，备可用区默认不承载流量，主可用区不可用时才使用备可用区，平台将为您自动选择最佳备可用区。可通过 [DescribeResources](https://cloud.tencent.com/document/api/214/70213) 接口查询一个地域的主可用区的列表。
                     * 
                     */
                    std::string GetMasterZoneId() const;

                    /**
                     * 设置仅适用于公网负载均衡。设置跨可用区容灾时的主可用区ID，可用区 ID 和名称均支持，例如 100001 或 ap-guangzhou-1。
注：主可用区是需要承载流量的可用区，备可用区默认不承载流量，主可用区不可用时才使用备可用区，平台将为您自动选择最佳备可用区。可通过 [DescribeResources](https://cloud.tencent.com/document/api/214/70213) 接口查询一个地域的主可用区的列表。
                     * @param _masterZoneId 仅适用于公网负载均衡。设置跨可用区容灾时的主可用区ID，可用区 ID 和名称均支持，例如 100001 或 ap-guangzhou-1。
注：主可用区是需要承载流量的可用区，备可用区默认不承载流量，主可用区不可用时才使用备可用区，平台将为您自动选择最佳备可用区。可通过 [DescribeResources](https://cloud.tencent.com/document/api/214/70213) 接口查询一个地域的主可用区的列表。
                     * 
                     */
                    void SetMasterZoneId(const std::string& _masterZoneId);

                    /**
                     * 判断参数 MasterZoneId 是否已赋值
                     * @return MasterZoneId 是否已赋值
                     * 
                     */
                    bool MasterZoneIdHasBeenSet() const;

                    /**
                     * 获取仅适用于公网负载均衡。设置跨可用区容灾时的备可用区ID，可用区 ID 和名称均支持，例如 100001 或 ap-guangzhou-1。
注：备可用区是主可用区故障后，需要承载流量的可用区。可通过 [DescribeResources](https://cloud.tencent.com/document/api/214/70213) 接口查询一个地域的主/备可用区的列表。
                     * @return SlaveZoneId 仅适用于公网负载均衡。设置跨可用区容灾时的备可用区ID，可用区 ID 和名称均支持，例如 100001 或 ap-guangzhou-1。
注：备可用区是主可用区故障后，需要承载流量的可用区。可通过 [DescribeResources](https://cloud.tencent.com/document/api/214/70213) 接口查询一个地域的主/备可用区的列表。
                     * 
                     */
                    std::string GetSlaveZoneId() const;

                    /**
                     * 设置仅适用于公网负载均衡。设置跨可用区容灾时的备可用区ID，可用区 ID 和名称均支持，例如 100001 或 ap-guangzhou-1。
注：备可用区是主可用区故障后，需要承载流量的可用区。可通过 [DescribeResources](https://cloud.tencent.com/document/api/214/70213) 接口查询一个地域的主/备可用区的列表。
                     * @param _slaveZoneId 仅适用于公网负载均衡。设置跨可用区容灾时的备可用区ID，可用区 ID 和名称均支持，例如 100001 或 ap-guangzhou-1。
注：备可用区是主可用区故障后，需要承载流量的可用区。可通过 [DescribeResources](https://cloud.tencent.com/document/api/214/70213) 接口查询一个地域的主/备可用区的列表。
                     * 
                     */
                    void SetSlaveZoneId(const std::string& _slaveZoneId);

                    /**
                     * 判断参数 SlaveZoneId 是否已赋值
                     * @return SlaveZoneId 是否已赋值
                     * 
                     */
                    bool SlaveZoneIdHasBeenSet() const;

                    /**
                     * 获取仅适用于公网负载均衡。可用区ID，可用区 ID 和名称均支持，指定可用区以创建负载均衡实例。如：100001 或 ap-guangzhou-1。不传则查询所有可用区的 CVM 实例。如需指定可用区，可调用查询可用区列表 [DescribeZones](https://cloud.tencent.com/document/product/213/15707) 接口查询。
                     * @return ZoneId 仅适用于公网负载均衡。可用区ID，可用区 ID 和名称均支持，指定可用区以创建负载均衡实例。如：100001 或 ap-guangzhou-1。不传则查询所有可用区的 CVM 实例。如需指定可用区，可调用查询可用区列表 [DescribeZones](https://cloud.tencent.com/document/product/213/15707) 接口查询。
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置仅适用于公网负载均衡。可用区ID，可用区 ID 和名称均支持，指定可用区以创建负载均衡实例。如：100001 或 ap-guangzhou-1。不传则查询所有可用区的 CVM 实例。如需指定可用区，可调用查询可用区列表 [DescribeZones](https://cloud.tencent.com/document/product/213/15707) 接口查询。
                     * @param _zoneId 仅适用于公网负载均衡。可用区ID，可用区 ID 和名称均支持，指定可用区以创建负载均衡实例。如：100001 或 ap-guangzhou-1。不传则查询所有可用区的 CVM 实例。如需指定可用区，可调用查询可用区列表 [DescribeZones](https://cloud.tencent.com/document/product/213/15707) 接口查询。
                     * 
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取仅适用于公网负载均衡。负载均衡的网络计费模式。
                     * @return InternetAccessible 仅适用于公网负载均衡。负载均衡的网络计费模式。
                     * 
                     */
                    InternetAccessible GetInternetAccessible() const;

                    /**
                     * 设置仅适用于公网负载均衡。负载均衡的网络计费模式。
                     * @param _internetAccessible 仅适用于公网负载均衡。负载均衡的网络计费模式。
                     * 
                     */
                    void SetInternetAccessible(const InternetAccessible& _internetAccessible);

                    /**
                     * 判断参数 InternetAccessible 是否已赋值
                     * @return InternetAccessible 是否已赋值
                     * 
                     */
                    bool InternetAccessibleHasBeenSet() const;

                    /**
                     * 获取仅适用于公网负载均衡。目前仅广州、上海、南京、济南、杭州、福州、北京、石家庄、武汉、长沙、成都、重庆地域支持静态单线 IP 线路类型，如需体验，请联系商务经理申请。申请通过后，即可选择中国移动（CMCC）、中国联通（CUCC）或中国电信（CTCC）的运营商类型，网络计费模式只能使用按带宽包计费(BANDWIDTH_PACKAGE)。 如果不指定本参数，则默认使用BGP。可通过 DescribeResources 接口查询一个地域所支持的Isp。
                     * @return VipIsp 仅适用于公网负载均衡。目前仅广州、上海、南京、济南、杭州、福州、北京、石家庄、武汉、长沙、成都、重庆地域支持静态单线 IP 线路类型，如需体验，请联系商务经理申请。申请通过后，即可选择中国移动（CMCC）、中国联通（CUCC）或中国电信（CTCC）的运营商类型，网络计费模式只能使用按带宽包计费(BANDWIDTH_PACKAGE)。 如果不指定本参数，则默认使用BGP。可通过 DescribeResources 接口查询一个地域所支持的Isp。
                     * 
                     */
                    std::string GetVipIsp() const;

                    /**
                     * 设置仅适用于公网负载均衡。目前仅广州、上海、南京、济南、杭州、福州、北京、石家庄、武汉、长沙、成都、重庆地域支持静态单线 IP 线路类型，如需体验，请联系商务经理申请。申请通过后，即可选择中国移动（CMCC）、中国联通（CUCC）或中国电信（CTCC）的运营商类型，网络计费模式只能使用按带宽包计费(BANDWIDTH_PACKAGE)。 如果不指定本参数，则默认使用BGP。可通过 DescribeResources 接口查询一个地域所支持的Isp。
                     * @param _vipIsp 仅适用于公网负载均衡。目前仅广州、上海、南京、济南、杭州、福州、北京、石家庄、武汉、长沙、成都、重庆地域支持静态单线 IP 线路类型，如需体验，请联系商务经理申请。申请通过后，即可选择中国移动（CMCC）、中国联通（CUCC）或中国电信（CTCC）的运营商类型，网络计费模式只能使用按带宽包计费(BANDWIDTH_PACKAGE)。 如果不指定本参数，则默认使用BGP。可通过 DescribeResources 接口查询一个地域所支持的Isp。
                     * 
                     */
                    void SetVipIsp(const std::string& _vipIsp);

                    /**
                     * 判断参数 VipIsp 是否已赋值
                     * @return VipIsp 是否已赋值
                     * 
                     */
                    bool VipIspHasBeenSet() const;

                    /**
                     * 获取指定Vip申请负载均衡。
                     * @return Vip 指定Vip申请负载均衡。
                     * 
                     */
                    std::string GetVip() const;

                    /**
                     * 设置指定Vip申请负载均衡。
                     * @param _vip 指定Vip申请负载均衡。
                     * 
                     */
                    void SetVip(const std::string& _vip);

                    /**
                     * 判断参数 Vip 是否已赋值
                     * @return Vip 是否已赋值
                     * 
                     */
                    bool VipHasBeenSet() const;

                    /**
                     * 获取购买负载均衡同时，给负载均衡打上标签。
                     * @return Tags 购买负载均衡同时，给负载均衡打上标签。
                     * 
                     */
                    std::vector<TagInfo> GetTags() const;

                    /**
                     * 设置购买负载均衡同时，给负载均衡打上标签。
                     * @param _tags 购买负载均衡同时，给负载均衡打上标签。
                     * 
                     */
                    void SetTags(const std::vector<TagInfo>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取独占集群信息。
                     * @return ExclusiveCluster 独占集群信息。
                     * 
                     */
                    ExclusiveCluster GetExclusiveCluster() const;

                    /**
                     * 设置独占集群信息。
                     * @param _exclusiveCluster 独占集群信息。
                     * 
                     */
                    void SetExclusiveCluster(const ExclusiveCluster& _exclusiveCluster);

                    /**
                     * 判断参数 ExclusiveCluster 是否已赋值
                     * @return ExclusiveCluster 是否已赋值
                     * 
                     */
                    bool ExclusiveClusterHasBeenSet() const;

                    /**
                     * 获取带宽包ID，可以通过 [DescribeBandwidthPackages](https://cloud.tencent.com/document/api/215/19209) 接口获取。指定此参数时，网络计费方式（InternetAccessible.InternetChargeType）只支持按带宽包计费（BANDWIDTH_PACKAGE）。
                     * @return BandwidthPackageId 带宽包ID，可以通过 [DescribeBandwidthPackages](https://cloud.tencent.com/document/api/215/19209) 接口获取。指定此参数时，网络计费方式（InternetAccessible.InternetChargeType）只支持按带宽包计费（BANDWIDTH_PACKAGE）。
                     * 
                     */
                    std::string GetBandwidthPackageId() const;

                    /**
                     * 设置带宽包ID，可以通过 [DescribeBandwidthPackages](https://cloud.tencent.com/document/api/215/19209) 接口获取。指定此参数时，网络计费方式（InternetAccessible.InternetChargeType）只支持按带宽包计费（BANDWIDTH_PACKAGE）。
                     * @param _bandwidthPackageId 带宽包ID，可以通过 [DescribeBandwidthPackages](https://cloud.tencent.com/document/api/215/19209) 接口获取。指定此参数时，网络计费方式（InternetAccessible.InternetChargeType）只支持按带宽包计费（BANDWIDTH_PACKAGE）。
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
                     * 获取是否支持绑定跨地域/跨Vpc绑定IP的功能。
                     * @return SnatPro 是否支持绑定跨地域/跨Vpc绑定IP的功能。
                     * 
                     */
                    bool GetSnatPro() const;

                    /**
                     * 设置是否支持绑定跨地域/跨Vpc绑定IP的功能。
                     * @param _snatPro 是否支持绑定跨地域/跨Vpc绑定IP的功能。
                     * 
                     */
                    void SetSnatPro(const bool& _snatPro);

                    /**
                     * 判断参数 SnatPro 是否已赋值
                     * @return SnatPro 是否已赋值
                     * 
                     */
                    bool SnatProHasBeenSet() const;

                    /**
                     * 获取开启绑定跨地域/跨Vpc绑定IP的功能后，创建SnatIp。
                     * @return SnatIps 开启绑定跨地域/跨Vpc绑定IP的功能后，创建SnatIp。
                     * 
                     */
                    std::vector<SnatIp> GetSnatIps() const;

                    /**
                     * 设置开启绑定跨地域/跨Vpc绑定IP的功能后，创建SnatIp。
                     * @param _snatIps 开启绑定跨地域/跨Vpc绑定IP的功能后，创建SnatIp。
                     * 
                     */
                    void SetSnatIps(const std::vector<SnatIp>& _snatIps);

                    /**
                     * 判断参数 SnatIps 是否已赋值
                     * @return SnatIps 是否已赋值
                     * 
                     */
                    bool SnatIpsHasBeenSet() const;

                    /**
                     * 获取公网独占集群ID或者CDCId，可以通过 [DescribeExclusiveClusters](https://cloud.tencent.com/document/product/214/49278) 接口获取。
                     * @return ClusterIds 公网独占集群ID或者CDCId，可以通过 [DescribeExclusiveClusters](https://cloud.tencent.com/document/product/214/49278) 接口获取。
                     * 
                     */
                    std::vector<std::string> GetClusterIds() const;

                    /**
                     * 设置公网独占集群ID或者CDCId，可以通过 [DescribeExclusiveClusters](https://cloud.tencent.com/document/product/214/49278) 接口获取。
                     * @param _clusterIds 公网独占集群ID或者CDCId，可以通过 [DescribeExclusiveClusters](https://cloud.tencent.com/document/product/214/49278) 接口获取。
                     * 
                     */
                    void SetClusterIds(const std::vector<std::string>& _clusterIds);

                    /**
                     * 判断参数 ClusterIds 是否已赋值
                     * @return ClusterIds 是否已赋值
                     * 
                     */
                    bool ClusterIdsHasBeenSet() const;

                    /**
                     * 获取性能容量型规格。<li>clb.c2.medium（标准型）</li><li>clb.c3.small（高阶型1）</li><li>clb.c3.medium（高阶型2）</li><li>clb.c4.small（超强型1）</li><li>clb.c4.medium（超强型2）</li><li>clb.c4.large（超强型3）</li><li>clb.c4.xlarge（超强型4）</li>
                     * @return SlaType 性能容量型规格。<li>clb.c2.medium（标准型）</li><li>clb.c3.small（高阶型1）</li><li>clb.c3.medium（高阶型2）</li><li>clb.c4.small（超强型1）</li><li>clb.c4.medium（超强型2）</li><li>clb.c4.large（超强型3）</li><li>clb.c4.xlarge（超强型4）</li>
                     * 
                     */
                    std::string GetSlaType() const;

                    /**
                     * 设置性能容量型规格。<li>clb.c2.medium（标准型）</li><li>clb.c3.small（高阶型1）</li><li>clb.c3.medium（高阶型2）</li><li>clb.c4.small（超强型1）</li><li>clb.c4.medium（超强型2）</li><li>clb.c4.large（超强型3）</li><li>clb.c4.xlarge（超强型4）</li>
                     * @param _slaType 性能容量型规格。<li>clb.c2.medium（标准型）</li><li>clb.c3.small（高阶型1）</li><li>clb.c3.medium（高阶型2）</li><li>clb.c4.small（超强型1）</li><li>clb.c4.medium（超强型2）</li><li>clb.c4.large（超强型3）</li><li>clb.c4.xlarge（超强型4）</li>
                     * 
                     */
                    void SetSlaType(const std::string& _slaType);

                    /**
                     * 判断参数 SlaType 是否已赋值
                     * @return SlaType 是否已赋值
                     * 
                     */
                    bool SlaTypeHasBeenSet() const;

                    /**
                     * 获取Stgw独占集群的标签。
                     * @return ClusterTag Stgw独占集群的标签。
                     * 
                     */
                    std::string GetClusterTag() const;

                    /**
                     * 设置Stgw独占集群的标签。
                     * @param _clusterTag Stgw独占集群的标签。
                     * 
                     */
                    void SetClusterTag(const std::string& _clusterTag);

                    /**
                     * 判断参数 ClusterTag 是否已赋值
                     * @return ClusterTag 是否已赋值
                     * 
                     */
                    bool ClusterTagHasBeenSet() const;

                    /**
                     * 获取仅适用于私有网络内网负载均衡。内网就近接入时，选择可用区下发。可调用[DescribeZones](https://cloud.tencent.com/document/product/213/15707)接口查询可用区列表。
                     * @return Zones 仅适用于私有网络内网负载均衡。内网就近接入时，选择可用区下发。可调用[DescribeZones](https://cloud.tencent.com/document/product/213/15707)接口查询可用区列表。
                     * 
                     */
                    std::vector<std::string> GetZones() const;

                    /**
                     * 设置仅适用于私有网络内网负载均衡。内网就近接入时，选择可用区下发。可调用[DescribeZones](https://cloud.tencent.com/document/product/213/15707)接口查询可用区列表。
                     * @param _zones 仅适用于私有网络内网负载均衡。内网就近接入时，选择可用区下发。可调用[DescribeZones](https://cloud.tencent.com/document/product/213/15707)接口查询可用区列表。
                     * 
                     */
                    void SetZones(const std::vector<std::string>& _zones);

                    /**
                     * 判断参数 Zones 是否已赋值
                     * @return Zones 是否已赋值
                     * 
                     */
                    bool ZonesHasBeenSet() const;

                    /**
                     * 获取EIP 的唯一 ID，形如：eip-qhx8udkc，仅适用于内网负载均衡绑定EIP，可以通过 [DescribeAddresses](https://cloud.tencent.com/document/product/215/16702) 接口查询。
                     * @return EipAddressId EIP 的唯一 ID，形如：eip-qhx8udkc，仅适用于内网负载均衡绑定EIP，可以通过 [DescribeAddresses](https://cloud.tencent.com/document/product/215/16702) 接口查询。
                     * 
                     */
                    std::string GetEipAddressId() const;

                    /**
                     * 设置EIP 的唯一 ID，形如：eip-qhx8udkc，仅适用于内网负载均衡绑定EIP，可以通过 [DescribeAddresses](https://cloud.tencent.com/document/product/215/16702) 接口查询。
                     * @param _eipAddressId EIP 的唯一 ID，形如：eip-qhx8udkc，仅适用于内网负载均衡绑定EIP，可以通过 [DescribeAddresses](https://cloud.tencent.com/document/product/215/16702) 接口查询。
                     * 
                     */
                    void SetEipAddressId(const std::string& _eipAddressId);

                    /**
                     * 判断参数 EipAddressId 是否已赋值
                     * @return EipAddressId 是否已赋值
                     * 
                     */
                    bool EipAddressIdHasBeenSet() const;

                private:

                    /**
                     * 负载均衡ID，可以通过 [DescribeLoadBalancers](https://cloud.tencent.com/document/product/214/30685) 接口获取。
                     */
                    std::string m_loadBalancerId;
                    bool m_loadBalancerIdHasBeenSet;

                    /**
                     * 克隆出负载均衡实例的名称，规则：1-60 个英文、汉字、数字、连接线“-”或下划线“_”。
注意：如果名称与系统中已有负载均衡实例的名称相同，则系统将会自动生成此次创建的负载均衡实例的名称。
                     */
                    std::string m_loadBalancerName;
                    bool m_loadBalancerNameHasBeenSet;

                    /**
                     * 负载均衡实例所属的项目 ID，默认项目 ID 为0，可以通过 [DescribeLoadBalancers](https://cloud.tencent.com/document/product/214/30685) 接口获取。不传此参数则视为默认项目。
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 仅适用于公网负载均衡。设置跨可用区容灾时的主可用区ID，可用区 ID 和名称均支持，例如 100001 或 ap-guangzhou-1。
注：主可用区是需要承载流量的可用区，备可用区默认不承载流量，主可用区不可用时才使用备可用区，平台将为您自动选择最佳备可用区。可通过 [DescribeResources](https://cloud.tencent.com/document/api/214/70213) 接口查询一个地域的主可用区的列表。
                     */
                    std::string m_masterZoneId;
                    bool m_masterZoneIdHasBeenSet;

                    /**
                     * 仅适用于公网负载均衡。设置跨可用区容灾时的备可用区ID，可用区 ID 和名称均支持，例如 100001 或 ap-guangzhou-1。
注：备可用区是主可用区故障后，需要承载流量的可用区。可通过 [DescribeResources](https://cloud.tencent.com/document/api/214/70213) 接口查询一个地域的主/备可用区的列表。
                     */
                    std::string m_slaveZoneId;
                    bool m_slaveZoneIdHasBeenSet;

                    /**
                     * 仅适用于公网负载均衡。可用区ID，可用区 ID 和名称均支持，指定可用区以创建负载均衡实例。如：100001 或 ap-guangzhou-1。不传则查询所有可用区的 CVM 实例。如需指定可用区，可调用查询可用区列表 [DescribeZones](https://cloud.tencent.com/document/product/213/15707) 接口查询。
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * 仅适用于公网负载均衡。负载均衡的网络计费模式。
                     */
                    InternetAccessible m_internetAccessible;
                    bool m_internetAccessibleHasBeenSet;

                    /**
                     * 仅适用于公网负载均衡。目前仅广州、上海、南京、济南、杭州、福州、北京、石家庄、武汉、长沙、成都、重庆地域支持静态单线 IP 线路类型，如需体验，请联系商务经理申请。申请通过后，即可选择中国移动（CMCC）、中国联通（CUCC）或中国电信（CTCC）的运营商类型，网络计费模式只能使用按带宽包计费(BANDWIDTH_PACKAGE)。 如果不指定本参数，则默认使用BGP。可通过 DescribeResources 接口查询一个地域所支持的Isp。
                     */
                    std::string m_vipIsp;
                    bool m_vipIspHasBeenSet;

                    /**
                     * 指定Vip申请负载均衡。
                     */
                    std::string m_vip;
                    bool m_vipHasBeenSet;

                    /**
                     * 购买负载均衡同时，给负载均衡打上标签。
                     */
                    std::vector<TagInfo> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 独占集群信息。
                     */
                    ExclusiveCluster m_exclusiveCluster;
                    bool m_exclusiveClusterHasBeenSet;

                    /**
                     * 带宽包ID，可以通过 [DescribeBandwidthPackages](https://cloud.tencent.com/document/api/215/19209) 接口获取。指定此参数时，网络计费方式（InternetAccessible.InternetChargeType）只支持按带宽包计费（BANDWIDTH_PACKAGE）。
                     */
                    std::string m_bandwidthPackageId;
                    bool m_bandwidthPackageIdHasBeenSet;

                    /**
                     * 是否支持绑定跨地域/跨Vpc绑定IP的功能。
                     */
                    bool m_snatPro;
                    bool m_snatProHasBeenSet;

                    /**
                     * 开启绑定跨地域/跨Vpc绑定IP的功能后，创建SnatIp。
                     */
                    std::vector<SnatIp> m_snatIps;
                    bool m_snatIpsHasBeenSet;

                    /**
                     * 公网独占集群ID或者CDCId，可以通过 [DescribeExclusiveClusters](https://cloud.tencent.com/document/product/214/49278) 接口获取。
                     */
                    std::vector<std::string> m_clusterIds;
                    bool m_clusterIdsHasBeenSet;

                    /**
                     * 性能容量型规格。<li>clb.c2.medium（标准型）</li><li>clb.c3.small（高阶型1）</li><li>clb.c3.medium（高阶型2）</li><li>clb.c4.small（超强型1）</li><li>clb.c4.medium（超强型2）</li><li>clb.c4.large（超强型3）</li><li>clb.c4.xlarge（超强型4）</li>
                     */
                    std::string m_slaType;
                    bool m_slaTypeHasBeenSet;

                    /**
                     * Stgw独占集群的标签。
                     */
                    std::string m_clusterTag;
                    bool m_clusterTagHasBeenSet;

                    /**
                     * 仅适用于私有网络内网负载均衡。内网就近接入时，选择可用区下发。可调用[DescribeZones](https://cloud.tencent.com/document/product/213/15707)接口查询可用区列表。
                     */
                    std::vector<std::string> m_zones;
                    bool m_zonesHasBeenSet;

                    /**
                     * EIP 的唯一 ID，形如：eip-qhx8udkc，仅适用于内网负载均衡绑定EIP，可以通过 [DescribeAddresses](https://cloud.tencent.com/document/product/215/16702) 接口查询。
                     */
                    std::string m_eipAddressId;
                    bool m_eipAddressIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_CLONELOADBALANCERREQUEST_H_
