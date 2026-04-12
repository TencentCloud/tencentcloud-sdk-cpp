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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_CREATEINSTANCESREQUEST_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_CREATEINSTANCESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/redis/v20180412/model/RedisNodeInfo.h>
#include <tencentcloud/redis/v20180412/model/ResourceTag.h>


namespace TencentCloud
{
    namespace Redis
    {
        namespace V20180412
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
                     * 获取<p>实例类型。</p><ul><li>2：Redis 2.8 内存版（标准架构）。</li><li>3：CKV 3.2 内存版（标准架构）。</li><li>4：CKV 3.2 内存版（集群架构）。</li><li>6：Redis 4.0 内存版（标准架构）。</li><li>7：Redis 4.0 内存版（集群架构）。</li><li>8：Redis 5.0 内存版（标准架构）。</li><li>9：Redis 5.0 内存版（集群架构）。</li><li>15：Redis 6.2 内存版（标准架构）。</li><li>16：Redis 6.2 内存版（集群架构）。</li><li>17：Redis 7.0 内存版（标准架构）。</li><li>18：Redis 7.0 内存版（集群架构）。</li><li>19：Valkey 8.0 内存版（标准架构）。</li><li>20：Valkey 8.0 内存版（集群架构）。</li><li>200：Memcached 1.6 内存版（集群架构）。<br><strong>说明</strong>：CKV 版本当前有存量用户使用，暂时保留。</li></ul>
                     * @return TypeId <p>实例类型。</p><ul><li>2：Redis 2.8 内存版（标准架构）。</li><li>3：CKV 3.2 内存版（标准架构）。</li><li>4：CKV 3.2 内存版（集群架构）。</li><li>6：Redis 4.0 内存版（标准架构）。</li><li>7：Redis 4.0 内存版（集群架构）。</li><li>8：Redis 5.0 内存版（标准架构）。</li><li>9：Redis 5.0 内存版（集群架构）。</li><li>15：Redis 6.2 内存版（标准架构）。</li><li>16：Redis 6.2 内存版（集群架构）。</li><li>17：Redis 7.0 内存版（标准架构）。</li><li>18：Redis 7.0 内存版（集群架构）。</li><li>19：Valkey 8.0 内存版（标准架构）。</li><li>20：Valkey 8.0 内存版（集群架构）。</li><li>200：Memcached 1.6 内存版（集群架构）。<br><strong>说明</strong>：CKV 版本当前有存量用户使用，暂时保留。</li></ul>
                     * 
                     */
                    uint64_t GetTypeId() const;

                    /**
                     * 设置<p>实例类型。</p><ul><li>2：Redis 2.8 内存版（标准架构）。</li><li>3：CKV 3.2 内存版（标准架构）。</li><li>4：CKV 3.2 内存版（集群架构）。</li><li>6：Redis 4.0 内存版（标准架构）。</li><li>7：Redis 4.0 内存版（集群架构）。</li><li>8：Redis 5.0 内存版（标准架构）。</li><li>9：Redis 5.0 内存版（集群架构）。</li><li>15：Redis 6.2 内存版（标准架构）。</li><li>16：Redis 6.2 内存版（集群架构）。</li><li>17：Redis 7.0 内存版（标准架构）。</li><li>18：Redis 7.0 内存版（集群架构）。</li><li>19：Valkey 8.0 内存版（标准架构）。</li><li>20：Valkey 8.0 内存版（集群架构）。</li><li>200：Memcached 1.6 内存版（集群架构）。<br><strong>说明</strong>：CKV 版本当前有存量用户使用，暂时保留。</li></ul>
                     * @param _typeId <p>实例类型。</p><ul><li>2：Redis 2.8 内存版（标准架构）。</li><li>3：CKV 3.2 内存版（标准架构）。</li><li>4：CKV 3.2 内存版（集群架构）。</li><li>6：Redis 4.0 内存版（标准架构）。</li><li>7：Redis 4.0 内存版（集群架构）。</li><li>8：Redis 5.0 内存版（标准架构）。</li><li>9：Redis 5.0 内存版（集群架构）。</li><li>15：Redis 6.2 内存版（标准架构）。</li><li>16：Redis 6.2 内存版（集群架构）。</li><li>17：Redis 7.0 内存版（标准架构）。</li><li>18：Redis 7.0 内存版（集群架构）。</li><li>19：Valkey 8.0 内存版（标准架构）。</li><li>20：Valkey 8.0 内存版（集群架构）。</li><li>200：Memcached 1.6 内存版（集群架构）。<br><strong>说明</strong>：CKV 版本当前有存量用户使用，暂时保留。</li></ul>
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
                     * 获取<p>内存容量，单位为MB， 数值需为1024的整数倍。具体规格，请通过 <a href="https://cloud.tencent.com/document/api/239/30600">DescribeProductInfo</a> 接口查询全地域的售卖规格。</p><ul><li><strong>TypeId</strong>为标准架构时，<strong>MemSize</strong>是实例总内存容量；</li><li><strong>TypeId</strong>为集群架构时，<strong>MemSize</strong>是单分片内存容量。</li></ul>
                     * @return MemSize <p>内存容量，单位为MB， 数值需为1024的整数倍。具体规格，请通过 <a href="https://cloud.tencent.com/document/api/239/30600">DescribeProductInfo</a> 接口查询全地域的售卖规格。</p><ul><li><strong>TypeId</strong>为标准架构时，<strong>MemSize</strong>是实例总内存容量；</li><li><strong>TypeId</strong>为集群架构时，<strong>MemSize</strong>是单分片内存容量。</li></ul>
                     * 
                     */
                    uint64_t GetMemSize() const;

                    /**
                     * 设置<p>内存容量，单位为MB， 数值需为1024的整数倍。具体规格，请通过 <a href="https://cloud.tencent.com/document/api/239/30600">DescribeProductInfo</a> 接口查询全地域的售卖规格。</p><ul><li><strong>TypeId</strong>为标准架构时，<strong>MemSize</strong>是实例总内存容量；</li><li><strong>TypeId</strong>为集群架构时，<strong>MemSize</strong>是单分片内存容量。</li></ul>
                     * @param _memSize <p>内存容量，单位为MB， 数值需为1024的整数倍。具体规格，请通过 <a href="https://cloud.tencent.com/document/api/239/30600">DescribeProductInfo</a> 接口查询全地域的售卖规格。</p><ul><li><strong>TypeId</strong>为标准架构时，<strong>MemSize</strong>是实例总内存容量；</li><li><strong>TypeId</strong>为集群架构时，<strong>MemSize</strong>是单分片内存容量。</li></ul>
                     * 
                     */
                    void SetMemSize(const uint64_t& _memSize);

                    /**
                     * 判断参数 MemSize 是否已赋值
                     * @return MemSize 是否已赋值
                     * 
                     */
                    bool MemSizeHasBeenSet() const;

                    /**
                     * 获取<p>实例数量，单次购买实例数量。具体信息，请通过 <a href="https://cloud.tencent.com/document/api/239/30600">DescribeProductInfo</a> 接口查询全地域的售卖规格。</p>
                     * @return GoodsNum <p>实例数量，单次购买实例数量。具体信息，请通过 <a href="https://cloud.tencent.com/document/api/239/30600">DescribeProductInfo</a> 接口查询全地域的售卖规格。</p>
                     * 
                     */
                    uint64_t GetGoodsNum() const;

                    /**
                     * 设置<p>实例数量，单次购买实例数量。具体信息，请通过 <a href="https://cloud.tencent.com/document/api/239/30600">DescribeProductInfo</a> 接口查询全地域的售卖规格。</p>
                     * @param _goodsNum <p>实例数量，单次购买实例数量。具体信息，请通过 <a href="https://cloud.tencent.com/document/api/239/30600">DescribeProductInfo</a> 接口查询全地域的售卖规格。</p>
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
                     * 获取<p>购买实例的时长。</p><ul><li>若 <strong>BillingMode</strong>为<strong>1</strong>，即计费方式为包年包月时，需设置该参数，指定所购买实例的时长。单位：月，取值范围 [1,2,3,4,5,6,7,8,9,10,11,12,24,36]。</li><li>若 <strong>BillingMode</strong>为<strong>0</strong>，即计费方式为按量计费时，该参数配置为1。</li></ul>
                     * @return Period <p>购买实例的时长。</p><ul><li>若 <strong>BillingMode</strong>为<strong>1</strong>，即计费方式为包年包月时，需设置该参数，指定所购买实例的时长。单位：月，取值范围 [1,2,3,4,5,6,7,8,9,10,11,12,24,36]。</li><li>若 <strong>BillingMode</strong>为<strong>0</strong>，即计费方式为按量计费时，该参数配置为1。</li></ul>
                     * 
                     */
                    uint64_t GetPeriod() const;

                    /**
                     * 设置<p>购买实例的时长。</p><ul><li>若 <strong>BillingMode</strong>为<strong>1</strong>，即计费方式为包年包月时，需设置该参数，指定所购买实例的时长。单位：月，取值范围 [1,2,3,4,5,6,7,8,9,10,11,12,24,36]。</li><li>若 <strong>BillingMode</strong>为<strong>0</strong>，即计费方式为按量计费时，该参数配置为1。</li></ul>
                     * @param _period <p>购买实例的时长。</p><ul><li>若 <strong>BillingMode</strong>为<strong>1</strong>，即计费方式为包年包月时，需设置该参数，指定所购买实例的时长。单位：月，取值范围 [1,2,3,4,5,6,7,8,9,10,11,12,24,36]。</li><li>若 <strong>BillingMode</strong>为<strong>0</strong>，即计费方式为按量计费时，该参数配置为1。</li></ul>
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
                     * 获取<p>计费方式。</p><ul><li>0：按量计费。</li><li>1：包年包月。</li></ul>
                     * @return BillingMode <p>计费方式。</p><ul><li>0：按量计费。</li><li>1：包年包月。</li></ul>
                     * 
                     */
                    int64_t GetBillingMode() const;

                    /**
                     * 设置<p>计费方式。</p><ul><li>0：按量计费。</li><li>1：包年包月。</li></ul>
                     * @param _billingMode <p>计费方式。</p><ul><li>0：按量计费。</li><li>1：包年包月。</li></ul>
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
                     * 获取<p>实例所属的可用区ID，可参考<a href="https://cloud.tencent.com/document/product/239/4106">地域和可用区</a>  。</p>
                     * @return ZoneId <p>实例所属的可用区ID，可参考<a href="https://cloud.tencent.com/document/product/239/4106">地域和可用区</a>  。</p>
                     * 
                     */
                    uint64_t GetZoneId() const;

                    /**
                     * 设置<p>实例所属的可用区ID，可参考<a href="https://cloud.tencent.com/document/product/239/4106">地域和可用区</a>  。</p>
                     * @param _zoneId <p>实例所属的可用区ID，可参考<a href="https://cloud.tencent.com/document/product/239/4106">地域和可用区</a>  。</p>
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
                     * 获取<p>访问实例的密码。</p><ul><li>当输入参数<strong>NoAuth</strong>为<strong>true</strong>时，指设置实例为免密码访问，Password可不用配置，否则Password为必填参数。</li><li>当实例类型<strong>TypeId</strong>为Redis 2.8 内存版标准架构、Redis 4.0、5.0、6.2、7.0内存版标准架构或集群架构时，其密码复杂度要求为：8-64个字符，至少包含小写字母、大写字母、数字和字符()`~!@#$%^&amp;*-+=_|{}[]:;&lt;&gt;,.?/ 中的2种，不能以&quot;/&quot;开头。</li><li>当实例类型<strong>TypeId</strong>为CKV 3.2 内存版标准架构或集群架构时，其密码复杂度为：8-30个字符，必须包含字母和数字，且不包含其他字符。</li></ul>
                     * @return Password <p>访问实例的密码。</p><ul><li>当输入参数<strong>NoAuth</strong>为<strong>true</strong>时，指设置实例为免密码访问，Password可不用配置，否则Password为必填参数。</li><li>当实例类型<strong>TypeId</strong>为Redis 2.8 内存版标准架构、Redis 4.0、5.0、6.2、7.0内存版标准架构或集群架构时，其密码复杂度要求为：8-64个字符，至少包含小写字母、大写字母、数字和字符()`~!@#$%^&amp;*-+=_|{}[]:;&lt;&gt;,.?/ 中的2种，不能以&quot;/&quot;开头。</li><li>当实例类型<strong>TypeId</strong>为CKV 3.2 内存版标准架构或集群架构时，其密码复杂度为：8-30个字符，必须包含字母和数字，且不包含其他字符。</li></ul>
                     * 
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置<p>访问实例的密码。</p><ul><li>当输入参数<strong>NoAuth</strong>为<strong>true</strong>时，指设置实例为免密码访问，Password可不用配置，否则Password为必填参数。</li><li>当实例类型<strong>TypeId</strong>为Redis 2.8 内存版标准架构、Redis 4.0、5.0、6.2、7.0内存版标准架构或集群架构时，其密码复杂度要求为：8-64个字符，至少包含小写字母、大写字母、数字和字符()`~!@#$%^&amp;*-+=_|{}[]:;&lt;&gt;,.?/ 中的2种，不能以&quot;/&quot;开头。</li><li>当实例类型<strong>TypeId</strong>为CKV 3.2 内存版标准架构或集群架构时，其密码复杂度为：8-30个字符，必须包含字母和数字，且不包含其他字符。</li></ul>
                     * @param _password <p>访问实例的密码。</p><ul><li>当输入参数<strong>NoAuth</strong>为<strong>true</strong>时，指设置实例为免密码访问，Password可不用配置，否则Password为必填参数。</li><li>当实例类型<strong>TypeId</strong>为Redis 2.8 内存版标准架构、Redis 4.0、5.0、6.2、7.0内存版标准架构或集群架构时，其密码复杂度要求为：8-64个字符，至少包含小写字母、大写字母、数字和字符()`~!@#$%^&amp;*-+=_|{}[]:;&lt;&gt;,.?/ 中的2种，不能以&quot;/&quot;开头。</li><li>当实例类型<strong>TypeId</strong>为CKV 3.2 内存版标准架构或集群架构时，其密码复杂度为：8-30个字符，必须包含字母和数字，且不包含其他字符。</li></ul>
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
                     * 获取<p>私有网络ID。如果不配置该参数则默认选择基础网络。请登录 <a href="https://console.cloud.tencent.com/vpc">私有网络</a>控制台查询具体的ID。</p>
                     * @return VpcId <p>私有网络ID。如果不配置该参数则默认选择基础网络。请登录 <a href="https://console.cloud.tencent.com/vpc">私有网络</a>控制台查询具体的ID。</p>
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置<p>私有网络ID。如果不配置该参数则默认选择基础网络。请登录 <a href="https://console.cloud.tencent.com/vpc">私有网络</a>控制台查询具体的ID。</p>
                     * @param _vpcId <p>私有网络ID。如果不配置该参数则默认选择基础网络。请登录 <a href="https://console.cloud.tencent.com/vpc">私有网络</a>控制台查询具体的ID。</p>
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
                     * 获取<p>私有网络VPC的子网。基础网络下， 该参数无需配置。请登录 <a href="https://console.cloud.tencent.com/vpc">私有网络</a>控制台查询子网列表获取具体的 ID。</p>
                     * @return SubnetId <p>私有网络VPC的子网。基础网络下， 该参数无需配置。请登录 <a href="https://console.cloud.tencent.com/vpc">私有网络</a>控制台查询子网列表获取具体的 ID。</p>
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置<p>私有网络VPC的子网。基础网络下， 该参数无需配置。请登录 <a href="https://console.cloud.tencent.com/vpc">私有网络</a>控制台查询子网列表获取具体的 ID。</p>
                     * @param _subnetId <p>私有网络VPC的子网。基础网络下， 该参数无需配置。请登录 <a href="https://console.cloud.tencent.com/vpc">私有网络</a>控制台查询子网列表获取具体的 ID。</p>
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
                     * 获取<p>项目 ID。请登录<a href="https://console.cloud.tencent.com/redis#/">Redis控制台</a>，在右上角的账户信息菜单中，选择<strong>项目管理</strong>查询项目 ID。</p>
                     * @return ProjectId <p>项目 ID。请登录<a href="https://console.cloud.tencent.com/redis#/">Redis控制台</a>，在右上角的账户信息菜单中，选择<strong>项目管理</strong>查询项目 ID。</p>
                     * 
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 设置<p>项目 ID。请登录<a href="https://console.cloud.tencent.com/redis#/">Redis控制台</a>，在右上角的账户信息菜单中，选择<strong>项目管理</strong>查询项目 ID。</p>
                     * @param _projectId <p>项目 ID。请登录<a href="https://console.cloud.tencent.com/redis#/">Redis控制台</a>，在右上角的账户信息菜单中，选择<strong>项目管理</strong>查询项目 ID。</p>
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
                     * 获取<p>自动续费标识。</p><ul><li>0：默认状态（手动续费）。</li><li>1：自动续费。</li><li>2：到期不续费。</li></ul>
                     * @return AutoRenew <p>自动续费标识。</p><ul><li>0：默认状态（手动续费）。</li><li>1：自动续费。</li><li>2：到期不续费。</li></ul>
                     * 
                     */
                    uint64_t GetAutoRenew() const;

                    /**
                     * 设置<p>自动续费标识。</p><ul><li>0：默认状态（手动续费）。</li><li>1：自动续费。</li><li>2：到期不续费。</li></ul>
                     * @param _autoRenew <p>自动续费标识。</p><ul><li>0：默认状态（手动续费）。</li><li>1：自动续费。</li><li>2：到期不续费。</li></ul>
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
                     * 获取<p>安全组 ID 数组。</p><ul><li>安全组是一种虚拟防火墙，对云数据库实例的网络访问进行控制。创建实例时，建议绑定相应的安全组。</li><li>请通过 <a href="https://cloud.tencent.com/document/product/239/34447">DescribeInstanceSecurityGroup</a> 接口获取实例的安全组 ID。</li></ul>
                     * @return SecurityGroupIdList <p>安全组 ID 数组。</p><ul><li>安全组是一种虚拟防火墙，对云数据库实例的网络访问进行控制。创建实例时，建议绑定相应的安全组。</li><li>请通过 <a href="https://cloud.tencent.com/document/product/239/34447">DescribeInstanceSecurityGroup</a> 接口获取实例的安全组 ID。</li></ul>
                     * 
                     */
                    std::vector<std::string> GetSecurityGroupIdList() const;

                    /**
                     * 设置<p>安全组 ID 数组。</p><ul><li>安全组是一种虚拟防火墙，对云数据库实例的网络访问进行控制。创建实例时，建议绑定相应的安全组。</li><li>请通过 <a href="https://cloud.tencent.com/document/product/239/34447">DescribeInstanceSecurityGroup</a> 接口获取实例的安全组 ID。</li></ul>
                     * @param _securityGroupIdList <p>安全组 ID 数组。</p><ul><li>安全组是一种虚拟防火墙，对云数据库实例的网络访问进行控制。创建实例时，建议绑定相应的安全组。</li><li>请通过 <a href="https://cloud.tencent.com/document/product/239/34447">DescribeInstanceSecurityGroup</a> 接口获取实例的安全组 ID。</li></ul>
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
                     * 获取<p>用户自定义的网络端口。默认为6379，范围为 [1024,65535]。</p>
                     * @return VPort <p>用户自定义的网络端口。默认为6379，范围为 [1024,65535]。</p>
                     * 
                     */
                    uint64_t GetVPort() const;

                    /**
                     * 设置<p>用户自定义的网络端口。默认为6379，范围为 [1024,65535]。</p>
                     * @param _vPort <p>用户自定义的网络端口。默认为6379，范围为 [1024,65535]。</p>
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
                     * 获取<p>实例分片数量。</p><ul><li>标准版实例无需配置该参数。</li><li>集群版实例，分片数量范围为：[1、3、5、8、12、16、24、32、40、48、64、80、96、128]。</li></ul>
                     * @return RedisShardNum <p>实例分片数量。</p><ul><li>标准版实例无需配置该参数。</li><li>集群版实例，分片数量范围为：[1、3、5、8、12、16、24、32、40、48、64、80、96、128]。</li></ul>
                     * 
                     */
                    int64_t GetRedisShardNum() const;

                    /**
                     * 设置<p>实例分片数量。</p><ul><li>标准版实例无需配置该参数。</li><li>集群版实例，分片数量范围为：[1、3、5、8、12、16、24、32、40、48、64、80、96、128]。</li></ul>
                     * @param _redisShardNum <p>实例分片数量。</p><ul><li>标准版实例无需配置该参数。</li><li>集群版实例，分片数量范围为：[1、3、5、8、12、16、24、32、40、48、64、80、96、128]。</li></ul>
                     * 
                     */
                    void SetRedisShardNum(const int64_t& _redisShardNum);

                    /**
                     * 判断参数 RedisShardNum 是否已赋值
                     * @return RedisShardNum 是否已赋值
                     * 
                     */
                    bool RedisShardNumHasBeenSet() const;

                    /**
                     * 获取<p>实例副本数量。</p><ul><li>Redis 内存版 4.0、5.0、6.2、7.0 标准架构和集群架构支持副本数量范围为[1,5]。</li><li>Redis 2.8标准版、CKV标准版只支持1副本。</li></ul>
                     * @return RedisReplicasNum <p>实例副本数量。</p><ul><li>Redis 内存版 4.0、5.0、6.2、7.0 标准架构和集群架构支持副本数量范围为[1,5]。</li><li>Redis 2.8标准版、CKV标准版只支持1副本。</li></ul>
                     * 
                     */
                    int64_t GetRedisReplicasNum() const;

                    /**
                     * 设置<p>实例副本数量。</p><ul><li>Redis 内存版 4.0、5.0、6.2、7.0 标准架构和集群架构支持副本数量范围为[1,5]。</li><li>Redis 2.8标准版、CKV标准版只支持1副本。</li></ul>
                     * @param _redisReplicasNum <p>实例副本数量。</p><ul><li>Redis 内存版 4.0、5.0、6.2、7.0 标准架构和集群架构支持副本数量范围为[1,5]。</li><li>Redis 2.8标准版、CKV标准版只支持1副本。</li></ul>
                     * 
                     */
                    void SetRedisReplicasNum(const int64_t& _redisReplicasNum);

                    /**
                     * 判断参数 RedisReplicasNum 是否已赋值
                     * @return RedisReplicasNum 是否已赋值
                     * 
                     */
                    bool RedisReplicasNumHasBeenSet() const;

                    /**
                     * 获取<p>标识实例是否需支持副本只读。</p><ul><li>Redis 2.8 标准版、CKV标准版不支持副本只读。</li><li>开启副本只读，实例将自动读写分离，写请求路由到主节点，读请求路由到副本节点。</li><li>如需开启副本只读，建议副本数量大于等于2。</li></ul>
                     * @return ReplicasReadonly <p>标识实例是否需支持副本只读。</p><ul><li>Redis 2.8 标准版、CKV标准版不支持副本只读。</li><li>开启副本只读，实例将自动读写分离，写请求路由到主节点，读请求路由到副本节点。</li><li>如需开启副本只读，建议副本数量大于等于2。</li></ul>
                     * 
                     */
                    bool GetReplicasReadonly() const;

                    /**
                     * 设置<p>标识实例是否需支持副本只读。</p><ul><li>Redis 2.8 标准版、CKV标准版不支持副本只读。</li><li>开启副本只读，实例将自动读写分离，写请求路由到主节点，读请求路由到副本节点。</li><li>如需开启副本只读，建议副本数量大于等于2。</li></ul>
                     * @param _replicasReadonly <p>标识实例是否需支持副本只读。</p><ul><li>Redis 2.8 标准版、CKV标准版不支持副本只读。</li><li>开启副本只读，实例将自动读写分离，写请求路由到主节点，读请求路由到副本节点。</li><li>如需开启副本只读，建议副本数量大于等于2。</li></ul>
                     * 
                     */
                    void SetReplicasReadonly(const bool& _replicasReadonly);

                    /**
                     * 判断参数 ReplicasReadonly 是否已赋值
                     * @return ReplicasReadonly 是否已赋值
                     * 
                     */
                    bool ReplicasReadonlyHasBeenSet() const;

                    /**
                     * 获取<p>实例名称。命名要求：仅支持长度小于60的中文、英文或者数字，短划线&quot;-&quot;、下划线&quot;_&quot;。</p>
                     * @return InstanceName <p>实例名称。命名要求：仅支持长度小于60的中文、英文或者数字，短划线&quot;-&quot;、下划线&quot;_&quot;。</p>
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置<p>实例名称。命名要求：仅支持长度小于60的中文、英文或者数字，短划线&quot;-&quot;、下划线&quot;_&quot;。</p>
                     * @param _instanceName <p>实例名称。命名要求：仅支持长度小于60的中文、英文或者数字，短划线&quot;-&quot;、下划线&quot;_&quot;。</p>
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
                     * 获取<p>配置实例是否支持免密码访问。</p><ul><li>true：免密访问实例。</li><li>false：非免密访问实例。默认为非免密方式，仅VPC网络的实例支持免密码访问。</li></ul>
                     * @return NoAuth <p>配置实例是否支持免密码访问。</p><ul><li>true：免密访问实例。</li><li>false：非免密访问实例。默认为非免密方式，仅VPC网络的实例支持免密码访问。</li></ul>
                     * 
                     */
                    bool GetNoAuth() const;

                    /**
                     * 设置<p>配置实例是否支持免密码访问。</p><ul><li>true：免密访问实例。</li><li>false：非免密访问实例。默认为非免密方式，仅VPC网络的实例支持免密码访问。</li></ul>
                     * @param _noAuth <p>配置实例是否支持免密码访问。</p><ul><li>true：免密访问实例。</li><li>false：非免密访问实例。默认为非免密方式，仅VPC网络的实例支持免密码访问。</li></ul>
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
                     * 获取<p>实例的节点信息，包含节点 ID、节点类型、节点可用区 ID等。具体信息，请参见<a href="https://cloud.tencent.com/document/product/239/20022">RedisNodeInfo </a>。<br>目前支持传入节点的类型（主节点或者副本节点），节点的可用区。未指定该参数时，在支持多可用区部署的地域，系统将默认创建多可用区架构实例。</p>
                     * @return NodeSet <p>实例的节点信息，包含节点 ID、节点类型、节点可用区 ID等。具体信息，请参见<a href="https://cloud.tencent.com/document/product/239/20022">RedisNodeInfo </a>。<br>目前支持传入节点的类型（主节点或者副本节点），节点的可用区。未指定该参数时，在支持多可用区部署的地域，系统将默认创建多可用区架构实例。</p>
                     * 
                     */
                    std::vector<RedisNodeInfo> GetNodeSet() const;

                    /**
                     * 设置<p>实例的节点信息，包含节点 ID、节点类型、节点可用区 ID等。具体信息，请参见<a href="https://cloud.tencent.com/document/product/239/20022">RedisNodeInfo </a>。<br>目前支持传入节点的类型（主节点或者副本节点），节点的可用区。未指定该参数时，在支持多可用区部署的地域，系统将默认创建多可用区架构实例。</p>
                     * @param _nodeSet <p>实例的节点信息，包含节点 ID、节点类型、节点可用区 ID等。具体信息，请参见<a href="https://cloud.tencent.com/document/product/239/20022">RedisNodeInfo </a>。<br>目前支持传入节点的类型（主节点或者副本节点），节点的可用区。未指定该参数时，在支持多可用区部署的地域，系统将默认创建多可用区架构实例。</p>
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
                     * 获取<p>给实例设定标签。</p>
                     * @return ResourceTags <p>给实例设定标签。</p>
                     * 
                     */
                    std::vector<ResourceTag> GetResourceTags() const;

                    /**
                     * 设置<p>给实例设定标签。</p>
                     * @param _resourceTags <p>给实例设定标签。</p>
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
                     * 获取<p>指定实例所属的可用区名称。具体信息，请参见<a href="https://cloud.tencent.com/document/product/239/4106">地域和可用区</a>  。</p>
                     * @return ZoneName <p>指定实例所属的可用区名称。具体信息，请参见<a href="https://cloud.tencent.com/document/product/239/4106">地域和可用区</a>  。</p>
                     * 
                     */
                    std::string GetZoneName() const;

                    /**
                     * 设置<p>指定实例所属的可用区名称。具体信息，请参见<a href="https://cloud.tencent.com/document/product/239/4106">地域和可用区</a>  。</p>
                     * @param _zoneName <p>指定实例所属的可用区名称。具体信息，请参见<a href="https://cloud.tencent.com/document/product/239/4106">地域和可用区</a>  。</p>
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
                     * 获取<p>指定实例相关的参数模板 ID。</p><ul><li>若不配置该参数，则系统会依据所选择的兼容版本及架构，自动适配对应的默认模板。</li><li>请通过<a href="https://cloud.tencent.com/document/product/239/58750">DescribeParamTemplates</a>接口，查询实例的参数模板列表，获取模板 ID 编号。</li></ul>
                     * @return TemplateId <p>指定实例相关的参数模板 ID。</p><ul><li>若不配置该参数，则系统会依据所选择的兼容版本及架构，自动适配对应的默认模板。</li><li>请通过<a href="https://cloud.tencent.com/document/product/239/58750">DescribeParamTemplates</a>接口，查询实例的参数模板列表，获取模板 ID 编号。</li></ul>
                     * 
                     */
                    std::string GetTemplateId() const;

                    /**
                     * 设置<p>指定实例相关的参数模板 ID。</p><ul><li>若不配置该参数，则系统会依据所选择的兼容版本及架构，自动适配对应的默认模板。</li><li>请通过<a href="https://cloud.tencent.com/document/product/239/58750">DescribeParamTemplates</a>接口，查询实例的参数模板列表，获取模板 ID 编号。</li></ul>
                     * @param _templateId <p>指定实例相关的参数模板 ID。</p><ul><li>若不配置该参数，则系统会依据所选择的兼容版本及架构，自动适配对应的默认模板。</li><li>请通过<a href="https://cloud.tencent.com/document/product/239/58750">DescribeParamTemplates</a>接口，查询实例的参数模板列表，获取模板 ID 编号。</li></ul>
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
                     * 获取<p>内部参数，标识创建实例是否需要检查。</p><ul><li>false ：默认值。发送正常请求，通过检查后直接创建实例。</li><li>true：发送检查请求，不会创建实例。</li></ul>
                     * @return DryRun <p>内部参数，标识创建实例是否需要检查。</p><ul><li>false ：默认值。发送正常请求，通过检查后直接创建实例。</li><li>true：发送检查请求，不会创建实例。</li></ul>
                     * 
                     */
                    bool GetDryRun() const;

                    /**
                     * 设置<p>内部参数，标识创建实例是否需要检查。</p><ul><li>false ：默认值。发送正常请求，通过检查后直接创建实例。</li><li>true：发送检查请求，不会创建实例。</li></ul>
                     * @param _dryRun <p>内部参数，标识创建实例是否需要检查。</p><ul><li>false ：默认值。发送正常请求，通过检查后直接创建实例。</li><li>true：发送检查请求，不会创建实例。</li></ul>
                     * 
                     */
                    void SetDryRun(const bool& _dryRun);

                    /**
                     * 判断参数 DryRun 是否已赋值
                     * @return DryRun 是否已赋值
                     * 
                     */
                    bool DryRunHasBeenSet() const;

                    /**
                     * 获取<p>指实例部署模式。</p><ul><li>local：传统架构，默认为 local。</li><li>cdc：独享集群。</li><li>cloud：云原生，当前已暂停售卖。</li></ul>
                     * @return ProductVersion <p>指实例部署模式。</p><ul><li>local：传统架构，默认为 local。</li><li>cdc：独享集群。</li><li>cloud：云原生，当前已暂停售卖。</li></ul>
                     * 
                     */
                    std::string GetProductVersion() const;

                    /**
                     * 设置<p>指实例部署模式。</p><ul><li>local：传统架构，默认为 local。</li><li>cdc：独享集群。</li><li>cloud：云原生，当前已暂停售卖。</li></ul>
                     * @param _productVersion <p>指实例部署模式。</p><ul><li>local：传统架构，默认为 local。</li><li>cdc：独享集群。</li><li>cloud：云原生，当前已暂停售卖。</li></ul>
                     * 
                     */
                    void SetProductVersion(const std::string& _productVersion);

                    /**
                     * 判断参数 ProductVersion 是否已赋值
                     * @return ProductVersion 是否已赋值
                     * 
                     */
                    bool ProductVersionHasBeenSet() const;

                    /**
                     * 获取<p>独享集群 ID。</p><ul><li>当 <strong>ProductVersion</strong> 设置为 <strong>cdc</strong> 时，该参数必须设置。</li><li>请通过接口<a href="https://cloud.tencent.com/document/product/239/109628"> DescribeRedisClusters</a> 获取集群 ID。</li></ul>
                     * @return RedisClusterId <p>独享集群 ID。</p><ul><li>当 <strong>ProductVersion</strong> 设置为 <strong>cdc</strong> 时，该参数必须设置。</li><li>请通过接口<a href="https://cloud.tencent.com/document/product/239/109628"> DescribeRedisClusters</a> 获取集群 ID。</li></ul>
                     * 
                     */
                    std::string GetRedisClusterId() const;

                    /**
                     * 设置<p>独享集群 ID。</p><ul><li>当 <strong>ProductVersion</strong> 设置为 <strong>cdc</strong> 时，该参数必须设置。</li><li>请通过接口<a href="https://cloud.tencent.com/document/product/239/109628"> DescribeRedisClusters</a> 获取集群 ID。</li></ul>
                     * @param _redisClusterId <p>独享集群 ID。</p><ul><li>当 <strong>ProductVersion</strong> 设置为 <strong>cdc</strong> 时，该参数必须设置。</li><li>请通过接口<a href="https://cloud.tencent.com/document/product/239/109628"> DescribeRedisClusters</a> 获取集群 ID。</li></ul>
                     * 
                     */
                    void SetRedisClusterId(const std::string& _redisClusterId);

                    /**
                     * 判断参数 RedisClusterId 是否已赋值
                     * @return RedisClusterId 是否已赋值
                     * 
                     */
                    bool RedisClusterIdHasBeenSet() const;

                    /**
                     * 获取<p>告警策略 ID 数组。</p><ul><li>请登录<a href="https://console.cloud.tencent.com/monitor/alarm/policy">腾讯云可观测平台-告警管理-策略管理</a>获取告警策略 ID。</li><li>若不配置该参数，则绑定默认告警策略。默认告警策略具体信息，请登录<a href="https://console.cloud.tencent.com/monitor/alarm/policy">腾讯云可观测平台-告警管理-策略管理</a>查看。</li></ul>
                     * @return AlarmPolicyList <p>告警策略 ID 数组。</p><ul><li>请登录<a href="https://console.cloud.tencent.com/monitor/alarm/policy">腾讯云可观测平台-告警管理-策略管理</a>获取告警策略 ID。</li><li>若不配置该参数，则绑定默认告警策略。默认告警策略具体信息，请登录<a href="https://console.cloud.tencent.com/monitor/alarm/policy">腾讯云可观测平台-告警管理-策略管理</a>查看。</li></ul>
                     * 
                     */
                    std::vector<std::string> GetAlarmPolicyList() const;

                    /**
                     * 设置<p>告警策略 ID 数组。</p><ul><li>请登录<a href="https://console.cloud.tencent.com/monitor/alarm/policy">腾讯云可观测平台-告警管理-策略管理</a>获取告警策略 ID。</li><li>若不配置该参数，则绑定默认告警策略。默认告警策略具体信息，请登录<a href="https://console.cloud.tencent.com/monitor/alarm/policy">腾讯云可观测平台-告警管理-策略管理</a>查看。</li></ul>
                     * @param _alarmPolicyList <p>告警策略 ID 数组。</p><ul><li>请登录<a href="https://console.cloud.tencent.com/monitor/alarm/policy">腾讯云可观测平台-告警管理-策略管理</a>获取告警策略 ID。</li><li>若不配置该参数，则绑定默认告警策略。默认告警策略具体信息，请登录<a href="https://console.cloud.tencent.com/monitor/alarm/policy">腾讯云可观测平台-告警管理-策略管理</a>查看。</li></ul>
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

                private:

                    /**
                     * <p>实例类型。</p><ul><li>2：Redis 2.8 内存版（标准架构）。</li><li>3：CKV 3.2 内存版（标准架构）。</li><li>4：CKV 3.2 内存版（集群架构）。</li><li>6：Redis 4.0 内存版（标准架构）。</li><li>7：Redis 4.0 内存版（集群架构）。</li><li>8：Redis 5.0 内存版（标准架构）。</li><li>9：Redis 5.0 内存版（集群架构）。</li><li>15：Redis 6.2 内存版（标准架构）。</li><li>16：Redis 6.2 内存版（集群架构）。</li><li>17：Redis 7.0 内存版（标准架构）。</li><li>18：Redis 7.0 内存版（集群架构）。</li><li>19：Valkey 8.0 内存版（标准架构）。</li><li>20：Valkey 8.0 内存版（集群架构）。</li><li>200：Memcached 1.6 内存版（集群架构）。<br><strong>说明</strong>：CKV 版本当前有存量用户使用，暂时保留。</li></ul>
                     */
                    uint64_t m_typeId;
                    bool m_typeIdHasBeenSet;

                    /**
                     * <p>内存容量，单位为MB， 数值需为1024的整数倍。具体规格，请通过 <a href="https://cloud.tencent.com/document/api/239/30600">DescribeProductInfo</a> 接口查询全地域的售卖规格。</p><ul><li><strong>TypeId</strong>为标准架构时，<strong>MemSize</strong>是实例总内存容量；</li><li><strong>TypeId</strong>为集群架构时，<strong>MemSize</strong>是单分片内存容量。</li></ul>
                     */
                    uint64_t m_memSize;
                    bool m_memSizeHasBeenSet;

                    /**
                     * <p>实例数量，单次购买实例数量。具体信息，请通过 <a href="https://cloud.tencent.com/document/api/239/30600">DescribeProductInfo</a> 接口查询全地域的售卖规格。</p>
                     */
                    uint64_t m_goodsNum;
                    bool m_goodsNumHasBeenSet;

                    /**
                     * <p>购买实例的时长。</p><ul><li>若 <strong>BillingMode</strong>为<strong>1</strong>，即计费方式为包年包月时，需设置该参数，指定所购买实例的时长。单位：月，取值范围 [1,2,3,4,5,6,7,8,9,10,11,12,24,36]。</li><li>若 <strong>BillingMode</strong>为<strong>0</strong>，即计费方式为按量计费时，该参数配置为1。</li></ul>
                     */
                    uint64_t m_period;
                    bool m_periodHasBeenSet;

                    /**
                     * <p>计费方式。</p><ul><li>0：按量计费。</li><li>1：包年包月。</li></ul>
                     */
                    int64_t m_billingMode;
                    bool m_billingModeHasBeenSet;

                    /**
                     * <p>实例所属的可用区ID，可参考<a href="https://cloud.tencent.com/document/product/239/4106">地域和可用区</a>  。</p>
                     */
                    uint64_t m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * <p>访问实例的密码。</p><ul><li>当输入参数<strong>NoAuth</strong>为<strong>true</strong>时，指设置实例为免密码访问，Password可不用配置，否则Password为必填参数。</li><li>当实例类型<strong>TypeId</strong>为Redis 2.8 内存版标准架构、Redis 4.0、5.0、6.2、7.0内存版标准架构或集群架构时，其密码复杂度要求为：8-64个字符，至少包含小写字母、大写字母、数字和字符()`~!@#$%^&amp;*-+=_|{}[]:;&lt;&gt;,.?/ 中的2种，不能以&quot;/&quot;开头。</li><li>当实例类型<strong>TypeId</strong>为CKV 3.2 内存版标准架构或集群架构时，其密码复杂度为：8-30个字符，必须包含字母和数字，且不包含其他字符。</li></ul>
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                    /**
                     * <p>私有网络ID。如果不配置该参数则默认选择基础网络。请登录 <a href="https://console.cloud.tencent.com/vpc">私有网络</a>控制台查询具体的ID。</p>
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * <p>私有网络VPC的子网。基础网络下， 该参数无需配置。请登录 <a href="https://console.cloud.tencent.com/vpc">私有网络</a>控制台查询子网列表获取具体的 ID。</p>
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * <p>项目 ID。请登录<a href="https://console.cloud.tencent.com/redis#/">Redis控制台</a>，在右上角的账户信息菜单中，选择<strong>项目管理</strong>查询项目 ID。</p>
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * <p>自动续费标识。</p><ul><li>0：默认状态（手动续费）。</li><li>1：自动续费。</li><li>2：到期不续费。</li></ul>
                     */
                    uint64_t m_autoRenew;
                    bool m_autoRenewHasBeenSet;

                    /**
                     * <p>安全组 ID 数组。</p><ul><li>安全组是一种虚拟防火墙，对云数据库实例的网络访问进行控制。创建实例时，建议绑定相应的安全组。</li><li>请通过 <a href="https://cloud.tencent.com/document/product/239/34447">DescribeInstanceSecurityGroup</a> 接口获取实例的安全组 ID。</li></ul>
                     */
                    std::vector<std::string> m_securityGroupIdList;
                    bool m_securityGroupIdListHasBeenSet;

                    /**
                     * <p>用户自定义的网络端口。默认为6379，范围为 [1024,65535]。</p>
                     */
                    uint64_t m_vPort;
                    bool m_vPortHasBeenSet;

                    /**
                     * <p>实例分片数量。</p><ul><li>标准版实例无需配置该参数。</li><li>集群版实例，分片数量范围为：[1、3、5、8、12、16、24、32、40、48、64、80、96、128]。</li></ul>
                     */
                    int64_t m_redisShardNum;
                    bool m_redisShardNumHasBeenSet;

                    /**
                     * <p>实例副本数量。</p><ul><li>Redis 内存版 4.0、5.0、6.2、7.0 标准架构和集群架构支持副本数量范围为[1,5]。</li><li>Redis 2.8标准版、CKV标准版只支持1副本。</li></ul>
                     */
                    int64_t m_redisReplicasNum;
                    bool m_redisReplicasNumHasBeenSet;

                    /**
                     * <p>标识实例是否需支持副本只读。</p><ul><li>Redis 2.8 标准版、CKV标准版不支持副本只读。</li><li>开启副本只读，实例将自动读写分离，写请求路由到主节点，读请求路由到副本节点。</li><li>如需开启副本只读，建议副本数量大于等于2。</li></ul>
                     */
                    bool m_replicasReadonly;
                    bool m_replicasReadonlyHasBeenSet;

                    /**
                     * <p>实例名称。命名要求：仅支持长度小于60的中文、英文或者数字，短划线&quot;-&quot;、下划线&quot;_&quot;。</p>
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * <p>配置实例是否支持免密码访问。</p><ul><li>true：免密访问实例。</li><li>false：非免密访问实例。默认为非免密方式，仅VPC网络的实例支持免密码访问。</li></ul>
                     */
                    bool m_noAuth;
                    bool m_noAuthHasBeenSet;

                    /**
                     * <p>实例的节点信息，包含节点 ID、节点类型、节点可用区 ID等。具体信息，请参见<a href="https://cloud.tencent.com/document/product/239/20022">RedisNodeInfo </a>。<br>目前支持传入节点的类型（主节点或者副本节点），节点的可用区。未指定该参数时，在支持多可用区部署的地域，系统将默认创建多可用区架构实例。</p>
                     */
                    std::vector<RedisNodeInfo> m_nodeSet;
                    bool m_nodeSetHasBeenSet;

                    /**
                     * <p>给实例设定标签。</p>
                     */
                    std::vector<ResourceTag> m_resourceTags;
                    bool m_resourceTagsHasBeenSet;

                    /**
                     * <p>指定实例所属的可用区名称。具体信息，请参见<a href="https://cloud.tencent.com/document/product/239/4106">地域和可用区</a>  。</p>
                     */
                    std::string m_zoneName;
                    bool m_zoneNameHasBeenSet;

                    /**
                     * <p>指定实例相关的参数模板 ID。</p><ul><li>若不配置该参数，则系统会依据所选择的兼容版本及架构，自动适配对应的默认模板。</li><li>请通过<a href="https://cloud.tencent.com/document/product/239/58750">DescribeParamTemplates</a>接口，查询实例的参数模板列表，获取模板 ID 编号。</li></ul>
                     */
                    std::string m_templateId;
                    bool m_templateIdHasBeenSet;

                    /**
                     * <p>内部参数，标识创建实例是否需要检查。</p><ul><li>false ：默认值。发送正常请求，通过检查后直接创建实例。</li><li>true：发送检查请求，不会创建实例。</li></ul>
                     */
                    bool m_dryRun;
                    bool m_dryRunHasBeenSet;

                    /**
                     * <p>指实例部署模式。</p><ul><li>local：传统架构，默认为 local。</li><li>cdc：独享集群。</li><li>cloud：云原生，当前已暂停售卖。</li></ul>
                     */
                    std::string m_productVersion;
                    bool m_productVersionHasBeenSet;

                    /**
                     * <p>独享集群 ID。</p><ul><li>当 <strong>ProductVersion</strong> 设置为 <strong>cdc</strong> 时，该参数必须设置。</li><li>请通过接口<a href="https://cloud.tencent.com/document/product/239/109628"> DescribeRedisClusters</a> 获取集群 ID。</li></ul>
                     */
                    std::string m_redisClusterId;
                    bool m_redisClusterIdHasBeenSet;

                    /**
                     * <p>告警策略 ID 数组。</p><ul><li>请登录<a href="https://console.cloud.tencent.com/monitor/alarm/policy">腾讯云可观测平台-告警管理-策略管理</a>获取告警策略 ID。</li><li>若不配置该参数，则绑定默认告警策略。默认告警策略具体信息，请登录<a href="https://console.cloud.tencent.com/monitor/alarm/policy">腾讯云可观测平台-告警管理-策略管理</a>查看。</li></ul>
                     */
                    std::vector<std::string> m_alarmPolicyList;
                    bool m_alarmPolicyListHasBeenSet;

                    /**
                     * <p>是否加密密码</p>
                     */
                    bool m_encryptPassword;
                    bool m_encryptPasswordHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_CREATEINSTANCESREQUEST_H_
