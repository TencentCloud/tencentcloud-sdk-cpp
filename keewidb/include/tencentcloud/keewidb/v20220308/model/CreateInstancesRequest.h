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
                     * 获取产品版本。
14：当前仅支持混合存储版。
                     * @return TypeId 产品版本。
14：当前仅支持混合存储版。
                     * 
                     */
                    uint64_t GetTypeId() const;

                    /**
                     * 设置产品版本。
14：当前仅支持混合存储版。
                     * @param _typeId 产品版本。
14：当前仅支持混合存储版。
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
                     * 获取私有网络唯一ID。
请登录控制台在私有网络列表查询，如：vpc-azlk3***。
                     * @return UniqVpcId 私有网络唯一ID。
请登录控制台在私有网络列表查询，如：vpc-azlk3***。
                     * 
                     */
                    std::string GetUniqVpcId() const;

                    /**
                     * 设置私有网络唯一ID。
请登录控制台在私有网络列表查询，如：vpc-azlk3***。
                     * @param _uniqVpcId 私有网络唯一ID。
请登录控制台在私有网络列表查询，如：vpc-azlk3***。
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
                     * 获取私有网络所属子网唯一ID。
请登录控制台在私有网络列表查询，如：subnet-8abje***。
                     * @return UniqSubnetId 私有网络所属子网唯一ID。
请登录控制台在私有网络列表查询，如：subnet-8abje***。
                     * 
                     */
                    std::string GetUniqSubnetId() const;

                    /**
                     * 设置私有网络所属子网唯一ID。
请登录控制台在私有网络列表查询，如：subnet-8abje***。
                     * @param _uniqSubnetId 私有网络所属子网唯一ID。
请登录控制台在私有网络列表查询，如：subnet-8abje***。
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
                     * 获取计费模式。<ul><li>0：按量计费。</li><li>1：包年包月。</li></ul>
                     * @return BillingMode 计费模式。<ul><li>0：按量计费。</li><li>1：包年包月。</li></ul>
                     * 
                     */
                    int64_t GetBillingMode() const;

                    /**
                     * 设置计费模式。<ul><li>0：按量计费。</li><li>1：包年包月。</li></ul>
                     * @param _billingMode 计费模式。<ul><li>0：按量计费。</li><li>1：包年包月。</li></ul>
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
                     * 获取实例数量，单次最大购买数量以查询产品售卖规格返回的数量为准。
                     * @return GoodsNum 实例数量，单次最大购买数量以查询产品售卖规格返回的数量为准。
                     * 
                     */
                    uint64_t GetGoodsNum() const;

                    /**
                     * 设置实例数量，单次最大购买数量以查询产品售卖规格返回的数量为准。
                     * @param _goodsNum 实例数量，单次最大购买数量以查询产品售卖规格返回的数量为准。
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
                     * 获取选择包年包月计费模式（BillingMode 设置为1）时，您需要选择购买实例的时长。单位：月，取值范围 [1,2,3,4,5,6,7,8,9,10,11,12,24,36]。按量计费（BillingMode 设置为0）实例该参数设置为1即可。
                     * @return Period 选择包年包月计费模式（BillingMode 设置为1）时，您需要选择购买实例的时长。单位：月，取值范围 [1,2,3,4,5,6,7,8,9,10,11,12,24,36]。按量计费（BillingMode 设置为0）实例该参数设置为1即可。
                     * 
                     */
                    uint64_t GetPeriod() const;

                    /**
                     * 设置选择包年包月计费模式（BillingMode 设置为1）时，您需要选择购买实例的时长。单位：月，取值范围 [1,2,3,4,5,6,7,8,9,10,11,12,24,36]。按量计费（BillingMode 设置为0）实例该参数设置为1即可。
                     * @param _period 选择包年包月计费模式（BillingMode 设置为1）时，您需要选择购买实例的时长。单位：月，取值范围 [1,2,3,4,5,6,7,8,9,10,11,12,24,36]。按量计费（BillingMode 设置为0）实例该参数设置为1即可。
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
                     * 获取分片数量，支持选择3、5、6、8、9、10、12、15、16、18、20、21、24、25、27、30、32、33、35、36、39、40、42、45、48、50、51、54、55、56、57、60、63、64分片。
                     * @return ShardNum 分片数量，支持选择3、5、6、8、9、10、12、15、16、18、20、21、24、25、27、30、32、33、35、36、39、40、42、45、48、50、51、54、55、56、57、60、63、64分片。
                     * 
                     */
                    int64_t GetShardNum() const;

                    /**
                     * 设置分片数量，支持选择3、5、6、8、9、10、12、15、16、18、20、21、24、25、27、30、32、33、35、36、39、40、42、45、48、50、51、54、55、56、57、60、63、64分片。
                     * @param _shardNum 分片数量，支持选择3、5、6、8、9、10、12、15、16、18、20、21、24、25、27、30、32、33、35、36、39、40、42、45、48、50、51、54、55、56、57、60、63、64分片。
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
                     * 获取副本数。当前仅支持设置1个副本节点，即每一个分片仅包含1个主节点与1个副本节点，数据主从实时热备。
                     * @return ReplicasNum 副本数。当前仅支持设置1个副本节点，即每一个分片仅包含1个主节点与1个副本节点，数据主从实时热备。
                     * 
                     */
                    int64_t GetReplicasNum() const;

                    /**
                     * 设置副本数。当前仅支持设置1个副本节点，即每一个分片仅包含1个主节点与1个副本节点，数据主从实时热备。
                     * @param _replicasNum 副本数。当前仅支持设置1个副本节点，即每一个分片仅包含1个主节点与1个副本节点，数据主从实时热备。
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
                     * 获取实例内存容量，单位：GB。
KeeWiDB 内存容量<b>MachineMemory</b>与持久内存容量<b>MemSize</b>为固定搭配，即2GB内存，固定分配8GB的持久内存，不可选择。具体信息，请参见[产品规格](https://cloud.tencent.com/document/product/1520/80808)。
                     * @return MachineMemory 实例内存容量，单位：GB。
KeeWiDB 内存容量<b>MachineMemory</b>与持久内存容量<b>MemSize</b>为固定搭配，即2GB内存，固定分配8GB的持久内存，不可选择。具体信息，请参见[产品规格](https://cloud.tencent.com/document/product/1520/80808)。
                     * 
                     */
                    int64_t GetMachineMemory() const;

                    /**
                     * 设置实例内存容量，单位：GB。
KeeWiDB 内存容量<b>MachineMemory</b>与持久内存容量<b>MemSize</b>为固定搭配，即2GB内存，固定分配8GB的持久内存，不可选择。具体信息，请参见[产品规格](https://cloud.tencent.com/document/product/1520/80808)。
                     * @param _machineMemory 实例内存容量，单位：GB。
KeeWiDB 内存容量<b>MachineMemory</b>与持久内存容量<b>MemSize</b>为固定搭配，即2GB内存，固定分配8GB的持久内存，不可选择。具体信息，请参见[产品规格](https://cloud.tencent.com/document/product/1520/80808)。
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
                     * 获取实例所属的可用区ID。<ul><li>具体取值，请参见[地域和可用区](https://cloud.tencent.com/document/product/239/4106)获取。</li><li>参数<b>ZoneId</b>和<b>ZoneName</b>至少配置其中一个。</li></ul>
                     * @return ZoneId 实例所属的可用区ID。<ul><li>具体取值，请参见[地域和可用区](https://cloud.tencent.com/document/product/239/4106)获取。</li><li>参数<b>ZoneId</b>和<b>ZoneName</b>至少配置其中一个。</li></ul>
                     * 
                     */
                    uint64_t GetZoneId() const;

                    /**
                     * 设置实例所属的可用区ID。<ul><li>具体取值，请参见[地域和可用区](https://cloud.tencent.com/document/product/239/4106)获取。</li><li>参数<b>ZoneId</b>和<b>ZoneName</b>至少配置其中一个。</li></ul>
                     * @param _zoneId 实例所属的可用区ID。<ul><li>具体取值，请参见[地域和可用区](https://cloud.tencent.com/document/product/239/4106)获取。</li><li>参数<b>ZoneId</b>和<b>ZoneName</b>至少配置其中一个。</li></ul>
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
                     * 获取实例所属的可用区名称。<ul><li>具体取值，请参见[地域和可用区](https://cloud.tencent.com/document/product/239/4106)获取。</li><li>参数<b>ZoneId</b>和<b>ZoneName</b>至少配置其中一个。</li></ul>
                     * @return ZoneName 实例所属的可用区名称。<ul><li>具体取值，请参见[地域和可用区](https://cloud.tencent.com/document/product/239/4106)获取。</li><li>参数<b>ZoneId</b>和<b>ZoneName</b>至少配置其中一个。</li></ul>
                     * 
                     */
                    std::string GetZoneName() const;

                    /**
                     * 设置实例所属的可用区名称。<ul><li>具体取值，请参见[地域和可用区](https://cloud.tencent.com/document/product/239/4106)获取。</li><li>参数<b>ZoneId</b>和<b>ZoneName</b>至少配置其中一个。</li></ul>
                     * @param _zoneName 实例所属的可用区名称。<ul><li>具体取值，请参见[地域和可用区](https://cloud.tencent.com/document/product/239/4106)获取。</li><li>参数<b>ZoneId</b>和<b>ZoneName</b>至少配置其中一个。</li></ul>
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
                     * 获取创建实例的名称。
仅支持长度小于60的中文、英文或者数字，短划线"-"、下划线"_"。
                     * @return InstanceName 创建实例的名称。
仅支持长度小于60的中文、英文或者数字，短划线"-"、下划线"_"。
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置创建实例的名称。
仅支持长度小于60的中文、英文或者数字，短划线"-"、下划线"_"。
                     * @param _instanceName 创建实例的名称。
仅支持长度小于60的中文、英文或者数字，短划线"-"、下划线"_"。
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
                     * 获取指明创建的实例是否需要支持免密访问。<ul><li>true：免密实例。</li><li>false：非免密实例，默认为非免密实例。此时，需要设置访问密码。</li></ul>
                     * @return NoAuth 指明创建的实例是否需要支持免密访问。<ul><li>true：免密实例。</li><li>false：非免密实例，默认为非免密实例。此时，需要设置访问密码。</li></ul>
                     * 
                     */
                    bool GetNoAuth() const;

                    /**
                     * 设置指明创建的实例是否需要支持免密访问。<ul><li>true：免密实例。</li><li>false：非免密实例，默认为非免密实例。此时，需要设置访问密码。</li></ul>
                     * @param _noAuth 指明创建的实例是否需要支持免密访问。<ul><li>true：免密实例。</li><li>false：非免密实例，默认为非免密实例。此时，需要设置访问密码。</li></ul>
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
                     * 获取实例访问密码。<ul><li>当参数<b>NoAuth</b>为<b>true</b>时，Password为无需设置，否则Password为必填参数。</li>
<li>密码复杂度要求：<ul><li>8-30个字符。</li><li>至少包含小写字母、大写字母、数字和字符 ()`~!@#$%^&*-+=_|{}[]:;<>,.?/ 中的2种。</li><li>不能以"/"开头。</li></ul></li></ul>
                     * @return Password 实例访问密码。<ul><li>当参数<b>NoAuth</b>为<b>true</b>时，Password为无需设置，否则Password为必填参数。</li>
<li>密码复杂度要求：<ul><li>8-30个字符。</li><li>至少包含小写字母、大写字母、数字和字符 ()`~!@#$%^&*-+=_|{}[]:;<>,.?/ 中的2种。</li><li>不能以"/"开头。</li></ul></li></ul>
                     * 
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置实例访问密码。<ul><li>当参数<b>NoAuth</b>为<b>true</b>时，Password为无需设置，否则Password为必填参数。</li>
<li>密码复杂度要求：<ul><li>8-30个字符。</li><li>至少包含小写字母、大写字母、数字和字符 ()`~!@#$%^&*-+=_|{}[]:;<>,.?/ 中的2种。</li><li>不能以"/"开头。</li></ul></li></ul>
                     * @param _password 实例访问密码。<ul><li>当参数<b>NoAuth</b>为<b>true</b>时，Password为无需设置，否则Password为必填参数。</li>
<li>密码复杂度要求：<ul><li>8-30个字符。</li><li>至少包含小写字母、大写字母、数字和字符 ()`~!@#$%^&*-+=_|{}[]:;<>,.?/ 中的2种。</li><li>不能以"/"开头。</li></ul></li></ul>
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
                     * 获取自定义端口。默认为6379，范围[1024,65535]。
                     * @return VPort 自定义端口。默认为6379，范围[1024,65535]。
                     * 
                     */
                    uint64_t GetVPort() const;

                    /**
                     * 设置自定义端口。默认为6379，范围[1024,65535]。
                     * @param _vPort 自定义端口。默认为6379，范围[1024,65535]。
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
                     * 获取包年包月计费的续费模式。<ul><li>0：默认状态，指手动续费。</li><li>1：自动续费。</li><li>2：到期不再续费。</li></ul>
                     * @return AutoRenew 包年包月计费的续费模式。<ul><li>0：默认状态，指手动续费。</li><li>1：自动续费。</li><li>2：到期不再续费。</li></ul>
                     * 
                     */
                    uint64_t GetAutoRenew() const;

                    /**
                     * 设置包年包月计费的续费模式。<ul><li>0：默认状态，指手动续费。</li><li>1：自动续费。</li><li>2：到期不再续费。</li></ul>
                     * @param _autoRenew 包年包月计费的续费模式。<ul><li>0：默认状态，指手动续费。</li><li>1：自动续费。</li><li>2：到期不再续费。</li></ul>
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
                     * 获取给实例设置安全组 ID 数组。
                     * @return SecurityGroupIdList 给实例设置安全组 ID 数组。
                     * 
                     */
                    std::vector<std::string> GetSecurityGroupIdList() const;

                    /**
                     * 设置给实例设置安全组 ID 数组。
                     * @param _securityGroupIdList 给实例设置安全组 ID 数组。
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
                     * 获取给实例绑定标签。
                     * @return ResourceTags 给实例绑定标签。
                     * 
                     */
                    std::vector<ResourceTag> GetResourceTags() const;

                    /**
                     * 设置给实例绑定标签。
                     * @param _resourceTags 给实例绑定标签。
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
                     * 获取混合存储版，单分片持久化内存容量，单位：GB。
KeeWiDB 内存容量<b>MachineMemory</b>与持久内存容量<b>MemSize</b>为固定搭配，即2GB内存，固定分配8GB的持久内存，不可选择。具体信息，请参见[产品规格](https://cloud.tencent.com/document/product/1520/80808)。
                     * @return MemSize 混合存储版，单分片持久化内存容量，单位：GB。
KeeWiDB 内存容量<b>MachineMemory</b>与持久内存容量<b>MemSize</b>为固定搭配，即2GB内存，固定分配8GB的持久内存，不可选择。具体信息，请参见[产品规格](https://cloud.tencent.com/document/product/1520/80808)。
                     * 
                     */
                    int64_t GetMemSize() const;

                    /**
                     * 设置混合存储版，单分片持久化内存容量，单位：GB。
KeeWiDB 内存容量<b>MachineMemory</b>与持久内存容量<b>MemSize</b>为固定搭配，即2GB内存，固定分配8GB的持久内存，不可选择。具体信息，请参见[产品规格](https://cloud.tencent.com/document/product/1520/80808)。
                     * @param _memSize 混合存储版，单分片持久化内存容量，单位：GB。
KeeWiDB 内存容量<b>MachineMemory</b>与持久内存容量<b>MemSize</b>为固定搭配，即2GB内存，固定分配8GB的持久内存，不可选择。具体信息，请参见[产品规格](https://cloud.tencent.com/document/product/1520/80808)。
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
                     * 获取每个分片硬盘的容量。单位：GB。
每一缓存分片容量，对应的磁盘容量范围不同。具体信息，请参见[产品规格](https://cloud.tencent.com/document/product/1520/80808)。
                     * @return DiskSize 每个分片硬盘的容量。单位：GB。
每一缓存分片容量，对应的磁盘容量范围不同。具体信息，请参见[产品规格](https://cloud.tencent.com/document/product/1520/80808)。
                     * 
                     */
                    int64_t GetDiskSize() const;

                    /**
                     * 设置每个分片硬盘的容量。单位：GB。
每一缓存分片容量，对应的磁盘容量范围不同。具体信息，请参见[产品规格](https://cloud.tencent.com/document/product/1520/80808)。
                     * @param _diskSize 每个分片硬盘的容量。单位：GB。
每一缓存分片容量，对应的磁盘容量范围不同。具体信息，请参见[产品规格](https://cloud.tencent.com/document/product/1520/80808)。
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
                     * 获取计算 CPU 核数，可忽略不传。CPU 核数与内存为固定搭配，具体信息，请参见[产品规格](https://cloud.tencent.com/document/product/1520/80808)。
                     * @return MachineCpu 计算 CPU 核数，可忽略不传。CPU 核数与内存为固定搭配，具体信息，请参见[产品规格](https://cloud.tencent.com/document/product/1520/80808)。
                     * 
                     */
                    int64_t GetMachineCpu() const;

                    /**
                     * 设置计算 CPU 核数，可忽略不传。CPU 核数与内存为固定搭配，具体信息，请参见[产品规格](https://cloud.tencent.com/document/product/1520/80808)。
                     * @param _machineCpu 计算 CPU 核数，可忽略不传。CPU 核数与内存为固定搭配，具体信息，请参见[产品规格](https://cloud.tencent.com/document/product/1520/80808)。
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
                     * 获取项目id，取值以用户账户>用户账户相关接口查询>项目列表返回的projectId为准。
                     * @return ProjectId 项目id，取值以用户账户>用户账户相关接口查询>项目列表返回的projectId为准。
                     * 
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 设置项目id，取值以用户账户>用户账户相关接口查询>项目列表返回的projectId为准。
                     * @param _projectId 项目id，取值以用户账户>用户账户相关接口查询>项目列表返回的projectId为准。
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
                     * 获取数据压缩开关。<ul><li>ON：开启，默认开启压缩。</li><li>OFF：关闭。</li></ul>
                     * @return Compression 数据压缩开关。<ul><li>ON：开启，默认开启压缩。</li><li>OFF：关闭。</li></ul>
                     * 
                     */
                    std::string GetCompression() const;

                    /**
                     * 设置数据压缩开关。<ul><li>ON：开启，默认开启压缩。</li><li>OFF：关闭。</li></ul>
                     * @param _compression 数据压缩开关。<ul><li>ON：开启，默认开启压缩。</li><li>OFF：关闭。</li></ul>
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
                     * 产品版本。
14：当前仅支持混合存储版。
                     */
                    uint64_t m_typeId;
                    bool m_typeIdHasBeenSet;

                    /**
                     * 私有网络唯一ID。
请登录控制台在私有网络列表查询，如：vpc-azlk3***。
                     */
                    std::string m_uniqVpcId;
                    bool m_uniqVpcIdHasBeenSet;

                    /**
                     * 私有网络所属子网唯一ID。
请登录控制台在私有网络列表查询，如：subnet-8abje***。
                     */
                    std::string m_uniqSubnetId;
                    bool m_uniqSubnetIdHasBeenSet;

                    /**
                     * 计费模式。<ul><li>0：按量计费。</li><li>1：包年包月。</li></ul>
                     */
                    int64_t m_billingMode;
                    bool m_billingModeHasBeenSet;

                    /**
                     * 实例数量，单次最大购买数量以查询产品售卖规格返回的数量为准。
                     */
                    uint64_t m_goodsNum;
                    bool m_goodsNumHasBeenSet;

                    /**
                     * 选择包年包月计费模式（BillingMode 设置为1）时，您需要选择购买实例的时长。单位：月，取值范围 [1,2,3,4,5,6,7,8,9,10,11,12,24,36]。按量计费（BillingMode 设置为0）实例该参数设置为1即可。
                     */
                    uint64_t m_period;
                    bool m_periodHasBeenSet;

                    /**
                     * 分片数量，支持选择3、5、6、8、9、10、12、15、16、18、20、21、24、25、27、30、32、33、35、36、39、40、42、45、48、50、51、54、55、56、57、60、63、64分片。
                     */
                    int64_t m_shardNum;
                    bool m_shardNumHasBeenSet;

                    /**
                     * 副本数。当前仅支持设置1个副本节点，即每一个分片仅包含1个主节点与1个副本节点，数据主从实时热备。
                     */
                    int64_t m_replicasNum;
                    bool m_replicasNumHasBeenSet;

                    /**
                     * 实例内存容量，单位：GB。
KeeWiDB 内存容量<b>MachineMemory</b>与持久内存容量<b>MemSize</b>为固定搭配，即2GB内存，固定分配8GB的持久内存，不可选择。具体信息，请参见[产品规格](https://cloud.tencent.com/document/product/1520/80808)。
                     */
                    int64_t m_machineMemory;
                    bool m_machineMemoryHasBeenSet;

                    /**
                     * 实例所属的可用区ID。<ul><li>具体取值，请参见[地域和可用区](https://cloud.tencent.com/document/product/239/4106)获取。</li><li>参数<b>ZoneId</b>和<b>ZoneName</b>至少配置其中一个。</li></ul>
                     */
                    uint64_t m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * 实例所属的可用区名称。<ul><li>具体取值，请参见[地域和可用区](https://cloud.tencent.com/document/product/239/4106)获取。</li><li>参数<b>ZoneId</b>和<b>ZoneName</b>至少配置其中一个。</li></ul>
                     */
                    std::string m_zoneName;
                    bool m_zoneNameHasBeenSet;

                    /**
                     * 创建实例的名称。
仅支持长度小于60的中文、英文或者数字，短划线"-"、下划线"_"。
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * 指明创建的实例是否需要支持免密访问。<ul><li>true：免密实例。</li><li>false：非免密实例，默认为非免密实例。此时，需要设置访问密码。</li></ul>
                     */
                    bool m_noAuth;
                    bool m_noAuthHasBeenSet;

                    /**
                     * 实例访问密码。<ul><li>当参数<b>NoAuth</b>为<b>true</b>时，Password为无需设置，否则Password为必填参数。</li>
<li>密码复杂度要求：<ul><li>8-30个字符。</li><li>至少包含小写字母、大写字母、数字和字符 ()`~!@#$%^&*-+=_|{}[]:;<>,.?/ 中的2种。</li><li>不能以"/"开头。</li></ul></li></ul>
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                    /**
                     * 自定义端口。默认为6379，范围[1024,65535]。
                     */
                    uint64_t m_vPort;
                    bool m_vPortHasBeenSet;

                    /**
                     * 包年包月计费的续费模式。<ul><li>0：默认状态，指手动续费。</li><li>1：自动续费。</li><li>2：到期不再续费。</li></ul>
                     */
                    uint64_t m_autoRenew;
                    bool m_autoRenewHasBeenSet;

                    /**
                     * 给实例设置安全组 ID 数组。
                     */
                    std::vector<std::string> m_securityGroupIdList;
                    bool m_securityGroupIdListHasBeenSet;

                    /**
                     * 给实例绑定标签。
                     */
                    std::vector<ResourceTag> m_resourceTags;
                    bool m_resourceTagsHasBeenSet;

                    /**
                     * 混合存储版，单分片持久化内存容量，单位：GB。
KeeWiDB 内存容量<b>MachineMemory</b>与持久内存容量<b>MemSize</b>为固定搭配，即2GB内存，固定分配8GB的持久内存，不可选择。具体信息，请参见[产品规格](https://cloud.tencent.com/document/product/1520/80808)。
                     */
                    int64_t m_memSize;
                    bool m_memSizeHasBeenSet;

                    /**
                     * 每个分片硬盘的容量。单位：GB。
每一缓存分片容量，对应的磁盘容量范围不同。具体信息，请参见[产品规格](https://cloud.tencent.com/document/product/1520/80808)。
                     */
                    int64_t m_diskSize;
                    bool m_diskSizeHasBeenSet;

                    /**
                     * 计算 CPU 核数，可忽略不传。CPU 核数与内存为固定搭配，具体信息，请参见[产品规格](https://cloud.tencent.com/document/product/1520/80808)。
                     */
                    int64_t m_machineCpu;
                    bool m_machineCpuHasBeenSet;

                    /**
                     * 项目id，取值以用户账户>用户账户相关接口查询>项目列表返回的projectId为准。
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 数据压缩开关。<ul><li>ON：开启，默认开启压缩。</li><li>OFF：关闭。</li></ul>
                     */
                    std::string m_compression;
                    bool m_compressionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_KEEWIDB_V20220308_MODEL_CREATEINSTANCESREQUEST_H_
