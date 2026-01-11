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

#ifndef TENCENTCLOUD_KEEWIDB_V20220308_MODEL_CREATEINSTANCESREQUEST_H_
#define TENCENTCLOUD_KEEWIDB_V20220308_MODEL_CREATEINSTANCESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/keewidb/v20220308/model/ResourceTag.h>


namespace TencentCloud
{
    namespace Keewidb
    {
        namespace V20220308
        {
            namespace Model
            {
                /**
                * CreateInstances请求参数结构体
                */
                class CreateInstancesRequest : public AbstractModel
                {
                public:
                    CreateInstancesRequest();
                    ~CreateInstancesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>产品版本。14：极速版。</p>
                     * @return TypeId <p>产品版本。14：极速版。</p>
                     * 
                     */
                    uint64_t GetTypeId() const;

                    /**
                     * 设置<p>产品版本。14：极速版。</p>
                     * @param _typeId <p>产品版本。14：极速版。</p>
                     * 
                     */
                    void SetTypeId(const uint64_t& _typeId);

                    /**
                     * 判断参数 TypeId 是否已赋值
                     * @return TypeId 是否已赋值
                     * 
                     */
                    bool TypeIdHasBeenSet() const;

                    /**
                     * 获取<p>私有网络唯一ID。请登录控制台在私有网络列表查询，如：vpc-azlk3***。</p>
                     * @return UniqVpcId <p>私有网络唯一ID。请登录控制台在私有网络列表查询，如：vpc-azlk3***。</p>
                     * 
                     */
                    std::string GetUniqVpcId() const;

                    /**
                     * 设置<p>私有网络唯一ID。请登录控制台在私有网络列表查询，如：vpc-azlk3***。</p>
                     * @param _uniqVpcId <p>私有网络唯一ID。请登录控制台在私有网络列表查询，如：vpc-azlk3***。</p>
                     * 
                     */
                    void SetUniqVpcId(const std::string& _uniqVpcId);

                    /**
                     * 判断参数 UniqVpcId 是否已赋值
                     * @return UniqVpcId 是否已赋值
                     * 
                     */
                    bool UniqVpcIdHasBeenSet() const;

                    /**
                     * 获取<p>私有网络所属子网唯一ID。请登录控制台在私有网络列表查询，如：subnet-8abje***。</p>
                     * @return UniqSubnetId <p>私有网络所属子网唯一ID。请登录控制台在私有网络列表查询，如：subnet-8abje***。</p>
                     * 
                     */
                    std::string GetUniqSubnetId() const;

                    /**
                     * 设置<p>私有网络所属子网唯一ID。请登录控制台在私有网络列表查询，如：subnet-8abje***。</p>
                     * @param _uniqSubnetId <p>私有网络所属子网唯一ID。请登录控制台在私有网络列表查询，如：subnet-8abje***。</p>
                     * 
                     */
                    void SetUniqSubnetId(const std::string& _uniqSubnetId);

                    /**
                     * 判断参数 UniqSubnetId 是否已赋值
                     * @return UniqSubnetId 是否已赋值
                     * 
                     */
                    bool UniqSubnetIdHasBeenSet() const;

                    /**
                     * 获取<p>计费模式。<ul><li>0：按量计费。</li><li>1：包年包月。</li></ul></p>
                     * @return BillingMode <p>计费模式。<ul><li>0：按量计费。</li><li>1：包年包月。</li></ul></p>
                     * 
                     */
                    int64_t GetBillingMode() const;

                    /**
                     * 设置<p>计费模式。<ul><li>0：按量计费。</li><li>1：包年包月。</li></ul></p>
                     * @param _billingMode <p>计费模式。<ul><li>0：按量计费。</li><li>1：包年包月。</li></ul></p>
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
                     * 获取<p>实例数量，单次最大购买数量以查询产品售卖规格返回的数量为准。</p>
                     * @return GoodsNum <p>实例数量，单次最大购买数量以查询产品售卖规格返回的数量为准。</p>
                     * 
                     */
                    uint64_t GetGoodsNum() const;

                    /**
                     * 设置<p>实例数量，单次最大购买数量以查询产品售卖规格返回的数量为准。</p>
                     * @param _goodsNum <p>实例数量，单次最大购买数量以查询产品售卖规格返回的数量为准。</p>
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
                     * 获取<p>选择包年包月计费模式（BillingMode 设置为1）时，您需要选择购买实例的时长。单位：月，取值范围 [1,2,3,4,5,6,7,8,9,10,11,12,24,36]。按量计费（BillingMode 设置为0）实例该参数设置为1即可。</p>
                     * @return Period <p>选择包年包月计费模式（BillingMode 设置为1）时，您需要选择购买实例的时长。单位：月，取值范围 [1,2,3,4,5,6,7,8,9,10,11,12,24,36]。按量计费（BillingMode 设置为0）实例该参数设置为1即可。</p>
                     * 
                     */
                    uint64_t GetPeriod() const;

                    /**
                     * 设置<p>选择包年包月计费模式（BillingMode 设置为1）时，您需要选择购买实例的时长。单位：月，取值范围 [1,2,3,4,5,6,7,8,9,10,11,12,24,36]。按量计费（BillingMode 设置为0）实例该参数设置为1即可。</p>
                     * @param _period <p>选择包年包月计费模式（BillingMode 设置为1）时，您需要选择购买实例的时长。单位：月，取值范围 [1,2,3,4,5,6,7,8,9,10,11,12,24,36]。按量计费（BillingMode 设置为0）实例该参数设置为1即可。</p>
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
                     * 获取<p>分片数量，支持选择3、5、6、8、9、10、12、15、16、18、20、21、24、25、27、30、32、33、35、36、39、40、42、45、48、50、51、54、55、56、57、60、63、64分片。</p>
                     * @return ShardNum <p>分片数量，支持选择3、5、6、8、9、10、12、15、16、18、20、21、24、25、27、30、32、33、35、36、39、40、42、45、48、50、51、54、55、56、57、60、63、64分片。</p>
                     * 
                     */
                    int64_t GetShardNum() const;

                    /**
                     * 设置<p>分片数量，支持选择3、5、6、8、9、10、12、15、16、18、20、21、24、25、27、30、32、33、35、36、39、40、42、45、48、50、51、54、55、56、57、60、63、64分片。</p>
                     * @param _shardNum <p>分片数量，支持选择3、5、6、8、9、10、12、15、16、18、20、21、24、25、27、30、32、33、35、36、39、40、42、45、48、50、51、54、55、56、57、60、63、64分片。</p>
                     * 
                     */
                    void SetShardNum(const int64_t& _shardNum);

                    /**
                     * 判断参数 ShardNum 是否已赋值
                     * @return ShardNum 是否已赋值
                     * 
                     */
                    bool ShardNumHasBeenSet() const;

                    /**
                     * 获取<p>副本数。当前仅支持设置1个副本节点，即每一个分片仅包含1个主节点与1个副本节点，数据主从实时热备。</p>
                     * @return ReplicasNum <p>副本数。当前仅支持设置1个副本节点，即每一个分片仅包含1个主节点与1个副本节点，数据主从实时热备。</p>
                     * 
                     */
                    int64_t GetReplicasNum() const;

                    /**
                     * 设置<p>副本数。当前仅支持设置1个副本节点，即每一个分片仅包含1个主节点与1个副本节点，数据主从实时热备。</p>
                     * @param _replicasNum <p>副本数。当前仅支持设置1个副本节点，即每一个分片仅包含1个主节点与1个副本节点，数据主从实时热备。</p>
                     * 
                     */
                    void SetReplicasNum(const int64_t& _replicasNum);

                    /**
                     * 判断参数 ReplicasNum 是否已赋值
                     * @return ReplicasNum 是否已赋值
                     * 
                     */
                    bool ReplicasNumHasBeenSet() const;

                    /**
                     * 获取<p>实例内存容量，单位：GB。KeeWiDB 内存容量<b>MachineMemory</b>与持久内存容量<b>MemSize</b>为固定搭配，即2GB内存，固定分配8GB的持久内存，不可选择。具体信息，请参见<a href="https://cloud.tencent.com/document/product/1520/80808">产品规格</a>。</p>
                     * @return MachineMemory <p>实例内存容量，单位：GB。KeeWiDB 内存容量<b>MachineMemory</b>与持久内存容量<b>MemSize</b>为固定搭配，即2GB内存，固定分配8GB的持久内存，不可选择。具体信息，请参见<a href="https://cloud.tencent.com/document/product/1520/80808">产品规格</a>。</p>
                     * 
                     */
                    int64_t GetMachineMemory() const;

                    /**
                     * 设置<p>实例内存容量，单位：GB。KeeWiDB 内存容量<b>MachineMemory</b>与持久内存容量<b>MemSize</b>为固定搭配，即2GB内存，固定分配8GB的持久内存，不可选择。具体信息，请参见<a href="https://cloud.tencent.com/document/product/1520/80808">产品规格</a>。</p>
                     * @param _machineMemory <p>实例内存容量，单位：GB。KeeWiDB 内存容量<b>MachineMemory</b>与持久内存容量<b>MemSize</b>为固定搭配，即2GB内存，固定分配8GB的持久内存，不可选择。具体信息，请参见<a href="https://cloud.tencent.com/document/product/1520/80808">产品规格</a>。</p>
                     * 
                     */
                    void SetMachineMemory(const int64_t& _machineMemory);

                    /**
                     * 判断参数 MachineMemory 是否已赋值
                     * @return MachineMemory 是否已赋值
                     * 
                     */
                    bool MachineMemoryHasBeenSet() const;

                    /**
                     * 获取<p>实例所属的可用区ID。<ul><li>具体取值，请参见<a href="https://cloud.tencent.com/document/product/239/4106">地域和可用区</a>获取。</li><li>参数<b>ZoneId</b>和<b>ZoneName</b>至少配置其中一个。</li></ul></p>
                     * @return ZoneId <p>实例所属的可用区ID。<ul><li>具体取值，请参见<a href="https://cloud.tencent.com/document/product/239/4106">地域和可用区</a>获取。</li><li>参数<b>ZoneId</b>和<b>ZoneName</b>至少配置其中一个。</li></ul></p>
                     * 
                     */
                    uint64_t GetZoneId() const;

                    /**
                     * 设置<p>实例所属的可用区ID。<ul><li>具体取值，请参见<a href="https://cloud.tencent.com/document/product/239/4106">地域和可用区</a>获取。</li><li>参数<b>ZoneId</b>和<b>ZoneName</b>至少配置其中一个。</li></ul></p>
                     * @param _zoneId <p>实例所属的可用区ID。<ul><li>具体取值，请参见<a href="https://cloud.tencent.com/document/product/239/4106">地域和可用区</a>获取。</li><li>参数<b>ZoneId</b>和<b>ZoneName</b>至少配置其中一个。</li></ul></p>
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
                     * 获取<p>实例所属的可用区名称。<ul><li>具体取值，请参见<a href="https://cloud.tencent.com/document/product/239/4106">地域和可用区</a>获取。</li><li>参数<b>ZoneId</b>和<b>ZoneName</b>至少配置其中一个。</li></ul></p>
                     * @return ZoneName <p>实例所属的可用区名称。<ul><li>具体取值，请参见<a href="https://cloud.tencent.com/document/product/239/4106">地域和可用区</a>获取。</li><li>参数<b>ZoneId</b>和<b>ZoneName</b>至少配置其中一个。</li></ul></p>
                     * 
                     */
                    std::string GetZoneName() const;

                    /**
                     * 设置<p>实例所属的可用区名称。<ul><li>具体取值，请参见<a href="https://cloud.tencent.com/document/product/239/4106">地域和可用区</a>获取。</li><li>参数<b>ZoneId</b>和<b>ZoneName</b>至少配置其中一个。</li></ul></p>
                     * @param _zoneName <p>实例所属的可用区名称。<ul><li>具体取值，请参见<a href="https://cloud.tencent.com/document/product/239/4106">地域和可用区</a>获取。</li><li>参数<b>ZoneId</b>和<b>ZoneName</b>至少配置其中一个。</li></ul></p>
                     * 
                     */
                    void SetZoneName(const std::string& _zoneName);

                    /**
                     * 判断参数 ZoneName 是否已赋值
                     * @return ZoneName 是否已赋值
                     * 
                     */
                    bool ZoneNameHasBeenSet() const;

                    /**
                     * 获取<p>创建实例的名称。仅支持长度小于60的中文、英文或者数字，短划线"-"、下划线"_"。</p>
                     * @return InstanceName <p>创建实例的名称。仅支持长度小于60的中文、英文或者数字，短划线"-"、下划线"_"。</p>
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置<p>创建实例的名称。仅支持长度小于60的中文、英文或者数字，短划线"-"、下划线"_"。</p>
                     * @param _instanceName <p>创建实例的名称。仅支持长度小于60的中文、英文或者数字，短划线"-"、下划线"_"。</p>
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
                     * 获取<p>指明创建的实例是否需要支持免密访问。<ul><li>true：免密实例。</li><li>false：非免密实例，默认为非免密实例。此时，需要设置访问密码。</li></ul></p>
                     * @return NoAuth <p>指明创建的实例是否需要支持免密访问。<ul><li>true：免密实例。</li><li>false：非免密实例，默认为非免密实例。此时，需要设置访问密码。</li></ul></p>
                     * 
                     */
                    bool GetNoAuth() const;

                    /**
                     * 设置<p>指明创建的实例是否需要支持免密访问。<ul><li>true：免密实例。</li><li>false：非免密实例，默认为非免密实例。此时，需要设置访问密码。</li></ul></p>
                     * @param _noAuth <p>指明创建的实例是否需要支持免密访问。<ul><li>true：免密实例。</li><li>false：非免密实例，默认为非免密实例。此时，需要设置访问密码。</li></ul></p>
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
                     * 获取<p>实例访问密码。<ul><li>当参数<b>NoAuth</b>为<b>true</b>时，Password为无需设置，否则Password为必填参数。</li><li>密码复杂度要求：<ul><li>8-30个字符。</li><li>至少包含小写字母、大写字母、数字和字符 ()`~!@#$%^&amp;*-+=_|{}[]:;&lt;&gt;,.?/ 中的2种。</li><li>不能以"/"开头。</li></ul></li></ul></p>
                     * @return Password <p>实例访问密码。<ul><li>当参数<b>NoAuth</b>为<b>true</b>时，Password为无需设置，否则Password为必填参数。</li><li>密码复杂度要求：<ul><li>8-30个字符。</li><li>至少包含小写字母、大写字母、数字和字符 ()`~!@#$%^&amp;*-+=_|{}[]:;&lt;&gt;,.?/ 中的2种。</li><li>不能以"/"开头。</li></ul></li></ul></p>
                     * 
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置<p>实例访问密码。<ul><li>当参数<b>NoAuth</b>为<b>true</b>时，Password为无需设置，否则Password为必填参数。</li><li>密码复杂度要求：<ul><li>8-30个字符。</li><li>至少包含小写字母、大写字母、数字和字符 ()`~!@#$%^&amp;*-+=_|{}[]:;&lt;&gt;,.?/ 中的2种。</li><li>不能以"/"开头。</li></ul></li></ul></p>
                     * @param _password <p>实例访问密码。<ul><li>当参数<b>NoAuth</b>为<b>true</b>时，Password为无需设置，否则Password为必填参数。</li><li>密码复杂度要求：<ul><li>8-30个字符。</li><li>至少包含小写字母、大写字母、数字和字符 ()`~!@#$%^&amp;*-+=_|{}[]:;&lt;&gt;,.?/ 中的2种。</li><li>不能以"/"开头。</li></ul></li></ul></p>
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
                     * 获取<p>自定义端口。默认为6379，范围[1024,65535]。</p>
                     * @return VPort <p>自定义端口。默认为6379，范围[1024,65535]。</p>
                     * 
                     */
                    uint64_t GetVPort() const;

                    /**
                     * 设置<p>自定义端口。默认为6379，范围[1024,65535]。</p>
                     * @param _vPort <p>自定义端口。默认为6379，范围[1024,65535]。</p>
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
                     * 获取<p>包年包月计费的续费模式。<ul><li>0：默认状态，指手动续费。</li><li>1：自动续费。</li><li>2：到期不再续费。</li></ul></p>
                     * @return AutoRenew <p>包年包月计费的续费模式。<ul><li>0：默认状态，指手动续费。</li><li>1：自动续费。</li><li>2：到期不再续费。</li></ul></p>
                     * 
                     */
                    uint64_t GetAutoRenew() const;

                    /**
                     * 设置<p>包年包月计费的续费模式。<ul><li>0：默认状态，指手动续费。</li><li>1：自动续费。</li><li>2：到期不再续费。</li></ul></p>
                     * @param _autoRenew <p>包年包月计费的续费模式。<ul><li>0：默认状态，指手动续费。</li><li>1：自动续费。</li><li>2：到期不再续费。</li></ul></p>
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
                     * 获取<p>给实例设置安全组 ID 数组。</p>
                     * @return SecurityGroupIdList <p>给实例设置安全组 ID 数组。</p>
                     * 
                     */
                    std::vector<std::string> GetSecurityGroupIdList() const;

                    /**
                     * 设置<p>给实例设置安全组 ID 数组。</p>
                     * @param _securityGroupIdList <p>给实例设置安全组 ID 数组。</p>
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
                     * 获取<p>给实例绑定标签。</p>
                     * @return ResourceTags <p>给实例绑定标签。</p>
                     * 
                     */
                    std::vector<ResourceTag> GetResourceTags() const;

                    /**
                     * 设置<p>给实例绑定标签。</p>
                     * @param _resourceTags <p>给实例绑定标签。</p>
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
                     * 获取<p>混合存储版，单分片持久化内存容量，单位：GB。KeeWiDB 内存容量<b>MachineMemory</b>与持久内存容量<b>MemSize</b>为固定搭配，即2GB内存，固定分配8GB的持久内存，不可选择。具体信息，请参见<a href="https://cloud.tencent.com/document/product/1520/80808">产品规格</a>。</p>
                     * @return MemSize <p>混合存储版，单分片持久化内存容量，单位：GB。KeeWiDB 内存容量<b>MachineMemory</b>与持久内存容量<b>MemSize</b>为固定搭配，即2GB内存，固定分配8GB的持久内存，不可选择。具体信息，请参见<a href="https://cloud.tencent.com/document/product/1520/80808">产品规格</a>。</p>
                     * 
                     */
                    int64_t GetMemSize() const;

                    /**
                     * 设置<p>混合存储版，单分片持久化内存容量，单位：GB。KeeWiDB 内存容量<b>MachineMemory</b>与持久内存容量<b>MemSize</b>为固定搭配，即2GB内存，固定分配8GB的持久内存，不可选择。具体信息，请参见<a href="https://cloud.tencent.com/document/product/1520/80808">产品规格</a>。</p>
                     * @param _memSize <p>混合存储版，单分片持久化内存容量，单位：GB。KeeWiDB 内存容量<b>MachineMemory</b>与持久内存容量<b>MemSize</b>为固定搭配，即2GB内存，固定分配8GB的持久内存，不可选择。具体信息，请参见<a href="https://cloud.tencent.com/document/product/1520/80808">产品规格</a>。</p>
                     * 
                     */
                    void SetMemSize(const int64_t& _memSize);

                    /**
                     * 判断参数 MemSize 是否已赋值
                     * @return MemSize 是否已赋值
                     * 
                     */
                    bool MemSizeHasBeenSet() const;

                    /**
                     * 获取<p>每个分片硬盘的容量。单位：GB。每一缓存分片容量，对应的磁盘容量范围不同。具体信息，请参见<a href="https://cloud.tencent.com/document/product/1520/80808">产品规格</a>。</p>
                     * @return DiskSize <p>每个分片硬盘的容量。单位：GB。每一缓存分片容量，对应的磁盘容量范围不同。具体信息，请参见<a href="https://cloud.tencent.com/document/product/1520/80808">产品规格</a>。</p>
                     * 
                     */
                    int64_t GetDiskSize() const;

                    /**
                     * 设置<p>每个分片硬盘的容量。单位：GB。每一缓存分片容量，对应的磁盘容量范围不同。具体信息，请参见<a href="https://cloud.tencent.com/document/product/1520/80808">产品规格</a>。</p>
                     * @param _diskSize <p>每个分片硬盘的容量。单位：GB。每一缓存分片容量，对应的磁盘容量范围不同。具体信息，请参见<a href="https://cloud.tencent.com/document/product/1520/80808">产品规格</a>。</p>
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
                     * 获取<p>计算 CPU 核数，可忽略不传。CPU 核数与内存为固定搭配，具体信息，请参见<a href="https://cloud.tencent.com/document/product/1520/80808">产品规格</a>。</p>
                     * @return MachineCpu <p>计算 CPU 核数，可忽略不传。CPU 核数与内存为固定搭配，具体信息，请参见<a href="https://cloud.tencent.com/document/product/1520/80808">产品规格</a>。</p>
                     * 
                     */
                    int64_t GetMachineCpu() const;

                    /**
                     * 设置<p>计算 CPU 核数，可忽略不传。CPU 核数与内存为固定搭配，具体信息，请参见<a href="https://cloud.tencent.com/document/product/1520/80808">产品规格</a>。</p>
                     * @param _machineCpu <p>计算 CPU 核数，可忽略不传。CPU 核数与内存为固定搭配，具体信息，请参见<a href="https://cloud.tencent.com/document/product/1520/80808">产品规格</a>。</p>
                     * 
                     */
                    void SetMachineCpu(const int64_t& _machineCpu);

                    /**
                     * 判断参数 MachineCpu 是否已赋值
                     * @return MachineCpu 是否已赋值
                     * 
                     */
                    bool MachineCpuHasBeenSet() const;

                    /**
                     * 获取<p>项目id，取值以用户账户&gt;用户账户相关接口查询&gt;项目列表返回的projectId为准。</p>
                     * @return ProjectId <p>项目id，取值以用户账户&gt;用户账户相关接口查询&gt;项目列表返回的projectId为准。</p>
                     * 
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 设置<p>项目id，取值以用户账户&gt;用户账户相关接口查询&gt;项目列表返回的projectId为准。</p>
                     * @param _projectId <p>项目id，取值以用户账户&gt;用户账户相关接口查询&gt;项目列表返回的projectId为准。</p>
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
                     * 获取<p>数据压缩开关。<ul><li>ON：开启，默认开启压缩。</li><li>OFF：关闭。</li></ul></p>
                     * @return Compression <p>数据压缩开关。<ul><li>ON：开启，默认开启压缩。</li><li>OFF：关闭。</li></ul></p>
                     * 
                     */
                    std::string GetCompression() const;

                    /**
                     * 设置<p>数据压缩开关。<ul><li>ON：开启，默认开启压缩。</li><li>OFF：关闭。</li></ul></p>
                     * @param _compression <p>数据压缩开关。<ul><li>ON：开启，默认开启压缩。</li><li>OFF：关闭。</li></ul></p>
                     * 
                     */
                    void SetCompression(const std::string& _compression);

                    /**
                     * 判断参数 Compression 是否已赋值
                     * @return Compression 是否已赋值
                     * 
                     */
                    bool CompressionHasBeenSet() const;

                private:

                    /**
                     * <p>产品版本。14：极速版。</p>
                     */
                    uint64_t m_typeId;
                    bool m_typeIdHasBeenSet;

                    /**
                     * <p>私有网络唯一ID。请登录控制台在私有网络列表查询，如：vpc-azlk3***。</p>
                     */
                    std::string m_uniqVpcId;
                    bool m_uniqVpcIdHasBeenSet;

                    /**
                     * <p>私有网络所属子网唯一ID。请登录控制台在私有网络列表查询，如：subnet-8abje***。</p>
                     */
                    std::string m_uniqSubnetId;
                    bool m_uniqSubnetIdHasBeenSet;

                    /**
                     * <p>计费模式。<ul><li>0：按量计费。</li><li>1：包年包月。</li></ul></p>
                     */
                    int64_t m_billingMode;
                    bool m_billingModeHasBeenSet;

                    /**
                     * <p>实例数量，单次最大购买数量以查询产品售卖规格返回的数量为准。</p>
                     */
                    uint64_t m_goodsNum;
                    bool m_goodsNumHasBeenSet;

                    /**
                     * <p>选择包年包月计费模式（BillingMode 设置为1）时，您需要选择购买实例的时长。单位：月，取值范围 [1,2,3,4,5,6,7,8,9,10,11,12,24,36]。按量计费（BillingMode 设置为0）实例该参数设置为1即可。</p>
                     */
                    uint64_t m_period;
                    bool m_periodHasBeenSet;

                    /**
                     * <p>分片数量，支持选择3、5、6、8、9、10、12、15、16、18、20、21、24、25、27、30、32、33、35、36、39、40、42、45、48、50、51、54、55、56、57、60、63、64分片。</p>
                     */
                    int64_t m_shardNum;
                    bool m_shardNumHasBeenSet;

                    /**
                     * <p>副本数。当前仅支持设置1个副本节点，即每一个分片仅包含1个主节点与1个副本节点，数据主从实时热备。</p>
                     */
                    int64_t m_replicasNum;
                    bool m_replicasNumHasBeenSet;

                    /**
                     * <p>实例内存容量，单位：GB。KeeWiDB 内存容量<b>MachineMemory</b>与持久内存容量<b>MemSize</b>为固定搭配，即2GB内存，固定分配8GB的持久内存，不可选择。具体信息，请参见<a href="https://cloud.tencent.com/document/product/1520/80808">产品规格</a>。</p>
                     */
                    int64_t m_machineMemory;
                    bool m_machineMemoryHasBeenSet;

                    /**
                     * <p>实例所属的可用区ID。<ul><li>具体取值，请参见<a href="https://cloud.tencent.com/document/product/239/4106">地域和可用区</a>获取。</li><li>参数<b>ZoneId</b>和<b>ZoneName</b>至少配置其中一个。</li></ul></p>
                     */
                    uint64_t m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * <p>实例所属的可用区名称。<ul><li>具体取值，请参见<a href="https://cloud.tencent.com/document/product/239/4106">地域和可用区</a>获取。</li><li>参数<b>ZoneId</b>和<b>ZoneName</b>至少配置其中一个。</li></ul></p>
                     */
                    std::string m_zoneName;
                    bool m_zoneNameHasBeenSet;

                    /**
                     * <p>创建实例的名称。仅支持长度小于60的中文、英文或者数字，短划线"-"、下划线"_"。</p>
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * <p>指明创建的实例是否需要支持免密访问。<ul><li>true：免密实例。</li><li>false：非免密实例，默认为非免密实例。此时，需要设置访问密码。</li></ul></p>
                     */
                    bool m_noAuth;
                    bool m_noAuthHasBeenSet;

                    /**
                     * <p>实例访问密码。<ul><li>当参数<b>NoAuth</b>为<b>true</b>时，Password为无需设置，否则Password为必填参数。</li><li>密码复杂度要求：<ul><li>8-30个字符。</li><li>至少包含小写字母、大写字母、数字和字符 ()`~!@#$%^&amp;*-+=_|{}[]:;&lt;&gt;,.?/ 中的2种。</li><li>不能以"/"开头。</li></ul></li></ul></p>
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                    /**
                     * <p>自定义端口。默认为6379，范围[1024,65535]。</p>
                     */
                    uint64_t m_vPort;
                    bool m_vPortHasBeenSet;

                    /**
                     * <p>包年包月计费的续费模式。<ul><li>0：默认状态，指手动续费。</li><li>1：自动续费。</li><li>2：到期不再续费。</li></ul></p>
                     */
                    uint64_t m_autoRenew;
                    bool m_autoRenewHasBeenSet;

                    /**
                     * <p>给实例设置安全组 ID 数组。</p>
                     */
                    std::vector<std::string> m_securityGroupIdList;
                    bool m_securityGroupIdListHasBeenSet;

                    /**
                     * <p>给实例绑定标签。</p>
                     */
                    std::vector<ResourceTag> m_resourceTags;
                    bool m_resourceTagsHasBeenSet;

                    /**
                     * <p>混合存储版，单分片持久化内存容量，单位：GB。KeeWiDB 内存容量<b>MachineMemory</b>与持久内存容量<b>MemSize</b>为固定搭配，即2GB内存，固定分配8GB的持久内存，不可选择。具体信息，请参见<a href="https://cloud.tencent.com/document/product/1520/80808">产品规格</a>。</p>
                     */
                    int64_t m_memSize;
                    bool m_memSizeHasBeenSet;

                    /**
                     * <p>每个分片硬盘的容量。单位：GB。每一缓存分片容量，对应的磁盘容量范围不同。具体信息，请参见<a href="https://cloud.tencent.com/document/product/1520/80808">产品规格</a>。</p>
                     */
                    int64_t m_diskSize;
                    bool m_diskSizeHasBeenSet;

                    /**
                     * <p>计算 CPU 核数，可忽略不传。CPU 核数与内存为固定搭配，具体信息，请参见<a href="https://cloud.tencent.com/document/product/1520/80808">产品规格</a>。</p>
                     */
                    int64_t m_machineCpu;
                    bool m_machineCpuHasBeenSet;

                    /**
                     * <p>项目id，取值以用户账户&gt;用户账户相关接口查询&gt;项目列表返回的projectId为准。</p>
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * <p>数据压缩开关。<ul><li>ON：开启，默认开启压缩。</li><li>OFF：关闭。</li></ul></p>
                     */
                    std::string m_compression;
                    bool m_compressionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_KEEWIDB_V20220308_MODEL_CREATEINSTANCESREQUEST_H_
