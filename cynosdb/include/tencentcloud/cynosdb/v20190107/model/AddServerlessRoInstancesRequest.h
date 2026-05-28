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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_ADDSERVERLESSROINSTANCESREQUEST_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_ADDSERVERLESSROINSTANCESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cynosdb/v20190107/model/ModifyParamItem.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * AddServerlessRoInstances请求参数结构体
                */
                class AddServerlessRoInstancesRequest : public AbstractModel
                {
                public:
                    AddServerlessRoInstancesRequest();
                    ~AddServerlessRoInstancesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>集群Id</p>
                     * @return ClusterId <p>集群Id</p>
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置<p>集群Id</p>
                     * @param _clusterId <p>集群Id</p>
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
                     * 获取<p>ro实例最小规格</p>
                     * @return MinCpu <p>ro实例最小规格</p>
                     * 
                     */
                    double GetMinCpu() const;

                    /**
                     * 设置<p>ro实例最小规格</p>
                     * @param _minCpu <p>ro实例最小规格</p>
                     * 
                     */
                    void SetMinCpu(const double& _minCpu);

                    /**
                     * 判断参数 MinCpu 是否已赋值
                     * @return MinCpu 是否已赋值
                     * 
                     */
                    bool MinCpuHasBeenSet() const;

                    /**
                     * 获取<p>ro实例最大规格</p>
                     * @return MaxCpu <p>ro实例最大规格</p>
                     * 
                     */
                    double GetMaxCpu() const;

                    /**
                     * 设置<p>ro实例最大规格</p>
                     * @param _maxCpu <p>ro实例最大规格</p>
                     * 
                     */
                    void SetMaxCpu(const double& _maxCpu);

                    /**
                     * 判断参数 MaxCpu 是否已赋值
                     * @return MaxCpu 是否已赋值
                     * 
                     */
                    bool MaxCpuHasBeenSet() const;

                    /**
                     * 获取<p>ro实例名称</p>
                     * @return InstanceName <p>ro实例名称</p>
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置<p>ro实例名称</p>
                     * @param _instanceName <p>ro实例名称</p>
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
                     * 获取<p>所属VPC网络ID</p>
                     * @return VpcId <p>所属VPC网络ID</p>
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置<p>所属VPC网络ID</p>
                     * @param _vpcId <p>所属VPC网络ID</p>
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
                     * 获取<p>所属子网ID，如果设置了VpcId，则SubnetId必填</p>
                     * @return SubnetId <p>所属子网ID，如果设置了VpcId，则SubnetId必填</p>
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置<p>所属子网ID，如果设置了VpcId，则SubnetId必填</p>
                     * @param _subnetId <p>所属子网ID，如果设置了VpcId，则SubnetId必填</p>
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
                    uint64_t GetPort() const;

                    /**
                     * 设置<p>新增RO组时使用的Port，取值范围为[0,65535)</p>
                     * @param _port <p>新增RO组时使用的Port，取值范围为[0,65535)</p>
                     * 
                     */
                    void SetPort(const uint64_t& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     * 
                     */
                    bool PortHasBeenSet() const;

                    /**
                     * 获取<p>安全组ID，新建只读实例时可以指定安全组</p>
                     * @return SecurityGroupIds <p>安全组ID，新建只读实例时可以指定安全组</p>
                     * 
                     */
                    std::vector<std::string> GetSecurityGroupIds() const;

                    /**
                     * 设置<p>安全组ID，新建只读实例时可以指定安全组</p>
                     * @param _securityGroupIds <p>安全组ID，新建只读实例时可以指定安全组</p>
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
                     * 获取<p>是否自动暂停</p><p>枚举值：</p><ul><li>yes： 是</li><li>no： 否</li></ul>
                     * @return AutoPause <p>是否自动暂停</p><p>枚举值：</p><ul><li>yes： 是</li><li>no： 否</li></ul>
                     * 
                     */
                    std::string GetAutoPause() const;

                    /**
                     * 设置<p>是否自动暂停</p><p>枚举值：</p><ul><li>yes： 是</li><li>no： 否</li></ul>
                     * @param _autoPause <p>是否自动暂停</p><p>枚举值：</p><ul><li>yes： 是</li><li>no： 否</li></ul>
                     * 
                     */
                    void SetAutoPause(const std::string& _autoPause);

                    /**
                     * 判断参数 AutoPause 是否已赋值
                     * @return AutoPause 是否已赋值
                     * 
                     */
                    bool AutoPauseHasBeenSet() const;

                    /**
                     * 获取<p>自动暂停时间</p><p>单位：秒</p>
                     * @return AutoPauseDelay <p>自动暂停时间</p><p>单位：秒</p>
                     * 
                     */
                    int64_t GetAutoPauseDelay() const;

                    /**
                     * 设置<p>自动暂停时间</p><p>单位：秒</p>
                     * @param _autoPauseDelay <p>自动暂停时间</p><p>单位：秒</p>
                     * 
                     */
                    void SetAutoPauseDelay(const int64_t& _autoPauseDelay);

                    /**
                     * 判断参数 AutoPauseDelay 是否已赋值
                     * @return AutoPauseDelay 是否已赋值
                     * 
                     */
                    bool AutoPauseDelayHasBeenSet() const;

                    /**
                     * 获取<p>实例参数</p>
                     * @return InstanceParams <p>实例参数</p>
                     * 
                     */
                    std::vector<ModifyParamItem> GetInstanceParams() const;

                    /**
                     * 设置<p>实例参数</p>
                     * @param _instanceParams <p>实例参数</p>
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
                     * 获取<p>参数模板</p>
                     * @return ParamTemplateId <p>参数模板</p>
                     * 
                     */
                    int64_t GetParamTemplateId() const;

                    /**
                     * 设置<p>参数模板</p>
                     * @param _paramTemplateId <p>参数模板</p>
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
                     * 获取<p>新增的只读实例数量</p>
                     * @return RoCount <p>新增的只读实例数量</p>
                     * 
                     */
                    int64_t GetRoCount() const;

                    /**
                     * 设置<p>新增的只读实例数量</p>
                     * @param _roCount <p>新增的只读实例数量</p>
                     * 
                     */
                    void SetRoCount(const int64_t& _roCount);

                    /**
                     * 判断参数 RoCount 是否已赋值
                     * @return RoCount 是否已赋值
                     * 
                     */
                    bool RoCountHasBeenSet() const;

                private:

                    /**
                     * <p>集群Id</p>
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * <p>ro实例最小规格</p>
                     */
                    double m_minCpu;
                    bool m_minCpuHasBeenSet;

                    /**
                     * <p>ro实例最大规格</p>
                     */
                    double m_maxCpu;
                    bool m_maxCpuHasBeenSet;

                    /**
                     * <p>ro实例名称</p>
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * <p>所属VPC网络ID</p>
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * <p>所属子网ID，如果设置了VpcId，则SubnetId必填</p>
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * <p>新增RO组时使用的Port，取值范围为[0,65535)</p>
                     */
                    uint64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * <p>安全组ID，新建只读实例时可以指定安全组</p>
                     */
                    std::vector<std::string> m_securityGroupIds;
                    bool m_securityGroupIdsHasBeenSet;

                    /**
                     * <p>是否自动暂停</p><p>枚举值：</p><ul><li>yes： 是</li><li>no： 否</li></ul>
                     */
                    std::string m_autoPause;
                    bool m_autoPauseHasBeenSet;

                    /**
                     * <p>自动暂停时间</p><p>单位：秒</p>
                     */
                    int64_t m_autoPauseDelay;
                    bool m_autoPauseDelayHasBeenSet;

                    /**
                     * <p>实例参数</p>
                     */
                    std::vector<ModifyParamItem> m_instanceParams;
                    bool m_instanceParamsHasBeenSet;

                    /**
                     * <p>参数模板</p>
                     */
                    int64_t m_paramTemplateId;
                    bool m_paramTemplateIdHasBeenSet;

                    /**
                     * <p>新增的只读实例数量</p>
                     */
                    int64_t m_roCount;
                    bool m_roCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_ADDSERVERLESSROINSTANCESREQUEST_H_
