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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_DBINSTANCE_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_DBINSTANCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/postgres/v20170312/model/DBInstanceNetInfo.h>


namespace TencentCloud
{
    namespace Postgres
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * 描述实例的详细信息
                */
                class DBInstance : public AbstractModel
                {
                public:
                    DBInstance();
                    ~DBInstance() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取实例所属地域，如: ap-guangzhou，对应RegionSet的Region字段
                     * @return Region 实例所属地域，如: ap-guangzhou，对应RegionSet的Region字段
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置实例所属地域，如: ap-guangzhou，对应RegionSet的Region字段
                     * @param Region 实例所属地域，如: ap-guangzhou，对应RegionSet的Region字段
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取实例所属可用区， 如：ap-guangzhou-3，对应ZoneSet的Zone字段
                     * @return Zone 实例所属可用区， 如：ap-guangzhou-3，对应ZoneSet的Zone字段
                     */
                    std::string GetZone() const;

                    /**
                     * 设置实例所属可用区， 如：ap-guangzhou-3，对应ZoneSet的Zone字段
                     * @param Zone 实例所属可用区， 如：ap-guangzhou-3，对应ZoneSet的Zone字段
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取项目ID
                     * @return ProjectId 项目ID
                     */
                    uint64_t GetProjectId() const;

                    /**
                     * 设置项目ID
                     * @param ProjectId 项目ID
                     */
                    void SetProjectId(const uint64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取私有网络ID
                     * @return VpcId 私有网络ID
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置私有网络ID
                     * @param VpcId 私有网络ID
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取SubnetId
                     * @return SubnetId SubnetId
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置SubnetId
                     * @param SubnetId SubnetId
                     */
                    void SetSubnetId(const std::string& _subnetId);

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     */
                    bool SubnetIdHasBeenSet() const;

                    /**
                     * 获取实例ID
                     * @return DBInstanceId 实例ID
                     */
                    std::string GetDBInstanceId() const;

                    /**
                     * 设置实例ID
                     * @param DBInstanceId 实例ID
                     */
                    void SetDBInstanceId(const std::string& _dBInstanceId);

                    /**
                     * 判断参数 DBInstanceId 是否已赋值
                     * @return DBInstanceId 是否已赋值
                     */
                    bool DBInstanceIdHasBeenSet() const;

                    /**
                     * 获取实例名称
                     * @return DBInstanceName 实例名称
                     */
                    std::string GetDBInstanceName() const;

                    /**
                     * 设置实例名称
                     * @param DBInstanceName 实例名称
                     */
                    void SetDBInstanceName(const std::string& _dBInstanceName);

                    /**
                     * 判断参数 DBInstanceName 是否已赋值
                     * @return DBInstanceName 是否已赋值
                     */
                    bool DBInstanceNameHasBeenSet() const;

                    /**
                     * 获取实例状态
                     * @return DBInstanceStatus 实例状态
                     */
                    std::string GetDBInstanceStatus() const;

                    /**
                     * 设置实例状态
                     * @param DBInstanceStatus 实例状态
                     */
                    void SetDBInstanceStatus(const std::string& _dBInstanceStatus);

                    /**
                     * 判断参数 DBInstanceStatus 是否已赋值
                     * @return DBInstanceStatus 是否已赋值
                     */
                    bool DBInstanceStatusHasBeenSet() const;

                    /**
                     * 获取实例分配的内存大小，单位：GB
                     * @return DBInstanceMemory 实例分配的内存大小，单位：GB
                     */
                    uint64_t GetDBInstanceMemory() const;

                    /**
                     * 设置实例分配的内存大小，单位：GB
                     * @param DBInstanceMemory 实例分配的内存大小，单位：GB
                     */
                    void SetDBInstanceMemory(const uint64_t& _dBInstanceMemory);

                    /**
                     * 判断参数 DBInstanceMemory 是否已赋值
                     * @return DBInstanceMemory 是否已赋值
                     */
                    bool DBInstanceMemoryHasBeenSet() const;

                    /**
                     * 获取实例分配的存储空间大小，单位：GB
                     * @return DBInstanceStorage 实例分配的存储空间大小，单位：GB
                     */
                    uint64_t GetDBInstanceStorage() const;

                    /**
                     * 设置实例分配的存储空间大小，单位：GB
                     * @param DBInstanceStorage 实例分配的存储空间大小，单位：GB
                     */
                    void SetDBInstanceStorage(const uint64_t& _dBInstanceStorage);

                    /**
                     * 判断参数 DBInstanceStorage 是否已赋值
                     * @return DBInstanceStorage 是否已赋值
                     */
                    bool DBInstanceStorageHasBeenSet() const;

                    /**
                     * 获取实例分配的CPU数量，单位：个
                     * @return DBInstanceCpu 实例分配的CPU数量，单位：个
                     */
                    uint64_t GetDBInstanceCpu() const;

                    /**
                     * 设置实例分配的CPU数量，单位：个
                     * @param DBInstanceCpu 实例分配的CPU数量，单位：个
                     */
                    void SetDBInstanceCpu(const uint64_t& _dBInstanceCpu);

                    /**
                     * 判断参数 DBInstanceCpu 是否已赋值
                     * @return DBInstanceCpu 是否已赋值
                     */
                    bool DBInstanceCpuHasBeenSet() const;

                    /**
                     * 获取售卖规格ID
                     * @return DBInstanceClass 售卖规格ID
                     */
                    std::string GetDBInstanceClass() const;

                    /**
                     * 设置售卖规格ID
                     * @param DBInstanceClass 售卖规格ID
                     */
                    void SetDBInstanceClass(const std::string& _dBInstanceClass);

                    /**
                     * 判断参数 DBInstanceClass 是否已赋值
                     * @return DBInstanceClass 是否已赋值
                     */
                    bool DBInstanceClassHasBeenSet() const;

                    /**
                     * 获取实例类型，类型有：1、primary（主实例）；2、readonly（只读实例）；3、guard（灾备实例）；4、temp（临时实例）
                     * @return DBInstanceType 实例类型，类型有：1、primary（主实例）；2、readonly（只读实例）；3、guard（灾备实例）；4、temp（临时实例）
                     */
                    std::string GetDBInstanceType() const;

                    /**
                     * 设置实例类型，类型有：1、primary（主实例）；2、readonly（只读实例）；3、guard（灾备实例）；4、temp（临时实例）
                     * @param DBInstanceType 实例类型，类型有：1、primary（主实例）；2、readonly（只读实例）；3、guard（灾备实例）；4、temp（临时实例）
                     */
                    void SetDBInstanceType(const std::string& _dBInstanceType);

                    /**
                     * 判断参数 DBInstanceType 是否已赋值
                     * @return DBInstanceType 是否已赋值
                     */
                    bool DBInstanceTypeHasBeenSet() const;

                    /**
                     * 获取实例版本，目前只支持standard（双机高可用版, 一主一从）
                     * @return DBInstanceVersion 实例版本，目前只支持standard（双机高可用版, 一主一从）
                     */
                    std::string GetDBInstanceVersion() const;

                    /**
                     * 设置实例版本，目前只支持standard（双机高可用版, 一主一从）
                     * @param DBInstanceVersion 实例版本，目前只支持standard（双机高可用版, 一主一从）
                     */
                    void SetDBInstanceVersion(const std::string& _dBInstanceVersion);

                    /**
                     * 判断参数 DBInstanceVersion 是否已赋值
                     * @return DBInstanceVersion 是否已赋值
                     */
                    bool DBInstanceVersionHasBeenSet() const;

                    /**
                     * 获取实例DB字符集
                     * @return DBCharset 实例DB字符集
                     */
                    std::string GetDBCharset() const;

                    /**
                     * 设置实例DB字符集
                     * @param DBCharset 实例DB字符集
                     */
                    void SetDBCharset(const std::string& _dBCharset);

                    /**
                     * 判断参数 DBCharset 是否已赋值
                     * @return DBCharset 是否已赋值
                     */
                    bool DBCharsetHasBeenSet() const;

                    /**
                     * 获取PostgreSQL内核版本
                     * @return DBVersion PostgreSQL内核版本
                     */
                    std::string GetDBVersion() const;

                    /**
                     * 设置PostgreSQL内核版本
                     * @param DBVersion PostgreSQL内核版本
                     */
                    void SetDBVersion(const std::string& _dBVersion);

                    /**
                     * 判断参数 DBVersion 是否已赋值
                     * @return DBVersion 是否已赋值
                     */
                    bool DBVersionHasBeenSet() const;

                    /**
                     * 获取实例创建时间
                     * @return CreateTime 实例创建时间
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置实例创建时间
                     * @param CreateTime 实例创建时间
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取实例执行最后一次更新的时间
                     * @return UpdateTime 实例执行最后一次更新的时间
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置实例执行最后一次更新的时间
                     * @param UpdateTime 实例执行最后一次更新的时间
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取实例到期时间
                     * @return ExpireTime 实例到期时间
                     */
                    std::string GetExpireTime() const;

                    /**
                     * 设置实例到期时间
                     * @param ExpireTime 实例到期时间
                     */
                    void SetExpireTime(const std::string& _expireTime);

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     */
                    bool ExpireTimeHasBeenSet() const;

                    /**
                     * 获取实例隔离时间
                     * @return IsolatedTime 实例隔离时间
                     */
                    std::string GetIsolatedTime() const;

                    /**
                     * 设置实例隔离时间
                     * @param IsolatedTime 实例隔离时间
                     */
                    void SetIsolatedTime(const std::string& _isolatedTime);

                    /**
                     * 判断参数 IsolatedTime 是否已赋值
                     * @return IsolatedTime 是否已赋值
                     */
                    bool IsolatedTimeHasBeenSet() const;

                    /**
                     * 获取计费模式，1、prepaid（包年包月,预付费）；2、postpaid（按量计费，后付费）
                     * @return PayType 计费模式，1、prepaid（包年包月,预付费）；2、postpaid（按量计费，后付费）
                     */
                    std::string GetPayType() const;

                    /**
                     * 设置计费模式，1、prepaid（包年包月,预付费）；2、postpaid（按量计费，后付费）
                     * @param PayType 计费模式，1、prepaid（包年包月,预付费）；2、postpaid（按量计费，后付费）
                     */
                    void SetPayType(const std::string& _payType);

                    /**
                     * 判断参数 PayType 是否已赋值
                     * @return PayType 是否已赋值
                     */
                    bool PayTypeHasBeenSet() const;

                    /**
                     * 获取是否自动续费，1：自动续费，0：不自动续费
                     * @return AutoRenew 是否自动续费，1：自动续费，0：不自动续费
                     */
                    uint64_t GetAutoRenew() const;

                    /**
                     * 设置是否自动续费，1：自动续费，0：不自动续费
                     * @param AutoRenew 是否自动续费，1：自动续费，0：不自动续费
                     */
                    void SetAutoRenew(const uint64_t& _autoRenew);

                    /**
                     * 判断参数 AutoRenew 是否已赋值
                     * @return AutoRenew 是否已赋值
                     */
                    bool AutoRenewHasBeenSet() const;

                    /**
                     * 获取实例网络连接信息
                     * @return DBInstanceNetInfo 实例网络连接信息
                     */
                    std::vector<DBInstanceNetInfo> GetDBInstanceNetInfo() const;

                    /**
                     * 设置实例网络连接信息
                     * @param DBInstanceNetInfo 实例网络连接信息
                     */
                    void SetDBInstanceNetInfo(const std::vector<DBInstanceNetInfo>& _dBInstanceNetInfo);

                    /**
                     * 判断参数 DBInstanceNetInfo 是否已赋值
                     * @return DBInstanceNetInfo 是否已赋值
                     */
                    bool DBInstanceNetInfoHasBeenSet() const;

                    /**
                     * 获取机器类型
                     * @return Type 机器类型
                     */
                    std::string GetType() const;

                    /**
                     * 设置机器类型
                     * @param Type 机器类型
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取用户的AppId
                     * @return AppId 用户的AppId
                     */
                    uint64_t GetAppId() const;

                    /**
                     * 设置用户的AppId
                     * @param AppId 用户的AppId
                     */
                    void SetAppId(const uint64_t& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取实例的Uid
                     * @return Uid 实例的Uid
                     */
                    uint64_t GetUid() const;

                    /**
                     * 设置实例的Uid
                     * @param Uid 实例的Uid
                     */
                    void SetUid(const uint64_t& _uid);

                    /**
                     * 判断参数 Uid 是否已赋值
                     * @return Uid 是否已赋值
                     */
                    bool UidHasBeenSet() const;

                private:

                    /**
                     * 实例所属地域，如: ap-guangzhou，对应RegionSet的Region字段
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 实例所属可用区， 如：ap-guangzhou-3，对应ZoneSet的Zone字段
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * 项目ID
                     */
                    uint64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 私有网络ID
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * SubnetId
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * 实例ID
                     */
                    std::string m_dBInstanceId;
                    bool m_dBInstanceIdHasBeenSet;

                    /**
                     * 实例名称
                     */
                    std::string m_dBInstanceName;
                    bool m_dBInstanceNameHasBeenSet;

                    /**
                     * 实例状态
                     */
                    std::string m_dBInstanceStatus;
                    bool m_dBInstanceStatusHasBeenSet;

                    /**
                     * 实例分配的内存大小，单位：GB
                     */
                    uint64_t m_dBInstanceMemory;
                    bool m_dBInstanceMemoryHasBeenSet;

                    /**
                     * 实例分配的存储空间大小，单位：GB
                     */
                    uint64_t m_dBInstanceStorage;
                    bool m_dBInstanceStorageHasBeenSet;

                    /**
                     * 实例分配的CPU数量，单位：个
                     */
                    uint64_t m_dBInstanceCpu;
                    bool m_dBInstanceCpuHasBeenSet;

                    /**
                     * 售卖规格ID
                     */
                    std::string m_dBInstanceClass;
                    bool m_dBInstanceClassHasBeenSet;

                    /**
                     * 实例类型，类型有：1、primary（主实例）；2、readonly（只读实例）；3、guard（灾备实例）；4、temp（临时实例）
                     */
                    std::string m_dBInstanceType;
                    bool m_dBInstanceTypeHasBeenSet;

                    /**
                     * 实例版本，目前只支持standard（双机高可用版, 一主一从）
                     */
                    std::string m_dBInstanceVersion;
                    bool m_dBInstanceVersionHasBeenSet;

                    /**
                     * 实例DB字符集
                     */
                    std::string m_dBCharset;
                    bool m_dBCharsetHasBeenSet;

                    /**
                     * PostgreSQL内核版本
                     */
                    std::string m_dBVersion;
                    bool m_dBVersionHasBeenSet;

                    /**
                     * 实例创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 实例执行最后一次更新的时间
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 实例到期时间
                     */
                    std::string m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * 实例隔离时间
                     */
                    std::string m_isolatedTime;
                    bool m_isolatedTimeHasBeenSet;

                    /**
                     * 计费模式，1、prepaid（包年包月,预付费）；2、postpaid（按量计费，后付费）
                     */
                    std::string m_payType;
                    bool m_payTypeHasBeenSet;

                    /**
                     * 是否自动续费，1：自动续费，0：不自动续费
                     */
                    uint64_t m_autoRenew;
                    bool m_autoRenewHasBeenSet;

                    /**
                     * 实例网络连接信息
                     */
                    std::vector<DBInstanceNetInfo> m_dBInstanceNetInfo;
                    bool m_dBInstanceNetInfoHasBeenSet;

                    /**
                     * 机器类型
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 用户的AppId
                     */
                    uint64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * 实例的Uid
                     */
                    uint64_t m_uid;
                    bool m_uidHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_DBINSTANCE_H_
