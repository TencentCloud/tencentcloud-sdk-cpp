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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_CLONEINSTANCESREQUEST_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_CLONEINSTANCESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/redis/v20180412/model/RedisNodeInfo.h>
#include <tencentcloud/redis/v20180412/model/ResourceTag.h>
#include <tencentcloud/redis/v20180412/model/PasswordPolicy.h>


namespace TencentCloud
{
    namespace Redis
    {
        namespace V20180412
        {
            namespace Model
            {
                /**
                * CloneInstances请求参数结构体
                */
                class CloneInstancesRequest : public AbstractModel
                {
                public:
                    CloneInstancesRequest();
                    ~CloneInstancesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>指定待克隆的源实例 ID。例如：crs-xjhsdj****。请登录<a href="https://console.cloud.tencent.com/redis">Redis控制台</a>在实例列表复制实例 ID。</p>
                     * @return InstanceId <p>指定待克隆的源实例 ID。例如：crs-xjhsdj****。请登录<a href="https://console.cloud.tencent.com/redis">Redis控制台</a>在实例列表复制实例 ID。</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>指定待克隆的源实例 ID。例如：crs-xjhsdj****。请登录<a href="https://console.cloud.tencent.com/redis">Redis控制台</a>在实例列表复制实例 ID。</p>
                     * @param _instanceId <p>指定待克隆的源实例 ID。例如：crs-xjhsdj****。请登录<a href="https://console.cloud.tencent.com/redis">Redis控制台</a>在实例列表复制实例 ID。</p>
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取<p>单次克隆实例的数量。</p><ul><li>包年包月每次购买最大数量为100。</li><li>按量计费每次购买最大数量为30。</li></ul>
                     * @return GoodsNum <p>单次克隆实例的数量。</p><ul><li>包年包月每次购买最大数量为100。</li><li>按量计费每次购买最大数量为30。</li></ul>
                     * 
                     */
                    uint64_t GetGoodsNum() const;

                    /**
                     * 设置<p>单次克隆实例的数量。</p><ul><li>包年包月每次购买最大数量为100。</li><li>按量计费每次购买最大数量为30。</li></ul>
                     * @param _goodsNum <p>单次克隆实例的数量。</p><ul><li>包年包月每次购买最大数量为100。</li><li>按量计费每次购买最大数量为30。</li></ul>
                     * 
                     */
                    void SetGoodsNum(const uint64_t& _goodsNum);

                    /**
                     * 判断参数 GoodsNum 是否已赋值
                     * @return GoodsNum 是否已赋值
                     * 
                     */
                    bool GoodsNumHasBeenSet() const;

                    /**
                     * 获取<p>克隆实例所属的可用区ID。当前所支持的可用区 ID，请参见<a href="https://cloud.tencent.com/document/product/239/4106">地域和可用区</a> 。</p>
                     * @return ZoneId <p>克隆实例所属的可用区ID。当前所支持的可用区 ID，请参见<a href="https://cloud.tencent.com/document/product/239/4106">地域和可用区</a> 。</p>
                     * 
                     */
                    uint64_t GetZoneId() const;

                    /**
                     * 设置<p>克隆实例所属的可用区ID。当前所支持的可用区 ID，请参见<a href="https://cloud.tencent.com/document/product/239/4106">地域和可用区</a> 。</p>
                     * @param _zoneId <p>克隆实例所属的可用区ID。当前所支持的可用区 ID，请参见<a href="https://cloud.tencent.com/document/product/239/4106">地域和可用区</a> 。</p>
                     * 
                     */
                    void SetZoneId(const uint64_t& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取<p>付费方式。<ul><li>0：按量计费。</li><li>1：包年包月。</li></ul></p>
                     * @return BillingMode <p>付费方式。<ul><li>0：按量计费。</li><li>1：包年包月。</li></ul></p>
                     * 
                     */
                    int64_t GetBillingMode() const;

                    /**
                     * 设置<p>付费方式。<ul><li>0：按量计费。</li><li>1：包年包月。</li></ul></p>
                     * @param _billingMode <p>付费方式。<ul><li>0：按量计费。</li><li>1：包年包月。</li></ul></p>
                     * 
                     */
                    void SetBillingMode(const int64_t& _billingMode);

                    /**
                     * 判断参数 BillingMode 是否已赋值
                     * @return BillingMode 是否已赋值
                     * 
                     */
                    bool BillingModeHasBeenSet() const;

                    /**
                     * 获取<p>购买实例时长。<ul><li>单位：月。</li><li>付费方式选择包年包月计费时，取值范围为[1,2,3,4,5,6,7,8,9,10,11,12,24,36,48,60]。</li><li>付费方式选择按量计费时，设置为1。</li></ul></p>
                     * @return Period <p>购买实例时长。<ul><li>单位：月。</li><li>付费方式选择包年包月计费时，取值范围为[1,2,3,4,5,6,7,8,9,10,11,12,24,36,48,60]。</li><li>付费方式选择按量计费时，设置为1。</li></ul></p>
                     * 
                     */
                    uint64_t GetPeriod() const;

                    /**
                     * 设置<p>购买实例时长。<ul><li>单位：月。</li><li>付费方式选择包年包月计费时，取值范围为[1,2,3,4,5,6,7,8,9,10,11,12,24,36,48,60]。</li><li>付费方式选择按量计费时，设置为1。</li></ul></p>
                     * @param _period <p>购买实例时长。<ul><li>单位：月。</li><li>付费方式选择包年包月计费时，取值范围为[1,2,3,4,5,6,7,8,9,10,11,12,24,36,48,60]。</li><li>付费方式选择按量计费时，设置为1。</li></ul></p>
                     * 
                     */
                    void SetPeriod(const uint64_t& _period);

                    /**
                     * 判断参数 Period 是否已赋值
                     * @return Period 是否已赋值
                     * 
                     */
                    bool PeriodHasBeenSet() const;

                    /**
                     * 获取<p>安全组ID。请通过 <a href="https://cloud.tencent.com/document/product/239/34447">DescribeInstanceSecurityGroup</a> 接口获取实例的安全组 ID。</p>
                     * @return SecurityGroupIdList <p>安全组ID。请通过 <a href="https://cloud.tencent.com/document/product/239/34447">DescribeInstanceSecurityGroup</a> 接口获取实例的安全组 ID。</p>
                     * 
                     */
                    std::vector<std::string> GetSecurityGroupIdList() const;

                    /**
                     * 设置<p>安全组ID。请通过 <a href="https://cloud.tencent.com/document/product/239/34447">DescribeInstanceSecurityGroup</a> 接口获取实例的安全组 ID。</p>
                     * @param _securityGroupIdList <p>安全组ID。请通过 <a href="https://cloud.tencent.com/document/product/239/34447">DescribeInstanceSecurityGroup</a> 接口获取实例的安全组 ID。</p>
                     * 
                     */
                    void SetSecurityGroupIdList(const std::vector<std::string>& _securityGroupIdList);

                    /**
                     * 判断参数 SecurityGroupIdList 是否已赋值
                     * @return SecurityGroupIdList 是否已赋值
                     * 
                     */
                    bool SecurityGroupIdListHasBeenSet() const;

                    /**
                     * 获取<p>克隆实例使用的备份ID。请通过接口<a href="https://cloud.tencent.com/document/product/239/20011">DescribeInstanceBackups</a>获取备份ID。</p>
                     * @return BackupId <p>克隆实例使用的备份ID。请通过接口<a href="https://cloud.tencent.com/document/product/239/20011">DescribeInstanceBackups</a>获取备份ID。</p>
                     * 
                     */
                    std::string GetBackupId() const;

                    /**
                     * 设置<p>克隆实例使用的备份ID。请通过接口<a href="https://cloud.tencent.com/document/product/239/20011">DescribeInstanceBackups</a>获取备份ID。</p>
                     * @param _backupId <p>克隆实例使用的备份ID。请通过接口<a href="https://cloud.tencent.com/document/product/239/20011">DescribeInstanceBackups</a>获取备份ID。</p>
                     * 
                     */
                    void SetBackupId(const std::string& _backupId);

                    /**
                     * 判断参数 BackupId 是否已赋值
                     * @return BackupId 是否已赋值
                     * 
                     */
                    bool BackupIdHasBeenSet() const;

                    /**
                     * 获取<p>配置克隆实例是否支持免密访问。开启 SSL 与外网均不支持免密访问。<ul><li>true：免密实例，</li><li>false：非免密实例。默认为非免密实例。</li></ul></p>
                     * @return NoAuth <p>配置克隆实例是否支持免密访问。开启 SSL 与外网均不支持免密访问。<ul><li>true：免密实例，</li><li>false：非免密实例。默认为非免密实例。</li></ul></p>
                     * 
                     */
                    bool GetNoAuth() const;

                    /**
                     * 设置<p>配置克隆实例是否支持免密访问。开启 SSL 与外网均不支持免密访问。<ul><li>true：免密实例，</li><li>false：非免密实例。默认为非免密实例。</li></ul></p>
                     * @param _noAuth <p>配置克隆实例是否支持免密访问。开启 SSL 与外网均不支持免密访问。<ul><li>true：免密实例，</li><li>false：非免密实例。默认为非免密实例。</li></ul></p>
                     * 
                     */
                    void SetNoAuth(const bool& _noAuth);

                    /**
                     * 判断参数 NoAuth 是否已赋值
                     * @return NoAuth 是否已赋值
                     * 
                     */
                    bool NoAuthHasBeenSet() const;

                    /**
                     * 获取<p>配置克隆实例的私有网络ID。如果未配置该参数，默认选择基础网络。</p>
                     * @return VpcId <p>配置克隆实例的私有网络ID。如果未配置该参数，默认选择基础网络。</p>
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置<p>配置克隆实例的私有网络ID。如果未配置该参数，默认选择基础网络。</p>
                     * @param _vpcId <p>配置克隆实例的私有网络ID。如果未配置该参数，默认选择基础网络。</p>
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
                     * 获取<p>配置克隆实例所属私有网络的子网。基础网络时该参数无需配置。</p>
                     * @return SubnetId <p>配置克隆实例所属私有网络的子网。基础网络时该参数无需配置。</p>
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置<p>配置克隆实例所属私有网络的子网。基础网络时该参数无需配置。</p>
                     * @param _subnetId <p>配置克隆实例所属私有网络的子网。基础网络时该参数无需配置。</p>
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
                     * 获取<p>克隆实例的名称。<br>仅支持长度小于60的中文、英文或者数字，短划线&quot;-&quot;、下划线&quot;_&quot;。<br></p>
                     * @return InstanceName <p>克隆实例的名称。<br>仅支持长度小于60的中文、英文或者数字，短划线&quot;-&quot;、下划线&quot;_&quot;。<br></p>
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置<p>克隆实例的名称。<br>仅支持长度小于60的中文、英文或者数字，短划线&quot;-&quot;、下划线&quot;_&quot;。<br></p>
                     * @param _instanceName <p>克隆实例的名称。<br>仅支持长度小于60的中文、英文或者数字，短划线&quot;-&quot;、下划线&quot;_&quot;。<br></p>
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
                     * 获取<p>克隆实例的访问密码。<ul><li>当输入参数<b>NoAuth</b>为<b>true</b>时，可不设置该参数。</li><li>当实例为Redis2.8、4.0和5.0时，其密码格式为：8-30个字符，至少包含小写字母、大写字母、数字和字符 ()`~!@#$%^&amp;*-+=_|{}[]:;&lt;&gt;,.?/ 中的2种，不能以&quot;/&quot;开头；</li><li>当实例为CKV 3.2时，其密码格式为：8-30个字符，必须包含字母和数字，且不包含其他字符。</li></ul></p>
                     * @return Password <p>克隆实例的访问密码。<ul><li>当输入参数<b>NoAuth</b>为<b>true</b>时，可不设置该参数。</li><li>当实例为Redis2.8、4.0和5.0时，其密码格式为：8-30个字符，至少包含小写字母、大写字母、数字和字符 ()`~!@#$%^&amp;*-+=_|{}[]:;&lt;&gt;,.?/ 中的2种，不能以&quot;/&quot;开头；</li><li>当实例为CKV 3.2时，其密码格式为：8-30个字符，必须包含字母和数字，且不包含其他字符。</li></ul></p>
                     * 
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置<p>克隆实例的访问密码。<ul><li>当输入参数<b>NoAuth</b>为<b>true</b>时，可不设置该参数。</li><li>当实例为Redis2.8、4.0和5.0时，其密码格式为：8-30个字符，至少包含小写字母、大写字母、数字和字符 ()`~!@#$%^&amp;*-+=_|{}[]:;&lt;&gt;,.?/ 中的2种，不能以&quot;/&quot;开头；</li><li>当实例为CKV 3.2时，其密码格式为：8-30个字符，必须包含字母和数字，且不包含其他字符。</li></ul></p>
                     * @param _password <p>克隆实例的访问密码。<ul><li>当输入参数<b>NoAuth</b>为<b>true</b>时，可不设置该参数。</li><li>当实例为Redis2.8、4.0和5.0时，其密码格式为：8-30个字符，至少包含小写字母、大写字母、数字和字符 ()`~!@#$%^&amp;*-+=_|{}[]:;&lt;&gt;,.?/ 中的2种，不能以&quot;/&quot;开头；</li><li>当实例为CKV 3.2时，其密码格式为：8-30个字符，必须包含字母和数字，且不包含其他字符。</li></ul></p>
                     * 
                     */
                    void SetPassword(const std::string& _password);

                    /**
                     * 判断参数 Password 是否已赋值
                     * @return Password 是否已赋值
                     * 
                     */
                    bool PasswordHasBeenSet() const;

                    /**
                     * 获取<p>自动续费标识。<ul><li>0：默认状态，手动续费。</li><li>1：自动续费。</li><li>2：不自动续费，到期自动隔离。</li></ul></p>
                     * @return AutoRenew <p>自动续费标识。<ul><li>0：默认状态，手动续费。</li><li>1：自动续费。</li><li>2：不自动续费，到期自动隔离。</li></ul></p>
                     * 
                     */
                    uint64_t GetAutoRenew() const;

                    /**
                     * 设置<p>自动续费标识。<ul><li>0：默认状态，手动续费。</li><li>1：自动续费。</li><li>2：不自动续费，到期自动隔离。</li></ul></p>
                     * @param _autoRenew <p>自动续费标识。<ul><li>0：默认状态，手动续费。</li><li>1：自动续费。</li><li>2：不自动续费，到期自动隔离。</li></ul></p>
                     * 
                     */
                    void SetAutoRenew(const uint64_t& _autoRenew);

                    /**
                     * 判断参数 AutoRenew 是否已赋值
                     * @return AutoRenew 是否已赋值
                     * 
                     */
                    bool AutoRenewHasBeenSet() const;

                    /**
                     * 获取<p>用户自定义的端口，默认为6379，取值范围[1024,65535]。</p>
                     * @return VPort <p>用户自定义的端口，默认为6379，取值范围[1024,65535]。</p>
                     * 
                     */
                    uint64_t GetVPort() const;

                    /**
                     * 设置<p>用户自定义的端口，默认为6379，取值范围[1024,65535]。</p>
                     * @param _vPort <p>用户自定义的端口，默认为6379，取值范围[1024,65535]。</p>
                     * 
                     */
                    void SetVPort(const uint64_t& _vPort);

                    /**
                     * 判断参数 VPort 是否已赋值
                     * @return VPort 是否已赋值
                     * 
                     */
                    bool VPortHasBeenSet() const;

                    /**
                     * 获取<p>实例的节点信息。<ul><li>目前支持配置节点的类型（主节点或者副本节点），及其节点的可用区信息。具体信息，请参见<a href="https://cloud.tencent.com/document/product/239/20022#RedisNodeInfo">RedisNodeInfo</a>。</li><li>单可用区部署可不配置该参数。</li></ul></p>
                     * @return NodeSet <p>实例的节点信息。<ul><li>目前支持配置节点的类型（主节点或者副本节点），及其节点的可用区信息。具体信息，请参见<a href="https://cloud.tencent.com/document/product/239/20022#RedisNodeInfo">RedisNodeInfo</a>。</li><li>单可用区部署可不配置该参数。</li></ul></p>
                     * 
                     */
                    std::vector<RedisNodeInfo> GetNodeSet() const;

                    /**
                     * 设置<p>实例的节点信息。<ul><li>目前支持配置节点的类型（主节点或者副本节点），及其节点的可用区信息。具体信息，请参见<a href="https://cloud.tencent.com/document/product/239/20022#RedisNodeInfo">RedisNodeInfo</a>。</li><li>单可用区部署可不配置该参数。</li></ul></p>
                     * @param _nodeSet <p>实例的节点信息。<ul><li>目前支持配置节点的类型（主节点或者副本节点），及其节点的可用区信息。具体信息，请参见<a href="https://cloud.tencent.com/document/product/239/20022#RedisNodeInfo">RedisNodeInfo</a>。</li><li>单可用区部署可不配置该参数。</li></ul></p>
                     * 
                     */
                    void SetNodeSet(const std::vector<RedisNodeInfo>& _nodeSet);

                    /**
                     * 判断参数 NodeSet 是否已赋值
                     * @return NodeSet 是否已赋值
                     * 
                     */
                    bool NodeSetHasBeenSet() const;

                    /**
                     * 获取<p>项目 ID。登录<a href="https://console.cloud.tencent.com/redis#/">Redis 控制台</a>，可在右上角的<b>账号中心</b> &gt; <b>项目管理</b>中查找项目ID。</p>
                     * @return ProjectId <p>项目 ID。登录<a href="https://console.cloud.tencent.com/redis#/">Redis 控制台</a>，可在右上角的<b>账号中心</b> &gt; <b>项目管理</b>中查找项目ID。</p>
                     * 
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 设置<p>项目 ID。登录<a href="https://console.cloud.tencent.com/redis#/">Redis 控制台</a>，可在右上角的<b>账号中心</b> &gt; <b>项目管理</b>中查找项目ID。</p>
                     * @param _projectId <p>项目 ID。登录<a href="https://console.cloud.tencent.com/redis#/">Redis 控制台</a>，可在右上角的<b>账号中心</b> &gt; <b>项目管理</b>中查找项目ID。</p>
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
                     * 获取<p>克隆实例需绑定的标签。</p>
                     * @return ResourceTags <p>克隆实例需绑定的标签。</p>
                     * 
                     */
                    std::vector<ResourceTag> GetResourceTags() const;

                    /**
                     * 设置<p>克隆实例需绑定的标签。</p>
                     * @param _resourceTags <p>克隆实例需绑定的标签。</p>
                     * 
                     */
                    void SetResourceTags(const std::vector<ResourceTag>& _resourceTags);

                    /**
                     * 判断参数 ResourceTags 是否已赋值
                     * @return ResourceTags 是否已赋值
                     * 
                     */
                    bool ResourceTagsHasBeenSet() const;

                    /**
                     * 获取<p>指定克隆实例相关的参数模板 ID。</p><ul><li>若不配置该参数，则系统会依据所选择的兼容版本及架构，自动适配对应的默认模板。</li><li>请通过<a href="https://cloud.tencent.com/document/product/239/58750">DescribeParamTemplates</a>接口，查询实例的参数模板列表，获取模板 ID 编号。</li></ul>
                     * @return TemplateId <p>指定克隆实例相关的参数模板 ID。</p><ul><li>若不配置该参数，则系统会依据所选择的兼容版本及架构，自动适配对应的默认模板。</li><li>请通过<a href="https://cloud.tencent.com/document/product/239/58750">DescribeParamTemplates</a>接口，查询实例的参数模板列表，获取模板 ID 编号。</li></ul>
                     * 
                     */
                    std::string GetTemplateId() const;

                    /**
                     * 设置<p>指定克隆实例相关的参数模板 ID。</p><ul><li>若不配置该参数，则系统会依据所选择的兼容版本及架构，自动适配对应的默认模板。</li><li>请通过<a href="https://cloud.tencent.com/document/product/239/58750">DescribeParamTemplates</a>接口，查询实例的参数模板列表，获取模板 ID 编号。</li></ul>
                     * @param _templateId <p>指定克隆实例相关的参数模板 ID。</p><ul><li>若不配置该参数，则系统会依据所选择的兼容版本及架构，自动适配对应的默认模板。</li><li>请通过<a href="https://cloud.tencent.com/document/product/239/58750">DescribeParamTemplates</a>接口，查询实例的参数模板列表，获取模板 ID 编号。</li></ul>
                     * 
                     */
                    void SetTemplateId(const std::string& _templateId);

                    /**
                     * 判断参数 TemplateId 是否已赋值
                     * @return TemplateId 是否已赋值
                     * 
                     */
                    bool TemplateIdHasBeenSet() const;

                    /**
                     * 获取<p>指定克隆实例的告警策略 ID。请登录<a href="https://console.cloud.tencent.com/monitor/alarm2/policy">腾讯云可观测平台控制台</a>，在 <b>告警管理</b> &gt; <b>策略管理</b>页面获取策略 ID 信息。</p>
                     * @return AlarmPolicyList <p>指定克隆实例的告警策略 ID。请登录<a href="https://console.cloud.tencent.com/monitor/alarm2/policy">腾讯云可观测平台控制台</a>，在 <b>告警管理</b> &gt; <b>策略管理</b>页面获取策略 ID 信息。</p>
                     * 
                     */
                    std::vector<std::string> GetAlarmPolicyList() const;

                    /**
                     * 设置<p>指定克隆实例的告警策略 ID。请登录<a href="https://console.cloud.tencent.com/monitor/alarm2/policy">腾讯云可观测平台控制台</a>，在 <b>告警管理</b> &gt; <b>策略管理</b>页面获取策略 ID 信息。</p>
                     * @param _alarmPolicyList <p>指定克隆实例的告警策略 ID。请登录<a href="https://console.cloud.tencent.com/monitor/alarm2/policy">腾讯云可观测平台控制台</a>，在 <b>告警管理</b> &gt; <b>策略管理</b>页面获取策略 ID 信息。</p>
                     * 
                     */
                    void SetAlarmPolicyList(const std::vector<std::string>& _alarmPolicyList);

                    /**
                     * 判断参数 AlarmPolicyList 是否已赋值
                     * @return AlarmPolicyList 是否已赋值
                     * 
                     */
                    bool AlarmPolicyListHasBeenSet() const;

                    /**
                     * 获取<p>克隆指定恢复数据的时间。<br>仅支持已开通秒级备份的实例</p>
                     * @return CloneTime <p>克隆指定恢复数据的时间。<br>仅支持已开通秒级备份的实例</p>
                     * 
                     */
                    std::string GetCloneTime() const;

                    /**
                     * 设置<p>克隆指定恢复数据的时间。<br>仅支持已开通秒级备份的实例</p>
                     * @param _cloneTime <p>克隆指定恢复数据的时间。<br>仅支持已开通秒级备份的实例</p>
                     * 
                     */
                    void SetCloneTime(const std::string& _cloneTime);

                    /**
                     * 判断参数 CloneTime 是否已赋值
                     * @return CloneTime 是否已赋值
                     * 
                     */
                    bool CloneTimeHasBeenSet() const;

                    /**
                     * 获取<p>是否加密密码</p>
                     * @return EncryptPassword <p>是否加密密码</p>
                     * 
                     */
                    bool GetEncryptPassword() const;

                    /**
                     * 设置<p>是否加密密码</p>
                     * @param _encryptPassword <p>是否加密密码</p>
                     * 
                     */
                    void SetEncryptPassword(const bool& _encryptPassword);

                    /**
                     * 判断参数 EncryptPassword 是否已赋值
                     * @return EncryptPassword 是否已赋值
                     * 
                     */
                    bool EncryptPasswordHasBeenSet() const;

                    /**
                     * 获取<p>实例密码复杂度策略</p><p>入参限制：未传或 Enabled=false 视为不启用，按默认规则校验</p>
                     * @return PasswordPolicy <p>实例密码复杂度策略</p><p>入参限制：未传或 Enabled=false 视为不启用，按默认规则校验</p>
                     * 
                     */
                    PasswordPolicy GetPasswordPolicy() const;

                    /**
                     * 设置<p>实例密码复杂度策略</p><p>入参限制：未传或 Enabled=false 视为不启用，按默认规则校验</p>
                     * @param _passwordPolicy <p>实例密码复杂度策略</p><p>入参限制：未传或 Enabled=false 视为不启用，按默认规则校验</p>
                     * 
                     */
                    void SetPasswordPolicy(const PasswordPolicy& _passwordPolicy);

                    /**
                     * 判断参数 PasswordPolicy 是否已赋值
                     * @return PasswordPolicy 是否已赋值
                     * 
                     */
                    bool PasswordPolicyHasBeenSet() const;

                    /**
                     * 获取<p>是否开启 SSL 加密传输。</p><p>枚举值：</p><ul><li>true： 开启。</li><li>false： 关闭（默认值）。</li></ul><p>默认值：false</p>
                     * @return EnableSSL <p>是否开启 SSL 加密传输。</p><p>枚举值：</p><ul><li>true： 开启。</li><li>false： 关闭（默认值）。</li></ul><p>默认值：false</p>
                     * 
                     */
                    bool GetEnableSSL() const;

                    /**
                     * 设置<p>是否开启 SSL 加密传输。</p><p>枚举值：</p><ul><li>true： 开启。</li><li>false： 关闭（默认值）。</li></ul><p>默认值：false</p>
                     * @param _enableSSL <p>是否开启 SSL 加密传输。</p><p>枚举值：</p><ul><li>true： 开启。</li><li>false： 关闭（默认值）。</li></ul><p>默认值：false</p>
                     * 
                     */
                    void SetEnableSSL(const bool& _enableSSL);

                    /**
                     * 判断参数 EnableSSL 是否已赋值
                     * @return EnableSSL 是否已赋值
                     * 
                     */
                    bool EnableSSLHasBeenSet() const;

                    /**
                     * 获取<p>开启 SSL 时，是否将实例的内网 IPv4 地址写入证书的域名别名（SAN）中。仅在 EnableSSL 为 true 时生效。</p><p>枚举值：</p><ul><li>true： 允许使用内网 IP 进行 SSL 证书校验。</li><li>false： 不添加证书的 SAN 扩展信息。</li></ul><p>默认值：false</p>
                     * @return SSLBindPrivateIPv4 <p>开启 SSL 时，是否将实例的内网 IPv4 地址写入证书的域名别名（SAN）中。仅在 EnableSSL 为 true 时生效。</p><p>枚举值：</p><ul><li>true： 允许使用内网 IP 进行 SSL 证书校验。</li><li>false： 不添加证书的 SAN 扩展信息。</li></ul><p>默认值：false</p>
                     * 
                     */
                    bool GetSSLBindPrivateIPv4() const;

                    /**
                     * 设置<p>开启 SSL 时，是否将实例的内网 IPv4 地址写入证书的域名别名（SAN）中。仅在 EnableSSL 为 true 时生效。</p><p>枚举值：</p><ul><li>true： 允许使用内网 IP 进行 SSL 证书校验。</li><li>false： 不添加证书的 SAN 扩展信息。</li></ul><p>默认值：false</p>
                     * @param _sSLBindPrivateIPv4 <p>开启 SSL 时，是否将实例的内网 IPv4 地址写入证书的域名别名（SAN）中。仅在 EnableSSL 为 true 时生效。</p><p>枚举值：</p><ul><li>true： 允许使用内网 IP 进行 SSL 证书校验。</li><li>false： 不添加证书的 SAN 扩展信息。</li></ul><p>默认值：false</p>
                     * 
                     */
                    void SetSSLBindPrivateIPv4(const bool& _sSLBindPrivateIPv4);

                    /**
                     * 判断参数 SSLBindPrivateIPv4 是否已赋值
                     * @return SSLBindPrivateIPv4 是否已赋值
                     * 
                     */
                    bool SSLBindPrivateIPv4HasBeenSet() const;

                private:

                    /**
                     * <p>指定待克隆的源实例 ID。例如：crs-xjhsdj****。请登录<a href="https://console.cloud.tencent.com/redis">Redis控制台</a>在实例列表复制实例 ID。</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>单次克隆实例的数量。</p><ul><li>包年包月每次购买最大数量为100。</li><li>按量计费每次购买最大数量为30。</li></ul>
                     */
                    uint64_t m_goodsNum;
                    bool m_goodsNumHasBeenSet;

                    /**
                     * <p>克隆实例所属的可用区ID。当前所支持的可用区 ID，请参见<a href="https://cloud.tencent.com/document/product/239/4106">地域和可用区</a> 。</p>
                     */
                    uint64_t m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * <p>付费方式。<ul><li>0：按量计费。</li><li>1：包年包月。</li></ul></p>
                     */
                    int64_t m_billingMode;
                    bool m_billingModeHasBeenSet;

                    /**
                     * <p>购买实例时长。<ul><li>单位：月。</li><li>付费方式选择包年包月计费时，取值范围为[1,2,3,4,5,6,7,8,9,10,11,12,24,36,48,60]。</li><li>付费方式选择按量计费时，设置为1。</li></ul></p>
                     */
                    uint64_t m_period;
                    bool m_periodHasBeenSet;

                    /**
                     * <p>安全组ID。请通过 <a href="https://cloud.tencent.com/document/product/239/34447">DescribeInstanceSecurityGroup</a> 接口获取实例的安全组 ID。</p>
                     */
                    std::vector<std::string> m_securityGroupIdList;
                    bool m_securityGroupIdListHasBeenSet;

                    /**
                     * <p>克隆实例使用的备份ID。请通过接口<a href="https://cloud.tencent.com/document/product/239/20011">DescribeInstanceBackups</a>获取备份ID。</p>
                     */
                    std::string m_backupId;
                    bool m_backupIdHasBeenSet;

                    /**
                     * <p>配置克隆实例是否支持免密访问。开启 SSL 与外网均不支持免密访问。<ul><li>true：免密实例，</li><li>false：非免密实例。默认为非免密实例。</li></ul></p>
                     */
                    bool m_noAuth;
                    bool m_noAuthHasBeenSet;

                    /**
                     * <p>配置克隆实例的私有网络ID。如果未配置该参数，默认选择基础网络。</p>
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * <p>配置克隆实例所属私有网络的子网。基础网络时该参数无需配置。</p>
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * <p>克隆实例的名称。<br>仅支持长度小于60的中文、英文或者数字，短划线&quot;-&quot;、下划线&quot;_&quot;。<br></p>
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * <p>克隆实例的访问密码。<ul><li>当输入参数<b>NoAuth</b>为<b>true</b>时，可不设置该参数。</li><li>当实例为Redis2.8、4.0和5.0时，其密码格式为：8-30个字符，至少包含小写字母、大写字母、数字和字符 ()`~!@#$%^&amp;*-+=_|{}[]:;&lt;&gt;,.?/ 中的2种，不能以&quot;/&quot;开头；</li><li>当实例为CKV 3.2时，其密码格式为：8-30个字符，必须包含字母和数字，且不包含其他字符。</li></ul></p>
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                    /**
                     * <p>自动续费标识。<ul><li>0：默认状态，手动续费。</li><li>1：自动续费。</li><li>2：不自动续费，到期自动隔离。</li></ul></p>
                     */
                    uint64_t m_autoRenew;
                    bool m_autoRenewHasBeenSet;

                    /**
                     * <p>用户自定义的端口，默认为6379，取值范围[1024,65535]。</p>
                     */
                    uint64_t m_vPort;
                    bool m_vPortHasBeenSet;

                    /**
                     * <p>实例的节点信息。<ul><li>目前支持配置节点的类型（主节点或者副本节点），及其节点的可用区信息。具体信息，请参见<a href="https://cloud.tencent.com/document/product/239/20022#RedisNodeInfo">RedisNodeInfo</a>。</li><li>单可用区部署可不配置该参数。</li></ul></p>
                     */
                    std::vector<RedisNodeInfo> m_nodeSet;
                    bool m_nodeSetHasBeenSet;

                    /**
                     * <p>项目 ID。登录<a href="https://console.cloud.tencent.com/redis#/">Redis 控制台</a>，可在右上角的<b>账号中心</b> &gt; <b>项目管理</b>中查找项目ID。</p>
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * <p>克隆实例需绑定的标签。</p>
                     */
                    std::vector<ResourceTag> m_resourceTags;
                    bool m_resourceTagsHasBeenSet;

                    /**
                     * <p>指定克隆实例相关的参数模板 ID。</p><ul><li>若不配置该参数，则系统会依据所选择的兼容版本及架构，自动适配对应的默认模板。</li><li>请通过<a href="https://cloud.tencent.com/document/product/239/58750">DescribeParamTemplates</a>接口，查询实例的参数模板列表，获取模板 ID 编号。</li></ul>
                     */
                    std::string m_templateId;
                    bool m_templateIdHasBeenSet;

                    /**
                     * <p>指定克隆实例的告警策略 ID。请登录<a href="https://console.cloud.tencent.com/monitor/alarm2/policy">腾讯云可观测平台控制台</a>，在 <b>告警管理</b> &gt; <b>策略管理</b>页面获取策略 ID 信息。</p>
                     */
                    std::vector<std::string> m_alarmPolicyList;
                    bool m_alarmPolicyListHasBeenSet;

                    /**
                     * <p>克隆指定恢复数据的时间。<br>仅支持已开通秒级备份的实例</p>
                     */
                    std::string m_cloneTime;
                    bool m_cloneTimeHasBeenSet;

                    /**
                     * <p>是否加密密码</p>
                     */
                    bool m_encryptPassword;
                    bool m_encryptPasswordHasBeenSet;

                    /**
                     * <p>实例密码复杂度策略</p><p>入参限制：未传或 Enabled=false 视为不启用，按默认规则校验</p>
                     */
                    PasswordPolicy m_passwordPolicy;
                    bool m_passwordPolicyHasBeenSet;

                    /**
                     * <p>是否开启 SSL 加密传输。</p><p>枚举值：</p><ul><li>true： 开启。</li><li>false： 关闭（默认值）。</li></ul><p>默认值：false</p>
                     */
                    bool m_enableSSL;
                    bool m_enableSSLHasBeenSet;

                    /**
                     * <p>开启 SSL 时，是否将实例的内网 IPv4 地址写入证书的域名别名（SAN）中。仅在 EnableSSL 为 true 时生效。</p><p>枚举值：</p><ul><li>true： 允许使用内网 IP 进行 SSL 证书校验。</li><li>false： 不添加证书的 SAN 扩展信息。</li></ul><p>默认值：false</p>
                     */
                    bool m_sSLBindPrivateIPv4;
                    bool m_sSLBindPrivateIPv4HasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_CLONEINSTANCESREQUEST_H_
