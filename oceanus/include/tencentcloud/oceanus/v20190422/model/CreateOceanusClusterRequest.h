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

#ifndef TENCENTCLOUD_OCEANUS_V20190422_MODEL_CREATEOCEANUSCLUSTERREQUEST_H_
#define TENCENTCLOUD_OCEANUS_V20190422_MODEL_CREATEOCEANUSCLUSTERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/oceanus/v20190422/model/VPCDescription.h>
#include <tencentcloud/oceanus/v20190422/model/SlaveVpcDescriptions.h>


namespace TencentCloud
{
    namespace Oceanus
    {
        namespace V20190422
        {
            namespace Model
            {
                /**
                * CreateOceanusCluster请求参数结构体
                */
                class CreateOceanusClusterRequest : public AbstractModel
                {
                public:
                    CreateOceanusClusterRequest();
                    ~CreateOceanusClusterRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>集群名称</p><p>入参限制：支持1-50个英文、汉字、数字、连接线-或下划线_</p>
                     * @return ClusterName <p>集群名称</p><p>入参限制：支持1-50个英文、汉字、数字、连接线-或下划线_</p>
                     * 
                     */
                    std::string GetClusterName() const;

                    /**
                     * 设置<p>集群名称</p><p>入参限制：支持1-50个英文、汉字、数字、连接线-或下划线_</p>
                     * @param _clusterName <p>集群名称</p><p>入参限制：支持1-50个英文、汉字、数字、连接线-或下划线_</p>
                     * 
                     */
                    void SetClusterName(const std::string& _clusterName);

                    /**
                     * 判断参数 ClusterName 是否已赋值
                     * @return ClusterName 是否已赋值
                     * 
                     */
                    bool ClusterNameHasBeenSet() const;

                    /**
                     * 获取<p>地域Id，可通过地域管理系统<a href="https://cloud.tencent.com/document/api/1596/77930"> DescribeRegions</a>查询Product参数设置 oceanus</p>
                     * @return RegionId <p>地域Id，可通过地域管理系统<a href="https://cloud.tencent.com/document/api/1596/77930"> DescribeRegions</a>查询Product参数设置 oceanus</p>
                     * 
                     */
                    int64_t GetRegionId() const;

                    /**
                     * 设置<p>地域Id，可通过地域管理系统<a href="https://cloud.tencent.com/document/api/1596/77930"> DescribeRegions</a>查询Product参数设置 oceanus</p>
                     * @param _regionId <p>地域Id，可通过地域管理系统<a href="https://cloud.tencent.com/document/api/1596/77930"> DescribeRegions</a>查询Product参数设置 oceanus</p>
                     * 
                     */
                    void SetRegionId(const int64_t& _regionId);

                    /**
                     * 判断参数 RegionId 是否已赋值
                     * @return RegionId 是否已赋值
                     * 
                     */
                    bool RegionIdHasBeenSet() const;

                    /**
                     * 获取<p>可用区Id，可通过地域管理系统<a href="https://cloud.tencent.com/document/api/1596/77929"> DescribeZones</a>查询<br>Product参数设置 oceanus</p>
                     * @return ZoneId <p>可用区Id，可通过地域管理系统<a href="https://cloud.tencent.com/document/api/1596/77929"> DescribeZones</a>查询<br>Product参数设置 oceanus</p>
                     * 
                     */
                    int64_t GetZoneId() const;

                    /**
                     * 设置<p>可用区Id，可通过地域管理系统<a href="https://cloud.tencent.com/document/api/1596/77929"> DescribeZones</a>查询<br>Product参数设置 oceanus</p>
                     * @param _zoneId <p>可用区Id，可通过地域管理系统<a href="https://cloud.tencent.com/document/api/1596/77929"> DescribeZones</a>查询<br>Product参数设置 oceanus</p>
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
                     * 获取<p>FlinkUI访问密码</p><p>用户名与密码将用于登录查看作业的 Flink UI 界面，集群用户名:admin</p>
                     * @return LoginPassword <p>FlinkUI访问密码</p><p>用户名与密码将用于登录查看作业的 Flink UI 界面，集群用户名:admin</p>
                     * 
                     */
                    std::string GetLoginPassword() const;

                    /**
                     * 设置<p>FlinkUI访问密码</p><p>用户名与密码将用于登录查看作业的 Flink UI 界面，集群用户名:admin</p>
                     * @param _loginPassword <p>FlinkUI访问密码</p><p>用户名与密码将用于登录查看作业的 Flink UI 界面，集群用户名:admin</p>
                     * 
                     */
                    void SetLoginPassword(const std::string& _loginPassword);

                    /**
                     * 判断参数 LoginPassword 是否已赋值
                     * @return LoginPassword 是否已赋值
                     * 
                     */
                    bool LoginPasswordHasBeenSet() const;

                    /**
                     * 获取<p>流计算通过 VPC 和弹性网卡来访问同地域中的其他云产品资源，并需要占用一定的子网 IP 数量，请确保所选子网的可用 IP 数量充足 如现有网络不符合您的要求，请前往 VPC 控制台<a href="https://console.cloud.tencent.com/vpc/vpc?rid=undefined">新建私有网络</a> 或 <a href="https://console.cloud.tencent.com/vpc/subnet?rid=undefined">新建子网</a></p>
                     * @return VpcDescriptions <p>流计算通过 VPC 和弹性网卡来访问同地域中的其他云产品资源，并需要占用一定的子网 IP 数量，请确保所选子网的可用 IP 数量充足 如现有网络不符合您的要求，请前往 VPC 控制台<a href="https://console.cloud.tencent.com/vpc/vpc?rid=undefined">新建私有网络</a> 或 <a href="https://console.cloud.tencent.com/vpc/subnet?rid=undefined">新建子网</a></p>
                     * 
                     */
                    std::vector<VPCDescription> GetVpcDescriptions() const;

                    /**
                     * 设置<p>流计算通过 VPC 和弹性网卡来访问同地域中的其他云产品资源，并需要占用一定的子网 IP 数量，请确保所选子网的可用 IP 数量充足 如现有网络不符合您的要求，请前往 VPC 控制台<a href="https://console.cloud.tencent.com/vpc/vpc?rid=undefined">新建私有网络</a> 或 <a href="https://console.cloud.tencent.com/vpc/subnet?rid=undefined">新建子网</a></p>
                     * @param _vpcDescriptions <p>流计算通过 VPC 和弹性网卡来访问同地域中的其他云产品资源，并需要占用一定的子网 IP 数量，请确保所选子网的可用 IP 数量充足 如现有网络不符合您的要求，请前往 VPC 控制台<a href="https://console.cloud.tencent.com/vpc/vpc?rid=undefined">新建私有网络</a> 或 <a href="https://console.cloud.tencent.com/vpc/subnet?rid=undefined">新建子网</a></p>
                     * 
                     */
                    void SetVpcDescriptions(const std::vector<VPCDescription>& _vpcDescriptions);

                    /**
                     * 判断参数 VpcDescriptions 是否已赋值
                     * @return VpcDescriptions 是否已赋值
                     * 
                     */
                    bool VpcDescriptionsHasBeenSet() const;

                    /**
                     * 获取<p>流计算使用对象存储 COS 来保存作业的 checkpoint、jar 包、或投递日志等，如本地域无可用存储桶，请前往<a href="https://console.cloud.tencent.com/cos5">对象存储控制台</a>新建 为了保证您的正常使用，对应COS的生命周期配置请参考<a href="https://cloud.tencent.com/document/product/436/33417?from=console_document_search">文档</a></p>
                     * @return DefaultCOSBucket <p>流计算使用对象存储 COS 来保存作业的 checkpoint、jar 包、或投递日志等，如本地域无可用存储桶，请前往<a href="https://console.cloud.tencent.com/cos5">对象存储控制台</a>新建 为了保证您的正常使用，对应COS的生命周期配置请参考<a href="https://cloud.tencent.com/document/product/436/33417?from=console_document_search">文档</a></p>
                     * 
                     */
                    std::string GetDefaultCOSBucket() const;

                    /**
                     * 设置<p>流计算使用对象存储 COS 来保存作业的 checkpoint、jar 包、或投递日志等，如本地域无可用存储桶，请前往<a href="https://console.cloud.tencent.com/cos5">对象存储控制台</a>新建 为了保证您的正常使用，对应COS的生命周期配置请参考<a href="https://cloud.tencent.com/document/product/436/33417?from=console_document_search">文档</a></p>
                     * @param _defaultCOSBucket <p>流计算使用对象存储 COS 来保存作业的 checkpoint、jar 包、或投递日志等，如本地域无可用存储桶，请前往<a href="https://console.cloud.tencent.com/cos5">对象存储控制台</a>新建 为了保证您的正常使用，对应COS的生命周期配置请参考<a href="https://cloud.tencent.com/document/product/436/33417?from=console_document_search">文档</a></p>
                     * 
                     */
                    void SetDefaultCOSBucket(const std::string& _defaultCOSBucket);

                    /**
                     * 判断参数 DefaultCOSBucket 是否已赋值
                     * @return DefaultCOSBucket 是否已赋值
                     * 
                     */
                    bool DefaultCOSBucketHasBeenSet() const;

                    /**
                     * 获取<p>集群CU数， 12 CU 是流计算的最小计算资源和计费单位，1CU 包含1个 CPU 和 4GB 内存。 当CU数大于等于 48 时，减免管理节点费用。</p>
                     * @return CU <p>集群CU数， 12 CU 是流计算的最小计算资源和计费单位，1CU 包含1个 CPU 和 4GB 内存。 当CU数大于等于 48 时，减免管理节点费用。</p>
                     * 
                     */
                    int64_t GetCU() const;

                    /**
                     * 设置<p>集群CU数， 12 CU 是流计算的最小计算资源和计费单位，1CU 包含1个 CPU 和 4GB 内存。 当CU数大于等于 48 时，减免管理节点费用。</p>
                     * @param _cU <p>集群CU数， 12 CU 是流计算的最小计算资源和计费单位，1CU 包含1个 CPU 和 4GB 内存。 当CU数大于等于 48 时，减免管理节点费用。</p>
                     * 
                     */
                    void SetCU(const int64_t& _cU);

                    /**
                     * 判断参数 CU 是否已赋值
                     * @return CU 是否已赋值
                     * 
                     */
                    bool CUHasBeenSet() const;

                    /**
                     * 获取<p>集群描述</p><p>入参限制：支持1-50个英文、汉字、数字、连接线-或下划线_</p>
                     * @return Remark <p>集群描述</p><p>入参限制：支持1-50个英文、汉字、数字、连接线-或下划线_</p>
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置<p>集群描述</p><p>入参限制：支持1-50个英文、汉字、数字、连接线-或下划线_</p>
                     * @param _remark <p>集群描述</p><p>入参限制：支持1-50个英文、汉字、数字、连接线-或下划线_</p>
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取<p>购买时长，以月为单位</p><p>取值范围：[1, 48]</p>
                     * @return Period <p>购买时长，以月为单位</p><p>取值范围：[1, 48]</p>
                     * 
                     */
                    int64_t GetPeriod() const;

                    /**
                     * 设置<p>购买时长，以月为单位</p><p>取值范围：[1, 48]</p>
                     * @param _period <p>购买时长，以月为单位</p><p>取值范围：[1, 48]</p>
                     * 
                     */
                    void SetPeriod(const int64_t& _period);

                    /**
                     * 判断参数 Period 是否已赋值
                     * @return Period 是否已赋值
                     * 
                     */
                    bool PeriodHasBeenSet() const;

                    /**
                     * 获取<p>集群计费类型</p><p>枚举值：</p><ul><li>PREPAID： 包年包月</li><li>POSTPAID_BY_SECOND： 按量计费</li></ul><p>默认值：POSTPAID_BY_SECOND</p>
                     * @return InstanceChargeType <p>集群计费类型</p><p>枚举值：</p><ul><li>PREPAID： 包年包月</li><li>POSTPAID_BY_SECOND： 按量计费</li></ul><p>默认值：POSTPAID_BY_SECOND</p>
                     * 
                     */
                    std::string GetInstanceChargeType() const;

                    /**
                     * 设置<p>集群计费类型</p><p>枚举值：</p><ul><li>PREPAID： 包年包月</li><li>POSTPAID_BY_SECOND： 按量计费</li></ul><p>默认值：POSTPAID_BY_SECOND</p>
                     * @param _instanceChargeType <p>集群计费类型</p><p>枚举值：</p><ul><li>PREPAID： 包年包月</li><li>POSTPAID_BY_SECOND： 按量计费</li></ul><p>默认值：POSTPAID_BY_SECOND</p>
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
                     * 获取<p>集群类型</p><p>枚举值：</p><ul><li>MULTI_AZ_CLUSTER： 多可用区集群</li></ul>
                     * @return ClusterType <p>集群类型</p><p>枚举值：</p><ul><li>MULTI_AZ_CLUSTER： 多可用区集群</li></ul>
                     * 
                     */
                    std::string GetClusterType() const;

                    /**
                     * 设置<p>集群类型</p><p>枚举值：</p><ul><li>MULTI_AZ_CLUSTER： 多可用区集群</li></ul>
                     * @param _clusterType <p>集群类型</p><p>枚举值：</p><ul><li>MULTI_AZ_CLUSTER： 多可用区集群</li></ul>
                     * 
                     */
                    void SetClusterType(const std::string& _clusterType);

                    /**
                     * 判断参数 ClusterType 是否已赋值
                     * @return ClusterType 是否已赋值
                     * 
                     */
                    bool ClusterTypeHasBeenSet() const;

                    /**
                     * 获取<p>自动续费标识</p><p>枚举值：</p><ul><li>NOTIFY_AND_MANUAL_RENEW： 通知并手动续费</li><li>NOTIFY_AND_AUTO_RENEW： 通知并自动续费</li><li>DISABLE_NOTIFY_AND_MANUAL_RENEW： 不通知并不自动续费</li></ul><p>默认值：NOTIFY_AND_MANUAL_RENEW</p><p>InstanceChargeType设置PREPAID时，对应包年包月集群，需要设置自动续费标识，按量计费集群不需要设置</p>
                     * @return RenewFlag <p>自动续费标识</p><p>枚举值：</p><ul><li>NOTIFY_AND_MANUAL_RENEW： 通知并手动续费</li><li>NOTIFY_AND_AUTO_RENEW： 通知并自动续费</li><li>DISABLE_NOTIFY_AND_MANUAL_RENEW： 不通知并不自动续费</li></ul><p>默认值：NOTIFY_AND_MANUAL_RENEW</p><p>InstanceChargeType设置PREPAID时，对应包年包月集群，需要设置自动续费标识，按量计费集群不需要设置</p>
                     * 
                     */
                    std::string GetRenewFlag() const;

                    /**
                     * 设置<p>自动续费标识</p><p>枚举值：</p><ul><li>NOTIFY_AND_MANUAL_RENEW： 通知并手动续费</li><li>NOTIFY_AND_AUTO_RENEW： 通知并自动续费</li><li>DISABLE_NOTIFY_AND_MANUAL_RENEW： 不通知并不自动续费</li></ul><p>默认值：NOTIFY_AND_MANUAL_RENEW</p><p>InstanceChargeType设置PREPAID时，对应包年包月集群，需要设置自动续费标识，按量计费集群不需要设置</p>
                     * @param _renewFlag <p>自动续费标识</p><p>枚举值：</p><ul><li>NOTIFY_AND_MANUAL_RENEW： 通知并手动续费</li><li>NOTIFY_AND_AUTO_RENEW： 通知并自动续费</li><li>DISABLE_NOTIFY_AND_MANUAL_RENEW： 不通知并不自动续费</li></ul><p>默认值：NOTIFY_AND_MANUAL_RENEW</p><p>InstanceChargeType设置PREPAID时，对应包年包月集群，需要设置自动续费标识，按量计费集群不需要设置</p>
                     * 
                     */
                    void SetRenewFlag(const std::string& _renewFlag);

                    /**
                     * 判断参数 RenewFlag 是否已赋值
                     * @return RenewFlag 是否已赋值
                     * 
                     */
                    bool RenewFlagHasBeenSet() const;

                    /**
                     * 获取<p>Flink UI访问类型设置</p><p>枚举值：</p><ul><li>NetworkAccess_INTERNAL： 内网访问</li><li>NetworkAccess_EXTERNAL： 公网访问</li></ul><p>默认值：NetworkAccess_EXTERNAL</p>
                     * @return FlinkWebUINetworkAccessType <p>Flink UI访问类型设置</p><p>枚举值：</p><ul><li>NetworkAccess_INTERNAL： 内网访问</li><li>NetworkAccess_EXTERNAL： 公网访问</li></ul><p>默认值：NetworkAccess_EXTERNAL</p>
                     * 
                     */
                    std::string GetFlinkWebUINetworkAccessType() const;

                    /**
                     * 设置<p>Flink UI访问类型设置</p><p>枚举值：</p><ul><li>NetworkAccess_INTERNAL： 内网访问</li><li>NetworkAccess_EXTERNAL： 公网访问</li></ul><p>默认值：NetworkAccess_EXTERNAL</p>
                     * @param _flinkWebUINetworkAccessType <p>Flink UI访问类型设置</p><p>枚举值：</p><ul><li>NetworkAccess_INTERNAL： 内网访问</li><li>NetworkAccess_EXTERNAL： 公网访问</li></ul><p>默认值：NetworkAccess_EXTERNAL</p>
                     * 
                     */
                    void SetFlinkWebUINetworkAccessType(const std::string& _flinkWebUINetworkAccessType);

                    /**
                     * 判断参数 FlinkWebUINetworkAccessType 是否已赋值
                     * @return FlinkWebUINetworkAccessType 是否已赋值
                     * 
                     */
                    bool FlinkWebUINetworkAccessTypeHasBeenSet() const;

                    /**
                     * 获取<p>多可用区VPC</p>
                     * @return SlaveVpcDescriptions <p>多可用区VPC</p>
                     * 
                     */
                    std::vector<SlaveVpcDescriptions> GetSlaveVpcDescriptions() const;

                    /**
                     * 设置<p>多可用区VPC</p>
                     * @param _slaveVpcDescriptions <p>多可用区VPC</p>
                     * 
                     */
                    void SetSlaveVpcDescriptions(const std::vector<SlaveVpcDescriptions>& _slaveVpcDescriptions);

                    /**
                     * 判断参数 SlaveVpcDescriptions 是否已赋值
                     * @return SlaveVpcDescriptions 是否已赋值
                     * 
                     */
                    bool SlaveVpcDescriptionsHasBeenSet() const;

                    /**
                     * 获取<p>核心内存比值，只支持 [0，2，4，8]</p>
                     * @return CUMemory <p>核心内存比值，只支持 [0，2，4，8]</p>
                     * 
                     */
                    int64_t GetCUMemory() const;

                    /**
                     * 设置<p>核心内存比值，只支持 [0，2，4，8]</p>
                     * @param _cUMemory <p>核心内存比值，只支持 [0，2，4，8]</p>
                     * 
                     */
                    void SetCUMemory(const int64_t& _cUMemory);

                    /**
                     * 判断参数 CUMemory 是否已赋值
                     * @return CUMemory 是否已赋值
                     * 
                     */
                    bool CUMemoryHasBeenSet() const;

                private:

                    /**
                     * <p>集群名称</p><p>入参限制：支持1-50个英文、汉字、数字、连接线-或下划线_</p>
                     */
                    std::string m_clusterName;
                    bool m_clusterNameHasBeenSet;

                    /**
                     * <p>地域Id，可通过地域管理系统<a href="https://cloud.tencent.com/document/api/1596/77930"> DescribeRegions</a>查询Product参数设置 oceanus</p>
                     */
                    int64_t m_regionId;
                    bool m_regionIdHasBeenSet;

                    /**
                     * <p>可用区Id，可通过地域管理系统<a href="https://cloud.tencent.com/document/api/1596/77929"> DescribeZones</a>查询<br>Product参数设置 oceanus</p>
                     */
                    int64_t m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * <p>FlinkUI访问密码</p><p>用户名与密码将用于登录查看作业的 Flink UI 界面，集群用户名:admin</p>
                     */
                    std::string m_loginPassword;
                    bool m_loginPasswordHasBeenSet;

                    /**
                     * <p>流计算通过 VPC 和弹性网卡来访问同地域中的其他云产品资源，并需要占用一定的子网 IP 数量，请确保所选子网的可用 IP 数量充足 如现有网络不符合您的要求，请前往 VPC 控制台<a href="https://console.cloud.tencent.com/vpc/vpc?rid=undefined">新建私有网络</a> 或 <a href="https://console.cloud.tencent.com/vpc/subnet?rid=undefined">新建子网</a></p>
                     */
                    std::vector<VPCDescription> m_vpcDescriptions;
                    bool m_vpcDescriptionsHasBeenSet;

                    /**
                     * <p>流计算使用对象存储 COS 来保存作业的 checkpoint、jar 包、或投递日志等，如本地域无可用存储桶，请前往<a href="https://console.cloud.tencent.com/cos5">对象存储控制台</a>新建 为了保证您的正常使用，对应COS的生命周期配置请参考<a href="https://cloud.tencent.com/document/product/436/33417?from=console_document_search">文档</a></p>
                     */
                    std::string m_defaultCOSBucket;
                    bool m_defaultCOSBucketHasBeenSet;

                    /**
                     * <p>集群CU数， 12 CU 是流计算的最小计算资源和计费单位，1CU 包含1个 CPU 和 4GB 内存。 当CU数大于等于 48 时，减免管理节点费用。</p>
                     */
                    int64_t m_cU;
                    bool m_cUHasBeenSet;

                    /**
                     * <p>集群描述</p><p>入参限制：支持1-50个英文、汉字、数字、连接线-或下划线_</p>
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * <p>购买时长，以月为单位</p><p>取值范围：[1, 48]</p>
                     */
                    int64_t m_period;
                    bool m_periodHasBeenSet;

                    /**
                     * <p>集群计费类型</p><p>枚举值：</p><ul><li>PREPAID： 包年包月</li><li>POSTPAID_BY_SECOND： 按量计费</li></ul><p>默认值：POSTPAID_BY_SECOND</p>
                     */
                    std::string m_instanceChargeType;
                    bool m_instanceChargeTypeHasBeenSet;

                    /**
                     * <p>集群类型</p><p>枚举值：</p><ul><li>MULTI_AZ_CLUSTER： 多可用区集群</li></ul>
                     */
                    std::string m_clusterType;
                    bool m_clusterTypeHasBeenSet;

                    /**
                     * <p>自动续费标识</p><p>枚举值：</p><ul><li>NOTIFY_AND_MANUAL_RENEW： 通知并手动续费</li><li>NOTIFY_AND_AUTO_RENEW： 通知并自动续费</li><li>DISABLE_NOTIFY_AND_MANUAL_RENEW： 不通知并不自动续费</li></ul><p>默认值：NOTIFY_AND_MANUAL_RENEW</p><p>InstanceChargeType设置PREPAID时，对应包年包月集群，需要设置自动续费标识，按量计费集群不需要设置</p>
                     */
                    std::string m_renewFlag;
                    bool m_renewFlagHasBeenSet;

                    /**
                     * <p>Flink UI访问类型设置</p><p>枚举值：</p><ul><li>NetworkAccess_INTERNAL： 内网访问</li><li>NetworkAccess_EXTERNAL： 公网访问</li></ul><p>默认值：NetworkAccess_EXTERNAL</p>
                     */
                    std::string m_flinkWebUINetworkAccessType;
                    bool m_flinkWebUINetworkAccessTypeHasBeenSet;

                    /**
                     * <p>多可用区VPC</p>
                     */
                    std::vector<SlaveVpcDescriptions> m_slaveVpcDescriptions;
                    bool m_slaveVpcDescriptionsHasBeenSet;

                    /**
                     * <p>核心内存比值，只支持 [0，2，4，8]</p>
                     */
                    int64_t m_cUMemory;
                    bool m_cUMemoryHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCEANUS_V20190422_MODEL_CREATEOCEANUSCLUSTERREQUEST_H_
