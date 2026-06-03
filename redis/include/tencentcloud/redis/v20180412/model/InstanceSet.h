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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_INSTANCESET_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_INSTANCESET_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/redis/v20180412/model/InstanceNode.h>
#include <tencentcloud/redis/v20180412/model/InstanceTagInfo.h>
#include <tencentcloud/redis/v20180412/model/RedisNodeInfo.h>


namespace TencentCloud
{
    namespace Redis
    {
        namespace V20180412
        {
            namespace Model
            {
                /**
                * 实例详细信息列表。
                */
                class InstanceSet : public AbstractModel
                {
                public:
                    InstanceSet();
                    ~InstanceSet() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>实例名称。</p>
                     * @return InstanceName <p>实例名称。</p>
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置<p>实例名称。</p>
                     * @param _instanceName <p>实例名称。</p>
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
                     * 获取<p>实例 ID。</p>
                     * @return InstanceId <p>实例 ID。</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>实例 ID。</p>
                     * @param _instanceId <p>实例 ID。</p>
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
                     * 获取<p>用户AppId。AppId是与账号ID有唯一对应关系的应用 ID，部分腾讯云产品会使用此 AppId。</p>
                     * @return Appid <p>用户AppId。AppId是与账号ID有唯一对应关系的应用 ID，部分腾讯云产品会使用此 AppId。</p>
                     * 
                     */
                    int64_t GetAppid() const;

                    /**
                     * 设置<p>用户AppId。AppId是与账号ID有唯一对应关系的应用 ID，部分腾讯云产品会使用此 AppId。</p>
                     * @param _appid <p>用户AppId。AppId是与账号ID有唯一对应关系的应用 ID，部分腾讯云产品会使用此 AppId。</p>
                     * 
                     */
                    void SetAppid(const int64_t& _appid);

                    /**
                     * 判断参数 Appid 是否已赋值
                     * @return Appid 是否已赋值
                     * 
                     */
                    bool AppidHasBeenSet() const;

                    /**
                     * 获取<p>项目 ID。</p>
                     * @return ProjectId <p>项目 ID。</p>
                     * 
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 设置<p>项目 ID。</p>
                     * @param _projectId <p>项目 ID。</p>
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
                     * 获取<p>地域 ID。<ul><li>1：广州。</li><li>4：上海。</li><li>5：中国香港。</li><li>7：上海金融。</li> <li>8：北京。</li> <li>9：新加坡。</li> <li>11：深圳金融。</li> <li>15：美西（硅谷）。</li><li>16：成都。</li><li>17：法兰克福。</li><li>18：首尔。</li><li>19：重庆。</li><li>22：美东（弗吉尼亚）。</li><li>23：曼谷。</li><li>25：东京。</li></ul></p>
                     * @return RegionId <p>地域 ID。<ul><li>1：广州。</li><li>4：上海。</li><li>5：中国香港。</li><li>7：上海金融。</li> <li>8：北京。</li> <li>9：新加坡。</li> <li>11：深圳金融。</li> <li>15：美西（硅谷）。</li><li>16：成都。</li><li>17：法兰克福。</li><li>18：首尔。</li><li>19：重庆。</li><li>22：美东（弗吉尼亚）。</li><li>23：曼谷。</li><li>25：东京。</li></ul></p>
                     * 
                     */
                    int64_t GetRegionId() const;

                    /**
                     * 设置<p>地域 ID。<ul><li>1：广州。</li><li>4：上海。</li><li>5：中国香港。</li><li>7：上海金融。</li> <li>8：北京。</li> <li>9：新加坡。</li> <li>11：深圳金融。</li> <li>15：美西（硅谷）。</li><li>16：成都。</li><li>17：法兰克福。</li><li>18：首尔。</li><li>19：重庆。</li><li>22：美东（弗吉尼亚）。</li><li>23：曼谷。</li><li>25：东京。</li></ul></p>
                     * @param _regionId <p>地域 ID。<ul><li>1：广州。</li><li>4：上海。</li><li>5：中国香港。</li><li>7：上海金融。</li> <li>8：北京。</li> <li>9：新加坡。</li> <li>11：深圳金融。</li> <li>15：美西（硅谷）。</li><li>16：成都。</li><li>17：法兰克福。</li><li>18：首尔。</li><li>19：重庆。</li><li>22：美东（弗吉尼亚）。</li><li>23：曼谷。</li><li>25：东京。</li></ul></p>
                     * 
                     */
                    void SetRegionId(const int64_t& _regionId);

                    /**
                     * 判断参数 RegionId 是否已赋值
                     * @return RegionId 是否已赋值
                     * 
                     */
                    bool RegionIdHasBeenSet() const;

                    /**
                     * 获取<p>区域 ID。</p>
                     * @return ZoneId <p>区域 ID。</p>
                     * 
                     */
                    int64_t GetZoneId() const;

                    /**
                     * 设置<p>区域 ID。</p>
                     * @param _zoneId <p>区域 ID。</p>
                     * 
                     */
                    void SetZoneId(const int64_t& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取<p>vpc网络 ID，例如75101。</p>
                     * @return VpcId <p>vpc网络 ID，例如75101。</p>
                     * 
                     */
                    int64_t GetVpcId() const;

                    /**
                     * 设置<p>vpc网络 ID，例如75101。</p>
                     * @param _vpcId <p>vpc网络 ID，例如75101。</p>
                     * 
                     */
                    void SetVpcId(const int64_t& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     * 
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取<p>vpc网络下子网ID，如：46315。</p>
                     * @return SubnetId <p>vpc网络下子网ID，如：46315。</p>
                     * 
                     */
                    int64_t GetSubnetId() const;

                    /**
                     * 设置<p>vpc网络下子网ID，如：46315。</p>
                     * @param _subnetId <p>vpc网络下子网ID，如：46315。</p>
                     * 
                     */
                    void SetSubnetId(const int64_t& _subnetId);

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     * 
                     */
                    bool SubnetIdHasBeenSet() const;

                    /**
                     * 获取<p>实例当前状态。<ul><li>0：待初始化。</li><li>1：实例在流程中。</li><li>2：实例运行中。</li><li>-2：实例已隔离。</li><li>-3：实例待删除。</li></ul></p>
                     * @return Status <p>实例当前状态。<ul><li>0：待初始化。</li><li>1：实例在流程中。</li><li>2：实例运行中。</li><li>-2：实例已隔离。</li><li>-3：实例待删除。</li></ul></p>
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置<p>实例当前状态。<ul><li>0：待初始化。</li><li>1：实例在流程中。</li><li>2：实例运行中。</li><li>-2：实例已隔离。</li><li>-3：实例待删除。</li></ul></p>
                     * @param _status <p>实例当前状态。<ul><li>0：待初始化。</li><li>1：实例在流程中。</li><li>2：实例运行中。</li><li>-2：实例已隔离。</li><li>-3：实例待删除。</li></ul></p>
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>实例 VIP。</p>
                     * @return WanIp <p>实例 VIP。</p>
                     * 
                     */
                    std::string GetWanIp() const;

                    /**
                     * 设置<p>实例 VIP。</p>
                     * @param _wanIp <p>实例 VIP。</p>
                     * 
                     */
                    void SetWanIp(const std::string& _wanIp);

                    /**
                     * 判断参数 WanIp 是否已赋值
                     * @return WanIp 是否已赋值
                     * 
                     */
                    bool WanIpHasBeenSet() const;

                    /**
                     * 获取<p>实例端口号。</p>
                     * @return Port <p>实例端口号。</p>
                     * 
                     */
                    int64_t GetPort() const;

                    /**
                     * 设置<p>实例端口号。</p>
                     * @param _port <p>实例端口号。</p>
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
                     * 获取<p>实例创建时间。格式如：2020-01-15 10:20:00。</p>
                     * @return Createtime <p>实例创建时间。格式如：2020-01-15 10:20:00。</p>
                     * 
                     */
                    std::string GetCreatetime() const;

                    /**
                     * 设置<p>实例创建时间。格式如：2020-01-15 10:20:00。</p>
                     * @param _createtime <p>实例创建时间。格式如：2020-01-15 10:20:00。</p>
                     * 
                     */
                    void SetCreatetime(const std::string& _createtime);

                    /**
                     * 判断参数 Createtime 是否已赋值
                     * @return Createtime 是否已赋值
                     * 
                     */
                    bool CreatetimeHasBeenSet() const;

                    /**
                     * 获取<p>实例内存容量大小。单位：MB，1MB=1024KB。</p>
                     * @return Size <p>实例内存容量大小。单位：MB，1MB=1024KB。</p>
                     * 
                     */
                    double GetSize() const;

                    /**
                     * 设置<p>实例内存容量大小。单位：MB，1MB=1024KB。</p>
                     * @param _size <p>实例内存容量大小。单位：MB，1MB=1024KB。</p>
                     * 
                     */
                    void SetSize(const double& _size);

                    /**
                     * 判断参数 Size 是否已赋值
                     * @return Size 是否已赋值
                     * 
                     */
                    bool SizeHasBeenSet() const;

                    /**
                     * 获取<p>该字段已废弃。请使用腾讯云可观测平台API 接口 <a href="https://cloud.tencent.com/document/product/248/31014">GetMonitorData</a> 获取实例已使用的内存容量。</p>
                     * @return SizeUsed <p>该字段已废弃。请使用腾讯云可观测平台API 接口 <a href="https://cloud.tencent.com/document/product/248/31014">GetMonitorData</a> 获取实例已使用的内存容量。</p>
                     * @deprecated
                     */
                    double GetSizeUsed() const;

                    /**
                     * 设置<p>该字段已废弃。请使用腾讯云可观测平台API 接口 <a href="https://cloud.tencent.com/document/product/248/31014">GetMonitorData</a> 获取实例已使用的内存容量。</p>
                     * @param _sizeUsed <p>该字段已废弃。请使用腾讯云可观测平台API 接口 <a href="https://cloud.tencent.com/document/product/248/31014">GetMonitorData</a> 获取实例已使用的内存容量。</p>
                     * @deprecated
                     */
                    void SetSizeUsed(const double& _sizeUsed);

                    /**
                     * 判断参数 SizeUsed 是否已赋值
                     * @return SizeUsed 是否已赋值
                     * @deprecated
                     */
                    bool SizeUsedHasBeenSet() const;

                    /**
                     * 获取<p>实例类型。</p><p>枚举值：</p><ul><li>2： Redis 2.8 内存版（标准架构）。</li><li>3： CKV 3.2 内存版（标准架构）。</li><li>4： CKV 3.2 内存版（集群架构）。</li><li>5： Redis 2.8 内存版（单机）。</li><li>6： Redis 4.0 内存版（标准架构）。</li><li>7： Redis 4.0 内存版（集群架构）。</li><li>8： Redis 5.0 内存版（标准架构）。</li><li>9： Redis 5.0 内存版（集群架构）。</li><li>15： Redis 6.2 内存版（标准架构）。</li><li>16： Redis 6.2 内存版（集群架构）。</li><li>17： Redis 7.0 内存版（标准架构）。</li><li>18： Redis 7.0 内存版（集群架构）。</li><li>19： Valkey 8.0 内存版（标准架构）。</li><li>20： Valkey 8.0 内存版（集群架构）。</li><li>200： Memcached 1.6 内存版（集群架构）。</li></ul>
                     * @return Type <p>实例类型。</p><p>枚举值：</p><ul><li>2： Redis 2.8 内存版（标准架构）。</li><li>3： CKV 3.2 内存版（标准架构）。</li><li>4： CKV 3.2 内存版（集群架构）。</li><li>5： Redis 2.8 内存版（单机）。</li><li>6： Redis 4.0 内存版（标准架构）。</li><li>7： Redis 4.0 内存版（集群架构）。</li><li>8： Redis 5.0 内存版（标准架构）。</li><li>9： Redis 5.0 内存版（集群架构）。</li><li>15： Redis 6.2 内存版（标准架构）。</li><li>16： Redis 6.2 内存版（集群架构）。</li><li>17： Redis 7.0 内存版（标准架构）。</li><li>18： Redis 7.0 内存版（集群架构）。</li><li>19： Valkey 8.0 内存版（标准架构）。</li><li>20： Valkey 8.0 内存版（集群架构）。</li><li>200： Memcached 1.6 内存版（集群架构）。</li></ul>
                     * 
                     */
                    int64_t GetType() const;

                    /**
                     * 设置<p>实例类型。</p><p>枚举值：</p><ul><li>2： Redis 2.8 内存版（标准架构）。</li><li>3： CKV 3.2 内存版（标准架构）。</li><li>4： CKV 3.2 内存版（集群架构）。</li><li>5： Redis 2.8 内存版（单机）。</li><li>6： Redis 4.0 内存版（标准架构）。</li><li>7： Redis 4.0 内存版（集群架构）。</li><li>8： Redis 5.0 内存版（标准架构）。</li><li>9： Redis 5.0 内存版（集群架构）。</li><li>15： Redis 6.2 内存版（标准架构）。</li><li>16： Redis 6.2 内存版（集群架构）。</li><li>17： Redis 7.0 内存版（标准架构）。</li><li>18： Redis 7.0 内存版（集群架构）。</li><li>19： Valkey 8.0 内存版（标准架构）。</li><li>20： Valkey 8.0 内存版（集群架构）。</li><li>200： Memcached 1.6 内存版（集群架构）。</li></ul>
                     * @param _type <p>实例类型。</p><p>枚举值：</p><ul><li>2： Redis 2.8 内存版（标准架构）。</li><li>3： CKV 3.2 内存版（标准架构）。</li><li>4： CKV 3.2 内存版（集群架构）。</li><li>5： Redis 2.8 内存版（单机）。</li><li>6： Redis 4.0 内存版（标准架构）。</li><li>7： Redis 4.0 内存版（集群架构）。</li><li>8： Redis 5.0 内存版（标准架构）。</li><li>9： Redis 5.0 内存版（集群架构）。</li><li>15： Redis 6.2 内存版（标准架构）。</li><li>16： Redis 6.2 内存版（集群架构）。</li><li>17： Redis 7.0 内存版（标准架构）。</li><li>18： Redis 7.0 内存版（集群架构）。</li><li>19： Valkey 8.0 内存版（标准架构）。</li><li>20： Valkey 8.0 内存版（集群架构）。</li><li>200： Memcached 1.6 内存版（集群架构）。</li></ul>
                     * 
                     */
                    void SetType(const int64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取<p>实例是否设置自动续费标识。<ul><li>1：设置自动续费。</li><li>0：未设置自动续费。</li></ul></p>
                     * @return AutoRenewFlag <p>实例是否设置自动续费标识。<ul><li>1：设置自动续费。</li><li>0：未设置自动续费。</li></ul></p>
                     * 
                     */
                    int64_t GetAutoRenewFlag() const;

                    /**
                     * 设置<p>实例是否设置自动续费标识。<ul><li>1：设置自动续费。</li><li>0：未设置自动续费。</li></ul></p>
                     * @param _autoRenewFlag <p>实例是否设置自动续费标识。<ul><li>1：设置自动续费。</li><li>0：未设置自动续费。</li></ul></p>
                     * 
                     */
                    void SetAutoRenewFlag(const int64_t& _autoRenewFlag);

                    /**
                     * 判断参数 AutoRenewFlag 是否已赋值
                     * @return AutoRenewFlag 是否已赋值
                     * 
                     */
                    bool AutoRenewFlagHasBeenSet() const;

                    /**
                     * 获取<p>包年包月计费实例到期的时间。</p>
                     * @return DeadlineTime <p>包年包月计费实例到期的时间。</p>
                     * 
                     */
                    std::string GetDeadlineTime() const;

                    /**
                     * 设置<p>包年包月计费实例到期的时间。</p>
                     * @param _deadlineTime <p>包年包月计费实例到期的时间。</p>
                     * 
                     */
                    void SetDeadlineTime(const std::string& _deadlineTime);

                    /**
                     * 判断参数 DeadlineTime 是否已赋值
                     * @return DeadlineTime 是否已赋值
                     * 
                     */
                    bool DeadlineTimeHasBeenSet() const;

                    /**
                     * 获取<p>引擎：社区版Redis、腾讯云CKV。</p>
                     * @return Engine <p>引擎：社区版Redis、腾讯云CKV。</p>
                     * 
                     */
                    std::string GetEngine() const;

                    /**
                     * 设置<p>引擎：社区版Redis、腾讯云CKV。</p>
                     * @param _engine <p>引擎：社区版Redis、腾讯云CKV。</p>
                     * 
                     */
                    void SetEngine(const std::string& _engine);

                    /**
                     * 判断参数 Engine 是否已赋值
                     * @return Engine 是否已赋值
                     * 
                     */
                    bool EngineHasBeenSet() const;

                    /**
                     * 获取<p>产品类型。<ul><li>standalone：标准版。</li><li>cluster ：集群版。</li></ul></p>
                     * @return ProductType <p>产品类型。<ul><li>standalone：标准版。</li><li>cluster ：集群版。</li></ul></p>
                     * 
                     */
                    std::string GetProductType() const;

                    /**
                     * 设置<p>产品类型。<ul><li>standalone：标准版。</li><li>cluster ：集群版。</li></ul></p>
                     * @param _productType <p>产品类型。<ul><li>standalone：标准版。</li><li>cluster ：集群版。</li></ul></p>
                     * 
                     */
                    void SetProductType(const std::string& _productType);

                    /**
                     * 判断参数 ProductType 是否已赋值
                     * @return ProductType 是否已赋值
                     * 
                     */
                    bool ProductTypeHasBeenSet() const;

                    /**
                     * 获取<p>vpc网络id，例如vpc-fk33jsf43kgv。</p>
                     * @return UniqVpcId <p>vpc网络id，例如vpc-fk33jsf43kgv。</p>
                     * 
                     */
                    std::string GetUniqVpcId() const;

                    /**
                     * 设置<p>vpc网络id，例如vpc-fk33jsf43kgv。</p>
                     * @param _uniqVpcId <p>vpc网络id，例如vpc-fk33jsf43kgv。</p>
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
                     * 获取<p>vpc网络下子网id，例如：subnet-fd3j6l35mm0。</p>
                     * @return UniqSubnetId <p>vpc网络下子网id，例如：subnet-fd3j6l35mm0。</p>
                     * 
                     */
                    std::string GetUniqSubnetId() const;

                    /**
                     * 设置<p>vpc网络下子网id，例如：subnet-fd3j6l35mm0。</p>
                     * @param _uniqSubnetId <p>vpc网络下子网id，例如：subnet-fd3j6l35mm0。</p>
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
                     * 获取<p>实例运行状态描述：如”实例运行中“。</p>
                     * @return InstanceTitle <p>实例运行状态描述：如”实例运行中“。</p>
                     * 
                     */
                    std::string GetInstanceTitle() const;

                    /**
                     * 设置<p>实例运行状态描述：如”实例运行中“。</p>
                     * @param _instanceTitle <p>实例运行状态描述：如”实例运行中“。</p>
                     * 
                     */
                    void SetInstanceTitle(const std::string& _instanceTitle);

                    /**
                     * 判断参数 InstanceTitle 是否已赋值
                     * @return InstanceTitle 是否已赋值
                     * 
                     */
                    bool InstanceTitleHasBeenSet() const;

                    /**
                     * 获取<p>已隔离实例默认下线时间。按量计费实例隔离后默认两小时后下线，包年包月默认7天后下线。格式如：2020-02-15 10:20:00。</p>
                     * @return OfflineTime <p>已隔离实例默认下线时间。按量计费实例隔离后默认两小时后下线，包年包月默认7天后下线。格式如：2020-02-15 10:20:00。</p>
                     * 
                     */
                    std::string GetOfflineTime() const;

                    /**
                     * 设置<p>已隔离实例默认下线时间。按量计费实例隔离后默认两小时后下线，包年包月默认7天后下线。格式如：2020-02-15 10:20:00。</p>
                     * @param _offlineTime <p>已隔离实例默认下线时间。按量计费实例隔离后默认两小时后下线，包年包月默认7天后下线。格式如：2020-02-15 10:20:00。</p>
                     * 
                     */
                    void SetOfflineTime(const std::string& _offlineTime);

                    /**
                     * 判断参数 OfflineTime 是否已赋值
                     * @return OfflineTime 是否已赋值
                     * 
                     */
                    bool OfflineTimeHasBeenSet() const;

                    /**
                     * 获取<p>流程中的实例返回的子状态。</p><ul><li>0：磁盘读写状态。</li><li>1：磁盘超限只读状态。</li></ul>
                     * @return SubStatus <p>流程中的实例返回的子状态。</p><ul><li>0：磁盘读写状态。</li><li>1：磁盘超限只读状态。</li></ul>
                     * 
                     */
                    int64_t GetSubStatus() const;

                    /**
                     * 设置<p>流程中的实例返回的子状态。</p><ul><li>0：磁盘读写状态。</li><li>1：磁盘超限只读状态。</li></ul>
                     * @param _subStatus <p>流程中的实例返回的子状态。</p><ul><li>0：磁盘读写状态。</li><li>1：磁盘超限只读状态。</li></ul>
                     * 
                     */
                    void SetSubStatus(const int64_t& _subStatus);

                    /**
                     * 判断参数 SubStatus 是否已赋值
                     * @return SubStatus 是否已赋值
                     * 
                     */
                    bool SubStatusHasBeenSet() const;

                    /**
                     * 获取<p>反亲和性标签。</p>
                     * @return Tags <p>反亲和性标签。</p>
                     * 
                     */
                    std::vector<std::string> GetTags() const;

                    /**
                     * 设置<p>反亲和性标签。</p>
                     * @param _tags <p>反亲和性标签。</p>
                     * 
                     */
                    void SetTags(const std::vector<std::string>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取<p>实例节点信息。</p>
                     * @return InstanceNode <p>实例节点信息。</p>
                     * 
                     */
                    std::vector<InstanceNode> GetInstanceNode() const;

                    /**
                     * 设置<p>实例节点信息。</p>
                     * @param _instanceNode <p>实例节点信息。</p>
                     * 
                     */
                    void SetInstanceNode(const std::vector<InstanceNode>& _instanceNode);

                    /**
                     * 判断参数 InstanceNode 是否已赋值
                     * @return InstanceNode 是否已赋值
                     * 
                     */
                    bool InstanceNodeHasBeenSet() const;

                    /**
                     * 获取<p>分片大小。</p>
                     * @return RedisShardSize <p>分片大小。</p>
                     * 
                     */
                    int64_t GetRedisShardSize() const;

                    /**
                     * 设置<p>分片大小。</p>
                     * @param _redisShardSize <p>分片大小。</p>
                     * 
                     */
                    void SetRedisShardSize(const int64_t& _redisShardSize);

                    /**
                     * 判断参数 RedisShardSize 是否已赋值
                     * @return RedisShardSize 是否已赋值
                     * 
                     */
                    bool RedisShardSizeHasBeenSet() const;

                    /**
                     * 获取<p>分片数量。</p>
                     * @return RedisShardNum <p>分片数量。</p>
                     * 
                     */
                    int64_t GetRedisShardNum() const;

                    /**
                     * 设置<p>分片数量。</p>
                     * @param _redisShardNum <p>分片数量。</p>
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
                     * 获取<p>副本数量。</p>
                     * @return RedisReplicasNum <p>副本数量。</p>
                     * 
                     */
                    int64_t GetRedisReplicasNum() const;

                    /**
                     * 设置<p>副本数量。</p>
                     * @param _redisReplicasNum <p>副本数量。</p>
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
                     * 获取<p>计费 ID。</p>
                     * @return PriceId <p>计费 ID。</p>
                     * 
                     */
                    int64_t GetPriceId() const;

                    /**
                     * 设置<p>计费 ID。</p>
                     * @param _priceId <p>计费 ID。</p>
                     * 
                     */
                    void SetPriceId(const int64_t& _priceId);

                    /**
                     * 判断参数 PriceId 是否已赋值
                     * @return PriceId 是否已赋值
                     * 
                     */
                    bool PriceIdHasBeenSet() const;

                    /**
                     * 获取<p>实例隔离开始的时间。</p>
                     * @return CloseTime <p>实例隔离开始的时间。</p>
                     * 
                     */
                    std::string GetCloseTime() const;

                    /**
                     * 设置<p>实例隔离开始的时间。</p>
                     * @param _closeTime <p>实例隔离开始的时间。</p>
                     * 
                     */
                    void SetCloseTime(const std::string& _closeTime);

                    /**
                     * 判断参数 CloseTime 是否已赋值
                     * @return CloseTime 是否已赋值
                     * 
                     */
                    bool CloseTimeHasBeenSet() const;

                    /**
                     * 获取<p>从节点读取权重。</p><ul><li>0：表示关闭副本只读。</li><li>100：表示开启副本只读。</li></ul>
                     * @return SlaveReadWeight <p>从节点读取权重。</p><ul><li>0：表示关闭副本只读。</li><li>100：表示开启副本只读。</li></ul>
                     * 
                     */
                    int64_t GetSlaveReadWeight() const;

                    /**
                     * 设置<p>从节点读取权重。</p><ul><li>0：表示关闭副本只读。</li><li>100：表示开启副本只读。</li></ul>
                     * @param _slaveReadWeight <p>从节点读取权重。</p><ul><li>0：表示关闭副本只读。</li><li>100：表示开启副本只读。</li></ul>
                     * 
                     */
                    void SetSlaveReadWeight(const int64_t& _slaveReadWeight);

                    /**
                     * 判断参数 SlaveReadWeight 是否已赋值
                     * @return SlaveReadWeight 是否已赋值
                     * 
                     */
                    bool SlaveReadWeightHasBeenSet() const;

                    /**
                     * 获取<p>实例关联的标签信息。</p>
                     * @return InstanceTags <p>实例关联的标签信息。</p>
                     * 
                     */
                    std::vector<InstanceTagInfo> GetInstanceTags() const;

                    /**
                     * 设置<p>实例关联的标签信息。</p>
                     * @param _instanceTags <p>实例关联的标签信息。</p>
                     * 
                     */
                    void SetInstanceTags(const std::vector<InstanceTagInfo>& _instanceTags);

                    /**
                     * 判断参数 InstanceTags 是否已赋值
                     * @return InstanceTags 是否已赋值
                     * 
                     */
                    bool InstanceTagsHasBeenSet() const;

                    /**
                     * 获取<p>项目名称。</p>
                     * @return ProjectName <p>项目名称。</p>
                     * 
                     */
                    std::string GetProjectName() const;

                    /**
                     * 设置<p>项目名称。</p>
                     * @param _projectName <p>项目名称。</p>
                     * 
                     */
                    void SetProjectName(const std::string& _projectName);

                    /**
                     * 判断参数 ProjectName 是否已赋值
                     * @return ProjectName 是否已赋值
                     * 
                     */
                    bool ProjectNameHasBeenSet() const;

                    /**
                     * 获取<p>是否为免密实例。<ul><li>true：免密实例。</li><li>false：非免密实例。</li></ul></p>
                     * @return NoAuth <p>是否为免密实例。<ul><li>true：免密实例。</li><li>false：非免密实例。</li></ul></p>
                     * 
                     */
                    bool GetNoAuth() const;

                    /**
                     * 设置<p>是否为免密实例。<ul><li>true：免密实例。</li><li>false：非免密实例。</li></ul></p>
                     * @param _noAuth <p>是否为免密实例。<ul><li>true：免密实例。</li><li>false：非免密实例。</li></ul></p>
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
                     * 获取<p>客户端连接数。</p>
                     * @return ClientLimit <p>客户端连接数。</p>
                     * 
                     */
                    int64_t GetClientLimit() const;

                    /**
                     * 设置<p>客户端连接数。</p>
                     * @param _clientLimit <p>客户端连接数。</p>
                     * 
                     */
                    void SetClientLimit(const int64_t& _clientLimit);

                    /**
                     * 判断参数 ClientLimit 是否已赋值
                     * @return ClientLimit 是否已赋值
                     * 
                     */
                    bool ClientLimitHasBeenSet() const;

                    /**
                     * 获取<p>DTS状态（内部参数，用户可忽略）。</p>
                     * @return DtsStatus <p>DTS状态（内部参数，用户可忽略）。</p>
                     * 
                     */
                    int64_t GetDtsStatus() const;

                    /**
                     * 设置<p>DTS状态（内部参数，用户可忽略）。</p>
                     * @param _dtsStatus <p>DTS状态（内部参数，用户可忽略）。</p>
                     * 
                     */
                    void SetDtsStatus(const int64_t& _dtsStatus);

                    /**
                     * 判断参数 DtsStatus 是否已赋值
                     * @return DtsStatus 是否已赋值
                     * 
                     */
                    bool DtsStatusHasBeenSet() const;

                    /**
                     * 获取<p>分片带宽上限，单位MB。</p>
                     * @return NetLimit <p>分片带宽上限，单位MB。</p>
                     * 
                     */
                    int64_t GetNetLimit() const;

                    /**
                     * 设置<p>分片带宽上限，单位MB。</p>
                     * @param _netLimit <p>分片带宽上限，单位MB。</p>
                     * 
                     */
                    void SetNetLimit(const int64_t& _netLimit);

                    /**
                     * 判断参数 NetLimit 是否已赋值
                     * @return NetLimit 是否已赋值
                     * 
                     */
                    bool NetLimitHasBeenSet() const;

                    /**
                     * 获取<p>免密实例标识（内部参数，用户可忽略）。</p>
                     * @return PasswordFree <p>免密实例标识（内部参数，用户可忽略）。</p>
                     * 
                     */
                    int64_t GetPasswordFree() const;

                    /**
                     * 设置<p>免密实例标识（内部参数，用户可忽略）。</p>
                     * @param _passwordFree <p>免密实例标识（内部参数，用户可忽略）。</p>
                     * 
                     */
                    void SetPasswordFree(const int64_t& _passwordFree);

                    /**
                     * 判断参数 PasswordFree 是否已赋值
                     * @return PasswordFree 是否已赋值
                     * 
                     */
                    bool PasswordFreeHasBeenSet() const;

                    /**
                     * 获取<p>该参数存在命名不规范问题，建议用参数IPv6取代。内部参数，用户可忽略。</p>
                     * @return Vip6 <p>该参数存在命名不规范问题，建议用参数IPv6取代。内部参数，用户可忽略。</p>
                     * 
                     */
                    std::string GetVip6() const;

                    /**
                     * 设置<p>该参数存在命名不规范问题，建议用参数IPv6取代。内部参数，用户可忽略。</p>
                     * @param _vip6 <p>该参数存在命名不规范问题，建议用参数IPv6取代。内部参数，用户可忽略。</p>
                     * 
                     */
                    void SetVip6(const std::string& _vip6);

                    /**
                     * 判断参数 Vip6 是否已赋值
                     * @return Vip6 是否已赋值
                     * 
                     */
                    bool Vip6HasBeenSet() const;

                    /**
                     * 获取<p>内部参数，用户可忽略。</p>
                     * @return IPv6 <p>内部参数，用户可忽略。</p>
                     * 
                     */
                    std::string GetIPv6() const;

                    /**
                     * 设置<p>内部参数，用户可忽略。</p>
                     * @param _iPv6 <p>内部参数，用户可忽略。</p>
                     * 
                     */
                    void SetIPv6(const std::string& _iPv6);

                    /**
                     * 判断参数 IPv6 是否已赋值
                     * @return IPv6 是否已赋值
                     * 
                     */
                    bool IPv6HasBeenSet() const;

                    /**
                     * 获取<p>实例只读标识（内部参数，用户可忽略）。</p>
                     * @return ReadOnly <p>实例只读标识（内部参数，用户可忽略）。</p>
                     * 
                     */
                    int64_t GetReadOnly() const;

                    /**
                     * 设置<p>实例只读标识（内部参数，用户可忽略）。</p>
                     * @param _readOnly <p>实例只读标识（内部参数，用户可忽略）。</p>
                     * 
                     */
                    void SetReadOnly(const int64_t& _readOnly);

                    /**
                     * 判断参数 ReadOnly 是否已赋值
                     * @return ReadOnly 是否已赋值
                     * 
                     */
                    bool ReadOnlyHasBeenSet() const;

                    /**
                     * 获取<p>内部参数，用户可忽略。</p>
                     * @return RemainBandwidthDuration <p>内部参数，用户可忽略。</p>
                     * 
                     */
                    std::string GetRemainBandwidthDuration() const;

                    /**
                     * 设置<p>内部参数，用户可忽略。</p>
                     * @param _remainBandwidthDuration <p>内部参数，用户可忽略。</p>
                     * 
                     */
                    void SetRemainBandwidthDuration(const std::string& _remainBandwidthDuration);

                    /**
                     * 判断参数 RemainBandwidthDuration 是否已赋值
                     * @return RemainBandwidthDuration 是否已赋值
                     * 
                     */
                    bool RemainBandwidthDurationHasBeenSet() const;

                    /**
                     * 获取<p>Redis实例请忽略该参数。</p>
                     * @return DiskSize <p>Redis实例请忽略该参数。</p>
                     * 
                     */
                    int64_t GetDiskSize() const;

                    /**
                     * 设置<p>Redis实例请忽略该参数。</p>
                     * @param _diskSize <p>Redis实例请忽略该参数。</p>
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
                     * 获取<p>监控版本。<ul><li>1m：1分钟粒度监控。目前该监控粒度已下线，具体信息，请参见<a href="https://cloud.tencent.com/document/product/239/80653">云数据库 Redis 1分钟粒度下线公告</a>。</li><li>5s：5秒粒度监控。</li></ul></p>
                     * @return MonitorVersion <p>监控版本。<ul><li>1m：1分钟粒度监控。目前该监控粒度已下线，具体信息，请参见<a href="https://cloud.tencent.com/document/product/239/80653">云数据库 Redis 1分钟粒度下线公告</a>。</li><li>5s：5秒粒度监控。</li></ul></p>
                     * 
                     */
                    std::string GetMonitorVersion() const;

                    /**
                     * 设置<p>监控版本。<ul><li>1m：1分钟粒度监控。目前该监控粒度已下线，具体信息，请参见<a href="https://cloud.tencent.com/document/product/239/80653">云数据库 Redis 1分钟粒度下线公告</a>。</li><li>5s：5秒粒度监控。</li></ul></p>
                     * @param _monitorVersion <p>监控版本。<ul><li>1m：1分钟粒度监控。目前该监控粒度已下线，具体信息，请参见<a href="https://cloud.tencent.com/document/product/239/80653">云数据库 Redis 1分钟粒度下线公告</a>。</li><li>5s：5秒粒度监控。</li></ul></p>
                     * 
                     */
                    void SetMonitorVersion(const std::string& _monitorVersion);

                    /**
                     * 判断参数 MonitorVersion 是否已赋值
                     * @return MonitorVersion 是否已赋值
                     * 
                     */
                    bool MonitorVersionHasBeenSet() const;

                    /**
                     * 获取<p>客户端最大连接数可设置的最小值。</p>
                     * @return ClientLimitMin <p>客户端最大连接数可设置的最小值。</p>
                     * 
                     */
                    int64_t GetClientLimitMin() const;

                    /**
                     * 设置<p>客户端最大连接数可设置的最小值。</p>
                     * @param _clientLimitMin <p>客户端最大连接数可设置的最小值。</p>
                     * 
                     */
                    void SetClientLimitMin(const int64_t& _clientLimitMin);

                    /**
                     * 判断参数 ClientLimitMin 是否已赋值
                     * @return ClientLimitMin 是否已赋值
                     * 
                     */
                    bool ClientLimitMinHasBeenSet() const;

                    /**
                     * 获取<p>客户端最大连接数可设置的最大值。</p>
                     * @return ClientLimitMax <p>客户端最大连接数可设置的最大值。</p>
                     * 
                     */
                    int64_t GetClientLimitMax() const;

                    /**
                     * 设置<p>客户端最大连接数可设置的最大值。</p>
                     * @param _clientLimitMax <p>客户端最大连接数可设置的最大值。</p>
                     * 
                     */
                    void SetClientLimitMax(const int64_t& _clientLimitMax);

                    /**
                     * 判断参数 ClientLimitMax 是否已赋值
                     * @return ClientLimitMax 是否已赋值
                     * 
                     */
                    bool ClientLimitMaxHasBeenSet() const;

                    /**
                     * 获取<p>实例的节点详细信息。<br>只有多可用区实例会返回。</p>
                     * @return NodeSet <p>实例的节点详细信息。<br>只有多可用区实例会返回。</p>
                     * 
                     */
                    std::vector<RedisNodeInfo> GetNodeSet() const;

                    /**
                     * 设置<p>实例的节点详细信息。<br>只有多可用区实例会返回。</p>
                     * @param _nodeSet <p>实例的节点详细信息。<br>只有多可用区实例会返回。</p>
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
                     * 获取<p>实例所在的地域信息，比如ap-guangzhou。</p>
                     * @return Region <p>实例所在的地域信息，比如ap-guangzhou。</p>
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置<p>实例所在的地域信息，比如ap-guangzhou。</p>
                     * @param _region <p>实例所在的地域信息，比如ap-guangzhou。</p>
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取<p>外网地址。</p>
                     * @return WanAddress <p>外网地址。</p>
                     * 
                     */
                    std::string GetWanAddress() const;

                    /**
                     * 设置<p>外网地址。</p>
                     * @param _wanAddress <p>外网地址。</p>
                     * 
                     */
                    void SetWanAddress(const std::string& _wanAddress);

                    /**
                     * 判断参数 WanAddress 是否已赋值
                     * @return WanAddress 是否已赋值
                     * 
                     */
                    bool WanAddressHasBeenSet() const;

                    /**
                     * 获取<p>北极星服务地址，内部使用。</p>
                     * @return PolarisServer <p>北极星服务地址，内部使用。</p>
                     * 
                     */
                    std::string GetPolarisServer() const;

                    /**
                     * 设置<p>北极星服务地址，内部使用。</p>
                     * @param _polarisServer <p>北极星服务地址，内部使用。</p>
                     * 
                     */
                    void SetPolarisServer(const std::string& _polarisServer);

                    /**
                     * 判断参数 PolarisServer 是否已赋值
                     * @return PolarisServer 是否已赋值
                     * 
                     */
                    bool PolarisServerHasBeenSet() const;

                    /**
                     * 获取<p>CDC Redis集群ID。</p>
                     * @return RedisClusterId <p>CDC Redis集群ID。</p>
                     * 
                     */
                    std::string GetRedisClusterId() const;

                    /**
                     * 设置<p>CDC Redis集群ID。</p>
                     * @param _redisClusterId <p>CDC Redis集群ID。</p>
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
                     * 获取<p>CDC 集群ID。</p>
                     * @return DedicatedClusterId <p>CDC 集群ID。</p>
                     * 
                     */
                    std::string GetDedicatedClusterId() const;

                    /**
                     * 设置<p>CDC 集群ID。</p>
                     * @param _dedicatedClusterId <p>CDC 集群ID。</p>
                     * 
                     */
                    void SetDedicatedClusterId(const std::string& _dedicatedClusterId);

                    /**
                     * 判断参数 DedicatedClusterId 是否已赋值
                     * @return DedicatedClusterId 是否已赋值
                     * 
                     */
                    bool DedicatedClusterIdHasBeenSet() const;

                    /**
                     * 获取<p>产品版本。<ul><li>local：本地盘。</li><li>cloud：云盘版。</li><li>cdc：CDC 集群版本。</li></ul></p>
                     * @return ProductVersion <p>产品版本。<ul><li>local：本地盘。</li><li>cloud：云盘版。</li><li>cdc：CDC 集群版本。</li></ul></p>
                     * 
                     */
                    std::string GetProductVersion() const;

                    /**
                     * 设置<p>产品版本。<ul><li>local：本地盘。</li><li>cloud：云盘版。</li><li>cdc：CDC 集群版本。</li></ul></p>
                     * @param _productVersion <p>产品版本。<ul><li>local：本地盘。</li><li>cloud：云盘版。</li><li>cdc：CDC 集群版本。</li></ul></p>
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
                     * 获取<p>实例当前Proxy版本。</p>
                     * @return CurrentProxyVersion <p>实例当前Proxy版本。</p>
                     * 
                     */
                    std::string GetCurrentProxyVersion() const;

                    /**
                     * 设置<p>实例当前Proxy版本。</p>
                     * @param _currentProxyVersion <p>实例当前Proxy版本。</p>
                     * 
                     */
                    void SetCurrentProxyVersion(const std::string& _currentProxyVersion);

                    /**
                     * 判断参数 CurrentProxyVersion 是否已赋值
                     * @return CurrentProxyVersion 是否已赋值
                     * 
                     */
                    bool CurrentProxyVersionHasBeenSet() const;

                    /**
                     * 获取<p>实例当前Cache小版本。如果实例加入全球复制组，显示全球复制的内核版本。</p>
                     * @return CurrentRedisVersion <p>实例当前Cache小版本。如果实例加入全球复制组，显示全球复制的内核版本。</p>
                     * 
                     */
                    std::string GetCurrentRedisVersion() const;

                    /**
                     * 设置<p>实例当前Cache小版本。如果实例加入全球复制组，显示全球复制的内核版本。</p>
                     * @param _currentRedisVersion <p>实例当前Cache小版本。如果实例加入全球复制组，显示全球复制的内核版本。</p>
                     * 
                     */
                    void SetCurrentRedisVersion(const std::string& _currentRedisVersion);

                    /**
                     * 判断参数 CurrentRedisVersion 是否已赋值
                     * @return CurrentRedisVersion 是否已赋值
                     * 
                     */
                    bool CurrentRedisVersionHasBeenSet() const;

                    /**
                     * 获取<p>实例可升级Proxy版本。</p>
                     * @return UpgradeProxyVersion <p>实例可升级Proxy版本。</p>
                     * 
                     */
                    std::string GetUpgradeProxyVersion() const;

                    /**
                     * 设置<p>实例可升级Proxy版本。</p>
                     * @param _upgradeProxyVersion <p>实例可升级Proxy版本。</p>
                     * 
                     */
                    void SetUpgradeProxyVersion(const std::string& _upgradeProxyVersion);

                    /**
                     * 判断参数 UpgradeProxyVersion 是否已赋值
                     * @return UpgradeProxyVersion 是否已赋值
                     * 
                     */
                    bool UpgradeProxyVersionHasBeenSet() const;

                    /**
                     * 获取<p>实例可升级Cache小版本。</p>
                     * @return UpgradeRedisVersion <p>实例可升级Cache小版本。</p>
                     * 
                     */
                    std::string GetUpgradeRedisVersion() const;

                    /**
                     * 设置<p>实例可升级Cache小版本。</p>
                     * @param _upgradeRedisVersion <p>实例可升级Cache小版本。</p>
                     * 
                     */
                    void SetUpgradeRedisVersion(const std::string& _upgradeRedisVersion);

                    /**
                     * 判断参数 UpgradeRedisVersion 是否已赋值
                     * @return UpgradeRedisVersion 是否已赋值
                     * 
                     */
                    bool UpgradeRedisVersionHasBeenSet() const;

                    /**
                     * 获取<p>备份模式。</p><ul><li>SecondLevelBackup：秒级备份。</li><li>NormalLevelBackup：普通备份。</li></ul>
                     * @return BackupMode <p>备份模式。</p><ul><li>SecondLevelBackup：秒级备份。</li><li>NormalLevelBackup：普通备份。</li></ul>
                     * 
                     */
                    std::string GetBackupMode() const;

                    /**
                     * 设置<p>备份模式。</p><ul><li>SecondLevelBackup：秒级备份。</li><li>NormalLevelBackup：普通备份。</li></ul>
                     * @param _backupMode <p>备份模式。</p><ul><li>SecondLevelBackup：秒级备份。</li><li>NormalLevelBackup：普通备份。</li></ul>
                     * 
                     */
                    void SetBackupMode(const std::string& _backupMode);

                    /**
                     * 判断参数 BackupMode 是否已赋值
                     * @return BackupMode 是否已赋值
                     * 
                     */
                    bool BackupModeHasBeenSet() const;

                    /**
                     * 获取<p>实例销毁保护开关。</p><ul><li>0：关闭。</li><li>1：开启。</li></ul>
                     * @return DeleteProtectionSwitch <p>实例销毁保护开关。</p><ul><li>0：关闭。</li><li>1：开启。</li></ul>
                     * 
                     */
                    int64_t GetDeleteProtectionSwitch() const;

                    /**
                     * 设置<p>实例销毁保护开关。</p><ul><li>0：关闭。</li><li>1：开启。</li></ul>
                     * @param _deleteProtectionSwitch <p>实例销毁保护开关。</p><ul><li>0：关闭。</li><li>1：开启。</li></ul>
                     * 
                     */
                    void SetDeleteProtectionSwitch(const int64_t& _deleteProtectionSwitch);

                    /**
                     * 判断参数 DeleteProtectionSwitch 是否已赋值
                     * @return DeleteProtectionSwitch 是否已赋值
                     * 
                     */
                    bool DeleteProtectionSwitchHasBeenSet() const;

                private:

                    /**
                     * <p>实例名称。</p>
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * <p>实例 ID。</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>用户AppId。AppId是与账号ID有唯一对应关系的应用 ID，部分腾讯云产品会使用此 AppId。</p>
                     */
                    int64_t m_appid;
                    bool m_appidHasBeenSet;

                    /**
                     * <p>项目 ID。</p>
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * <p>地域 ID。<ul><li>1：广州。</li><li>4：上海。</li><li>5：中国香港。</li><li>7：上海金融。</li> <li>8：北京。</li> <li>9：新加坡。</li> <li>11：深圳金融。</li> <li>15：美西（硅谷）。</li><li>16：成都。</li><li>17：法兰克福。</li><li>18：首尔。</li><li>19：重庆。</li><li>22：美东（弗吉尼亚）。</li><li>23：曼谷。</li><li>25：东京。</li></ul></p>
                     */
                    int64_t m_regionId;
                    bool m_regionIdHasBeenSet;

                    /**
                     * <p>区域 ID。</p>
                     */
                    int64_t m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * <p>vpc网络 ID，例如75101。</p>
                     */
                    int64_t m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * <p>vpc网络下子网ID，如：46315。</p>
                     */
                    int64_t m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * <p>实例当前状态。<ul><li>0：待初始化。</li><li>1：实例在流程中。</li><li>2：实例运行中。</li><li>-2：实例已隔离。</li><li>-3：实例待删除。</li></ul></p>
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>实例 VIP。</p>
                     */
                    std::string m_wanIp;
                    bool m_wanIpHasBeenSet;

                    /**
                     * <p>实例端口号。</p>
                     */
                    int64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * <p>实例创建时间。格式如：2020-01-15 10:20:00。</p>
                     */
                    std::string m_createtime;
                    bool m_createtimeHasBeenSet;

                    /**
                     * <p>实例内存容量大小。单位：MB，1MB=1024KB。</p>
                     */
                    double m_size;
                    bool m_sizeHasBeenSet;

                    /**
                     * <p>该字段已废弃。请使用腾讯云可观测平台API 接口 <a href="https://cloud.tencent.com/document/product/248/31014">GetMonitorData</a> 获取实例已使用的内存容量。</p>
                     */
                    double m_sizeUsed;
                    bool m_sizeUsedHasBeenSet;

                    /**
                     * <p>实例类型。</p><p>枚举值：</p><ul><li>2： Redis 2.8 内存版（标准架构）。</li><li>3： CKV 3.2 内存版（标准架构）。</li><li>4： CKV 3.2 内存版（集群架构）。</li><li>5： Redis 2.8 内存版（单机）。</li><li>6： Redis 4.0 内存版（标准架构）。</li><li>7： Redis 4.0 内存版（集群架构）。</li><li>8： Redis 5.0 内存版（标准架构）。</li><li>9： Redis 5.0 内存版（集群架构）。</li><li>15： Redis 6.2 内存版（标准架构）。</li><li>16： Redis 6.2 内存版（集群架构）。</li><li>17： Redis 7.0 内存版（标准架构）。</li><li>18： Redis 7.0 内存版（集群架构）。</li><li>19： Valkey 8.0 内存版（标准架构）。</li><li>20： Valkey 8.0 内存版（集群架构）。</li><li>200： Memcached 1.6 内存版（集群架构）。</li></ul>
                     */
                    int64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>实例是否设置自动续费标识。<ul><li>1：设置自动续费。</li><li>0：未设置自动续费。</li></ul></p>
                     */
                    int64_t m_autoRenewFlag;
                    bool m_autoRenewFlagHasBeenSet;

                    /**
                     * <p>包年包月计费实例到期的时间。</p>
                     */
                    std::string m_deadlineTime;
                    bool m_deadlineTimeHasBeenSet;

                    /**
                     * <p>引擎：社区版Redis、腾讯云CKV。</p>
                     */
                    std::string m_engine;
                    bool m_engineHasBeenSet;

                    /**
                     * <p>产品类型。<ul><li>standalone：标准版。</li><li>cluster ：集群版。</li></ul></p>
                     */
                    std::string m_productType;
                    bool m_productTypeHasBeenSet;

                    /**
                     * <p>vpc网络id，例如vpc-fk33jsf43kgv。</p>
                     */
                    std::string m_uniqVpcId;
                    bool m_uniqVpcIdHasBeenSet;

                    /**
                     * <p>vpc网络下子网id，例如：subnet-fd3j6l35mm0。</p>
                     */
                    std::string m_uniqSubnetId;
                    bool m_uniqSubnetIdHasBeenSet;

                    /**
                     * <p>计费模式。<ul><li>0：按量计费。</li><li>1：包年包月。</li></ul></p>
                     */
                    int64_t m_billingMode;
                    bool m_billingModeHasBeenSet;

                    /**
                     * <p>实例运行状态描述：如”实例运行中“。</p>
                     */
                    std::string m_instanceTitle;
                    bool m_instanceTitleHasBeenSet;

                    /**
                     * <p>已隔离实例默认下线时间。按量计费实例隔离后默认两小时后下线，包年包月默认7天后下线。格式如：2020-02-15 10:20:00。</p>
                     */
                    std::string m_offlineTime;
                    bool m_offlineTimeHasBeenSet;

                    /**
                     * <p>流程中的实例返回的子状态。</p><ul><li>0：磁盘读写状态。</li><li>1：磁盘超限只读状态。</li></ul>
                     */
                    int64_t m_subStatus;
                    bool m_subStatusHasBeenSet;

                    /**
                     * <p>反亲和性标签。</p>
                     */
                    std::vector<std::string> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * <p>实例节点信息。</p>
                     */
                    std::vector<InstanceNode> m_instanceNode;
                    bool m_instanceNodeHasBeenSet;

                    /**
                     * <p>分片大小。</p>
                     */
                    int64_t m_redisShardSize;
                    bool m_redisShardSizeHasBeenSet;

                    /**
                     * <p>分片数量。</p>
                     */
                    int64_t m_redisShardNum;
                    bool m_redisShardNumHasBeenSet;

                    /**
                     * <p>副本数量。</p>
                     */
                    int64_t m_redisReplicasNum;
                    bool m_redisReplicasNumHasBeenSet;

                    /**
                     * <p>计费 ID。</p>
                     */
                    int64_t m_priceId;
                    bool m_priceIdHasBeenSet;

                    /**
                     * <p>实例隔离开始的时间。</p>
                     */
                    std::string m_closeTime;
                    bool m_closeTimeHasBeenSet;

                    /**
                     * <p>从节点读取权重。</p><ul><li>0：表示关闭副本只读。</li><li>100：表示开启副本只读。</li></ul>
                     */
                    int64_t m_slaveReadWeight;
                    bool m_slaveReadWeightHasBeenSet;

                    /**
                     * <p>实例关联的标签信息。</p>
                     */
                    std::vector<InstanceTagInfo> m_instanceTags;
                    bool m_instanceTagsHasBeenSet;

                    /**
                     * <p>项目名称。</p>
                     */
                    std::string m_projectName;
                    bool m_projectNameHasBeenSet;

                    /**
                     * <p>是否为免密实例。<ul><li>true：免密实例。</li><li>false：非免密实例。</li></ul></p>
                     */
                    bool m_noAuth;
                    bool m_noAuthHasBeenSet;

                    /**
                     * <p>客户端连接数。</p>
                     */
                    int64_t m_clientLimit;
                    bool m_clientLimitHasBeenSet;

                    /**
                     * <p>DTS状态（内部参数，用户可忽略）。</p>
                     */
                    int64_t m_dtsStatus;
                    bool m_dtsStatusHasBeenSet;

                    /**
                     * <p>分片带宽上限，单位MB。</p>
                     */
                    int64_t m_netLimit;
                    bool m_netLimitHasBeenSet;

                    /**
                     * <p>免密实例标识（内部参数，用户可忽略）。</p>
                     */
                    int64_t m_passwordFree;
                    bool m_passwordFreeHasBeenSet;

                    /**
                     * <p>该参数存在命名不规范问题，建议用参数IPv6取代。内部参数，用户可忽略。</p>
                     */
                    std::string m_vip6;
                    bool m_vip6HasBeenSet;

                    /**
                     * <p>内部参数，用户可忽略。</p>
                     */
                    std::string m_iPv6;
                    bool m_iPv6HasBeenSet;

                    /**
                     * <p>实例只读标识（内部参数，用户可忽略）。</p>
                     */
                    int64_t m_readOnly;
                    bool m_readOnlyHasBeenSet;

                    /**
                     * <p>内部参数，用户可忽略。</p>
                     */
                    std::string m_remainBandwidthDuration;
                    bool m_remainBandwidthDurationHasBeenSet;

                    /**
                     * <p>Redis实例请忽略该参数。</p>
                     */
                    int64_t m_diskSize;
                    bool m_diskSizeHasBeenSet;

                    /**
                     * <p>监控版本。<ul><li>1m：1分钟粒度监控。目前该监控粒度已下线，具体信息，请参见<a href="https://cloud.tencent.com/document/product/239/80653">云数据库 Redis 1分钟粒度下线公告</a>。</li><li>5s：5秒粒度监控。</li></ul></p>
                     */
                    std::string m_monitorVersion;
                    bool m_monitorVersionHasBeenSet;

                    /**
                     * <p>客户端最大连接数可设置的最小值。</p>
                     */
                    int64_t m_clientLimitMin;
                    bool m_clientLimitMinHasBeenSet;

                    /**
                     * <p>客户端最大连接数可设置的最大值。</p>
                     */
                    int64_t m_clientLimitMax;
                    bool m_clientLimitMaxHasBeenSet;

                    /**
                     * <p>实例的节点详细信息。<br>只有多可用区实例会返回。</p>
                     */
                    std::vector<RedisNodeInfo> m_nodeSet;
                    bool m_nodeSetHasBeenSet;

                    /**
                     * <p>实例所在的地域信息，比如ap-guangzhou。</p>
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * <p>外网地址。</p>
                     */
                    std::string m_wanAddress;
                    bool m_wanAddressHasBeenSet;

                    /**
                     * <p>北极星服务地址，内部使用。</p>
                     */
                    std::string m_polarisServer;
                    bool m_polarisServerHasBeenSet;

                    /**
                     * <p>CDC Redis集群ID。</p>
                     */
                    std::string m_redisClusterId;
                    bool m_redisClusterIdHasBeenSet;

                    /**
                     * <p>CDC 集群ID。</p>
                     */
                    std::string m_dedicatedClusterId;
                    bool m_dedicatedClusterIdHasBeenSet;

                    /**
                     * <p>产品版本。<ul><li>local：本地盘。</li><li>cloud：云盘版。</li><li>cdc：CDC 集群版本。</li></ul></p>
                     */
                    std::string m_productVersion;
                    bool m_productVersionHasBeenSet;

                    /**
                     * <p>实例当前Proxy版本。</p>
                     */
                    std::string m_currentProxyVersion;
                    bool m_currentProxyVersionHasBeenSet;

                    /**
                     * <p>实例当前Cache小版本。如果实例加入全球复制组，显示全球复制的内核版本。</p>
                     */
                    std::string m_currentRedisVersion;
                    bool m_currentRedisVersionHasBeenSet;

                    /**
                     * <p>实例可升级Proxy版本。</p>
                     */
                    std::string m_upgradeProxyVersion;
                    bool m_upgradeProxyVersionHasBeenSet;

                    /**
                     * <p>实例可升级Cache小版本。</p>
                     */
                    std::string m_upgradeRedisVersion;
                    bool m_upgradeRedisVersionHasBeenSet;

                    /**
                     * <p>备份模式。</p><ul><li>SecondLevelBackup：秒级备份。</li><li>NormalLevelBackup：普通备份。</li></ul>
                     */
                    std::string m_backupMode;
                    bool m_backupModeHasBeenSet;

                    /**
                     * <p>实例销毁保护开关。</p><ul><li>0：关闭。</li><li>1：开启。</li></ul>
                     */
                    int64_t m_deleteProtectionSwitch;
                    bool m_deleteProtectionSwitchHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_INSTANCESET_H_
