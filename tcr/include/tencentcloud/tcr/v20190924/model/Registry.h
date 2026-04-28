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
                     * 获取<p>实例ID</p>
                     * @return RegistryId <p>实例ID</p>
                     * 
                     */
                    std::string GetRegistryId() const;

                    /**
                     * 设置<p>实例ID</p>
                     * @param _registryId <p>实例ID</p>
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
                     * 获取<p>实例名称</p>
                     * @return RegistryName <p>实例名称</p>
                     * 
                     */
                    std::string GetRegistryName() const;

                    /**
                     * 设置<p>实例名称</p>
                     * @param _registryName <p>实例名称</p>
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
                     * 获取<p>实例规格</p>
                     * @return RegistryType <p>实例规格</p>
                     * 
                     */
                    std::string GetRegistryType() const;

                    /**
                     * 设置<p>实例规格</p>
                     * @param _registryType <p>实例规格</p>
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
                     * 获取<p>实例状态。有以下状态：<br>Pending, 初始化中<br>Deploying, 创建中<br>Running, 运行中<br>Unhealthy, 状态异常<br>FailedCreated, 创建失败<br>FailedUpdated, 更新失败<br>Bucket-Error, 存储桶异常<br>Isolate, 待回收<br>Deleting, 删除中<br>DeleteBucketFailed, 实例删除存储桶失败<br>DeleteFailed, 实例删除失败</p>
                     * @return Status <p>实例状态。有以下状态：<br>Pending, 初始化中<br>Deploying, 创建中<br>Running, 运行中<br>Unhealthy, 状态异常<br>FailedCreated, 创建失败<br>FailedUpdated, 更新失败<br>Bucket-Error, 存储桶异常<br>Isolate, 待回收<br>Deleting, 删除中<br>DeleteBucketFailed, 实例删除存储桶失败<br>DeleteFailed, 实例删除失败</p>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>实例状态。有以下状态：<br>Pending, 初始化中<br>Deploying, 创建中<br>Running, 运行中<br>Unhealthy, 状态异常<br>FailedCreated, 创建失败<br>FailedUpdated, 更新失败<br>Bucket-Error, 存储桶异常<br>Isolate, 待回收<br>Deleting, 删除中<br>DeleteBucketFailed, 实例删除存储桶失败<br>DeleteFailed, 实例删除失败</p>
                     * @param _status <p>实例状态。有以下状态：<br>Pending, 初始化中<br>Deploying, 创建中<br>Running, 运行中<br>Unhealthy, 状态异常<br>FailedCreated, 创建失败<br>FailedUpdated, 更新失败<br>Bucket-Error, 存储桶异常<br>Isolate, 待回收<br>Deleting, 删除中<br>DeleteBucketFailed, 实例删除存储桶失败<br>DeleteFailed, 实例删除失败</p>
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
                     * 获取<p>实例的公共访问地址</p>
                     * @return PublicDomain <p>实例的公共访问地址</p>
                     * 
                     */
                    std::string GetPublicDomain() const;

                    /**
                     * 设置<p>实例的公共访问地址</p>
                     * @param _publicDomain <p>实例的公共访问地址</p>
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
                     * 获取<p>实例创建时间</p>
                     * @return CreatedAt <p>实例创建时间</p>
                     * 
                     */
                    std::string GetCreatedAt() const;

                    /**
                     * 设置<p>实例创建时间</p>
                     * @param _createdAt <p>实例创建时间</p>
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
                     * 获取<p>地域名称</p>
                     * @return RegionName <p>地域名称</p>
                     * 
                     */
                    std::string GetRegionName() const;

                    /**
                     * 设置<p>地域名称</p>
                     * @param _regionName <p>地域名称</p>
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
                     * 获取<p>地域Id</p>
                     * @return RegionId <p>地域Id</p>
                     * 
                     */
                    uint64_t GetRegionId() const;

                    /**
                     * 设置<p>地域Id</p>
                     * @param _regionId <p>地域Id</p>
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
                     * 获取<p>是否支持匿名</p>
                     * @return EnableAnonymous <p>是否支持匿名</p>
                     * 
                     */
                    bool GetEnableAnonymous() const;

                    /**
                     * 设置<p>是否支持匿名</p>
                     * @param _enableAnonymous <p>是否支持匿名</p>
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
                     * 获取<p>Token有效时间</p>
                     * @return TokenValidTime <p>Token有效时间</p>
                     * 
                     */
                    uint64_t GetTokenValidTime() const;

                    /**
                     * 设置<p>Token有效时间</p>
                     * @param _tokenValidTime <p>Token有效时间</p>
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
                     * 获取<p>实例内部访问地址</p>
                     * @return InternalEndpoint <p>实例内部访问地址</p>
                     * 
                     */
                    std::string GetInternalEndpoint() const;

                    /**
                     * 设置<p>实例内部访问地址</p>
                     * @param _internalEndpoint <p>实例内部访问地址</p>
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
                     * 获取<p>实例云标签</p>
                     * @return TagSpecification <p>实例云标签</p>
                     * 
                     */
                    TagSpecification GetTagSpecification() const;

                    /**
                     * 设置<p>实例云标签</p>
                     * @param _tagSpecification <p>实例云标签</p>
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
                     * 获取<p>实例过期时间（预付费）</p>
                     * @return ExpiredAt <p>实例过期时间（预付费）</p>
                     * 
                     */
                    std::string GetExpiredAt() const;

                    /**
                     * 设置<p>实例过期时间（预付费）</p>
                     * @param _expiredAt <p>实例过期时间（预付费）</p>
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
                     * 获取<p>实例付费类型，0表示后付费，1表示预付费</p>
                     * @return PayMod <p>实例付费类型，0表示后付费，1表示预付费</p>
                     * 
                     */
                    int64_t GetPayMod() const;

                    /**
                     * 设置<p>实例付费类型，0表示后付费，1表示预付费</p>
                     * @param _payMod <p>实例付费类型，0表示后付费，1表示预付费</p>
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
                     * 获取<p>预付费续费标识，0表示手动续费，1表示自动续费，2不续费并且不通知</p>
                     * @return RenewFlag <p>预付费续费标识，0表示手动续费，1表示自动续费，2不续费并且不通知</p>
                     * 
                     */
                    int64_t GetRenewFlag() const;

                    /**
                     * 设置<p>预付费续费标识，0表示手动续费，1表示自动续费，2不续费并且不通知</p>
                     * @param _renewFlag <p>预付费续费标识，0表示手动续费，1表示自动续费，2不续费并且不通知</p>
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
                     * 获取<p>是否开启实例删除保护，false表示不开启</p>
                     * @return DeletionProtection <p>是否开启实例删除保护，false表示不开启</p>
                     * 
                     */
                    bool GetDeletionProtection() const;

                    /**
                     * 设置<p>是否开启实例删除保护，false表示不开启</p>
                     * @param _deletionProtection <p>是否开启实例删除保护，false表示不开启</p>
                     * 
                     */
                    void SetDeletionProtection(const bool& _deletionProtection);

                    /**
                     * 判断参数 DeletionProtection 是否已赋值
                     * @return DeletionProtection 是否已赋值
                     * 
                     */
                    bool DeletionProtectionHasBeenSet() const;

                    /**
                     * 获取<p>是否支持AI特性</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AIFeature <p>是否支持AI特性</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetAIFeature() const;

                    /**
                     * 设置<p>是否支持AI特性</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _aIFeature <p>是否支持AI特性</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAIFeature(const bool& _aIFeature);

                    /**
                     * 判断参数 AIFeature 是否已赋值
                     * @return AIFeature 是否已赋值
                     * 
                     */
                    bool AIFeatureHasBeenSet() const;

                    /**
                     * 获取<p>cos桶是否开启多AZ特性</p>
                     * @return EnableCosMAZ <p>cos桶是否开启多AZ特性</p>
                     * 
                     */
                    bool GetEnableCosMAZ() const;

                    /**
                     * 设置<p>cos桶是否开启多AZ特性</p>
                     * @param _enableCosMAZ <p>cos桶是否开启多AZ特性</p>
                     * 
                     */
                    void SetEnableCosMAZ(const bool& _enableCosMAZ);

                    /**
                     * 判断参数 EnableCosMAZ 是否已赋值
                     * @return EnableCosMAZ 是否已赋值
                     * 
                     */
                    bool EnableCosMAZHasBeenSet() const;

                    /**
                     * 获取<p>cos桶是否开启版本控制</p>
                     * @return EnableCosVersioning <p>cos桶是否开启版本控制</p>
                     * 
                     */
                    bool GetEnableCosVersioning() const;

                    /**
                     * 设置<p>cos桶是否开启版本控制</p>
                     * @param _enableCosVersioning <p>cos桶是否开启版本控制</p>
                     * 
                     */
                    void SetEnableCosVersioning(const bool& _enableCosVersioning);

                    /**
                     * 判断参数 EnableCosVersioning 是否已赋值
                     * @return EnableCosVersioning 是否已赋值
                     * 
                     */
                    bool EnableCosVersioningHasBeenSet() const;

                private:

                    /**
                     * <p>实例ID</p>
                     */
                    std::string m_registryId;
                    bool m_registryIdHasBeenSet;

                    /**
                     * <p>实例名称</p>
                     */
                    std::string m_registryName;
                    bool m_registryNameHasBeenSet;

                    /**
                     * <p>实例规格</p>
                     */
                    std::string m_registryType;
                    bool m_registryTypeHasBeenSet;

                    /**
                     * <p>实例状态。有以下状态：<br>Pending, 初始化中<br>Deploying, 创建中<br>Running, 运行中<br>Unhealthy, 状态异常<br>FailedCreated, 创建失败<br>FailedUpdated, 更新失败<br>Bucket-Error, 存储桶异常<br>Isolate, 待回收<br>Deleting, 删除中<br>DeleteBucketFailed, 实例删除存储桶失败<br>DeleteFailed, 实例删除失败</p>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>实例的公共访问地址</p>
                     */
                    std::string m_publicDomain;
                    bool m_publicDomainHasBeenSet;

                    /**
                     * <p>实例创建时间</p>
                     */
                    std::string m_createdAt;
                    bool m_createdAtHasBeenSet;

                    /**
                     * <p>地域名称</p>
                     */
                    std::string m_regionName;
                    bool m_regionNameHasBeenSet;

                    /**
                     * <p>地域Id</p>
                     */
                    uint64_t m_regionId;
                    bool m_regionIdHasBeenSet;

                    /**
                     * <p>是否支持匿名</p>
                     */
                    bool m_enableAnonymous;
                    bool m_enableAnonymousHasBeenSet;

                    /**
                     * <p>Token有效时间</p>
                     */
                    uint64_t m_tokenValidTime;
                    bool m_tokenValidTimeHasBeenSet;

                    /**
                     * <p>实例内部访问地址</p>
                     */
                    std::string m_internalEndpoint;
                    bool m_internalEndpointHasBeenSet;

                    /**
                     * <p>实例云标签</p>
                     */
                    TagSpecification m_tagSpecification;
                    bool m_tagSpecificationHasBeenSet;

                    /**
                     * <p>实例过期时间（预付费）</p>
                     */
                    std::string m_expiredAt;
                    bool m_expiredAtHasBeenSet;

                    /**
                     * <p>实例付费类型，0表示后付费，1表示预付费</p>
                     */
                    int64_t m_payMod;
                    bool m_payModHasBeenSet;

                    /**
                     * <p>预付费续费标识，0表示手动续费，1表示自动续费，2不续费并且不通知</p>
                     */
                    int64_t m_renewFlag;
                    bool m_renewFlagHasBeenSet;

                    /**
                     * <p>是否开启实例删除保护，false表示不开启</p>
                     */
                    bool m_deletionProtection;
                    bool m_deletionProtectionHasBeenSet;

                    /**
                     * <p>是否支持AI特性</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_aIFeature;
                    bool m_aIFeatureHasBeenSet;

                    /**
                     * <p>cos桶是否开启多AZ特性</p>
                     */
                    bool m_enableCosMAZ;
                    bool m_enableCosMAZHasBeenSet;

                    /**
                     * <p>cos桶是否开启版本控制</p>
                     */
                    bool m_enableCosVersioning;
                    bool m_enableCosVersioningHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCR_V20190924_MODEL_REGISTRY_H_
