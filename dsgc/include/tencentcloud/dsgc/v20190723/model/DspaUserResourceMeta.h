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

#ifndef TENCENTCLOUD_DSGC_V20190723_MODEL_DSPAUSERRESOURCEMETA_H_
#define TENCENTCLOUD_DSGC_V20190723_MODEL_DSPAUSERRESOURCEMETA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dsgc
    {
        namespace V20190723
        {
            namespace Model
            {
                /**
                * DSPA用户资源元信息
                */
                class DspaUserResourceMeta : public AbstractModel
                {
                public:
                    DspaUserResourceMeta();
                    ~DspaUserResourceMeta() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取用户资源ID。
                     * @return ResourceId 用户资源ID。
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置用户资源ID。
                     * @param _resourceId 用户资源ID。
                     * 
                     */
                    void SetResourceId(const std::string& _resourceId);

                    /**
                     * 判断参数 ResourceId 是否已赋值
                     * @return ResourceId 是否已赋值
                     * 
                     */
                    bool ResourceIdHasBeenSet() const;

                    /**
                     * 获取资源名称。
                     * @return ResourceName 资源名称。
                     * 
                     */
                    std::string GetResourceName() const;

                    /**
                     * 设置资源名称。
                     * @param _resourceName 资源名称。
                     * 
                     */
                    void SetResourceName(const std::string& _resourceName);

                    /**
                     * 判断参数 ResourceName 是否已赋值
                     * @return ResourceName 是否已赋值
                     * 
                     */
                    bool ResourceNameHasBeenSet() const;

                    /**
                     * 获取资源VIP。
                     * @return ResourceVip 资源VIP。
                     * 
                     */
                    std::string GetResourceVip() const;

                    /**
                     * 设置资源VIP。
                     * @param _resourceVip 资源VIP。
                     * 
                     */
                    void SetResourceVip(const std::string& _resourceVip);

                    /**
                     * 判断参数 ResourceVip 是否已赋值
                     * @return ResourceVip 是否已赋值
                     * 
                     */
                    bool ResourceVipHasBeenSet() const;

                    /**
                     * 获取资源端口。
                     * @return ResourceVPort 资源端口。
                     * 
                     */
                    uint64_t GetResourceVPort() const;

                    /**
                     * 设置资源端口。
                     * @param _resourceVPort 资源端口。
                     * 
                     */
                    void SetResourceVPort(const uint64_t& _resourceVPort);

                    /**
                     * 判断参数 ResourceVPort 是否已赋值
                     * @return ResourceVPort 是否已赋值
                     * 
                     */
                    bool ResourceVPortHasBeenSet() const;

                    /**
                     * 获取资源被创建时间。
                     * @return ResourceCreateTime 资源被创建时间。
                     * 
                     */
                    std::string GetResourceCreateTime() const;

                    /**
                     * 设置资源被创建时间。
                     * @param _resourceCreateTime 资源被创建时间。
                     * 
                     */
                    void SetResourceCreateTime(const std::string& _resourceCreateTime);

                    /**
                     * 判断参数 ResourceCreateTime 是否已赋值
                     * @return ResourceCreateTime 是否已赋值
                     * 
                     */
                    bool ResourceCreateTimeHasBeenSet() const;

                    /**
                     * 获取用户资源VPC ID 字符串。
                     * @return ResourceUniqueVpcId 用户资源VPC ID 字符串。
                     * 
                     */
                    std::string GetResourceUniqueVpcId() const;

                    /**
                     * 设置用户资源VPC ID 字符串。
                     * @param _resourceUniqueVpcId 用户资源VPC ID 字符串。
                     * 
                     */
                    void SetResourceUniqueVpcId(const std::string& _resourceUniqueVpcId);

                    /**
                     * 判断参数 ResourceUniqueVpcId 是否已赋值
                     * @return ResourceUniqueVpcId 是否已赋值
                     * 
                     */
                    bool ResourceUniqueVpcIdHasBeenSet() const;

                    /**
                     * 获取用户资源Subnet ID 字符串。
                     * @return ResourceUniqueSubnetId 用户资源Subnet ID 字符串。
                     * 
                     */
                    std::string GetResourceUniqueSubnetId() const;

                    /**
                     * 设置用户资源Subnet ID 字符串。
                     * @param _resourceUniqueSubnetId 用户资源Subnet ID 字符串。
                     * 
                     */
                    void SetResourceUniqueSubnetId(const std::string& _resourceUniqueSubnetId);

                    /**
                     * 判断参数 ResourceUniqueSubnetId 是否已赋值
                     * @return ResourceUniqueSubnetId 是否已赋值
                     * 
                     */
                    bool ResourceUniqueSubnetIdHasBeenSet() const;

                    /**
                     * 获取用户资源类型信息。
                     * @return MetaType 用户资源类型信息。
                     * 
                     */
                    std::string GetMetaType() const;

                    /**
                     * 设置用户资源类型信息。
                     * @param _metaType 用户资源类型信息。
                     * 
                     */
                    void SetMetaType(const std::string& _metaType);

                    /**
                     * 判断参数 MetaType 是否已赋值
                     * @return MetaType 是否已赋值
                     * 
                     */
                    bool MetaTypeHasBeenSet() const;

                    /**
                     * 获取资源所处地域。
                     * @return ResourceRegion 资源所处地域。
                     * 
                     */
                    std::string GetResourceRegion() const;

                    /**
                     * 设置资源所处地域。
                     * @param _resourceRegion 资源所处地域。
                     * 
                     */
                    void SetResourceRegion(const std::string& _resourceRegion);

                    /**
                     * 判断参数 ResourceRegion 是否已赋值
                     * @return ResourceRegion 是否已赋值
                     * 
                     */
                    bool ResourceRegionHasBeenSet() const;

                    /**
                     * 获取资源被同步时间。
                     * @return ResourceSyncTime 资源被同步时间。
                     * 
                     */
                    std::string GetResourceSyncTime() const;

                    /**
                     * 设置资源被同步时间。
                     * @param _resourceSyncTime 资源被同步时间。
                     * 
                     */
                    void SetResourceSyncTime(const std::string& _resourceSyncTime);

                    /**
                     * 判断参数 ResourceSyncTime 是否已赋值
                     * @return ResourceSyncTime 是否已赋值
                     * 
                     */
                    bool ResourceSyncTimeHasBeenSet() const;

                    /**
                     * 获取资源被授权状态。
                     * @return AuthStatus 资源被授权状态。
                     * 
                     */
                    std::string GetAuthStatus() const;

                    /**
                     * 设置资源被授权状态。
                     * @param _authStatus 资源被授权状态。
                     * 
                     */
                    void SetAuthStatus(const std::string& _authStatus);

                    /**
                     * 判断参数 AuthStatus 是否已赋值
                     * @return AuthStatus 是否已赋值
                     * 
                     */
                    bool AuthStatusHasBeenSet() const;

                    /**
                     * 获取资源创建类型，cloud-云原生资源，build-用户自建资源。
                     * @return BuildType 资源创建类型，cloud-云原生资源，build-用户自建资源。
                     * 
                     */
                    std::string GetBuildType() const;

                    /**
                     * 设置资源创建类型，cloud-云原生资源，build-用户自建资源。
                     * @param _buildType 资源创建类型，cloud-云原生资源，build-用户自建资源。
                     * 
                     */
                    void SetBuildType(const std::string& _buildType);

                    /**
                     * 判断参数 BuildType 是否已赋值
                     * @return BuildType 是否已赋值
                     * 
                     */
                    bool BuildTypeHasBeenSet() const;

                    /**
                     * 获取主实例ID。
                     * @return MasterInsId 主实例ID。
                     * 
                     */
                    std::string GetMasterInsId() const;

                    /**
                     * 设置主实例ID。
                     * @param _masterInsId 主实例ID。
                     * 
                     */
                    void SetMasterInsId(const std::string& _masterInsId);

                    /**
                     * 判断参数 MasterInsId 是否已赋值
                     * @return MasterInsId 是否已赋值
                     * 
                     */
                    bool MasterInsIdHasBeenSet() const;

                    /**
                     * 获取用户资源VPC ID 整数。
                     * @return ResourceVpcId 用户资源VPC ID 整数。
                     * 
                     */
                    uint64_t GetResourceVpcId() const;

                    /**
                     * 设置用户资源VPC ID 整数。
                     * @param _resourceVpcId 用户资源VPC ID 整数。
                     * 
                     */
                    void SetResourceVpcId(const uint64_t& _resourceVpcId);

                    /**
                     * 判断参数 ResourceVpcId 是否已赋值
                     * @return ResourceVpcId 是否已赋值
                     * 
                     */
                    bool ResourceVpcIdHasBeenSet() const;

                    /**
                     * 获取用户资源Subnet ID 整数。
                     * @return ResourceSubnetId 用户资源Subnet ID 整数。
                     * 
                     */
                    uint64_t GetResourceSubnetId() const;

                    /**
                     * 设置用户资源Subnet ID 整数。
                     * @param _resourceSubnetId 用户资源Subnet ID 整数。
                     * 
                     */
                    void SetResourceSubnetId(const uint64_t& _resourceSubnetId);

                    /**
                     * 判断参数 ResourceSubnetId 是否已赋值
                     * @return ResourceSubnetId 是否已赋值
                     * 
                     */
                    bool ResourceSubnetIdHasBeenSet() const;

                    /**
                     * 获取协议类型。
                     * @return Protocol 协议类型。
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置协议类型。
                     * @param _protocol 协议类型。
                     * 
                     */
                    void SetProtocol(const std::string& _protocol);

                    /**
                     * 判断参数 Protocol 是否已赋值
                     * @return Protocol 是否已赋值
                     * 
                     */
                    bool ProtocolHasBeenSet() const;

                    /**
                     * 获取资源版本号。
                     * @return ResourceVersion 资源版本号。
                     * 
                     */
                    std::string GetResourceVersion() const;

                    /**
                     * 设置资源版本号。
                     * @param _resourceVersion 资源版本号。
                     * 
                     */
                    void SetResourceVersion(const std::string& _resourceVersion);

                    /**
                     * 判断参数 ResourceVersion 是否已赋值
                     * @return ResourceVersion 是否已赋值
                     * 
                     */
                    bool ResourceVersionHasBeenSet() const;

                    /**
                     * 获取授权方式
                     * @return ResourceAuthType 授权方式
                     * 
                     */
                    std::string GetResourceAuthType() const;

                    /**
                     * 设置授权方式
                     * @param _resourceAuthType 授权方式
                     * 
                     */
                    void SetResourceAuthType(const std::string& _resourceAuthType);

                    /**
                     * 判断参数 ResourceAuthType 是否已赋值
                     * @return ResourceAuthType 是否已赋值
                     * 
                     */
                    bool ResourceAuthTypeHasBeenSet() const;

                    /**
                     * 获取授权账号名
                     * @return ResourceAuthAccount 授权账号名
                     * 
                     */
                    std::string GetResourceAuthAccount() const;

                    /**
                     * 设置授权账号名
                     * @param _resourceAuthAccount 授权账号名
                     * 
                     */
                    void SetResourceAuthAccount(const std::string& _resourceAuthAccount);

                    /**
                     * 判断参数 ResourceAuthAccount 是否已赋值
                     * @return ResourceAuthAccount 是否已赋值
                     * 
                     */
                    bool ResourceAuthAccountHasBeenSet() const;

                    /**
                     * 获取实例类型
                     * @return InstanceType 实例类型
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置实例类型
                     * @param _instanceType 实例类型
                     * 
                     */
                    void SetInstanceType(const std::string& _instanceType);

                    /**
                     * 判断参数 InstanceType 是否已赋值
                     * @return InstanceType 是否已赋值
                     * 
                     */
                    bool InstanceTypeHasBeenSet() const;

                    /**
                     * 获取实例值
                     * @return InstanceValue 实例值
                     * 
                     */
                    std::string GetInstanceValue() const;

                    /**
                     * 设置实例值
                     * @param _instanceValue 实例值
                     * 
                     */
                    void SetInstanceValue(const std::string& _instanceValue);

                    /**
                     * 判断参数 InstanceValue 是否已赋值
                     * @return InstanceValue 是否已赋值
                     * 
                     */
                    bool InstanceValueHasBeenSet() const;

                    /**
                     * 获取//治理授权状态（0：关闭 1：开启）
                     * @return GovernAuthStatus //治理授权状态（0：关闭 1：开启）
                     * 
                     */
                    int64_t GetGovernAuthStatus() const;

                    /**
                     * 设置//治理授权状态（0：关闭 1：开启）
                     * @param _governAuthStatus //治理授权状态（0：关闭 1：开启）
                     * 
                     */
                    void SetGovernAuthStatus(const int64_t& _governAuthStatus);

                    /**
                     * 判断参数 GovernAuthStatus 是否已赋值
                     * @return GovernAuthStatus 是否已赋值
                     * 
                     */
                    bool GovernAuthStatusHasBeenSet() const;

                    /**
                     * 获取授权范围：all - 授权整个数据源 manual:手动指定数据源
                     * @return AuthRange 授权范围：all - 授权整个数据源 manual:手动指定数据源
                     * 
                     */
                    std::string GetAuthRange() const;

                    /**
                     * 设置授权范围：all - 授权整个数据源 manual:手动指定数据源
                     * @param _authRange 授权范围：all - 授权整个数据源 manual:手动指定数据源
                     * 
                     */
                    void SetAuthRange(const std::string& _authRange);

                    /**
                     * 判断参数 AuthRange 是否已赋值
                     * @return AuthRange 是否已赋值
                     * 
                     */
                    bool AuthRangeHasBeenSet() const;

                private:

                    /**
                     * 用户资源ID。
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * 资源名称。
                     */
                    std::string m_resourceName;
                    bool m_resourceNameHasBeenSet;

                    /**
                     * 资源VIP。
                     */
                    std::string m_resourceVip;
                    bool m_resourceVipHasBeenSet;

                    /**
                     * 资源端口。
                     */
                    uint64_t m_resourceVPort;
                    bool m_resourceVPortHasBeenSet;

                    /**
                     * 资源被创建时间。
                     */
                    std::string m_resourceCreateTime;
                    bool m_resourceCreateTimeHasBeenSet;

                    /**
                     * 用户资源VPC ID 字符串。
                     */
                    std::string m_resourceUniqueVpcId;
                    bool m_resourceUniqueVpcIdHasBeenSet;

                    /**
                     * 用户资源Subnet ID 字符串。
                     */
                    std::string m_resourceUniqueSubnetId;
                    bool m_resourceUniqueSubnetIdHasBeenSet;

                    /**
                     * 用户资源类型信息。
                     */
                    std::string m_metaType;
                    bool m_metaTypeHasBeenSet;

                    /**
                     * 资源所处地域。
                     */
                    std::string m_resourceRegion;
                    bool m_resourceRegionHasBeenSet;

                    /**
                     * 资源被同步时间。
                     */
                    std::string m_resourceSyncTime;
                    bool m_resourceSyncTimeHasBeenSet;

                    /**
                     * 资源被授权状态。
                     */
                    std::string m_authStatus;
                    bool m_authStatusHasBeenSet;

                    /**
                     * 资源创建类型，cloud-云原生资源，build-用户自建资源。
                     */
                    std::string m_buildType;
                    bool m_buildTypeHasBeenSet;

                    /**
                     * 主实例ID。
                     */
                    std::string m_masterInsId;
                    bool m_masterInsIdHasBeenSet;

                    /**
                     * 用户资源VPC ID 整数。
                     */
                    uint64_t m_resourceVpcId;
                    bool m_resourceVpcIdHasBeenSet;

                    /**
                     * 用户资源Subnet ID 整数。
                     */
                    uint64_t m_resourceSubnetId;
                    bool m_resourceSubnetIdHasBeenSet;

                    /**
                     * 协议类型。
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * 资源版本号。
                     */
                    std::string m_resourceVersion;
                    bool m_resourceVersionHasBeenSet;

                    /**
                     * 授权方式
                     */
                    std::string m_resourceAuthType;
                    bool m_resourceAuthTypeHasBeenSet;

                    /**
                     * 授权账号名
                     */
                    std::string m_resourceAuthAccount;
                    bool m_resourceAuthAccountHasBeenSet;

                    /**
                     * 实例类型
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * 实例值
                     */
                    std::string m_instanceValue;
                    bool m_instanceValueHasBeenSet;

                    /**
                     * //治理授权状态（0：关闭 1：开启）
                     */
                    int64_t m_governAuthStatus;
                    bool m_governAuthStatusHasBeenSet;

                    /**
                     * 授权范围：all - 授权整个数据源 manual:手动指定数据源
                     */
                    std::string m_authRange;
                    bool m_authRangeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DSGC_V20190723_MODEL_DSPAUSERRESOURCEMETA_H_
