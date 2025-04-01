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

#ifndef TENCENTCLOUD_VDB_V20230616_MODEL_CREATEINSTANCEREQUEST_H_
#define TENCENTCLOUD_VDB_V20230616_MODEL_CREATEINSTANCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vdb/v20230616/model/Tag.h>
#include <tencentcloud/vdb/v20230616/model/CreateInstancesComponent.h>


namespace TencentCloud
{
    namespace Vdb
    {
        namespace V20230616
        {
            namespace Model
            {
                /**
                * CreateInstance请求参数结构体
                */
                class CreateInstanceRequest : public AbstractModel
                {
                public:
                    CreateInstanceRequest();
                    ~CreateInstanceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取私有网络 ID。
                     * @return VpcId 私有网络 ID。
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置私有网络 ID。
                     * @param _vpcId 私有网络 ID。
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
                     * 获取私有网络 VPC 的子网 ID。
                     * @return SubnetId 私有网络 VPC 的子网 ID。
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置私有网络 VPC 的子网 ID。
                     * @param _subnetId 私有网络 VPC 的子网 ID。
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
                     * 获取指定实例计费方式。
- 0：按量付费。
- 1：包年包月。
                     * @return PayMode 指定实例计费方式。
- 0：按量付费。
- 1：包年包月。
                     * 
                     */
                    int64_t GetPayMode() const;

                    /**
                     * 设置指定实例计费方式。
- 0：按量付费。
- 1：包年包月。
                     * @param _payMode 指定实例计费方式。
- 0：按量付费。
- 1：包年包月。
                     * 
                     */
                    void SetPayMode(const int64_t& _payMode);

                    /**
                     * 判断参数 PayMode 是否已赋值
                     * @return PayMode 是否已赋值
                     * 
                     */
                    bool PayModeHasBeenSet() const;

                    /**
                     * 获取设置实例名称。仅支持长度不超过 60 的中文/英文/数字/-/_。
                     * @return InstanceName 设置实例名称。仅支持长度不超过 60 的中文/英文/数字/-/_。
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置设置实例名称。仅支持长度不超过 60 的中文/英文/数字/-/_。
                     * @param _instanceName 设置实例名称。仅支持长度不超过 60 的中文/英文/数字/-/_。
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
                     * 获取安全组 ID。
                     * @return SecurityGroupIds 安全组 ID。
                     * 
                     */
                    std::vector<std::string> GetSecurityGroupIds() const;

                    /**
                     * 设置安全组 ID。
                     * @param _securityGroupIds 安全组 ID。
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
                     * 获取若计费方式为包年包月，指定包年包月续费的时长。
- 单位：月。
- 取值范围：1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 24, 36。默认为1。
                     * @return PayPeriod 若计费方式为包年包月，指定包年包月续费的时长。
- 单位：月。
- 取值范围：1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 24, 36。默认为1。
                     * 
                     */
                    int64_t GetPayPeriod() const;

                    /**
                     * 设置若计费方式为包年包月，指定包年包月续费的时长。
- 单位：月。
- 取值范围：1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 24, 36。默认为1。
                     * @param _payPeriod 若计费方式为包年包月，指定包年包月续费的时长。
- 单位：月。
- 取值范围：1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 24, 36。默认为1。
                     * 
                     */
                    void SetPayPeriod(const int64_t& _payPeriod);

                    /**
                     * 判断参数 PayPeriod 是否已赋值
                     * @return PayPeriod 是否已赋值
                     * 
                     */
                    bool PayPeriodHasBeenSet() const;

                    /**
                     * 获取若为包年包月计费，需指定是否开启自动续费。
- 0：不开启自动续费。
- 1：开启自动续费。
                     * @return AutoRenew 若为包年包月计费，需指定是否开启自动续费。
- 0：不开启自动续费。
- 1：开启自动续费。
                     * 
                     */
                    int64_t GetAutoRenew() const;

                    /**
                     * 设置若为包年包月计费，需指定是否开启自动续费。
- 0：不开启自动续费。
- 1：开启自动续费。
                     * @param _autoRenew 若为包年包月计费，需指定是否开启自动续费。
- 0：不开启自动续费。
- 1：开启自动续费。
                     * 
                     */
                    void SetAutoRenew(const int64_t& _autoRenew);

                    /**
                     * 判断参数 AutoRenew 是否已赋值
                     * @return AutoRenew 是否已赋值
                     * 
                     */
                    bool AutoRenewHasBeenSet() const;

                    /**
                     * 获取实例额外参数，通过json提交。
                     * @return Params 实例额外参数，通过json提交。
                     * 
                     */
                    std::string GetParams() const;

                    /**
                     * 设置实例额外参数，通过json提交。
                     * @param _params 实例额外参数，通过json提交。
                     * 
                     */
                    void SetParams(const std::string& _params);

                    /**
                     * 判断参数 Params 是否已赋值
                     * @return Params 是否已赋值
                     * 
                     */
                    bool ParamsHasBeenSet() const;

                    /**
                     * 获取以数组形式列出标签信息。
                     * @return ResourceTags 以数组形式列出标签信息。
                     * 
                     */
                    std::vector<Tag> GetResourceTags() const;

                    /**
                     * 设置以数组形式列出标签信息。
                     * @param _resourceTags 以数组形式列出标签信息。
                     * 
                     */
                    void SetResourceTags(const std::vector<Tag>& _resourceTags);

                    /**
                     * 判断参数 ResourceTags 是否已赋值
                     * @return ResourceTags 是否已赋值
                     * 
                     */
                    bool ResourceTagsHasBeenSet() const;

                    /**
                     * 获取指定实例所属项目 ID。
                     * @return Project 指定实例所属项目 ID。
                     * @deprecated
                     */
                    std::string GetProject() const;

                    /**
                     * 设置指定实例所属项目 ID。
                     * @param _project 指定实例所属项目 ID。
                     * @deprecated
                     */
                    void SetProject(const std::string& _project);

                    /**
                     * 判断参数 Project 是否已赋值
                     * @return Project 是否已赋值
                     * @deprecated
                     */
                    bool ProjectHasBeenSet() const;

                    /**
                     * 获取实例类型。
- base：免费测试版。
- single：单机版。
- cluster：高可用版。
                     * @return InstanceType 实例类型。
- base：免费测试版。
- single：单机版。
- cluster：高可用版。
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置实例类型。
- base：免费测试版。
- single：单机版。
- cluster：高可用版。
                     * @param _instanceType 实例类型。
- base：免费测试版。
- single：单机版。
- cluster：高可用版。
                     * 
                     */
                    void SetInstanceType(const std::string& _instanceType);

                    /**
                     * 判断参数 InstanceType 是否已赋值
                     * @return InstanceType 是否已赋值
                     * 
                     */
                    bool InstanceTypeHasBeenSet() const;

                    /**
                     * 获取实例类型为高可用版，需指定可用区选项。
- two：两可用区。
- three：三可用区。
                     * @return Mode 实例类型为高可用版，需指定可用区选项。
- two：两可用区。
- three：三可用区。
                     * 
                     */
                    std::string GetMode() const;

                    /**
                     * 设置实例类型为高可用版，需指定可用区选项。
- two：两可用区。
- three：三可用区。
                     * @param _mode 实例类型为高可用版，需指定可用区选项。
- two：两可用区。
- three：三可用区。
                     * 
                     */
                    void SetMode(const std::string& _mode);

                    /**
                     * 判断参数 Mode 是否已赋值
                     * @return Mode 是否已赋值
                     * 
                     */
                    bool ModeHasBeenSet() const;

                    /**
                     * 获取购买实例数量。
                     * @return GoodsNum 购买实例数量。
                     * 
                     */
                    int64_t GetGoodsNum() const;

                    /**
                     * 设置购买实例数量。
                     * @param _goodsNum 购买实例数量。
                     * 
                     */
                    void SetGoodsNum(const int64_t& _goodsNum);

                    /**
                     * 判断参数 GoodsNum 是否已赋值
                     * @return GoodsNum 是否已赋值
                     * 
                     */
                    bool GoodsNumHasBeenSet() const;

                    /**
                     * 获取网络类型。
VPC或TCS
                     * @return NetworkType 网络类型。
VPC或TCS
                     * @deprecated
                     */
                    std::string GetNetworkType() const;

                    /**
                     * 设置网络类型。
VPC或TCS
                     * @param _networkType 网络类型。
VPC或TCS
                     * @deprecated
                     */
                    void SetNetworkType(const std::string& _networkType);

                    /**
                     * 判断参数 NetworkType 是否已赋值
                     * @return NetworkType 是否已赋值
                     * @deprecated
                     */
                    bool NetworkTypeHasBeenSet() const;

                    /**
                     * 获取实例所应用的参数模板 ID。
                     * @return TemplateId 实例所应用的参数模板 ID。
                     * @deprecated
                     */
                    std::string GetTemplateId() const;

                    /**
                     * 设置实例所应用的参数模板 ID。
                     * @param _templateId 实例所应用的参数模板 ID。
                     * @deprecated
                     */
                    void SetTemplateId(const std::string& _templateId);

                    /**
                     * 判断参数 TemplateId 是否已赋值
                     * @return TemplateId 是否已赋值
                     * @deprecated
                     */
                    bool TemplateIdHasBeenSet() const;

                    /**
                     * 获取组件具体设置列表。
                     * @return Components 组件具体设置列表。
                     * @deprecated
                     */
                    std::vector<CreateInstancesComponent> GetComponents() const;

                    /**
                     * 设置组件具体设置列表。
                     * @param _components 组件具体设置列表。
                     * @deprecated
                     */
                    void SetComponents(const std::vector<CreateInstancesComponent>& _components);

                    /**
                     * 判断参数 Components 是否已赋值
                     * @return Components 是否已赋值
                     * @deprecated
                     */
                    bool ComponentsHasBeenSet() const;

                    /**
                     * 获取实例类型为高可用版，通过该参数指定主可用区。
                     * @return Zone 实例类型为高可用版，通过该参数指定主可用区。
                     * @deprecated
                     */
                    std::string GetZone() const;

                    /**
                     * 设置实例类型为高可用版，通过该参数指定主可用区。
                     * @param _zone 实例类型为高可用版，通过该参数指定主可用区。
                     * @deprecated
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     * @deprecated
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取实例类型为高可用版，通过该参数指定备可用区。
                     * @return SlaveZones 实例类型为高可用版，通过该参数指定备可用区。
                     * @deprecated
                     */
                    std::vector<std::string> GetSlaveZones() const;

                    /**
                     * 设置实例类型为高可用版，通过该参数指定备可用区。
                     * @param _slaveZones 实例类型为高可用版，通过该参数指定备可用区。
                     * @deprecated
                     */
                    void SetSlaveZones(const std::vector<std::string>& _slaveZones);

                    /**
                     * 判断参数 SlaveZones 是否已赋值
                     * @return SlaveZones 是否已赋值
                     * @deprecated
                     */
                    bool SlaveZonesHasBeenSet() const;

                    /**
                     * 获取是否长期有效
                     * @return IsNoExpired 是否长期有效
                     * @deprecated
                     */
                    bool GetIsNoExpired() const;

                    /**
                     * 设置是否长期有效
                     * @param _isNoExpired 是否长期有效
                     * @deprecated
                     */
                    void SetIsNoExpired(const bool& _isNoExpired);

                    /**
                     * 判断参数 IsNoExpired 是否已赋值
                     * @return IsNoExpired 是否已赋值
                     * @deprecated
                     */
                    bool IsNoExpiredHasBeenSet() const;

                    /**
                     * 获取引擎名称，业务自定义。
                     * @return EngineName 引擎名称，业务自定义。
                     * @deprecated
                     */
                    std::string GetEngineName() const;

                    /**
                     * 设置引擎名称，业务自定义。
                     * @param _engineName 引擎名称，业务自定义。
                     * @deprecated
                     */
                    void SetEngineName(const std::string& _engineName);

                    /**
                     * 判断参数 EngineName 是否已赋值
                     * @return EngineName 是否已赋值
                     * @deprecated
                     */
                    bool EngineNameHasBeenSet() const;

                    /**
                     * 获取引擎版本，业务自定义。
                     * @return EngineVersion 引擎版本，业务自定义。
                     * @deprecated
                     */
                    std::string GetEngineVersion() const;

                    /**
                     * 设置引擎版本，业务自定义。
                     * @param _engineVersion 引擎版本，业务自定义。
                     * @deprecated
                     */
                    void SetEngineVersion(const std::string& _engineVersion);

                    /**
                     * 判断参数 EngineVersion 是否已赋值
                     * @return EngineVersion 是否已赋值
                     * @deprecated
                     */
                    bool EngineVersionHasBeenSet() const;

                    /**
                     * 获取实例描述。
                     * @return Brief 实例描述。
                     * @deprecated
                     */
                    std::string GetBrief() const;

                    /**
                     * 设置实例描述。
                     * @param _brief 实例描述。
                     * @deprecated
                     */
                    void SetBrief(const std::string& _brief);

                    /**
                     * 判断参数 Brief 是否已赋值
                     * @return Brief 是否已赋值
                     * @deprecated
                     */
                    bool BriefHasBeenSet() const;

                    /**
                     * 获取负责人信息。
                     * @return Chief 负责人信息。
                     * @deprecated
                     */
                    std::string GetChief() const;

                    /**
                     * 设置负责人信息。
                     * @param _chief 负责人信息。
                     * @deprecated
                     */
                    void SetChief(const std::string& _chief);

                    /**
                     * 判断参数 Chief 是否已赋值
                     * @return Chief 是否已赋值
                     * @deprecated
                     */
                    bool ChiefHasBeenSet() const;

                    /**
                     * 获取DBA人员信息
                     * @return DBA DBA人员信息
                     * @deprecated
                     */
                    std::string GetDBA() const;

                    /**
                     * 设置DBA人员信息
                     * @param _dBA DBA人员信息
                     * @deprecated
                     */
                    void SetDBA(const std::string& _dBA);

                    /**
                     * 判断参数 DBA 是否已赋值
                     * @return DBA 是否已赋值
                     * @deprecated
                     */
                    bool DBAHasBeenSet() const;

                    /**
                     * 获取指定实例的节点类型。具体信息，请参见[选择节点类型](https://cloud.tencent.com/document/product/1709/113399)。
- compute：计费型。
- normal：标准型。
- store：存储型。
                     * @return NodeType 指定实例的节点类型。具体信息，请参见[选择节点类型](https://cloud.tencent.com/document/product/1709/113399)。
- compute：计费型。
- normal：标准型。
- store：存储型。
                     * @deprecated
                     */
                    std::string GetNodeType() const;

                    /**
                     * 设置指定实例的节点类型。具体信息，请参见[选择节点类型](https://cloud.tencent.com/document/product/1709/113399)。
- compute：计费型。
- normal：标准型。
- store：存储型。
                     * @param _nodeType 指定实例的节点类型。具体信息，请参见[选择节点类型](https://cloud.tencent.com/document/product/1709/113399)。
- compute：计费型。
- normal：标准型。
- store：存储型。
                     * @deprecated
                     */
                    void SetNodeType(const std::string& _nodeType);

                    /**
                     * 判断参数 NodeType 是否已赋值
                     * @return NodeType 是否已赋值
                     * @deprecated
                     */
                    bool NodeTypeHasBeenSet() const;

                    /**
                     * 获取指定实例所需的 CPU 核数。实例类型不同，支持的 CPU 核数存在差异。
- 计算型： 1、2、4、8、16、24、32。
- 标准型： 1、2、4、8、12、16。
- 存储型： 1、2、4、6、8。
                     * @return Cpu 指定实例所需的 CPU 核数。实例类型不同，支持的 CPU 核数存在差异。
- 计算型： 1、2、4、8、16、24、32。
- 标准型： 1、2、4、8、12、16。
- 存储型： 1、2、4、6、8。
                     * 
                     */
                    uint64_t GetCpu() const;

                    /**
                     * 设置指定实例所需的 CPU 核数。实例类型不同，支持的 CPU 核数存在差异。
- 计算型： 1、2、4、8、16、24、32。
- 标准型： 1、2、4、8、12、16。
- 存储型： 1、2、4、6、8。
                     * @param _cpu 指定实例所需的 CPU 核数。实例类型不同，支持的 CPU 核数存在差异。
- 计算型： 1、2、4、8、16、24、32。
- 标准型： 1、2、4、8、12、16。
- 存储型： 1、2、4、6、8。
                     * 
                     */
                    void SetCpu(const uint64_t& _cpu);

                    /**
                     * 判断参数 Cpu 是否已赋值
                     * @return Cpu 是否已赋值
                     * 
                     */
                    bool CpuHasBeenSet() const;

                    /**
                     * 获取指定实例所需的内存大小。单位：GB。选择具体规格，请参见[配置规格（选型）](https://cloud.tencent.com/document/product/1709/113399)。
                     * @return Memory 指定实例所需的内存大小。单位：GB。选择具体规格，请参见[配置规格（选型）](https://cloud.tencent.com/document/product/1709/113399)。
                     * 
                     */
                    uint64_t GetMemory() const;

                    /**
                     * 设置指定实例所需的内存大小。单位：GB。选择具体规格，请参见[配置规格（选型）](https://cloud.tencent.com/document/product/1709/113399)。
                     * @param _memory 指定实例所需的内存大小。单位：GB。选择具体规格，请参见[配置规格（选型）](https://cloud.tencent.com/document/product/1709/113399)。
                     * 
                     */
                    void SetMemory(const uint64_t& _memory);

                    /**
                     * 判断参数 Memory 是否已赋值
                     * @return Memory 是否已赋值
                     * 
                     */
                    bool MemoryHasBeenSet() const;

                    /**
                     * 获取指定实例所需的磁盘大小，单位：GB。选择具体规格，请参见[配置规格（选型）](https://cloud.tencent.com/document/product/1709/113399)。
                     * @return DiskSize 指定实例所需的磁盘大小，单位：GB。选择具体规格，请参见[配置规格（选型）](https://cloud.tencent.com/document/product/1709/113399)。
                     * 
                     */
                    uint64_t GetDiskSize() const;

                    /**
                     * 设置指定实例所需的磁盘大小，单位：GB。选择具体规格，请参见[配置规格（选型）](https://cloud.tencent.com/document/product/1709/113399)。
                     * @param _diskSize 指定实例所需的磁盘大小，单位：GB。选择具体规格，请参见[配置规格（选型）](https://cloud.tencent.com/document/product/1709/113399)。
                     * 
                     */
                    void SetDiskSize(const uint64_t& _diskSize);

                    /**
                     * 判断参数 DiskSize 是否已赋值
                     * @return DiskSize 是否已赋值
                     * 
                     */
                    bool DiskSizeHasBeenSet() const;

                    /**
                     * 获取指定实例所需配置的节点数量。选择方法，请参见[配置规格（选型）](https://cloud.tencent.com/document/product/1709/113399)。
                     * @return WorkerNodeNum 指定实例所需配置的节点数量。选择方法，请参见[配置规格（选型）](https://cloud.tencent.com/document/product/1709/113399)。
                     * 
                     */
                    uint64_t GetWorkerNodeNum() const;

                    /**
                     * 设置指定实例所需配置的节点数量。选择方法，请参见[配置规格（选型）](https://cloud.tencent.com/document/product/1709/113399)。
                     * @param _workerNodeNum 指定实例所需配置的节点数量。选择方法，请参见[配置规格（选型）](https://cloud.tencent.com/document/product/1709/113399)。
                     * 
                     */
                    void SetWorkerNodeNum(const uint64_t& _workerNodeNum);

                    /**
                     * 判断参数 WorkerNodeNum 是否已赋值
                     * @return WorkerNodeNum 是否已赋值
                     * 
                     */
                    bool WorkerNodeNumHasBeenSet() const;

                private:

                    /**
                     * 私有网络 ID。
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 私有网络 VPC 的子网 ID。
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * 指定实例计费方式。
- 0：按量付费。
- 1：包年包月。
                     */
                    int64_t m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * 设置实例名称。仅支持长度不超过 60 的中文/英文/数字/-/_。
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * 安全组 ID。
                     */
                    std::vector<std::string> m_securityGroupIds;
                    bool m_securityGroupIdsHasBeenSet;

                    /**
                     * 若计费方式为包年包月，指定包年包月续费的时长。
- 单位：月。
- 取值范围：1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 24, 36。默认为1。
                     */
                    int64_t m_payPeriod;
                    bool m_payPeriodHasBeenSet;

                    /**
                     * 若为包年包月计费，需指定是否开启自动续费。
- 0：不开启自动续费。
- 1：开启自动续费。
                     */
                    int64_t m_autoRenew;
                    bool m_autoRenewHasBeenSet;

                    /**
                     * 实例额外参数，通过json提交。
                     */
                    std::string m_params;
                    bool m_paramsHasBeenSet;

                    /**
                     * 以数组形式列出标签信息。
                     */
                    std::vector<Tag> m_resourceTags;
                    bool m_resourceTagsHasBeenSet;

                    /**
                     * 指定实例所属项目 ID。
                     */
                    std::string m_project;
                    bool m_projectHasBeenSet;

                    /**
                     * 实例类型。
- base：免费测试版。
- single：单机版。
- cluster：高可用版。
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * 实例类型为高可用版，需指定可用区选项。
- two：两可用区。
- three：三可用区。
                     */
                    std::string m_mode;
                    bool m_modeHasBeenSet;

                    /**
                     * 购买实例数量。
                     */
                    int64_t m_goodsNum;
                    bool m_goodsNumHasBeenSet;

                    /**
                     * 网络类型。
VPC或TCS
                     */
                    std::string m_networkType;
                    bool m_networkTypeHasBeenSet;

                    /**
                     * 实例所应用的参数模板 ID。
                     */
                    std::string m_templateId;
                    bool m_templateIdHasBeenSet;

                    /**
                     * 组件具体设置列表。
                     */
                    std::vector<CreateInstancesComponent> m_components;
                    bool m_componentsHasBeenSet;

                    /**
                     * 实例类型为高可用版，通过该参数指定主可用区。
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * 实例类型为高可用版，通过该参数指定备可用区。
                     */
                    std::vector<std::string> m_slaveZones;
                    bool m_slaveZonesHasBeenSet;

                    /**
                     * 是否长期有效
                     */
                    bool m_isNoExpired;
                    bool m_isNoExpiredHasBeenSet;

                    /**
                     * 引擎名称，业务自定义。
                     */
                    std::string m_engineName;
                    bool m_engineNameHasBeenSet;

                    /**
                     * 引擎版本，业务自定义。
                     */
                    std::string m_engineVersion;
                    bool m_engineVersionHasBeenSet;

                    /**
                     * 实例描述。
                     */
                    std::string m_brief;
                    bool m_briefHasBeenSet;

                    /**
                     * 负责人信息。
                     */
                    std::string m_chief;
                    bool m_chiefHasBeenSet;

                    /**
                     * DBA人员信息
                     */
                    std::string m_dBA;
                    bool m_dBAHasBeenSet;

                    /**
                     * 指定实例的节点类型。具体信息，请参见[选择节点类型](https://cloud.tencent.com/document/product/1709/113399)。
- compute：计费型。
- normal：标准型。
- store：存储型。
                     */
                    std::string m_nodeType;
                    bool m_nodeTypeHasBeenSet;

                    /**
                     * 指定实例所需的 CPU 核数。实例类型不同，支持的 CPU 核数存在差异。
- 计算型： 1、2、4、8、16、24、32。
- 标准型： 1、2、4、8、12、16。
- 存储型： 1、2、4、6、8。
                     */
                    uint64_t m_cpu;
                    bool m_cpuHasBeenSet;

                    /**
                     * 指定实例所需的内存大小。单位：GB。选择具体规格，请参见[配置规格（选型）](https://cloud.tencent.com/document/product/1709/113399)。
                     */
                    uint64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * 指定实例所需的磁盘大小，单位：GB。选择具体规格，请参见[配置规格（选型）](https://cloud.tencent.com/document/product/1709/113399)。
                     */
                    uint64_t m_diskSize;
                    bool m_diskSizeHasBeenSet;

                    /**
                     * 指定实例所需配置的节点数量。选择方法，请参见[配置规格（选型）](https://cloud.tencent.com/document/product/1709/113399)。
                     */
                    uint64_t m_workerNodeNum;
                    bool m_workerNodeNumHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VDB_V20230616_MODEL_CREATEINSTANCEREQUEST_H_
