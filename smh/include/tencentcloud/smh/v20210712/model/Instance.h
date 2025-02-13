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

#ifndef TENCENTCLOUD_SMH_V20210712_MODEL_INSTANCE_H_
#define TENCENTCLOUD_SMH_V20210712_MODEL_INSTANCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Smh
    {
        namespace V20210712
        {
            namespace Model
            {
                /**
                * 官方云盘实例信息
                */
                class Instance : public AbstractModel
                {
                public:
                    Instance();
                    ~Instance() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取实例 ID
                     * @return InstanceId 实例 ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例 ID
                     * @param _instanceId 实例 ID
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
                     * 获取专属域名。如果实例无专属域名，则该属性为 null。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Domain 专属域名。如果实例无专属域名，则该属性为 null。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置专属域名。如果实例无专属域名，则该属性为 null。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _domain 专属域名。如果实例无专属域名，则该属性为 null。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取生效时间
                     * @return EffectiveTime 生效时间
                     * 
                     */
                    std::string GetEffectiveTime() const;

                    /**
                     * 设置生效时间
                     * @param _effectiveTime 生效时间
                     * 
                     */
                    void SetEffectiveTime(const std::string& _effectiveTime);

                    /**
                     * 判断参数 EffectiveTime 是否已赋值
                     * @return EffectiveTime 是否已赋值
                     * 
                     */
                    bool EffectiveTimeHasBeenSet() const;

                    /**
                     * 获取过期时间。如果为按量计费或永久有效实例，该属性为 null。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExpireTime 过期时间。如果为按量计费或永久有效实例，该属性为 null。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetExpireTime() const;

                    /**
                     * 设置过期时间。如果为按量计费或永久有效实例，该属性为 null。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _expireTime 过期时间。如果为按量计费或永久有效实例，该属性为 null。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExpireTime(const std::string& _expireTime);

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     * 
                     */
                    bool ExpireTimeHasBeenSet() const;

                    /**
                     * 获取用户数量。如果为按量计费或不限制用户数量实例，该属性为 null。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UserLimit 用户数量。如果为按量计费或不限制用户数量实例，该属性为 null。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetUserLimit() const;

                    /**
                     * 设置用户数量。如果为按量计费或不限制用户数量实例，该属性为 null。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _userLimit 用户数量。如果为按量计费或不限制用户数量实例，该属性为 null。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUserLimit(const uint64_t& _userLimit);

                    /**
                     * 判断参数 UserLimit 是否已赋值
                     * @return UserLimit 是否已赋值
                     * 
                     */
                    bool UserLimitHasBeenSet() const;

                    /**
                     * 获取存储容量，单位为 Bytes，由于数字类型精度限制，该字段为 String 类型。如果为按量计费或不限制存储容量实例，该属性为 null。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StorageLimit 存储容量，单位为 Bytes，由于数字类型精度限制，该字段为 String 类型。如果为按量计费或不限制存储容量实例，该属性为 null。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStorageLimit() const;

                    /**
                     * 设置存储容量，单位为 Bytes，由于数字类型精度限制，该字段为 String 类型。如果为按量计费或不限制存储容量实例，该属性为 null。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _storageLimit 存储容量，单位为 Bytes，由于数字类型精度限制，该字段为 String 类型。如果为按量计费或不限制存储容量实例，该属性为 null。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStorageLimit(const std::string& _storageLimit);

                    /**
                     * 判断参数 StorageLimit 是否已赋值
                     * @return StorageLimit 是否已赋值
                     * 
                     */
                    bool StorageLimitHasBeenSet() const;

                    /**
                     * 获取存储容量，单位为 GB。如果为按量计费或不限制存储容量实例，该属性为 null。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StorageLimitGB 存储容量，单位为 GB。如果为按量计费或不限制存储容量实例，该属性为 null。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetStorageLimitGB() const;

                    /**
                     * 设置存储容量，单位为 GB。如果为按量计费或不限制存储容量实例，该属性为 null。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _storageLimitGB 存储容量，单位为 GB。如果为按量计费或不限制存储容量实例，该属性为 null。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStorageLimitGB(const uint64_t& _storageLimitGB);

                    /**
                     * 判断参数 StorageLimitGB 是否已赋值
                     * @return StorageLimitGB 是否已赋值
                     * 
                     */
                    bool StorageLimitGBHasBeenSet() const;

                    /**
                     * 获取是否过期隔离
                     * @return Isolated 是否过期隔离
                     * 
                     */
                    bool GetIsolated() const;

                    /**
                     * 设置是否过期隔离
                     * @param _isolated 是否过期隔离
                     * 
                     */
                    void SetIsolated(const bool& _isolated);

                    /**
                     * 判断参数 Isolated 是否已赋值
                     * @return Isolated 是否已赋值
                     * 
                     */
                    bool IsolatedHasBeenSet() const;

                    /**
                     * 获取续费标识。0：手动续费；1：自动续费；2：到期不续。
                     * @return AutoRenew 续费标识。0：手动续费；1：自动续费；2：到期不续。
                     * 
                     */
                    uint64_t GetAutoRenew() const;

                    /**
                     * 设置续费标识。0：手动续费；1：自动续费；2：到期不续。
                     * @param _autoRenew 续费标识。0：手动续费；1：自动续费；2：到期不续。
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
                     * 获取超级管理员账号，如果未选择查询实例绑定的超级管理员账号或当前实例未绑定超级管理员账号，则该属性为 null。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SuperAdminAccount 超级管理员账号，如果未选择查询实例绑定的超级管理员账号或当前实例未绑定超级管理员账号，则该属性为 null。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSuperAdminAccount() const;

                    /**
                     * 设置超级管理员账号，如果未选择查询实例绑定的超级管理员账号或当前实例未绑定超级管理员账号，则该属性为 null。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _superAdminAccount 超级管理员账号，如果未选择查询实例绑定的超级管理员账号或当前实例未绑定超级管理员账号，则该属性为 null。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSuperAdminAccount(const std::string& _superAdminAccount);

                    /**
                     * 判断参数 SuperAdminAccount 是否已赋值
                     * @return SuperAdminAccount 是否已赋值
                     * 
                     */
                    bool SuperAdminAccountHasBeenSet() const;

                    /**
                     * 获取自选桶模式下，展示存储桶使用
                     * @return Bucket 自选桶模式下，展示存储桶使用
                     * 
                     */
                    std::string GetBucket() const;

                    /**
                     * 设置自选桶模式下，展示存储桶使用
                     * @param _bucket 自选桶模式下，展示存储桶使用
                     * 
                     */
                    void SetBucket(const std::string& _bucket);

                    /**
                     * 判断参数 Bucket 是否已赋值
                     * @return Bucket 是否已赋值
                     * 
                     */
                    bool BucketHasBeenSet() const;

                    /**
                     * 获取自选桶模式下，展示日志桶使用
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LogBucket 自选桶模式下，展示日志桶使用
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLogBucket() const;

                    /**
                     * 设置自选桶模式下，展示日志桶使用
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _logBucket 自选桶模式下，展示日志桶使用
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLogBucket(const std::string& _logBucket);

                    /**
                     * 判断参数 LogBucket 是否已赋值
                     * @return LogBucket 是否已赋值
                     * 
                     */
                    bool LogBucketHasBeenSet() const;

                private:

                    /**
                     * 实例 ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 专属域名。如果实例无专属域名，则该属性为 null。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * 生效时间
                     */
                    std::string m_effectiveTime;
                    bool m_effectiveTimeHasBeenSet;

                    /**
                     * 过期时间。如果为按量计费或永久有效实例，该属性为 null。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * 用户数量。如果为按量计费或不限制用户数量实例，该属性为 null。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_userLimit;
                    bool m_userLimitHasBeenSet;

                    /**
                     * 存储容量，单位为 Bytes，由于数字类型精度限制，该字段为 String 类型。如果为按量计费或不限制存储容量实例，该属性为 null。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_storageLimit;
                    bool m_storageLimitHasBeenSet;

                    /**
                     * 存储容量，单位为 GB。如果为按量计费或不限制存储容量实例，该属性为 null。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_storageLimitGB;
                    bool m_storageLimitGBHasBeenSet;

                    /**
                     * 是否过期隔离
                     */
                    bool m_isolated;
                    bool m_isolatedHasBeenSet;

                    /**
                     * 续费标识。0：手动续费；1：自动续费；2：到期不续。
                     */
                    uint64_t m_autoRenew;
                    bool m_autoRenewHasBeenSet;

                    /**
                     * 超级管理员账号，如果未选择查询实例绑定的超级管理员账号或当前实例未绑定超级管理员账号，则该属性为 null。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_superAdminAccount;
                    bool m_superAdminAccountHasBeenSet;

                    /**
                     * 自选桶模式下，展示存储桶使用
                     */
                    std::string m_bucket;
                    bool m_bucketHasBeenSet;

                    /**
                     * 自选桶模式下，展示日志桶使用
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_logBucket;
                    bool m_logBucketHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SMH_V20210712_MODEL_INSTANCE_H_
