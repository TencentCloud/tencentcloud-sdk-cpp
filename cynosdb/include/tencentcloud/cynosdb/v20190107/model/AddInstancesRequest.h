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
                     * 获取集群ID
                     * @return ClusterId 集群ID
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置集群ID
                     * @param _clusterId 集群ID
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
                     * 获取Cpu核数
                     * @return Cpu Cpu核数
                     * 
                     */
                    int64_t GetCpu() const;

                    /**
                     * 设置Cpu核数
                     * @param _cpu Cpu核数
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
                     * 获取内存，单位为GB
                     * @return Memory 内存，单位为GB
                     * 
                     */
                    int64_t GetMemory() const;

                    /**
                     * 设置内存，单位为GB
                     * @param _memory 内存，单位为GB
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
                     * 获取新增只读实例数，取值范围为(0,15]
                     * @return ReadOnlyCount 新增只读实例数，取值范围为(0,15]
                     * 
                     */
                    int64_t GetReadOnlyCount() const;

                    /**
                     * 设置新增只读实例数，取值范围为(0,15]
                     * @param _readOnlyCount 新增只读实例数，取值范围为(0,15]
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
                     * 获取实例机器类型
                     * @return DeviceType 实例机器类型
                     * 
                     */
                    std::string GetDeviceType() const;

                    /**
                     * 设置实例机器类型
                     * @param _deviceType 实例机器类型
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
                     * 获取实例组ID，在已有RO组中新增实例时使用，不传则新增RO组。当前版本不建议传输该值。
                     * @return InstanceGrpId 实例组ID，在已有RO组中新增实例时使用，不传则新增RO组。当前版本不建议传输该值。
                     * @deprecated
                     */
                    std::string GetInstanceGrpId() const;

                    /**
                     * 设置实例组ID，在已有RO组中新增实例时使用，不传则新增RO组。当前版本不建议传输该值。
                     * @param _instanceGrpId 实例组ID，在已有RO组中新增实例时使用，不传则新增RO组。当前版本不建议传输该值。
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
                     * 获取所属VPC网络ID。
                     * @return VpcId 所属VPC网络ID。
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置所属VPC网络ID。
                     * @param _vpcId 所属VPC网络ID。
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
                     * 获取所属子网ID，如果设置了VpcId，则SubnetId必填。
                     * @return SubnetId 所属子网ID，如果设置了VpcId，则SubnetId必填。
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置所属子网ID，如果设置了VpcId，则SubnetId必填。
                     * @param _subnetId 所属子网ID，如果设置了VpcId，则SubnetId必填。
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
                     * 获取新增RO组时使用的Port，取值范围为[0,65535)
                     * @return Port 新增RO组时使用的Port，取值范围为[0,65535)
                     * 
                     */
                    int64_t GetPort() const;

                    /**
                     * 设置新增RO组时使用的Port，取值范围为[0,65535)
                     * @param _port 新增RO组时使用的Port，取值范围为[0,65535)
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
                     * 获取实例名称，字符串长度范围为[0,64)，取值范围为大小写字母，0-9数字，'_','-','.'
                     * @return InstanceName 实例名称，字符串长度范围为[0,64)，取值范围为大小写字母，0-9数字，'_','-','.'
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置实例名称，字符串长度范围为[0,64)，取值范围为大小写字母，0-9数字，'_','-','.'
                     * @param _instanceName 实例名称，字符串长度范围为[0,64)，取值范围为大小写字母，0-9数字，'_','-','.'
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
                     * 获取是否自动选择代金券 1是 0否 默认为0
                     * @return AutoVoucher 是否自动选择代金券 1是 0否 默认为0
                     * 
                     */
                    int64_t GetAutoVoucher() const;

                    /**
                     * 设置是否自动选择代金券 1是 0否 默认为0
                     * @param _autoVoucher 是否自动选择代金券 1是 0否 默认为0
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
                     * 获取数据库类型，取值范围: 
<li> MYSQL </li>
                     * @return DbType 数据库类型，取值范围: 
<li> MYSQL </li>
                     * 
                     */
                    std::string GetDbType() const;

                    /**
                     * 设置数据库类型，取值范围: 
<li> MYSQL </li>
                     * @param _dbType 数据库类型，取值范围: 
<li> MYSQL </li>
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
                     * 获取订单来源，字符串长度范围为[0,64)
                     * @return OrderSource 订单来源，字符串长度范围为[0,64)
                     * 
                     */
                    std::string GetOrderSource() const;

                    /**
                     * 设置订单来源，字符串长度范围为[0,64)
                     * @param _orderSource 订单来源，字符串长度范围为[0,64)
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
                     * 获取交易模式 0-下单并支付 1-下单
                     * @return DealMode 交易模式 0-下单并支付 1-下单
                     * 
                     */
                    int64_t GetDealMode() const;

                    /**
                     * 设置交易模式 0-下单并支付 1-下单
                     * @param _dealMode 交易模式 0-下单并支付 1-下单
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
                     * 获取参数模板ID
                     * @return ParamTemplateId 参数模板ID
                     * 
                     */
                    int64_t GetParamTemplateId() const;

                    /**
                     * 设置参数模板ID
                     * @param _paramTemplateId 参数模板ID
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
                     * 获取参数列表，ParamTemplateId 传入时InstanceParams才有效
                     * @return InstanceParams 参数列表，ParamTemplateId 传入时InstanceParams才有效
                     * 
                     */
                    std::vector<ModifyParamItem> GetInstanceParams() const;

                    /**
                     * 设置参数列表，ParamTemplateId 传入时InstanceParams才有效
                     * @param _instanceParams 参数列表，ParamTemplateId 传入时InstanceParams才有效
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
                     * 获取安全组ID，新建只读实例时可以指定安全组。
                     * @return SecurityGroupIds 安全组ID，新建只读实例时可以指定安全组。
                     * 
                     */
                    std::vector<std::string> GetSecurityGroupIds() const;

                    /**
                     * 设置安全组ID，新建只读实例时可以指定安全组。
                     * @param _securityGroupIds 安全组ID，新建只读实例时可以指定安全组。
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
                     * 获取proxy同步升级
                     * @return UpgradeProxy proxy同步升级
                     * 
                     */
                    UpgradeProxy GetUpgradeProxy() const;

                    /**
                     * 设置proxy同步升级
                     * @param _upgradeProxy proxy同步升级
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
                     * 集群ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * Cpu核数
                     */
                    int64_t m_cpu;
                    bool m_cpuHasBeenSet;

                    /**
                     * 内存，单位为GB
                     */
                    int64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * 新增只读实例数，取值范围为(0,15]
                     */
                    int64_t m_readOnlyCount;
                    bool m_readOnlyCountHasBeenSet;

                    /**
                     * 实例机器类型
                     */
                    std::string m_deviceType;
                    bool m_deviceTypeHasBeenSet;

                    /**
                     * 实例组ID，在已有RO组中新增实例时使用，不传则新增RO组。当前版本不建议传输该值。
                     */
                    std::string m_instanceGrpId;
                    bool m_instanceGrpIdHasBeenSet;

                    /**
                     * 所属VPC网络ID。
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 所属子网ID，如果设置了VpcId，则SubnetId必填。
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * 新增RO组时使用的Port，取值范围为[0,65535)
                     */
                    int64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * 实例名称，字符串长度范围为[0,64)，取值范围为大小写字母，0-9数字，'_','-','.'
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * 是否自动选择代金券 1是 0否 默认为0
                     */
                    int64_t m_autoVoucher;
                    bool m_autoVoucherHasBeenSet;

                    /**
                     * 数据库类型，取值范围: 
<li> MYSQL </li>
                     */
                    std::string m_dbType;
                    bool m_dbTypeHasBeenSet;

                    /**
                     * 订单来源，字符串长度范围为[0,64)
                     */
                    std::string m_orderSource;
                    bool m_orderSourceHasBeenSet;

                    /**
                     * 交易模式 0-下单并支付 1-下单
                     */
                    int64_t m_dealMode;
                    bool m_dealModeHasBeenSet;

                    /**
                     * 参数模板ID
                     */
                    int64_t m_paramTemplateId;
                    bool m_paramTemplateIdHasBeenSet;

                    /**
                     * 参数列表，ParamTemplateId 传入时InstanceParams才有效
                     */
                    std::vector<ModifyParamItem> m_instanceParams;
                    bool m_instanceParamsHasBeenSet;

                    /**
                     * 安全组ID，新建只读实例时可以指定安全组。
                     */
                    std::vector<std::string> m_securityGroupIds;
                    bool m_securityGroupIdsHasBeenSet;

                    /**
                     * proxy同步升级
                     */
                    UpgradeProxy m_upgradeProxy;
                    bool m_upgradeProxyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_ADDINSTANCESREQUEST_H_
