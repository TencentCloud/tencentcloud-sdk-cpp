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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_ADDINSTANCESREQUEST_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_ADDINSTANCESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cynosdb/v20190107/model/ModifyParamItem.h>
#include <tencentcloud/cynosdb/v20190107/model/UpgradeProxy.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * AddInstances请求参数结构体
                */
                class AddInstancesRequest : public AbstractModel
                {
                public:
                    AddInstancesRequest();
                    ~AddInstancesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>集群ID</p>
                     * @return ClusterId <p>集群ID</p>
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置<p>集群ID</p>
                     * @param _clusterId <p>集群ID</p>
                     * 
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取<p>Cpu核数</p>
                     * @return Cpu <p>Cpu核数</p>
                     * 
                     */
                    int64_t GetCpu() const;

                    /**
                     * 设置<p>Cpu核数</p>
                     * @param _cpu <p>Cpu核数</p>
                     * 
                     */
                    void SetCpu(const int64_t& _cpu);

                    /**
                     * 判断参数 Cpu 是否已赋值
                     * @return Cpu 是否已赋值
                     * 
                     */
                    bool CpuHasBeenSet() const;

                    /**
                     * 获取<p>内存，单位为GB</p>
                     * @return Memory <p>内存，单位为GB</p>
                     * 
                     */
                    int64_t GetMemory() const;

                    /**
                     * 设置<p>内存，单位为GB</p>
                     * @param _memory <p>内存，单位为GB</p>
                     * 
                     */
                    void SetMemory(const int64_t& _memory);

                    /**
                     * 判断参数 Memory 是否已赋值
                     * @return Memory 是否已赋值
                     * 
                     */
                    bool MemoryHasBeenSet() const;

                    /**
                     * 获取<p>新增只读实例数，取值范围为(0,15]</p>
                     * @return ReadOnlyCount <p>新增只读实例数，取值范围为(0,15]</p>
                     * 
                     */
                    int64_t GetReadOnlyCount() const;

                    /**
                     * 设置<p>新增只读实例数，取值范围为(0,15]</p>
                     * @param _readOnlyCount <p>新增只读实例数，取值范围为(0,15]</p>
                     * 
                     */
                    void SetReadOnlyCount(const int64_t& _readOnlyCount);

                    /**
                     * 判断参数 ReadOnlyCount 是否已赋值
                     * @return ReadOnlyCount 是否已赋值
                     * 
                     */
                    bool ReadOnlyCountHasBeenSet() const;

                    /**
                     * 获取<p>实例机器类型，支持值如下：</p><ul><li>common：表示通用型</li><li>exclusive：表示独享型</li></ul>
                     * @return DeviceType <p>实例机器类型，支持值如下：</p><ul><li>common：表示通用型</li><li>exclusive：表示独享型</li></ul>
                     * 
                     */
                    std::string GetDeviceType() const;

                    /**
                     * 设置<p>实例机器类型，支持值如下：</p><ul><li>common：表示通用型</li><li>exclusive：表示独享型</li></ul>
                     * @param _deviceType <p>实例机器类型，支持值如下：</p><ul><li>common：表示通用型</li><li>exclusive：表示独享型</li></ul>
                     * 
                     */
                    void SetDeviceType(const std::string& _deviceType);

                    /**
                     * 判断参数 DeviceType 是否已赋值
                     * @return DeviceType 是否已赋值
                     * 
                     */
                    bool DeviceTypeHasBeenSet() const;

                    /**
                     * 获取<p>实例组ID，在已有RO组中新增实例时使用，不传则新增RO组。当前版本不建议传输该值。</p>
                     * @return InstanceGrpId <p>实例组ID，在已有RO组中新增实例时使用，不传则新增RO组。当前版本不建议传输该值。</p>
                     * @deprecated
                     */
                    std::string GetInstanceGrpId() const;

                    /**
                     * 设置<p>实例组ID，在已有RO组中新增实例时使用，不传则新增RO组。当前版本不建议传输该值。</p>
                     * @param _instanceGrpId <p>实例组ID，在已有RO组中新增实例时使用，不传则新增RO组。当前版本不建议传输该值。</p>
                     * @deprecated
                     */
                    void SetInstanceGrpId(const std::string& _instanceGrpId);

                    /**
                     * 判断参数 InstanceGrpId 是否已赋值
                     * @return InstanceGrpId 是否已赋值
                     * @deprecated
                     */
                    bool InstanceGrpIdHasBeenSet() const;

                    /**
                     * 获取<p>所属VPC网络ID。</p>
                     * @return VpcId <p>所属VPC网络ID。</p>
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置<p>所属VPC网络ID。</p>
                     * @param _vpcId <p>所属VPC网络ID。</p>
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
                     * 获取<p>所属子网ID，如果设置了VpcId，则SubnetId必填。</p>
                     * @return SubnetId <p>所属子网ID，如果设置了VpcId，则SubnetId必填。</p>
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置<p>所属子网ID，如果设置了VpcId，则SubnetId必填。</p>
                     * @param _subnetId <p>所属子网ID，如果设置了VpcId，则SubnetId必填。</p>
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
                     * 获取<p>新增RO组时使用的Port，取值范围为[0,65535)</p>
                     * @return Port <p>新增RO组时使用的Port，取值范围为[0,65535)</p>
                     * 
                     */
                    int64_t GetPort() const;

                    /**
                     * 设置<p>新增RO组时使用的Port，取值范围为[0,65535)</p>
                     * @param _port <p>新增RO组时使用的Port，取值范围为[0,65535)</p>
                     * 
                     */
                    void SetPort(const int64_t& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     * 
                     */
                    bool PortHasBeenSet() const;

                    /**
                     * 获取<p>实例名称，字符串长度范围为[0,64)，取值范围为大小写字母，0-9数字，&#39;_&#39;,&#39;-&#39;,&#39;.&#39;</p>
                     * @return InstanceName <p>实例名称，字符串长度范围为[0,64)，取值范围为大小写字母，0-9数字，&#39;_&#39;,&#39;-&#39;,&#39;.&#39;</p>
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置<p>实例名称，字符串长度范围为[0,64)，取值范围为大小写字母，0-9数字，&#39;_&#39;,&#39;-&#39;,&#39;.&#39;</p>
                     * @param _instanceName <p>实例名称，字符串长度范围为[0,64)，取值范围为大小写字母，0-9数字，&#39;_&#39;,&#39;-&#39;,&#39;.&#39;</p>
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
                     * 获取<p>是否自动选择代金券 1是 0否 默认为0</p>
                     * @return AutoVoucher <p>是否自动选择代金券 1是 0否 默认为0</p>
                     * 
                     */
                    int64_t GetAutoVoucher() const;

                    /**
                     * 设置<p>是否自动选择代金券 1是 0否 默认为0</p>
                     * @param _autoVoucher <p>是否自动选择代金券 1是 0否 默认为0</p>
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
                     * 获取<p>数据库类型，取值范围: </p><li> MYSQL </li>
                     * @return DbType <p>数据库类型，取值范围: </p><li> MYSQL </li>
                     * 
                     */
                    std::string GetDbType() const;

                    /**
                     * 设置<p>数据库类型，取值范围: </p><li> MYSQL </li>
                     * @param _dbType <p>数据库类型，取值范围: </p><li> MYSQL </li>
                     * 
                     */
                    void SetDbType(const std::string& _dbType);

                    /**
                     * 判断参数 DbType 是否已赋值
                     * @return DbType 是否已赋值
                     * 
                     */
                    bool DbTypeHasBeenSet() const;

                    /**
                     * 获取<p>订单来源，字符串长度范围为[0,64)</p>
                     * @return OrderSource <p>订单来源，字符串长度范围为[0,64)</p>
                     * 
                     */
                    std::string GetOrderSource() const;

                    /**
                     * 设置<p>订单来源，字符串长度范围为[0,64)</p>
                     * @param _orderSource <p>订单来源，字符串长度范围为[0,64)</p>
                     * 
                     */
                    void SetOrderSource(const std::string& _orderSource);

                    /**
                     * 判断参数 OrderSource 是否已赋值
                     * @return OrderSource 是否已赋值
                     * 
                     */
                    bool OrderSourceHasBeenSet() const;

                    /**
                     * 获取<p>交易模式 0-下单并支付 1-下单</p>
                     * @return DealMode <p>交易模式 0-下单并支付 1-下单</p>
                     * 
                     */
                    int64_t GetDealMode() const;

                    /**
                     * 设置<p>交易模式 0-下单并支付 1-下单</p>
                     * @param _dealMode <p>交易模式 0-下单并支付 1-下单</p>
                     * 
                     */
                    void SetDealMode(const int64_t& _dealMode);

                    /**
                     * 判断参数 DealMode 是否已赋值
                     * @return DealMode 是否已赋值
                     * 
                     */
                    bool DealModeHasBeenSet() const;

                    /**
                     * 获取<p>参数模板ID</p>
                     * @return ParamTemplateId <p>参数模板ID</p>
                     * 
                     */
                    int64_t GetParamTemplateId() const;

                    /**
                     * 设置<p>参数模板ID</p>
                     * @param _paramTemplateId <p>参数模板ID</p>
                     * 
                     */
                    void SetParamTemplateId(const int64_t& _paramTemplateId);

                    /**
                     * 判断参数 ParamTemplateId 是否已赋值
                     * @return ParamTemplateId 是否已赋值
                     * 
                     */
                    bool ParamTemplateIdHasBeenSet() const;

                    /**
                     * 获取<p>参数列表，ParamTemplateId 传入时InstanceParams才有效</p>
                     * @return InstanceParams <p>参数列表，ParamTemplateId 传入时InstanceParams才有效</p>
                     * 
                     */
                    std::vector<ModifyParamItem> GetInstanceParams() const;

                    /**
                     * 设置<p>参数列表，ParamTemplateId 传入时InstanceParams才有效</p>
                     * @param _instanceParams <p>参数列表，ParamTemplateId 传入时InstanceParams才有效</p>
                     * 
                     */
                    void SetInstanceParams(const std::vector<ModifyParamItem>& _instanceParams);

                    /**
                     * 判断参数 InstanceParams 是否已赋值
                     * @return InstanceParams 是否已赋值
                     * 
                     */
                    bool InstanceParamsHasBeenSet() const;

                    /**
                     * 获取<p>安全组ID，新建只读实例时可以指定安全组。</p>
                     * @return SecurityGroupIds <p>安全组ID，新建只读实例时可以指定安全组。</p>
                     * 
                     */
                    std::vector<std::string> GetSecurityGroupIds() const;

                    /**
                     * 设置<p>安全组ID，新建只读实例时可以指定安全组。</p>
                     * @param _securityGroupIds <p>安全组ID，新建只读实例时可以指定安全组。</p>
                     * 
                     */
                    void SetSecurityGroupIds(const std::vector<std::string>& _securityGroupIds);

                    /**
                     * 判断参数 SecurityGroupIds 是否已赋值
                     * @return SecurityGroupIds 是否已赋值
                     * 
                     */
                    bool SecurityGroupIdsHasBeenSet() const;

                    /**
                     * 获取<p>proxy同步升级</p>
                     * @return UpgradeProxy <p>proxy同步升级</p>
                     * 
                     */
                    UpgradeProxy GetUpgradeProxy() const;

                    /**
                     * 设置<p>proxy同步升级</p>
                     * @param _upgradeProxy <p>proxy同步升级</p>
                     * 
                     */
                    void SetUpgradeProxy(const UpgradeProxy& _upgradeProxy);

                    /**
                     * 判断参数 UpgradeProxy 是否已赋值
                     * @return UpgradeProxy 是否已赋值
                     * 
                     */
                    bool UpgradeProxyHasBeenSet() const;

                private:

                    /**
                     * <p>集群ID</p>
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * <p>Cpu核数</p>
                     */
                    int64_t m_cpu;
                    bool m_cpuHasBeenSet;

                    /**
                     * <p>内存，单位为GB</p>
                     */
                    int64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * <p>新增只读实例数，取值范围为(0,15]</p>
                     */
                    int64_t m_readOnlyCount;
                    bool m_readOnlyCountHasBeenSet;

                    /**
                     * <p>实例机器类型，支持值如下：</p><ul><li>common：表示通用型</li><li>exclusive：表示独享型</li></ul>
                     */
                    std::string m_deviceType;
                    bool m_deviceTypeHasBeenSet;

                    /**
                     * <p>实例组ID，在已有RO组中新增实例时使用，不传则新增RO组。当前版本不建议传输该值。</p>
                     */
                    std::string m_instanceGrpId;
                    bool m_instanceGrpIdHasBeenSet;

                    /**
                     * <p>所属VPC网络ID。</p>
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * <p>所属子网ID，如果设置了VpcId，则SubnetId必填。</p>
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * <p>新增RO组时使用的Port，取值范围为[0,65535)</p>
                     */
                    int64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * <p>实例名称，字符串长度范围为[0,64)，取值范围为大小写字母，0-9数字，&#39;_&#39;,&#39;-&#39;,&#39;.&#39;</p>
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * <p>是否自动选择代金券 1是 0否 默认为0</p>
                     */
                    int64_t m_autoVoucher;
                    bool m_autoVoucherHasBeenSet;

                    /**
                     * <p>数据库类型，取值范围: </p><li> MYSQL </li>
                     */
                    std::string m_dbType;
                    bool m_dbTypeHasBeenSet;

                    /**
                     * <p>订单来源，字符串长度范围为[0,64)</p>
                     */
                    std::string m_orderSource;
                    bool m_orderSourceHasBeenSet;

                    /**
                     * <p>交易模式 0-下单并支付 1-下单</p>
                     */
                    int64_t m_dealMode;
                    bool m_dealModeHasBeenSet;

                    /**
                     * <p>参数模板ID</p>
                     */
                    int64_t m_paramTemplateId;
                    bool m_paramTemplateIdHasBeenSet;

                    /**
                     * <p>参数列表，ParamTemplateId 传入时InstanceParams才有效</p>
                     */
                    std::vector<ModifyParamItem> m_instanceParams;
                    bool m_instanceParamsHasBeenSet;

                    /**
                     * <p>安全组ID，新建只读实例时可以指定安全组。</p>
                     */
                    std::vector<std::string> m_securityGroupIds;
                    bool m_securityGroupIdsHasBeenSet;

                    /**
                     * <p>proxy同步升级</p>
                     */
                    UpgradeProxy m_upgradeProxy;
                    bool m_upgradeProxyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_ADDINSTANCESREQUEST_H_
