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
                     * 获取<p>私有网络 ID。</p>
                     * @return VpcId <p>私有网络 ID。</p>
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置<p>私有网络 ID。</p>
                     * @param _vpcId <p>私有网络 ID。</p>
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
                     * 获取<p>私有网络 VPC 的子网 ID。</p>
                     * @return SubnetId <p>私有网络 VPC 的子网 ID。</p>
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置<p>私有网络 VPC 的子网 ID。</p>
                     * @param _subnetId <p>私有网络 VPC 的子网 ID。</p>
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
                     * 获取<p>指定实例计费方式。</p><ul><li>0：按量付费。</li><li>1：包年包月。</li></ul>
                     * @return PayMode <p>指定实例计费方式。</p><ul><li>0：按量付费。</li><li>1：包年包月。</li></ul>
                     * 
                     */
                    int64_t GetPayMode() const;

                    /**
                     * 设置<p>指定实例计费方式。</p><ul><li>0：按量付费。</li><li>1：包年包月。</li></ul>
                     * @param _payMode <p>指定实例计费方式。</p><ul><li>0：按量付费。</li><li>1：包年包月。</li></ul>
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
                     * 获取<p>设置实例名称。仅支持长度不超过 60 的中文/英文/数字/-/_。</p>
                     * @return InstanceName <p>设置实例名称。仅支持长度不超过 60 的中文/英文/数字/-/_。</p>
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置<p>设置实例名称。仅支持长度不超过 60 的中文/英文/数字/-/_。</p>
                     * @param _instanceName <p>设置实例名称。仅支持长度不超过 60 的中文/英文/数字/-/_。</p>
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
                     * 获取<p>安全组 ID。</p>
                     * @return SecurityGroupIds <p>安全组 ID。</p>
                     * 
                     */
                    std::vector<std::string> GetSecurityGroupIds() const;

                    /**
                     * 设置<p>安全组 ID。</p>
                     * @param _securityGroupIds <p>安全组 ID。</p>
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
                     * 获取<p>若计费方式为包年包月，指定包年包月续费的时长。</p><ul><li>单位：月。</li><li>取值范围：1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 24, 36。默认为1。</li></ul>
                     * @return PayPeriod <p>若计费方式为包年包月，指定包年包月续费的时长。</p><ul><li>单位：月。</li><li>取值范围：1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 24, 36。默认为1。</li></ul>
                     * 
                     */
                    int64_t GetPayPeriod() const;

                    /**
                     * 设置<p>若计费方式为包年包月，指定包年包月续费的时长。</p><ul><li>单位：月。</li><li>取值范围：1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 24, 36。默认为1。</li></ul>
                     * @param _payPeriod <p>若计费方式为包年包月，指定包年包月续费的时长。</p><ul><li>单位：月。</li><li>取值范围：1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 24, 36。默认为1。</li></ul>
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
                     * 获取<p>若为包年包月计费，需指定是否开启自动续费。</p><ul><li>0：不开启自动续费。</li><li>1：开启自动续费。</li></ul>
                     * @return AutoRenew <p>若为包年包月计费，需指定是否开启自动续费。</p><ul><li>0：不开启自动续费。</li><li>1：开启自动续费。</li></ul>
                     * 
                     */
                    int64_t GetAutoRenew() const;

                    /**
                     * 设置<p>若为包年包月计费，需指定是否开启自动续费。</p><ul><li>0：不开启自动续费。</li><li>1：开启自动续费。</li></ul>
                     * @param _autoRenew <p>若为包年包月计费，需指定是否开启自动续费。</p><ul><li>0：不开启自动续费。</li><li>1：开启自动续费。</li></ul>
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
                     * 获取<p>实例额外参数，通过json提交。</p>
                     * @return Params <p>实例额外参数，通过json提交。</p>
                     * 
                     */
                    std::string GetParams() const;

                    /**
                     * 设置<p>实例额外参数，通过json提交。</p>
                     * @param _params <p>实例额外参数，通过json提交。</p>
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
                     * 获取<p>以数组形式列出标签信息。</p>
                     * @return ResourceTags <p>以数组形式列出标签信息。</p>
                     * 
                     */
                    std::vector<Tag> GetResourceTags() const;

                    /**
                     * 设置<p>以数组形式列出标签信息。</p>
                     * @param _resourceTags <p>以数组形式列出标签信息。</p>
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
                     * 获取<p>指定实例所属项目 ID。</p>
                     * @return Project <p>指定实例所属项目 ID。</p>
                     * @deprecated
                     */
                    std::string GetProject() const;

                    /**
                     * 设置<p>指定实例所属项目 ID。</p>
                     * @param _project <p>指定实例所属项目 ID。</p>
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
                     * 获取<p>产品版本，0-标准版，1-容量增强版</p>
                     * @return ProductType <p>产品版本，0-标准版，1-容量增强版</p>
                     * 
                     */
                    int64_t GetProductType() const;

                    /**
                     * 设置<p>产品版本，0-标准版，1-容量增强版</p>
                     * @param _productType <p>产品版本，0-标准版，1-容量增强版</p>
                     * 
                     */
                    void SetProductType(const int64_t& _productType);

                    /**
                     * 判断参数 ProductType 是否已赋值
                     * @return ProductType 是否已赋值
                     * 
                     */
                    bool ProductTypeHasBeenSet() const;

                    /**
                     * 获取<p>实例类型。</p><ul><li>base：免费测试版。</li><li>single：单机版。</li><li>cluster：高可用版。</li></ul>
                     * @return InstanceType <p>实例类型。</p><ul><li>base：免费测试版。</li><li>single：单机版。</li><li>cluster：高可用版。</li></ul>
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置<p>实例类型。</p><ul><li>base：免费测试版。</li><li>single：单机版。</li><li>cluster：高可用版。</li></ul>
                     * @param _instanceType <p>实例类型。</p><ul><li>base：免费测试版。</li><li>single：单机版。</li><li>cluster：高可用版。</li></ul>
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
                     * 获取<p>实例类型为高可用版，需指定可用区选项。</p><ul><li>two：两可用区。</li><li>three：三可用区。</li></ul>
                     * @return Mode <p>实例类型为高可用版，需指定可用区选项。</p><ul><li>two：两可用区。</li><li>three：三可用区。</li></ul>
                     * 
                     */
                    std::string GetMode() const;

                    /**
                     * 设置<p>实例类型为高可用版，需指定可用区选项。</p><ul><li>two：两可用区。</li><li>three：三可用区。</li></ul>
                     * @param _mode <p>实例类型为高可用版，需指定可用区选项。</p><ul><li>two：两可用区。</li><li>three：三可用区。</li></ul>
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
                     * 获取<p>购买实例数量。</p>
                     * @return GoodsNum <p>购买实例数量。</p>
                     * 
                     */
                    int64_t GetGoodsNum() const;

                    /**
                     * 设置<p>购买实例数量。</p>
                     * @param _goodsNum <p>购买实例数量。</p>
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
                     * 获取<p>网络类型。<br>VPC或TCS</p>
                     * @return NetworkType <p>网络类型。<br>VPC或TCS</p>
                     * @deprecated
                     */
                    std::string GetNetworkType() const;

                    /**
                     * 设置<p>网络类型。<br>VPC或TCS</p>
                     * @param _networkType <p>网络类型。<br>VPC或TCS</p>
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
                     * 获取<p>实例所应用的参数模板 ID。</p>
                     * @return TemplateId <p>实例所应用的参数模板 ID。</p>
                     * @deprecated
                     */
                    std::string GetTemplateId() const;

                    /**
                     * 设置<p>实例所应用的参数模板 ID。</p>
                     * @param _templateId <p>实例所应用的参数模板 ID。</p>
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
                     * 获取<p>组件具体设置列表。</p>
                     * @return Components <p>组件具体设置列表。</p>
                     * @deprecated
                     */
                    std::vector<CreateInstancesComponent> GetComponents() const;

                    /**
                     * 设置<p>组件具体设置列表。</p>
                     * @param _components <p>组件具体设置列表。</p>
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
                     * 获取<p>实例类型为高可用版，通过该参数指定主可用区。</p>
                     * @return Zone <p>实例类型为高可用版，通过该参数指定主可用区。</p>
                     * @deprecated
                     */
                    std::string GetZone() const;

                    /**
                     * 设置<p>实例类型为高可用版，通过该参数指定主可用区。</p>
                     * @param _zone <p>实例类型为高可用版，通过该参数指定主可用区。</p>
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
                     * 获取<p>实例类型为高可用版，通过该参数指定备可用区。</p>
                     * @return SlaveZones <p>实例类型为高可用版，通过该参数指定备可用区。</p>
                     * @deprecated
                     */
                    std::vector<std::string> GetSlaveZones() const;

                    /**
                     * 设置<p>实例类型为高可用版，通过该参数指定备可用区。</p>
                     * @param _slaveZones <p>实例类型为高可用版，通过该参数指定备可用区。</p>
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
                     * 获取<p>是否长期有效</p>
                     * @return IsNoExpired <p>是否长期有效</p>
                     * @deprecated
                     */
                    bool GetIsNoExpired() const;

                    /**
                     * 设置<p>是否长期有效</p>
                     * @param _isNoExpired <p>是否长期有效</p>
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
                     * 获取<p>引擎名称，业务自定义。</p>
                     * @return EngineName <p>引擎名称，业务自定义。</p>
                     * @deprecated
                     */
                    std::string GetEngineName() const;

                    /**
                     * 设置<p>引擎名称，业务自定义。</p>
                     * @param _engineName <p>引擎名称，业务自定义。</p>
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
                     * 获取<p>引擎版本，业务自定义。</p>
                     * @return EngineVersion <p>引擎版本，业务自定义。</p>
                     * @deprecated
                     */
                    std::string GetEngineVersion() const;

                    /**
                     * 设置<p>引擎版本，业务自定义。</p>
                     * @param _engineVersion <p>引擎版本，业务自定义。</p>
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
                     * 获取<p>实例描述。</p>
                     * @return Brief <p>实例描述。</p>
                     * @deprecated
                     */
                    std::string GetBrief() const;

                    /**
                     * 设置<p>实例描述。</p>
                     * @param _brief <p>实例描述。</p>
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
                     * 获取<p>负责人信息。</p>
                     * @return Chief <p>负责人信息。</p>
                     * @deprecated
                     */
                    std::string GetChief() const;

                    /**
                     * 设置<p>负责人信息。</p>
                     * @param _chief <p>负责人信息。</p>
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
                     * 获取<p>DBA人员信息</p>
                     * @return DBA <p>DBA人员信息</p>
                     * @deprecated
                     */
                    std::string GetDBA() const;

                    /**
                     * 设置<p>DBA人员信息</p>
                     * @param _dBA <p>DBA人员信息</p>
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
                     * 获取<p>指定实例的节点类型。具体信息，请参见<a href="https://cloud.tencent.com/document/product/1709/113399">选择节点类型</a>。</p><ul><li>compute：计费型。</li><li>normal：标准型。</li><li>store：存储型。</li></ul>
                     * @return NodeType <p>指定实例的节点类型。具体信息，请参见<a href="https://cloud.tencent.com/document/product/1709/113399">选择节点类型</a>。</p><ul><li>compute：计费型。</li><li>normal：标准型。</li><li>store：存储型。</li></ul>
                     * @deprecated
                     */
                    std::string GetNodeType() const;

                    /**
                     * 设置<p>指定实例的节点类型。具体信息，请参见<a href="https://cloud.tencent.com/document/product/1709/113399">选择节点类型</a>。</p><ul><li>compute：计费型。</li><li>normal：标准型。</li><li>store：存储型。</li></ul>
                     * @param _nodeType <p>指定实例的节点类型。具体信息，请参见<a href="https://cloud.tencent.com/document/product/1709/113399">选择节点类型</a>。</p><ul><li>compute：计费型。</li><li>normal：标准型。</li><li>store：存储型。</li></ul>
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
                     * 获取<p>指定实例所需的 CPU 核数。实例类型不同，支持的 CPU 核数存在差异。</p><ul><li>计算型： 1、2、4、8、16、24、32。</li><li>标准型： 1、2、4、8、12、16。</li><li>存储型： 1、2、4、6、8。</li></ul>
                     * @return Cpu <p>指定实例所需的 CPU 核数。实例类型不同，支持的 CPU 核数存在差异。</p><ul><li>计算型： 1、2、4、8、16、24、32。</li><li>标准型： 1、2、4、8、12、16。</li><li>存储型： 1、2、4、6、8。</li></ul>
                     * 
                     */
                    uint64_t GetCpu() const;

                    /**
                     * 设置<p>指定实例所需的 CPU 核数。实例类型不同，支持的 CPU 核数存在差异。</p><ul><li>计算型： 1、2、4、8、16、24、32。</li><li>标准型： 1、2、4、8、12、16。</li><li>存储型： 1、2、4、6、8。</li></ul>
                     * @param _cpu <p>指定实例所需的 CPU 核数。实例类型不同，支持的 CPU 核数存在差异。</p><ul><li>计算型： 1、2、4、8、16、24、32。</li><li>标准型： 1、2、4、8、12、16。</li><li>存储型： 1、2、4、6、8。</li></ul>
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
                     * 获取<p>指定实例所需的内存大小。单位：GB。选择具体规格，请参见<a href="https://cloud.tencent.com/document/product/1709/113399">配置规格（选型）</a>。</p>
                     * @return Memory <p>指定实例所需的内存大小。单位：GB。选择具体规格，请参见<a href="https://cloud.tencent.com/document/product/1709/113399">配置规格（选型）</a>。</p>
                     * 
                     */
                    uint64_t GetMemory() const;

                    /**
                     * 设置<p>指定实例所需的内存大小。单位：GB。选择具体规格，请参见<a href="https://cloud.tencent.com/document/product/1709/113399">配置规格（选型）</a>。</p>
                     * @param _memory <p>指定实例所需的内存大小。单位：GB。选择具体规格，请参见<a href="https://cloud.tencent.com/document/product/1709/113399">配置规格（选型）</a>。</p>
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
                     * 获取<p>指定实例所需的磁盘大小，单位：GB。选择具体规格，请参见<a href="https://cloud.tencent.com/document/product/1709/113399">配置规格（选型）</a>。</p>
                     * @return DiskSize <p>指定实例所需的磁盘大小，单位：GB。选择具体规格，请参见<a href="https://cloud.tencent.com/document/product/1709/113399">配置规格（选型）</a>。</p>
                     * 
                     */
                    uint64_t GetDiskSize() const;

                    /**
                     * 设置<p>指定实例所需的磁盘大小，单位：GB。选择具体规格，请参见<a href="https://cloud.tencent.com/document/product/1709/113399">配置规格（选型）</a>。</p>
                     * @param _diskSize <p>指定实例所需的磁盘大小，单位：GB。选择具体规格，请参见<a href="https://cloud.tencent.com/document/product/1709/113399">配置规格（选型）</a>。</p>
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
                     * 获取<p>指定实例所需配置的节点数量。选择方法，请参见<a href="https://cloud.tencent.com/document/product/1709/113399">配置规格（选型）</a>。</p>
                     * @return WorkerNodeNum <p>指定实例所需配置的节点数量。选择方法，请参见<a href="https://cloud.tencent.com/document/product/1709/113399">配置规格（选型）</a>。</p>
                     * 
                     */
                    uint64_t GetWorkerNodeNum() const;

                    /**
                     * 设置<p>指定实例所需配置的节点数量。选择方法，请参见<a href="https://cloud.tencent.com/document/product/1709/113399">配置规格（选型）</a>。</p>
                     * @param _workerNodeNum <p>指定实例所需配置的节点数量。选择方法，请参见<a href="https://cloud.tencent.com/document/product/1709/113399">配置规格（选型）</a>。</p>
                     * 
                     */
                    void SetWorkerNodeNum(const uint64_t& _workerNodeNum);

                    /**
                     * 判断参数 WorkerNodeNum 是否已赋值
                     * @return WorkerNodeNum 是否已赋值
                     * 
                     */
                    bool WorkerNodeNumHasBeenSet() const;

                    /**
                     * 获取<p>是否开启磁盘数据存储加密（仅 CBS 数据盘生效，需落在 VECTORDB_DISK_ENCRYPT_REGION 白名单地域，默认 false 不开启）</p><p>默认值：true</p>
                     * @return EnableEncryption <p>是否开启磁盘数据存储加密（仅 CBS 数据盘生效，需落在 VECTORDB_DISK_ENCRYPT_REGION 白名单地域，默认 false 不开启）</p><p>默认值：true</p>
                     * 
                     */
                    bool GetEnableEncryption() const;

                    /**
                     * 设置<p>是否开启磁盘数据存储加密（仅 CBS 数据盘生效，需落在 VECTORDB_DISK_ENCRYPT_REGION 白名单地域，默认 false 不开启）</p><p>默认值：true</p>
                     * @param _enableEncryption <p>是否开启磁盘数据存储加密（仅 CBS 数据盘生效，需落在 VECTORDB_DISK_ENCRYPT_REGION 白名单地域，默认 false 不开启）</p><p>默认值：true</p>
                     * 
                     */
                    void SetEnableEncryption(const bool& _enableEncryption);

                    /**
                     * 判断参数 EnableEncryption 是否已赋值
                     * @return EnableEncryption 是否已赋值
                     * 
                     */
                    bool EnableEncryptionHasBeenSet() const;

                private:

                    /**
                     * <p>私有网络 ID。</p>
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * <p>私有网络 VPC 的子网 ID。</p>
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * <p>指定实例计费方式。</p><ul><li>0：按量付费。</li><li>1：包年包月。</li></ul>
                     */
                    int64_t m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * <p>设置实例名称。仅支持长度不超过 60 的中文/英文/数字/-/_。</p>
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * <p>安全组 ID。</p>
                     */
                    std::vector<std::string> m_securityGroupIds;
                    bool m_securityGroupIdsHasBeenSet;

                    /**
                     * <p>若计费方式为包年包月，指定包年包月续费的时长。</p><ul><li>单位：月。</li><li>取值范围：1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 24, 36。默认为1。</li></ul>
                     */
                    int64_t m_payPeriod;
                    bool m_payPeriodHasBeenSet;

                    /**
                     * <p>若为包年包月计费，需指定是否开启自动续费。</p><ul><li>0：不开启自动续费。</li><li>1：开启自动续费。</li></ul>
                     */
                    int64_t m_autoRenew;
                    bool m_autoRenewHasBeenSet;

                    /**
                     * <p>实例额外参数，通过json提交。</p>
                     */
                    std::string m_params;
                    bool m_paramsHasBeenSet;

                    /**
                     * <p>以数组形式列出标签信息。</p>
                     */
                    std::vector<Tag> m_resourceTags;
                    bool m_resourceTagsHasBeenSet;

                    /**
                     * <p>指定实例所属项目 ID。</p>
                     */
                    std::string m_project;
                    bool m_projectHasBeenSet;

                    /**
                     * <p>产品版本，0-标准版，1-容量增强版</p>
                     */
                    int64_t m_productType;
                    bool m_productTypeHasBeenSet;

                    /**
                     * <p>实例类型。</p><ul><li>base：免费测试版。</li><li>single：单机版。</li><li>cluster：高可用版。</li></ul>
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * <p>实例类型为高可用版，需指定可用区选项。</p><ul><li>two：两可用区。</li><li>three：三可用区。</li></ul>
                     */
                    std::string m_mode;
                    bool m_modeHasBeenSet;

                    /**
                     * <p>购买实例数量。</p>
                     */
                    int64_t m_goodsNum;
                    bool m_goodsNumHasBeenSet;

                    /**
                     * <p>网络类型。<br>VPC或TCS</p>
                     */
                    std::string m_networkType;
                    bool m_networkTypeHasBeenSet;

                    /**
                     * <p>实例所应用的参数模板 ID。</p>
                     */
                    std::string m_templateId;
                    bool m_templateIdHasBeenSet;

                    /**
                     * <p>组件具体设置列表。</p>
                     */
                    std::vector<CreateInstancesComponent> m_components;
                    bool m_componentsHasBeenSet;

                    /**
                     * <p>实例类型为高可用版，通过该参数指定主可用区。</p>
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * <p>实例类型为高可用版，通过该参数指定备可用区。</p>
                     */
                    std::vector<std::string> m_slaveZones;
                    bool m_slaveZonesHasBeenSet;

                    /**
                     * <p>是否长期有效</p>
                     */
                    bool m_isNoExpired;
                    bool m_isNoExpiredHasBeenSet;

                    /**
                     * <p>引擎名称，业务自定义。</p>
                     */
                    std::string m_engineName;
                    bool m_engineNameHasBeenSet;

                    /**
                     * <p>引擎版本，业务自定义。</p>
                     */
                    std::string m_engineVersion;
                    bool m_engineVersionHasBeenSet;

                    /**
                     * <p>实例描述。</p>
                     */
                    std::string m_brief;
                    bool m_briefHasBeenSet;

                    /**
                     * <p>负责人信息。</p>
                     */
                    std::string m_chief;
                    bool m_chiefHasBeenSet;

                    /**
                     * <p>DBA人员信息</p>
                     */
                    std::string m_dBA;
                    bool m_dBAHasBeenSet;

                    /**
                     * <p>指定实例的节点类型。具体信息，请参见<a href="https://cloud.tencent.com/document/product/1709/113399">选择节点类型</a>。</p><ul><li>compute：计费型。</li><li>normal：标准型。</li><li>store：存储型。</li></ul>
                     */
                    std::string m_nodeType;
                    bool m_nodeTypeHasBeenSet;

                    /**
                     * <p>指定实例所需的 CPU 核数。实例类型不同，支持的 CPU 核数存在差异。</p><ul><li>计算型： 1、2、4、8、16、24、32。</li><li>标准型： 1、2、4、8、12、16。</li><li>存储型： 1、2、4、6、8。</li></ul>
                     */
                    uint64_t m_cpu;
                    bool m_cpuHasBeenSet;

                    /**
                     * <p>指定实例所需的内存大小。单位：GB。选择具体规格，请参见<a href="https://cloud.tencent.com/document/product/1709/113399">配置规格（选型）</a>。</p>
                     */
                    uint64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * <p>指定实例所需的磁盘大小，单位：GB。选择具体规格，请参见<a href="https://cloud.tencent.com/document/product/1709/113399">配置规格（选型）</a>。</p>
                     */
                    uint64_t m_diskSize;
                    bool m_diskSizeHasBeenSet;

                    /**
                     * <p>指定实例所需配置的节点数量。选择方法，请参见<a href="https://cloud.tencent.com/document/product/1709/113399">配置规格（选型）</a>。</p>
                     */
                    uint64_t m_workerNodeNum;
                    bool m_workerNodeNumHasBeenSet;

                    /**
                     * <p>是否开启磁盘数据存储加密（仅 CBS 数据盘生效，需落在 VECTORDB_DISK_ENCRYPT_REGION 白名单地域，默认 false 不开启）</p><p>默认值：true</p>
                     */
                    bool m_enableEncryption;
                    bool m_enableEncryptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VDB_V20230616_MODEL_CREATEINSTANCEREQUEST_H_
