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

#ifndef TENCENTCLOUD_TEM_V20210701_MODEL_TEMNAMESPACEINFO_H_
#define TENCENTCLOUD_TEM_V20210701_MODEL_TEMNAMESPACEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tem/v20210701/model/Tag.h>


namespace TencentCloud
{
    namespace Tem
    {
        namespace V20210701
        {
            namespace Model
            {
                /**
                * 命名空间对象
                */
                class TemNamespaceInfo : public AbstractModel
                {
                public:
                    TemNamespaceInfo();
                    ~TemNamespaceInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取环境id
                     * @return EnvironmentId 环境id
                     * 
                     */
                    std::string GetEnvironmentId() const;

                    /**
                     * 设置环境id
                     * @param _environmentId 环境id
                     * 
                     */
                    void SetEnvironmentId(const std::string& _environmentId);

                    /**
                     * 判断参数 EnvironmentId 是否已赋值
                     * @return EnvironmentId 是否已赋值
                     * 
                     */
                    bool EnvironmentIdHasBeenSet() const;

                    /**
                     * 获取渠道
                     * @return Channel 渠道
                     * 
                     */
                    std::string GetChannel() const;

                    /**
                     * 设置渠道
                     * @param _channel 渠道
                     * 
                     */
                    void SetChannel(const std::string& _channel);

                    /**
                     * 判断参数 Channel 是否已赋值
                     * @return Channel 是否已赋值
                     * 
                     */
                    bool ChannelHasBeenSet() const;

                    /**
                     * 获取环境名称
                     * @return EnvironmentName 环境名称
                     * 
                     */
                    std::string GetEnvironmentName() const;

                    /**
                     * 设置环境名称
                     * @param _environmentName 环境名称
                     * 
                     */
                    void SetEnvironmentName(const std::string& _environmentName);

                    /**
                     * 判断参数 EnvironmentName 是否已赋值
                     * @return EnvironmentName 是否已赋值
                     * 
                     */
                    bool EnvironmentNameHasBeenSet() const;

                    /**
                     * 获取区域名称
                     * @return Region 区域名称
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置区域名称
                     * @param _region 区域名称
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
                     * 获取环境描述
                     * @return Description 环境描述
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置环境描述
                     * @param _description 环境描述
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取状态,1:已销毁;0:正常
                     * @return Status 状态,1:已销毁;0:正常
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置状态,1:已销毁;0:正常
                     * @param _status 状态,1:已销毁;0:正常
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
                     * 获取vpc网络
                     * @return Vpc vpc网络
                     * 
                     */
                    std::string GetVpc() const;

                    /**
                     * 设置vpc网络
                     * @param _vpc vpc网络
                     * 
                     */
                    void SetVpc(const std::string& _vpc);

                    /**
                     * 判断参数 Vpc 是否已赋值
                     * @return Vpc 是否已赋值
                     * 
                     */
                    bool VpcHasBeenSet() const;

                    /**
                     * 获取创建时间
                     * @return CreateDate 创建时间
                     * 
                     */
                    std::string GetCreateDate() const;

                    /**
                     * 设置创建时间
                     * @param _createDate 创建时间
                     * 
                     */
                    void SetCreateDate(const std::string& _createDate);

                    /**
                     * 判断参数 CreateDate 是否已赋值
                     * @return CreateDate 是否已赋值
                     * 
                     */
                    bool CreateDateHasBeenSet() const;

                    /**
                     * 获取修改时间
                     * @return ModifyDate 修改时间
                     * 
                     */
                    std::string GetModifyDate() const;

                    /**
                     * 设置修改时间
                     * @param _modifyDate 修改时间
                     * 
                     */
                    void SetModifyDate(const std::string& _modifyDate);

                    /**
                     * 判断参数 ModifyDate 是否已赋值
                     * @return ModifyDate 是否已赋值
                     * 
                     */
                    bool ModifyDateHasBeenSet() const;

                    /**
                     * 获取修改人
                     * @return Modifier 修改人
                     * 
                     */
                    std::string GetModifier() const;

                    /**
                     * 设置修改人
                     * @param _modifier 修改人
                     * 
                     */
                    void SetModifier(const std::string& _modifier);

                    /**
                     * 判断参数 Modifier 是否已赋值
                     * @return Modifier 是否已赋值
                     * 
                     */
                    bool ModifierHasBeenSet() const;

                    /**
                     * 获取创建人
                     * @return Creator 创建人
                     * 
                     */
                    std::string GetCreator() const;

                    /**
                     * 设置创建人
                     * @param _creator 创建人
                     * 
                     */
                    void SetCreator(const std::string& _creator);

                    /**
                     * 判断参数 Creator 是否已赋值
                     * @return Creator 是否已赋值
                     * 
                     */
                    bool CreatorHasBeenSet() const;

                    /**
                     * 获取应用数
                     * @return ApplicationNum 应用数
                     * 
                     */
                    int64_t GetApplicationNum() const;

                    /**
                     * 设置应用数
                     * @param _applicationNum 应用数
                     * 
                     */
                    void SetApplicationNum(const int64_t& _applicationNum);

                    /**
                     * 判断参数 ApplicationNum 是否已赋值
                     * @return ApplicationNum 是否已赋值
                     * 
                     */
                    bool ApplicationNumHasBeenSet() const;

                    /**
                     * 获取运行实例数
                     * @return RunInstancesNum 运行实例数
                     * 
                     */
                    int64_t GetRunInstancesNum() const;

                    /**
                     * 设置运行实例数
                     * @param _runInstancesNum 运行实例数
                     * 
                     */
                    void SetRunInstancesNum(const int64_t& _runInstancesNum);

                    /**
                     * 判断参数 RunInstancesNum 是否已赋值
                     * @return RunInstancesNum 是否已赋值
                     * 
                     */
                    bool RunInstancesNumHasBeenSet() const;

                    /**
                     * 获取子网络
                     * @return SubnetId 子网络
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置子网络
                     * @param _subnetId 子网络
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
                     * 获取环境集群 status
                     * @return ClusterStatus 环境集群 status
                     * 
                     */
                    std::string GetClusterStatus() const;

                    /**
                     * 设置环境集群 status
                     * @param _clusterStatus 环境集群 status
                     * 
                     */
                    void SetClusterStatus(const std::string& _clusterStatus);

                    /**
                     * 判断参数 ClusterStatus 是否已赋值
                     * @return ClusterStatus 是否已赋值
                     * 
                     */
                    bool ClusterStatusHasBeenSet() const;

                    /**
                     * 获取是否开启tsw
                     * @return EnableTswTraceService 是否开启tsw
                     * 
                     */
                    bool GetEnableTswTraceService() const;

                    /**
                     * 设置是否开启tsw
                     * @param _enableTswTraceService 是否开启tsw
                     * 
                     */
                    void SetEnableTswTraceService(const bool& _enableTswTraceService);

                    /**
                     * 判断参数 EnableTswTraceService 是否已赋值
                     * @return EnableTswTraceService 是否已赋值
                     * 
                     */
                    bool EnableTswTraceServiceHasBeenSet() const;

                    /**
                     * 获取环境锁，1为上锁，0则为上锁
                     * @return Locked 环境锁，1为上锁，0则为上锁
                     * 
                     */
                    int64_t GetLocked() const;

                    /**
                     * 设置环境锁，1为上锁，0则为上锁
                     * @param _locked 环境锁，1为上锁，0则为上锁
                     * 
                     */
                    void SetLocked(const int64_t& _locked);

                    /**
                     * 判断参数 Locked 是否已赋值
                     * @return Locked 是否已赋值
                     * 
                     */
                    bool LockedHasBeenSet() const;

                    /**
                     * 获取用户AppId
                     * @return AppId 用户AppId
                     * 
                     */
                    std::string GetAppId() const;

                    /**
                     * 设置用户AppId
                     * @param _appId 用户AppId
                     * 
                     */
                    void SetAppId(const std::string& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取用户Uin
                     * @return Uin 用户Uin
                     * 
                     */
                    std::string GetUin() const;

                    /**
                     * 设置用户Uin
                     * @param _uin 用户Uin
                     * 
                     */
                    void SetUin(const std::string& _uin);

                    /**
                     * 判断参数 Uin 是否已赋值
                     * @return Uin 是否已赋值
                     * 
                     */
                    bool UinHasBeenSet() const;

                    /**
                     * 获取用户SubAccountUin
                     * @return SubAccountUin 用户SubAccountUin
                     * 
                     */
                    std::string GetSubAccountUin() const;

                    /**
                     * 设置用户SubAccountUin
                     * @param _subAccountUin 用户SubAccountUin
                     * 
                     */
                    void SetSubAccountUin(const std::string& _subAccountUin);

                    /**
                     * 判断参数 SubAccountUin 是否已赋值
                     * @return SubAccountUin 是否已赋值
                     * 
                     */
                    bool SubAccountUinHasBeenSet() const;

                    /**
                     * 获取集群ID
                     * @return ClusterId 集群ID
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置集群ID
                     * @param _clusterId 集群ID
                     * 
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取标签
                     * @return Tags 标签
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置标签
                     * @param _tags 标签
                     * 
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取资源是否有权限
                     * @return HasAuthority 资源是否有权限
                     * 
                     */
                    bool GetHasAuthority() const;

                    /**
                     * 设置资源是否有权限
                     * @param _hasAuthority 资源是否有权限
                     * 
                     */
                    void SetHasAuthority(const bool& _hasAuthority);

                    /**
                     * 判断参数 HasAuthority 是否已赋值
                     * @return HasAuthority 是否已赋值
                     * 
                     */
                    bool HasAuthorityHasBeenSet() const;

                    /**
                     * 获取环境类型: test、pre、prod
                     * @return EnvType 环境类型: test、pre、prod
                     * 
                     */
                    std::string GetEnvType() const;

                    /**
                     * 设置环境类型: test、pre、prod
                     * @param _envType 环境类型: test、pre、prod
                     * 
                     */
                    void SetEnvType(const std::string& _envType);

                    /**
                     * 判断参数 EnvType 是否已赋值
                     * @return EnvType 是否已赋值
                     * 
                     */
                    bool EnvTypeHasBeenSet() const;

                    /**
                     * 获取地域码
                     * @return RegionId 地域码
                     * 
                     */
                    std::string GetRegionId() const;

                    /**
                     * 设置地域码
                     * @param _regionId 地域码
                     * 
                     */
                    void SetRegionId(const std::string& _regionId);

                    /**
                     * 判断参数 RegionId 是否已赋值
                     * @return RegionId 是否已赋值
                     * 
                     */
                    bool RegionIdHasBeenSet() const;

                private:

                    /**
                     * 环境id
                     */
                    std::string m_environmentId;
                    bool m_environmentIdHasBeenSet;

                    /**
                     * 渠道
                     */
                    std::string m_channel;
                    bool m_channelHasBeenSet;

                    /**
                     * 环境名称
                     */
                    std::string m_environmentName;
                    bool m_environmentNameHasBeenSet;

                    /**
                     * 区域名称
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 环境描述
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 状态,1:已销毁;0:正常
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * vpc网络
                     */
                    std::string m_vpc;
                    bool m_vpcHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createDate;
                    bool m_createDateHasBeenSet;

                    /**
                     * 修改时间
                     */
                    std::string m_modifyDate;
                    bool m_modifyDateHasBeenSet;

                    /**
                     * 修改人
                     */
                    std::string m_modifier;
                    bool m_modifierHasBeenSet;

                    /**
                     * 创建人
                     */
                    std::string m_creator;
                    bool m_creatorHasBeenSet;

                    /**
                     * 应用数
                     */
                    int64_t m_applicationNum;
                    bool m_applicationNumHasBeenSet;

                    /**
                     * 运行实例数
                     */
                    int64_t m_runInstancesNum;
                    bool m_runInstancesNumHasBeenSet;

                    /**
                     * 子网络
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * 环境集群 status
                     */
                    std::string m_clusterStatus;
                    bool m_clusterStatusHasBeenSet;

                    /**
                     * 是否开启tsw
                     */
                    bool m_enableTswTraceService;
                    bool m_enableTswTraceServiceHasBeenSet;

                    /**
                     * 环境锁，1为上锁，0则为上锁
                     */
                    int64_t m_locked;
                    bool m_lockedHasBeenSet;

                    /**
                     * 用户AppId
                     */
                    std::string m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * 用户Uin
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * 用户SubAccountUin
                     */
                    std::string m_subAccountUin;
                    bool m_subAccountUinHasBeenSet;

                    /**
                     * 集群ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 标签
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 资源是否有权限
                     */
                    bool m_hasAuthority;
                    bool m_hasAuthorityHasBeenSet;

                    /**
                     * 环境类型: test、pre、prod
                     */
                    std::string m_envType;
                    bool m_envTypeHasBeenSet;

                    /**
                     * 地域码
                     */
                    std::string m_regionId;
                    bool m_regionIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEM_V20210701_MODEL_TEMNAMESPACEINFO_H_
