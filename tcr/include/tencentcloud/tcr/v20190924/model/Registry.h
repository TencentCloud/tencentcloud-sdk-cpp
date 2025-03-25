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

#ifndef TENCENTCLOUD_TCR_V20190924_MODEL_REGISTRY_H_
#define TENCENTCLOUD_TCR_V20190924_MODEL_REGISTRY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcr/v20190924/model/TagSpecification.h>


namespace TencentCloud
{
    namespace Tcr
    {
        namespace V20190924
        {
            namespace Model
            {
                /**
                * 实例信息结构体
                */
                class Registry : public AbstractModel
                {
                public:
                    Registry();
                    ~Registry() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取实例ID
                     * @return RegistryId 实例ID
                     * 
                     */
                    std::string GetRegistryId() const;

                    /**
                     * 设置实例ID
                     * @param _registryId 实例ID
                     * 
                     */
                    void SetRegistryId(const std::string& _registryId);

                    /**
                     * 判断参数 RegistryId 是否已赋值
                     * @return RegistryId 是否已赋值
                     * 
                     */
                    bool RegistryIdHasBeenSet() const;

                    /**
                     * 获取实例名称
                     * @return RegistryName 实例名称
                     * 
                     */
                    std::string GetRegistryName() const;

                    /**
                     * 设置实例名称
                     * @param _registryName 实例名称
                     * 
                     */
                    void SetRegistryName(const std::string& _registryName);

                    /**
                     * 判断参数 RegistryName 是否已赋值
                     * @return RegistryName 是否已赋值
                     * 
                     */
                    bool RegistryNameHasBeenSet() const;

                    /**
                     * 获取实例规格
                     * @return RegistryType 实例规格
                     * 
                     */
                    std::string GetRegistryType() const;

                    /**
                     * 设置实例规格
                     * @param _registryType 实例规格
                     * 
                     */
                    void SetRegistryType(const std::string& _registryType);

                    /**
                     * 判断参数 RegistryType 是否已赋值
                     * @return RegistryType 是否已赋值
                     * 
                     */
                    bool RegistryTypeHasBeenSet() const;

                    /**
                     * 获取实例状态。有以下状态：
Pending, 初始化中
Deploying, 创建中
Running, 运行中
Unhealthy, 状态异常
FailedCreated, 创建失败
FailedUpdated, 更新失败
Bucket-Error, 存储桶异常
Isolate, 待回收
Deleting, 删除中
DeleteBucketFailed, 实例删除存储桶失败
DeleteFailed, 实例删除失败
                     * @return Status 实例状态。有以下状态：
Pending, 初始化中
Deploying, 创建中
Running, 运行中
Unhealthy, 状态异常
FailedCreated, 创建失败
FailedUpdated, 更新失败
Bucket-Error, 存储桶异常
Isolate, 待回收
Deleting, 删除中
DeleteBucketFailed, 实例删除存储桶失败
DeleteFailed, 实例删除失败
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置实例状态。有以下状态：
Pending, 初始化中
Deploying, 创建中
Running, 运行中
Unhealthy, 状态异常
FailedCreated, 创建失败
FailedUpdated, 更新失败
Bucket-Error, 存储桶异常
Isolate, 待回收
Deleting, 删除中
DeleteBucketFailed, 实例删除存储桶失败
DeleteFailed, 实例删除失败
                     * @param _status 实例状态。有以下状态：
Pending, 初始化中
Deploying, 创建中
Running, 运行中
Unhealthy, 状态异常
FailedCreated, 创建失败
FailedUpdated, 更新失败
Bucket-Error, 存储桶异常
Isolate, 待回收
Deleting, 删除中
DeleteBucketFailed, 实例删除存储桶失败
DeleteFailed, 实例删除失败
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取实例的公共访问地址
                     * @return PublicDomain 实例的公共访问地址
                     * 
                     */
                    std::string GetPublicDomain() const;

                    /**
                     * 设置实例的公共访问地址
                     * @param _publicDomain 实例的公共访问地址
                     * 
                     */
                    void SetPublicDomain(const std::string& _publicDomain);

                    /**
                     * 判断参数 PublicDomain 是否已赋值
                     * @return PublicDomain 是否已赋值
                     * 
                     */
                    bool PublicDomainHasBeenSet() const;

                    /**
                     * 获取实例创建时间
                     * @return CreatedAt 实例创建时间
                     * 
                     */
                    std::string GetCreatedAt() const;

                    /**
                     * 设置实例创建时间
                     * @param _createdAt 实例创建时间
                     * 
                     */
                    void SetCreatedAt(const std::string& _createdAt);

                    /**
                     * 判断参数 CreatedAt 是否已赋值
                     * @return CreatedAt 是否已赋值
                     * 
                     */
                    bool CreatedAtHasBeenSet() const;

                    /**
                     * 获取地域名称
                     * @return RegionName 地域名称
                     * 
                     */
                    std::string GetRegionName() const;

                    /**
                     * 设置地域名称
                     * @param _regionName 地域名称
                     * 
                     */
                    void SetRegionName(const std::string& _regionName);

                    /**
                     * 判断参数 RegionName 是否已赋值
                     * @return RegionName 是否已赋值
                     * 
                     */
                    bool RegionNameHasBeenSet() const;

                    /**
                     * 获取地域Id
                     * @return RegionId 地域Id
                     * 
                     */
                    uint64_t GetRegionId() const;

                    /**
                     * 设置地域Id
                     * @param _regionId 地域Id
                     * 
                     */
                    void SetRegionId(const uint64_t& _regionId);

                    /**
                     * 判断参数 RegionId 是否已赋值
                     * @return RegionId 是否已赋值
                     * 
                     */
                    bool RegionIdHasBeenSet() const;

                    /**
                     * 获取是否支持匿名
                     * @return EnableAnonymous 是否支持匿名
                     * 
                     */
                    bool GetEnableAnonymous() const;

                    /**
                     * 设置是否支持匿名
                     * @param _enableAnonymous 是否支持匿名
                     * 
                     */
                    void SetEnableAnonymous(const bool& _enableAnonymous);

                    /**
                     * 判断参数 EnableAnonymous 是否已赋值
                     * @return EnableAnonymous 是否已赋值
                     * 
                     */
                    bool EnableAnonymousHasBeenSet() const;

                    /**
                     * 获取Token有效时间
                     * @return TokenValidTime Token有效时间
                     * 
                     */
                    uint64_t GetTokenValidTime() const;

                    /**
                     * 设置Token有效时间
                     * @param _tokenValidTime Token有效时间
                     * 
                     */
                    void SetTokenValidTime(const uint64_t& _tokenValidTime);

                    /**
                     * 判断参数 TokenValidTime 是否已赋值
                     * @return TokenValidTime 是否已赋值
                     * 
                     */
                    bool TokenValidTimeHasBeenSet() const;

                    /**
                     * 获取实例内部访问地址
                     * @return InternalEndpoint 实例内部访问地址
                     * 
                     */
                    std::string GetInternalEndpoint() const;

                    /**
                     * 设置实例内部访问地址
                     * @param _internalEndpoint 实例内部访问地址
                     * 
                     */
                    void SetInternalEndpoint(const std::string& _internalEndpoint);

                    /**
                     * 判断参数 InternalEndpoint 是否已赋值
                     * @return InternalEndpoint 是否已赋值
                     * 
                     */
                    bool InternalEndpointHasBeenSet() const;

                    /**
                     * 获取实例云标签
                     * @return TagSpecification 实例云标签
                     * 
                     */
                    TagSpecification GetTagSpecification() const;

                    /**
                     * 设置实例云标签
                     * @param _tagSpecification 实例云标签
                     * 
                     */
                    void SetTagSpecification(const TagSpecification& _tagSpecification);

                    /**
                     * 判断参数 TagSpecification 是否已赋值
                     * @return TagSpecification 是否已赋值
                     * 
                     */
                    bool TagSpecificationHasBeenSet() const;

                    /**
                     * 获取实例过期时间（预付费）
                     * @return ExpiredAt 实例过期时间（预付费）
                     * 
                     */
                    std::string GetExpiredAt() const;

                    /**
                     * 设置实例过期时间（预付费）
                     * @param _expiredAt 实例过期时间（预付费）
                     * 
                     */
                    void SetExpiredAt(const std::string& _expiredAt);

                    /**
                     * 判断参数 ExpiredAt 是否已赋值
                     * @return ExpiredAt 是否已赋值
                     * 
                     */
                    bool ExpiredAtHasBeenSet() const;

                    /**
                     * 获取实例付费类型，0表示后付费，1表示预付费
                     * @return PayMod 实例付费类型，0表示后付费，1表示预付费
                     * 
                     */
                    int64_t GetPayMod() const;

                    /**
                     * 设置实例付费类型，0表示后付费，1表示预付费
                     * @param _payMod 实例付费类型，0表示后付费，1表示预付费
                     * 
                     */
                    void SetPayMod(const int64_t& _payMod);

                    /**
                     * 判断参数 PayMod 是否已赋值
                     * @return PayMod 是否已赋值
                     * 
                     */
                    bool PayModHasBeenSet() const;

                    /**
                     * 获取预付费续费标识，0表示手动续费，1表示自动续费，2不续费并且不通知
                     * @return RenewFlag 预付费续费标识，0表示手动续费，1表示自动续费，2不续费并且不通知
                     * 
                     */
                    int64_t GetRenewFlag() const;

                    /**
                     * 设置预付费续费标识，0表示手动续费，1表示自动续费，2不续费并且不通知
                     * @param _renewFlag 预付费续费标识，0表示手动续费，1表示自动续费，2不续费并且不通知
                     * 
                     */
                    void SetRenewFlag(const int64_t& _renewFlag);

                    /**
                     * 判断参数 RenewFlag 是否已赋值
                     * @return RenewFlag 是否已赋值
                     * 
                     */
                    bool RenewFlagHasBeenSet() const;

                    /**
                     * 获取是否开启实例删除保护，false表示不开启
                     * @return DeletionProtection 是否开启实例删除保护，false表示不开启
                     * 
                     */
                    bool GetDeletionProtection() const;

                    /**
                     * 设置是否开启实例删除保护，false表示不开启
                     * @param _deletionProtection 是否开启实例删除保护，false表示不开启
                     * 
                     */
                    void SetDeletionProtection(const bool& _deletionProtection);

                    /**
                     * 判断参数 DeletionProtection 是否已赋值
                     * @return DeletionProtection 是否已赋值
                     * 
                     */
                    bool DeletionProtectionHasBeenSet() const;

                private:

                    /**
                     * 实例ID
                     */
                    std::string m_registryId;
                    bool m_registryIdHasBeenSet;

                    /**
                     * 实例名称
                     */
                    std::string m_registryName;
                    bool m_registryNameHasBeenSet;

                    /**
                     * 实例规格
                     */
                    std::string m_registryType;
                    bool m_registryTypeHasBeenSet;

                    /**
                     * 实例状态。有以下状态：
Pending, 初始化中
Deploying, 创建中
Running, 运行中
Unhealthy, 状态异常
FailedCreated, 创建失败
FailedUpdated, 更新失败
Bucket-Error, 存储桶异常
Isolate, 待回收
Deleting, 删除中
DeleteBucketFailed, 实例删除存储桶失败
DeleteFailed, 实例删除失败
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 实例的公共访问地址
                     */
                    std::string m_publicDomain;
                    bool m_publicDomainHasBeenSet;

                    /**
                     * 实例创建时间
                     */
                    std::string m_createdAt;
                    bool m_createdAtHasBeenSet;

                    /**
                     * 地域名称
                     */
                    std::string m_regionName;
                    bool m_regionNameHasBeenSet;

                    /**
                     * 地域Id
                     */
                    uint64_t m_regionId;
                    bool m_regionIdHasBeenSet;

                    /**
                     * 是否支持匿名
                     */
                    bool m_enableAnonymous;
                    bool m_enableAnonymousHasBeenSet;

                    /**
                     * Token有效时间
                     */
                    uint64_t m_tokenValidTime;
                    bool m_tokenValidTimeHasBeenSet;

                    /**
                     * 实例内部访问地址
                     */
                    std::string m_internalEndpoint;
                    bool m_internalEndpointHasBeenSet;

                    /**
                     * 实例云标签
                     */
                    TagSpecification m_tagSpecification;
                    bool m_tagSpecificationHasBeenSet;

                    /**
                     * 实例过期时间（预付费）
                     */
                    std::string m_expiredAt;
                    bool m_expiredAtHasBeenSet;

                    /**
                     * 实例付费类型，0表示后付费，1表示预付费
                     */
                    int64_t m_payMod;
                    bool m_payModHasBeenSet;

                    /**
                     * 预付费续费标识，0表示手动续费，1表示自动续费，2不续费并且不通知
                     */
                    int64_t m_renewFlag;
                    bool m_renewFlagHasBeenSet;

                    /**
                     * 是否开启实例删除保护，false表示不开启
                     */
                    bool m_deletionProtection;
                    bool m_deletionProtectionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCR_V20190924_MODEL_REGISTRY_H_
