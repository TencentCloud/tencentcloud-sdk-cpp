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
                     * 获取实例类型。
<ul><li>2：Redis 2.8 内存版（标准架构）。</li><li>3：CKV 3.2 内存版（标准架构）。</li><li>4：CKV 3.2 内存版（集群架构）。</li><li>6：Redis 4.0 内存版（标准架构）。</li><li>7：Redis 4.0 内存版（集群架构）。</li><li>8：Redis 5.0 内存版（标准架构）。</li><li>9：Redis 5.0 内存版（集群架构）。</li><li>15：Redis 6.2 内存版（标准架构）。</li><li>16：Redis 6.2 内存版（集群架构）。</li><li>17：Redis 7.0 内存版（标准架构）。</li><li>18：Redis 7.0 内存版（集群架构）。</li>说明：CKV 版本当前有存量用户使用，暂时保留。</ul>
                     * @return TypeId 实例类型。
<ul><li>2：Redis 2.8 内存版（标准架构）。</li><li>3：CKV 3.2 内存版（标准架构）。</li><li>4：CKV 3.2 内存版（集群架构）。</li><li>6：Redis 4.0 内存版（标准架构）。</li><li>7：Redis 4.0 内存版（集群架构）。</li><li>8：Redis 5.0 内存版（标准架构）。</li><li>9：Redis 5.0 内存版（集群架构）。</li><li>15：Redis 6.2 内存版（标准架构）。</li><li>16：Redis 6.2 内存版（集群架构）。</li><li>17：Redis 7.0 内存版（标准架构）。</li><li>18：Redis 7.0 内存版（集群架构）。</li>说明：CKV 版本当前有存量用户使用，暂时保留。</ul>
                     * 
                     */
                    uint64_t GetTypeId() const;

                    /**
                     * 设置实例类型。
<ul><li>2：Redis 2.8 内存版（标准架构）。</li><li>3：CKV 3.2 内存版（标准架构）。</li><li>4：CKV 3.2 内存版（集群架构）。</li><li>6：Redis 4.0 内存版（标准架构）。</li><li>7：Redis 4.0 内存版（集群架构）。</li><li>8：Redis 5.0 内存版（标准架构）。</li><li>9：Redis 5.0 内存版（集群架构）。</li><li>15：Redis 6.2 内存版（标准架构）。</li><li>16：Redis 6.2 内存版（集群架构）。</li><li>17：Redis 7.0 内存版（标准架构）。</li><li>18：Redis 7.0 内存版（集群架构）。</li>说明：CKV 版本当前有存量用户使用，暂时保留。</ul>
                     * @param _typeId 实例类型。
<ul><li>2：Redis 2.8 内存版（标准架构）。</li><li>3：CKV 3.2 内存版（标准架构）。</li><li>4：CKV 3.2 内存版（集群架构）。</li><li>6：Redis 4.0 内存版（标准架构）。</li><li>7：Redis 4.0 内存版（集群架构）。</li><li>8：Redis 5.0 内存版（标准架构）。</li><li>9：Redis 5.0 内存版（集群架构）。</li><li>15：Redis 6.2 内存版（标准架构）。</li><li>16：Redis 6.2 内存版（集群架构）。</li><li>17：Redis 7.0 内存版（标准架构）。</li><li>18：Redis 7.0 内存版（集群架构）。</li>说明：CKV 版本当前有存量用户使用，暂时保留。</ul>
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
                     * 获取内存容量，单位为MB， 数值需为1024的整数倍。具体规格，请通过 [DescribeProductInfo](https://cloud.tencent.com/document/api/239/30600) 接口查询全地域的售卖规格。
- **TypeId**为标准架构时，**MemSize**是实例总内存容量；
- **TypeId**为集群架构时，**MemSize**是单分片内存容量。
                     * @return MemSize 内存容量，单位为MB， 数值需为1024的整数倍。具体规格，请通过 [DescribeProductInfo](https://cloud.tencent.com/document/api/239/30600) 接口查询全地域的售卖规格。
- **TypeId**为标准架构时，**MemSize**是实例总内存容量；
- **TypeId**为集群架构时，**MemSize**是单分片内存容量。
                     * 
                     */
                    uint64_t GetMemSize() const;

                    /**
                     * 设置内存容量，单位为MB， 数值需为1024的整数倍。具体规格，请通过 [DescribeProductInfo](https://cloud.tencent.com/document/api/239/30600) 接口查询全地域的售卖规格。
- **TypeId**为标准架构时，**MemSize**是实例总内存容量；
- **TypeId**为集群架构时，**MemSize**是单分片内存容量。
                     * @param _memSize 内存容量，单位为MB， 数值需为1024的整数倍。具体规格，请通过 [DescribeProductInfo](https://cloud.tencent.com/document/api/239/30600) 接口查询全地域的售卖规格。
- **TypeId**为标准架构时，**MemSize**是实例总内存容量；
- **TypeId**为集群架构时，**MemSize**是单分片内存容量。
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
                     * 获取实例数量，单次购买实例数量。具体信息，请通过 [DescribeProductInfo](https://cloud.tencent.com/document/api/239/30600) 接口查询全地域的售卖规格。
                     * @return GoodsNum 实例数量，单次购买实例数量。具体信息，请通过 [DescribeProductInfo](https://cloud.tencent.com/document/api/239/30600) 接口查询全地域的售卖规格。
                     * 
                     */
                    uint64_t GetGoodsNum() const;

                    /**
                     * 设置实例数量，单次购买实例数量。具体信息，请通过 [DescribeProductInfo](https://cloud.tencent.com/document/api/239/30600) 接口查询全地域的售卖规格。
                     * @param _goodsNum 实例数量，单次购买实例数量。具体信息，请通过 [DescribeProductInfo](https://cloud.tencent.com/document/api/239/30600) 接口查询全地域的售卖规格。
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
                     * 获取购买实例的时长。
- 若 **BillingMode**为**1**，即计费方式为包年包月时，需设置该参数，指定所购买实例的时长。单位：月，取值范围 [1,2,3,4,5,6,7,8,9,10,11,12,24,36]。
- 若 **BillingMode**为**0**，即计费方式为按量计费时，该参数配置为1。
                     * @return Period 购买实例的时长。
- 若 **BillingMode**为**1**，即计费方式为包年包月时，需设置该参数，指定所购买实例的时长。单位：月，取值范围 [1,2,3,4,5,6,7,8,9,10,11,12,24,36]。
- 若 **BillingMode**为**0**，即计费方式为按量计费时，该参数配置为1。
                     * 
                     */
                    uint64_t GetPeriod() const;

                    /**
                     * 设置购买实例的时长。
- 若 **BillingMode**为**1**，即计费方式为包年包月时，需设置该参数，指定所购买实例的时长。单位：月，取值范围 [1,2,3,4,5,6,7,8,9,10,11,12,24,36]。
- 若 **BillingMode**为**0**，即计费方式为按量计费时，该参数配置为1。
                     * @param _period 购买实例的时长。
- 若 **BillingMode**为**1**，即计费方式为包年包月时，需设置该参数，指定所购买实例的时长。单位：月，取值范围 [1,2,3,4,5,6,7,8,9,10,11,12,24,36]。
- 若 **BillingMode**为**0**，即计费方式为按量计费时，该参数配置为1。
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
                     * 获取计费方式。
- 0：按量计费。
- 1：包年包月。
                     * @return BillingMode 计费方式。
- 0：按量计费。
- 1：包年包月。
                     * 
                     */
                    int64_t GetBillingMode() const;

                    /**
                     * 设置计费方式。
- 0：按量计费。
- 1：包年包月。
                     * @param _billingMode 计费方式。
- 0：按量计费。
- 1：包年包月。
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
                     * 获取实例所属的可用区ID，可参考[地域和可用区](https://cloud.tencent.com/document/product/239/4106)  。
                     * @return ZoneId 实例所属的可用区ID，可参考[地域和可用区](https://cloud.tencent.com/document/product/239/4106)  。
                     * 
                     */
                    uint64_t GetZoneId() const;

                    /**
                     * 设置实例所属的可用区ID，可参考[地域和可用区](https://cloud.tencent.com/document/product/239/4106)  。
                     * @param _zoneId 实例所属的可用区ID，可参考[地域和可用区](https://cloud.tencent.com/document/product/239/4106)  。
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
                     * 获取访问实例的密码。
- 当输入参数**NoAuth**为**true**时，指设置实例为免密码访问，Password可不用配置，否则Password为必填参数。
- 当实例类型**TypeId**为Redis 2.8 内存版标准架构、Redis 4.0、5.0、6.2、7.0内存版标准架构或集群架构时，其密码复杂度要求为：8-64个字符，至少包含小写字母、大写字母、数字和字符()`~!@#$%^&*-+=_|{}[]:;<>,.?/ 中的2种，不能以"/"开头。
- 当实例类型**TypeId**为CKV 3.2 内存版标准架构或集群架构时，其密码复杂度为：8-30个字符，必须包含字母和数字，且不包含其他字符。
                     * @return Password 访问实例的密码。
- 当输入参数**NoAuth**为**true**时，指设置实例为免密码访问，Password可不用配置，否则Password为必填参数。
- 当实例类型**TypeId**为Redis 2.8 内存版标准架构、Redis 4.0、5.0、6.2、7.0内存版标准架构或集群架构时，其密码复杂度要求为：8-64个字符，至少包含小写字母、大写字母、数字和字符()`~!@#$%^&*-+=_|{}[]:;<>,.?/ 中的2种，不能以"/"开头。
- 当实例类型**TypeId**为CKV 3.2 内存版标准架构或集群架构时，其密码复杂度为：8-30个字符，必须包含字母和数字，且不包含其他字符。
                     * 
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置访问实例的密码。
- 当输入参数**NoAuth**为**true**时，指设置实例为免密码访问，Password可不用配置，否则Password为必填参数。
- 当实例类型**TypeId**为Redis 2.8 内存版标准架构、Redis 4.0、5.0、6.2、7.0内存版标准架构或集群架构时，其密码复杂度要求为：8-64个字符，至少包含小写字母、大写字母、数字和字符()`~!@#$%^&*-+=_|{}[]:;<>,.?/ 中的2种，不能以"/"开头。
- 当实例类型**TypeId**为CKV 3.2 内存版标准架构或集群架构时，其密码复杂度为：8-30个字符，必须包含字母和数字，且不包含其他字符。
                     * @param _password 访问实例的密码。
- 当输入参数**NoAuth**为**true**时，指设置实例为免密码访问，Password可不用配置，否则Password为必填参数。
- 当实例类型**TypeId**为Redis 2.8 内存版标准架构、Redis 4.0、5.0、6.2、7.0内存版标准架构或集群架构时，其密码复杂度要求为：8-64个字符，至少包含小写字母、大写字母、数字和字符()`~!@#$%^&*-+=_|{}[]:;<>,.?/ 中的2种，不能以"/"开头。
- 当实例类型**TypeId**为CKV 3.2 内存版标准架构或集群架构时，其密码复杂度为：8-30个字符，必须包含字母和数字，且不包含其他字符。
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
                     * 获取私有网络ID。如果不配置该参数则默认选择基础网络。请登录 [私有网络](https://console.cloud.tencent.com/vpc)控制台查询具体的ID。
                     * @return VpcId 私有网络ID。如果不配置该参数则默认选择基础网络。请登录 [私有网络](https://console.cloud.tencent.com/vpc)控制台查询具体的ID。
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置私有网络ID。如果不配置该参数则默认选择基础网络。请登录 [私有网络](https://console.cloud.tencent.com/vpc)控制台查询具体的ID。
                     * @param _vpcId 私有网络ID。如果不配置该参数则默认选择基础网络。请登录 [私有网络](https://console.cloud.tencent.com/vpc)控制台查询具体的ID。
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
                     * 获取私有网络VPC的子网。基础网络下， 该参数无需配置。请登录 [私有网络](https://console.cloud.tencent.com/vpc)控制台查询子网列表获取具体的 ID。
                     * @return SubnetId 私有网络VPC的子网。基础网络下， 该参数无需配置。请登录 [私有网络](https://console.cloud.tencent.com/vpc)控制台查询子网列表获取具体的 ID。
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置私有网络VPC的子网。基础网络下， 该参数无需配置。请登录 [私有网络](https://console.cloud.tencent.com/vpc)控制台查询子网列表获取具体的 ID。
                     * @param _subnetId 私有网络VPC的子网。基础网络下， 该参数无需配置。请登录 [私有网络](https://console.cloud.tencent.com/vpc)控制台查询子网列表获取具体的 ID。
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
                     * 获取项目 ID。请登录[Redis控制台](https://console.cloud.tencent.com/redis#/)，在右上角的账户信息菜单中，选择**项目管理**查询项目 ID。
                     * @return ProjectId 项目 ID。请登录[Redis控制台](https://console.cloud.tencent.com/redis#/)，在右上角的账户信息菜单中，选择**项目管理**查询项目 ID。
                     * 
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 设置项目 ID。请登录[Redis控制台](https://console.cloud.tencent.com/redis#/)，在右上角的账户信息菜单中，选择**项目管理**查询项目 ID。
                     * @param _projectId 项目 ID。请登录[Redis控制台](https://console.cloud.tencent.com/redis#/)，在右上角的账户信息菜单中，选择**项目管理**查询项目 ID。
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
                     * 获取自动续费标识。
- 0：默认状态（手动续费）。
- 1：自动续费。
- 2：到期不续费。
                     * @return AutoRenew 自动续费标识。
- 0：默认状态（手动续费）。
- 1：自动续费。
- 2：到期不续费。
                     * 
                     */
                    uint64_t GetAutoRenew() const;

                    /**
                     * 设置自动续费标识。
- 0：默认状态（手动续费）。
- 1：自动续费。
- 2：到期不续费。
                     * @param _autoRenew 自动续费标识。
- 0：默认状态（手动续费）。
- 1：自动续费。
- 2：到期不续费。
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
                     * 获取安全组 ID 数组。
- 安全组是一种虚拟防火墙，对云数据库实例的网络访问进行控制。创建实例时，建议绑定相应的安全组。
- 请通过 [DescribeInstanceSecurityGroup](https://cloud.tencent.com/document/product/239/34447) 接口获取实例的安全组 ID。
                     * @return SecurityGroupIdList 安全组 ID 数组。
- 安全组是一种虚拟防火墙，对云数据库实例的网络访问进行控制。创建实例时，建议绑定相应的安全组。
- 请通过 [DescribeInstanceSecurityGroup](https://cloud.tencent.com/document/product/239/34447) 接口获取实例的安全组 ID。
                     * 
                     */
                    std::vector<std::string> GetSecurityGroupIdList() const;

                    /**
                     * 设置安全组 ID 数组。
- 安全组是一种虚拟防火墙，对云数据库实例的网络访问进行控制。创建实例时，建议绑定相应的安全组。
- 请通过 [DescribeInstanceSecurityGroup](https://cloud.tencent.com/document/product/239/34447) 接口获取实例的安全组 ID。
                     * @param _securityGroupIdList 安全组 ID 数组。
- 安全组是一种虚拟防火墙，对云数据库实例的网络访问进行控制。创建实例时，建议绑定相应的安全组。
- 请通过 [DescribeInstanceSecurityGroup](https://cloud.tencent.com/document/product/239/34447) 接口获取实例的安全组 ID。
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
                     * 获取用户自定义的网络端口。默认为6379，范围为 [1024,65535]。
                     * @return VPort 用户自定义的网络端口。默认为6379，范围为 [1024,65535]。
                     * 
                     */
                    uint64_t GetVPort() const;

                    /**
                     * 设置用户自定义的网络端口。默认为6379，范围为 [1024,65535]。
                     * @param _vPort 用户自定义的网络端口。默认为6379，范围为 [1024,65535]。
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
                     * 获取实例分片数量。
- 标准版实例无需配置该参数。
- 集群版实例，分片数量范围为：[1、3、5、8、12、16、24、32、40、48、64、80、96、128]。
                     * @return RedisShardNum 实例分片数量。
- 标准版实例无需配置该参数。
- 集群版实例，分片数量范围为：[1、3、5、8、12、16、24、32、40、48、64、80、96、128]。
                     * 
                     */
                    int64_t GetRedisShardNum() const;

                    /**
                     * 设置实例分片数量。
- 标准版实例无需配置该参数。
- 集群版实例，分片数量范围为：[1、3、5、8、12、16、24、32、40、48、64、80、96、128]。
                     * @param _redisShardNum 实例分片数量。
- 标准版实例无需配置该参数。
- 集群版实例，分片数量范围为：[1、3、5、8、12、16、24、32、40、48、64、80、96、128]。
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
                     * 获取实例副本数量。
- Redis 内存版 4.0、5.0、6.2 标准架构和集群架构支持副本数量范围为[1,5]。
- Redis 2.8标准版、CKV标准版只支持1副本。
                     * @return RedisReplicasNum 实例副本数量。
- Redis 内存版 4.0、5.0、6.2 标准架构和集群架构支持副本数量范围为[1,5]。
- Redis 2.8标准版、CKV标准版只支持1副本。
                     * 
                     */
                    int64_t GetRedisReplicasNum() const;

                    /**
                     * 设置实例副本数量。
- Redis 内存版 4.0、5.0、6.2 标准架构和集群架构支持副本数量范围为[1,5]。
- Redis 2.8标准版、CKV标准版只支持1副本。
                     * @param _redisReplicasNum 实例副本数量。
- Redis 内存版 4.0、5.0、6.2 标准架构和集群架构支持副本数量范围为[1,5]。
- Redis 2.8标准版、CKV标准版只支持1副本。
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
                     * 获取标识实例是否需支持副本只读。
- Redis 2.8 标准版、CKV标准版不支持副本只读。
- 开启副本只读，实例将自动读写分离，写请求路由到主节点，读请求路由到副本节点。
- 如需开启副本只读，建议副本数量大于等于2。
                     * @return ReplicasReadonly 标识实例是否需支持副本只读。
- Redis 2.8 标准版、CKV标准版不支持副本只读。
- 开启副本只读，实例将自动读写分离，写请求路由到主节点，读请求路由到副本节点。
- 如需开启副本只读，建议副本数量大于等于2。
                     * 
                     */
                    bool GetReplicasReadonly() const;

                    /**
                     * 设置标识实例是否需支持副本只读。
- Redis 2.8 标准版、CKV标准版不支持副本只读。
- 开启副本只读，实例将自动读写分离，写请求路由到主节点，读请求路由到副本节点。
- 如需开启副本只读，建议副本数量大于等于2。
                     * @param _replicasReadonly 标识实例是否需支持副本只读。
- Redis 2.8 标准版、CKV标准版不支持副本只读。
- 开启副本只读，实例将自动读写分离，写请求路由到主节点，读请求路由到副本节点。
- 如需开启副本只读，建议副本数量大于等于2。
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
                     * 获取实例名称。命名要求：仅支持长度小于60的中文、英文或者数字，短划线"-"、下划线"_"。
                     * @return InstanceName 实例名称。命名要求：仅支持长度小于60的中文、英文或者数字，短划线"-"、下划线"_"。
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置实例名称。命名要求：仅支持长度小于60的中文、英文或者数字，短划线"-"、下划线"_"。
                     * @param _instanceName 实例名称。命名要求：仅支持长度小于60的中文、英文或者数字，短划线"-"、下划线"_"。
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
                     * 获取配置实例是否支持免密码访问。
- true：免密访问实例。
- false：非免密访问实例。默认为非免密方式，仅VPC网络的实例支持免密码访问。
                     * @return NoAuth 配置实例是否支持免密码访问。
- true：免密访问实例。
- false：非免密访问实例。默认为非免密方式，仅VPC网络的实例支持免密码访问。
                     * 
                     */
                    bool GetNoAuth() const;

                    /**
                     * 设置配置实例是否支持免密码访问。
- true：免密访问实例。
- false：非免密访问实例。默认为非免密方式，仅VPC网络的实例支持免密码访问。
                     * @param _noAuth 配置实例是否支持免密码访问。
- true：免密访问实例。
- false：非免密访问实例。默认为非免密方式，仅VPC网络的实例支持免密码访问。
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
                     * 获取实例的节点信息，包含节点 ID、节点类型、节点可用区 ID等。具体信息，请参见[RedisNodeInfo ](https://cloud.tencent.com/document/product/239/20022)。
目前支持传入节点的类型（主节点或者副本节点），节点的可用区。单可用区部署不需要传递此参数。
                     * @return NodeSet 实例的节点信息，包含节点 ID、节点类型、节点可用区 ID等。具体信息，请参见[RedisNodeInfo ](https://cloud.tencent.com/document/product/239/20022)。
目前支持传入节点的类型（主节点或者副本节点），节点的可用区。单可用区部署不需要传递此参数。
                     * 
                     */
                    std::vector<RedisNodeInfo> GetNodeSet() const;

                    /**
                     * 设置实例的节点信息，包含节点 ID、节点类型、节点可用区 ID等。具体信息，请参见[RedisNodeInfo ](https://cloud.tencent.com/document/product/239/20022)。
目前支持传入节点的类型（主节点或者副本节点），节点的可用区。单可用区部署不需要传递此参数。
                     * @param _nodeSet 实例的节点信息，包含节点 ID、节点类型、节点可用区 ID等。具体信息，请参见[RedisNodeInfo ](https://cloud.tencent.com/document/product/239/20022)。
目前支持传入节点的类型（主节点或者副本节点），节点的可用区。单可用区部署不需要传递此参数。
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
                     * 获取给实例设定标签。
                     * @return ResourceTags 给实例设定标签。
                     * 
                     */
                    std::vector<ResourceTag> GetResourceTags() const;

                    /**
                     * 设置给实例设定标签。
                     * @param _resourceTags 给实例设定标签。
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
                     * 获取指定实例所属的可用区名称。具体信息，请参见[地域和可用区](https://cloud.tencent.com/document/product/239/4106)  。
                     * @return ZoneName 指定实例所属的可用区名称。具体信息，请参见[地域和可用区](https://cloud.tencent.com/document/product/239/4106)  。
                     * 
                     */
                    std::string GetZoneName() const;

                    /**
                     * 设置指定实例所属的可用区名称。具体信息，请参见[地域和可用区](https://cloud.tencent.com/document/product/239/4106)  。
                     * @param _zoneName 指定实例所属的可用区名称。具体信息，请参见[地域和可用区](https://cloud.tencent.com/document/product/239/4106)  。
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
                     * 获取指定实例相关的参数模板 ID。
- 若不配置该参数，则系统会依据所选择的兼容版本及架构，自动适配对应的默认模板。
- 请通过[DescribeParamTemplates](https://cloud.tencent.com/document/product/239/58750)接口，查询实例的参数模板列表，获取模板 ID 编号。
                     * @return TemplateId 指定实例相关的参数模板 ID。
- 若不配置该参数，则系统会依据所选择的兼容版本及架构，自动适配对应的默认模板。
- 请通过[DescribeParamTemplates](https://cloud.tencent.com/document/product/239/58750)接口，查询实例的参数模板列表，获取模板 ID 编号。
                     * 
                     */
                    std::string GetTemplateId() const;

                    /**
                     * 设置指定实例相关的参数模板 ID。
- 若不配置该参数，则系统会依据所选择的兼容版本及架构，自动适配对应的默认模板。
- 请通过[DescribeParamTemplates](https://cloud.tencent.com/document/product/239/58750)接口，查询实例的参数模板列表，获取模板 ID 编号。
                     * @param _templateId 指定实例相关的参数模板 ID。
- 若不配置该参数，则系统会依据所选择的兼容版本及架构，自动适配对应的默认模板。
- 请通过[DescribeParamTemplates](https://cloud.tencent.com/document/product/239/58750)接口，查询实例的参数模板列表，获取模板 ID 编号。
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
                     * 获取内部参数，标识创建实例是否需要检查。
- false ：默认值。发送正常请求，通过检查后直接创建实例。
- true：发送检查请求，不会创建实例。
                     * @return DryRun 内部参数，标识创建实例是否需要检查。
- false ：默认值。发送正常请求，通过检查后直接创建实例。
- true：发送检查请求，不会创建实例。
                     * 
                     */
                    bool GetDryRun() const;

                    /**
                     * 设置内部参数，标识创建实例是否需要检查。
- false ：默认值。发送正常请求，通过检查后直接创建实例。
- true：发送检查请求，不会创建实例。
                     * @param _dryRun 内部参数，标识创建实例是否需要检查。
- false ：默认值。发送正常请求，通过检查后直接创建实例。
- true：发送检查请求，不会创建实例。
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
                     * 获取指实例部署模式。
- local：传统架构，默认为 local。
- cdc：独享集群。
- cloud：云原生，当前已暂停售卖。
                     * @return ProductVersion 指实例部署模式。
- local：传统架构，默认为 local。
- cdc：独享集群。
- cloud：云原生，当前已暂停售卖。
                     * 
                     */
                    std::string GetProductVersion() const;

                    /**
                     * 设置指实例部署模式。
- local：传统架构，默认为 local。
- cdc：独享集群。
- cloud：云原生，当前已暂停售卖。
                     * @param _productVersion 指实例部署模式。
- local：传统架构，默认为 local。
- cdc：独享集群。
- cloud：云原生，当前已暂停售卖。
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
                     * 获取独享集群 ID。当**ProductVersion**设置为**cdc**时，该参数必须设置。
                     * @return RedisClusterId 独享集群 ID。当**ProductVersion**设置为**cdc**时，该参数必须设置。
                     * 
                     */
                    std::string GetRedisClusterId() const;

                    /**
                     * 设置独享集群 ID。当**ProductVersion**设置为**cdc**时，该参数必须设置。
                     * @param _redisClusterId 独享集群 ID。当**ProductVersion**设置为**cdc**时，该参数必须设置。
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
                     * 获取告警策略 ID 数组。

- 请登录[腾讯云可观测平台-告警管理-策略管理](https://console.cloud.tencent.com/monitor/alarm/policy)获取告警策略 ID。
- 若不配置该参数，则绑定默认告警策略。默认告警策略具体信息，请登录[腾讯云可观测平台-告警管理-策略管理](https://console.cloud.tencent.com/monitor/alarm/policy)查看。
                     * @return AlarmPolicyList 告警策略 ID 数组。

- 请登录[腾讯云可观测平台-告警管理-策略管理](https://console.cloud.tencent.com/monitor/alarm/policy)获取告警策略 ID。
- 若不配置该参数，则绑定默认告警策略。默认告警策略具体信息，请登录[腾讯云可观测平台-告警管理-策略管理](https://console.cloud.tencent.com/monitor/alarm/policy)查看。
                     * 
                     */
                    std::vector<std::string> GetAlarmPolicyList() const;

                    /**
                     * 设置告警策略 ID 数组。

- 请登录[腾讯云可观测平台-告警管理-策略管理](https://console.cloud.tencent.com/monitor/alarm/policy)获取告警策略 ID。
- 若不配置该参数，则绑定默认告警策略。默认告警策略具体信息，请登录[腾讯云可观测平台-告警管理-策略管理](https://console.cloud.tencent.com/monitor/alarm/policy)查看。
                     * @param _alarmPolicyList 告警策略 ID 数组。

- 请登录[腾讯云可观测平台-告警管理-策略管理](https://console.cloud.tencent.com/monitor/alarm/policy)获取告警策略 ID。
- 若不配置该参数，则绑定默认告警策略。默认告警策略具体信息，请登录[腾讯云可观测平台-告警管理-策略管理](https://console.cloud.tencent.com/monitor/alarm/policy)查看。
                     * 
                     */
                    void SetAlarmPolicyList(const std::vector<std::string>& _alarmPolicyList);

                    /**
                     * 判断参数 AlarmPolicyList 是否已赋值
                     * @return AlarmPolicyList 是否已赋值
                     * 
                     */
                    bool AlarmPolicyListHasBeenSet() const;

                private:

                    /**
                     * 实例类型。
<ul><li>2：Redis 2.8 内存版（标准架构）。</li><li>3：CKV 3.2 内存版（标准架构）。</li><li>4：CKV 3.2 内存版（集群架构）。</li><li>6：Redis 4.0 内存版（标准架构）。</li><li>7：Redis 4.0 内存版（集群架构）。</li><li>8：Redis 5.0 内存版（标准架构）。</li><li>9：Redis 5.0 内存版（集群架构）。</li><li>15：Redis 6.2 内存版（标准架构）。</li><li>16：Redis 6.2 内存版（集群架构）。</li><li>17：Redis 7.0 内存版（标准架构）。</li><li>18：Redis 7.0 内存版（集群架构）。</li>说明：CKV 版本当前有存量用户使用，暂时保留。</ul>
                     */
                    uint64_t m_typeId;
                    bool m_typeIdHasBeenSet;

                    /**
                     * 内存容量，单位为MB， 数值需为1024的整数倍。具体规格，请通过 [DescribeProductInfo](https://cloud.tencent.com/document/api/239/30600) 接口查询全地域的售卖规格。
- **TypeId**为标准架构时，**MemSize**是实例总内存容量；
- **TypeId**为集群架构时，**MemSize**是单分片内存容量。
                     */
                    uint64_t m_memSize;
                    bool m_memSizeHasBeenSet;

                    /**
                     * 实例数量，单次购买实例数量。具体信息，请通过 [DescribeProductInfo](https://cloud.tencent.com/document/api/239/30600) 接口查询全地域的售卖规格。
                     */
                    uint64_t m_goodsNum;
                    bool m_goodsNumHasBeenSet;

                    /**
                     * 购买实例的时长。
- 若 **BillingMode**为**1**，即计费方式为包年包月时，需设置该参数，指定所购买实例的时长。单位：月，取值范围 [1,2,3,4,5,6,7,8,9,10,11,12,24,36]。
- 若 **BillingMode**为**0**，即计费方式为按量计费时，该参数配置为1。
                     */
                    uint64_t m_period;
                    bool m_periodHasBeenSet;

                    /**
                     * 计费方式。
- 0：按量计费。
- 1：包年包月。
                     */
                    int64_t m_billingMode;
                    bool m_billingModeHasBeenSet;

                    /**
                     * 实例所属的可用区ID，可参考[地域和可用区](https://cloud.tencent.com/document/product/239/4106)  。
                     */
                    uint64_t m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * 访问实例的密码。
- 当输入参数**NoAuth**为**true**时，指设置实例为免密码访问，Password可不用配置，否则Password为必填参数。
- 当实例类型**TypeId**为Redis 2.8 内存版标准架构、Redis 4.0、5.0、6.2、7.0内存版标准架构或集群架构时，其密码复杂度要求为：8-64个字符，至少包含小写字母、大写字母、数字和字符()`~!@#$%^&*-+=_|{}[]:;<>,.?/ 中的2种，不能以"/"开头。
- 当实例类型**TypeId**为CKV 3.2 内存版标准架构或集群架构时，其密码复杂度为：8-30个字符，必须包含字母和数字，且不包含其他字符。
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                    /**
                     * 私有网络ID。如果不配置该参数则默认选择基础网络。请登录 [私有网络](https://console.cloud.tencent.com/vpc)控制台查询具体的ID。
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 私有网络VPC的子网。基础网络下， 该参数无需配置。请登录 [私有网络](https://console.cloud.tencent.com/vpc)控制台查询子网列表获取具体的 ID。
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * 项目 ID。请登录[Redis控制台](https://console.cloud.tencent.com/redis#/)，在右上角的账户信息菜单中，选择**项目管理**查询项目 ID。
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 自动续费标识。
- 0：默认状态（手动续费）。
- 1：自动续费。
- 2：到期不续费。
                     */
                    uint64_t m_autoRenew;
                    bool m_autoRenewHasBeenSet;

                    /**
                     * 安全组 ID 数组。
- 安全组是一种虚拟防火墙，对云数据库实例的网络访问进行控制。创建实例时，建议绑定相应的安全组。
- 请通过 [DescribeInstanceSecurityGroup](https://cloud.tencent.com/document/product/239/34447) 接口获取实例的安全组 ID。
                     */
                    std::vector<std::string> m_securityGroupIdList;
                    bool m_securityGroupIdListHasBeenSet;

                    /**
                     * 用户自定义的网络端口。默认为6379，范围为 [1024,65535]。
                     */
                    uint64_t m_vPort;
                    bool m_vPortHasBeenSet;

                    /**
                     * 实例分片数量。
- 标准版实例无需配置该参数。
- 集群版实例，分片数量范围为：[1、3、5、8、12、16、24、32、40、48、64、80、96、128]。
                     */
                    int64_t m_redisShardNum;
                    bool m_redisShardNumHasBeenSet;

                    /**
                     * 实例副本数量。
- Redis 内存版 4.0、5.0、6.2 标准架构和集群架构支持副本数量范围为[1,5]。
- Redis 2.8标准版、CKV标准版只支持1副本。
                     */
                    int64_t m_redisReplicasNum;
                    bool m_redisReplicasNumHasBeenSet;

                    /**
                     * 标识实例是否需支持副本只读。
- Redis 2.8 标准版、CKV标准版不支持副本只读。
- 开启副本只读，实例将自动读写分离，写请求路由到主节点，读请求路由到副本节点。
- 如需开启副本只读，建议副本数量大于等于2。
                     */
                    bool m_replicasReadonly;
                    bool m_replicasReadonlyHasBeenSet;

                    /**
                     * 实例名称。命名要求：仅支持长度小于60的中文、英文或者数字，短划线"-"、下划线"_"。
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * 配置实例是否支持免密码访问。
- true：免密访问实例。
- false：非免密访问实例。默认为非免密方式，仅VPC网络的实例支持免密码访问。
                     */
                    bool m_noAuth;
                    bool m_noAuthHasBeenSet;

                    /**
                     * 实例的节点信息，包含节点 ID、节点类型、节点可用区 ID等。具体信息，请参见[RedisNodeInfo ](https://cloud.tencent.com/document/product/239/20022)。
目前支持传入节点的类型（主节点或者副本节点），节点的可用区。单可用区部署不需要传递此参数。
                     */
                    std::vector<RedisNodeInfo> m_nodeSet;
                    bool m_nodeSetHasBeenSet;

                    /**
                     * 给实例设定标签。
                     */
                    std::vector<ResourceTag> m_resourceTags;
                    bool m_resourceTagsHasBeenSet;

                    /**
                     * 指定实例所属的可用区名称。具体信息，请参见[地域和可用区](https://cloud.tencent.com/document/product/239/4106)  。
                     */
                    std::string m_zoneName;
                    bool m_zoneNameHasBeenSet;

                    /**
                     * 指定实例相关的参数模板 ID。
- 若不配置该参数，则系统会依据所选择的兼容版本及架构，自动适配对应的默认模板。
- 请通过[DescribeParamTemplates](https://cloud.tencent.com/document/product/239/58750)接口，查询实例的参数模板列表，获取模板 ID 编号。
                     */
                    std::string m_templateId;
                    bool m_templateIdHasBeenSet;

                    /**
                     * 内部参数，标识创建实例是否需要检查。
- false ：默认值。发送正常请求，通过检查后直接创建实例。
- true：发送检查请求，不会创建实例。
                     */
                    bool m_dryRun;
                    bool m_dryRunHasBeenSet;

                    /**
                     * 指实例部署模式。
- local：传统架构，默认为 local。
- cdc：独享集群。
- cloud：云原生，当前已暂停售卖。
                     */
                    std::string m_productVersion;
                    bool m_productVersionHasBeenSet;

                    /**
                     * 独享集群 ID。当**ProductVersion**设置为**cdc**时，该参数必须设置。
                     */
                    std::string m_redisClusterId;
                    bool m_redisClusterIdHasBeenSet;

                    /**
                     * 告警策略 ID 数组。

- 请登录[腾讯云可观测平台-告警管理-策略管理](https://console.cloud.tencent.com/monitor/alarm/policy)获取告警策略 ID。
- 若不配置该参数，则绑定默认告警策略。默认告警策略具体信息，请登录[腾讯云可观测平台-告警管理-策略管理](https://console.cloud.tencent.com/monitor/alarm/policy)查看。
                     */
                    std::vector<std::string> m_alarmPolicyList;
                    bool m_alarmPolicyListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_CREATEINSTANCESREQUEST_H_
