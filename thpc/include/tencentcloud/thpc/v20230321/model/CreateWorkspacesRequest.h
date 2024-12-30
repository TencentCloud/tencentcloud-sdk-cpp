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

#ifndef TENCENTCLOUD_THPC_V20230321_MODEL_CREATEWORKSPACESREQUEST_H_
#define TENCENTCLOUD_THPC_V20230321_MODEL_CREATEWORKSPACESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/thpc/v20230321/model/SpacePlacement.h>
#include <tencentcloud/thpc/v20230321/model/SpaceChargePrepaid.h>
#include <tencentcloud/thpc/v20230321/model/SpaceSystemDisk.h>
#include <tencentcloud/thpc/v20230321/model/SpaceDataDisk.h>
#include <tencentcloud/thpc/v20230321/model/SpaceVirtualPrivateCloud.h>
#include <tencentcloud/thpc/v20230321/model/SpaceInternetAccessible.h>
#include <tencentcloud/thpc/v20230321/model/LoginSettings.h>
#include <tencentcloud/thpc/v20230321/model/EnhancedService.h>
#include <tencentcloud/thpc/v20230321/model/TagSpecification.h>


namespace TencentCloud
{
    namespace Thpc
    {
        namespace V20230321
        {
            namespace Model
            {
                /**
                * CreateWorkspaces请求参数结构体
                */
                class CreateWorkspacesRequest : public AbstractModel
                {
                public:
                    CreateWorkspacesRequest();
                    ~CreateWorkspacesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取用于保证请求幂等性的字符串。该字符串由客户生成，需保证不同请求之间唯一，最大值不超过64个ASCII字符。若不指定该参数，则无法保证请求的幂等性。
                     * @return ClientToken 用于保证请求幂等性的字符串。该字符串由客户生成，需保证不同请求之间唯一，最大值不超过64个ASCII字符。若不指定该参数，则无法保证请求的幂等性。
                     * 
                     */
                    std::string GetClientToken() const;

                    /**
                     * 设置用于保证请求幂等性的字符串。该字符串由客户生成，需保证不同请求之间唯一，最大值不超过64个ASCII字符。若不指定该参数，则无法保证请求的幂等性。
                     * @param _clientToken 用于保证请求幂等性的字符串。该字符串由客户生成，需保证不同请求之间唯一，最大值不超过64个ASCII字符。若不指定该参数，则无法保证请求的幂等性。
                     * 
                     */
                    void SetClientToken(const std::string& _clientToken);

                    /**
                     * 判断参数 ClientToken 是否已赋值
                     * @return ClientToken 是否已赋值
                     * 
                     */
                    bool ClientTokenHasBeenSet() const;

                    /**
                     * 获取实例所在的位置。通过该参数可以指定实例所属可用区，所属项目，所属宿主机（在专用宿主机上创建子机时指定）等属性。 <b>注：如果您不指定LaunchTemplate参数，则Placement为必选参数。若同时传递Placement和LaunchTemplate，则默认覆盖LaunchTemplate中对应的Placement的值。</b>
                     * @return Placement 实例所在的位置。通过该参数可以指定实例所属可用区，所属项目，所属宿主机（在专用宿主机上创建子机时指定）等属性。 <b>注：如果您不指定LaunchTemplate参数，则Placement为必选参数。若同时传递Placement和LaunchTemplate，则默认覆盖LaunchTemplate中对应的Placement的值。</b>
                     * 
                     */
                    SpacePlacement GetPlacement() const;

                    /**
                     * 设置实例所在的位置。通过该参数可以指定实例所属可用区，所属项目，所属宿主机（在专用宿主机上创建子机时指定）等属性。 <b>注：如果您不指定LaunchTemplate参数，则Placement为必选参数。若同时传递Placement和LaunchTemplate，则默认覆盖LaunchTemplate中对应的Placement的值。</b>
                     * @param _placement 实例所在的位置。通过该参数可以指定实例所属可用区，所属项目，所属宿主机（在专用宿主机上创建子机时指定）等属性。 <b>注：如果您不指定LaunchTemplate参数，则Placement为必选参数。若同时传递Placement和LaunchTemplate，则默认覆盖LaunchTemplate中对应的Placement的值。</b>
                     * 
                     */
                    void SetPlacement(const SpacePlacement& _placement);

                    /**
                     * 判断参数 Placement 是否已赋值
                     * @return Placement 是否已赋值
                     * 
                     */
                    bool PlacementHasBeenSet() const;

                    /**
                     * 获取预付费模式，即包年包月相关参数设置。通过该参数可以指定包年包月实例的购买时长、是否设置自动续费等属性。若指定实例的付费模式为预付费则该参数必传。
                     * @return SpaceChargePrepaid 预付费模式，即包年包月相关参数设置。通过该参数可以指定包年包月实例的购买时长、是否设置自动续费等属性。若指定实例的付费模式为预付费则该参数必传。
                     * 
                     */
                    SpaceChargePrepaid GetSpaceChargePrepaid() const;

                    /**
                     * 设置预付费模式，即包年包月相关参数设置。通过该参数可以指定包年包月实例的购买时长、是否设置自动续费等属性。若指定实例的付费模式为预付费则该参数必传。
                     * @param _spaceChargePrepaid 预付费模式，即包年包月相关参数设置。通过该参数可以指定包年包月实例的购买时长、是否设置自动续费等属性。若指定实例的付费模式为预付费则该参数必传。
                     * 
                     */
                    void SetSpaceChargePrepaid(const SpaceChargePrepaid& _spaceChargePrepaid);

                    /**
                     * 判断参数 SpaceChargePrepaid 是否已赋值
                     * @return SpaceChargePrepaid 是否已赋值
                     * 
                     */
                    bool SpaceChargePrepaidHasBeenSet() const;

                    /**
                     * 获取工作空间计费类型，包括：PREPAID，UNDERWRITE。工作空间计费类型，包括：PREPAID，UNDERWRITE。
                     * @return SpaceChargeType 工作空间计费类型，包括：PREPAID，UNDERWRITE。工作空间计费类型，包括：PREPAID，UNDERWRITE。
                     * 
                     */
                    std::string GetSpaceChargeType() const;

                    /**
                     * 设置工作空间计费类型，包括：PREPAID，UNDERWRITE。工作空间计费类型，包括：PREPAID，UNDERWRITE。
                     * @param _spaceChargeType 工作空间计费类型，包括：PREPAID，UNDERWRITE。工作空间计费类型，包括：PREPAID，UNDERWRITE。
                     * 
                     */
                    void SetSpaceChargeType(const std::string& _spaceChargeType);

                    /**
                     * 判断参数 SpaceChargeType 是否已赋值
                     * @return SpaceChargeType 是否已赋值
                     * 
                     */
                    bool SpaceChargeTypeHasBeenSet() const;

                    /**
                     * 获取工作空间规格
                     * @return SpaceType 工作空间规格
                     * 
                     */
                    std::string GetSpaceType() const;

                    /**
                     * 设置工作空间规格
                     * @param _spaceType 工作空间规格
                     * 
                     */
                    void SetSpaceType(const std::string& _spaceType);

                    /**
                     * 判断参数 SpaceType 是否已赋值
                     * @return SpaceType 是否已赋值
                     * 
                     */
                    bool SpaceTypeHasBeenSet() const;

                    /**
                     * 获取镜像ID
                     * @return ImageId 镜像ID
                     * 
                     */
                    std::string GetImageId() const;

                    /**
                     * 设置镜像ID
                     * @param _imageId 镜像ID
                     * 
                     */
                    void SetImageId(const std::string& _imageId);

                    /**
                     * 判断参数 ImageId 是否已赋值
                     * @return ImageId 是否已赋值
                     * 
                     */
                    bool ImageIdHasBeenSet() const;

                    /**
                     * 获取工作空间系统盘信息
                     * @return SystemDisk 工作空间系统盘信息
                     * 
                     */
                    SpaceSystemDisk GetSystemDisk() const;

                    /**
                     * 设置工作空间系统盘信息
                     * @param _systemDisk 工作空间系统盘信息
                     * 
                     */
                    void SetSystemDisk(const SpaceSystemDisk& _systemDisk);

                    /**
                     * 判断参数 SystemDisk 是否已赋值
                     * @return SystemDisk 是否已赋值
                     * 
                     */
                    bool SystemDiskHasBeenSet() const;

                    /**
                     * 获取工作空间数据盘信息
                     * @return DataDisks 工作空间数据盘信息
                     * 
                     */
                    std::vector<SpaceDataDisk> GetDataDisks() const;

                    /**
                     * 设置工作空间数据盘信息
                     * @param _dataDisks 工作空间数据盘信息
                     * 
                     */
                    void SetDataDisks(const std::vector<SpaceDataDisk>& _dataDisks);

                    /**
                     * 判断参数 DataDisks 是否已赋值
                     * @return DataDisks 是否已赋值
                     * 
                     */
                    bool DataDisksHasBeenSet() const;

                    /**
                     * 获取私有网络相关信息
                     * @return VirtualPrivateCloud 私有网络相关信息
                     * 
                     */
                    SpaceVirtualPrivateCloud GetVirtualPrivateCloud() const;

                    /**
                     * 设置私有网络相关信息
                     * @param _virtualPrivateCloud 私有网络相关信息
                     * 
                     */
                    void SetVirtualPrivateCloud(const SpaceVirtualPrivateCloud& _virtualPrivateCloud);

                    /**
                     * 判断参数 VirtualPrivateCloud 是否已赋值
                     * @return VirtualPrivateCloud 是否已赋值
                     * 
                     */
                    bool VirtualPrivateCloudHasBeenSet() const;

                    /**
                     * 获取公网带宽相关信息设置
                     * @return InternetAccessible 公网带宽相关信息设置
                     * 
                     */
                    SpaceInternetAccessible GetInternetAccessible() const;

                    /**
                     * 设置公网带宽相关信息设置
                     * @param _internetAccessible 公网带宽相关信息设置
                     * 
                     */
                    void SetInternetAccessible(const SpaceInternetAccessible& _internetAccessible);

                    /**
                     * 判断参数 InternetAccessible 是否已赋值
                     * @return InternetAccessible 是否已赋值
                     * 
                     */
                    bool InternetAccessibleHasBeenSet() const;

                    /**
                     * 获取购买工作空间数量
                     * @return SpaceCount 购买工作空间数量
                     * 
                     */
                    int64_t GetSpaceCount() const;

                    /**
                     * 设置购买工作空间数量
                     * @param _spaceCount 购买工作空间数量
                     * 
                     */
                    void SetSpaceCount(const int64_t& _spaceCount);

                    /**
                     * 判断参数 SpaceCount 是否已赋值
                     * @return SpaceCount 是否已赋值
                     * 
                     */
                    bool SpaceCountHasBeenSet() const;

                    /**
                     * 获取工作空间显示名称
                     * @return SpaceName 工作空间显示名称
                     * 
                     */
                    std::string GetSpaceName() const;

                    /**
                     * 设置工作空间显示名称
                     * @param _spaceName 工作空间显示名称
                     * 
                     */
                    void SetSpaceName(const std::string& _spaceName);

                    /**
                     * 判断参数 SpaceName 是否已赋值
                     * @return SpaceName 是否已赋值
                     * 
                     */
                    bool SpaceNameHasBeenSet() const;

                    /**
                     * 获取工作空间登陆设置
                     * @return LoginSettings 工作空间登陆设置
                     * 
                     */
                    LoginSettings GetLoginSettings() const;

                    /**
                     * 设置工作空间登陆设置
                     * @param _loginSettings 工作空间登陆设置
                     * 
                     */
                    void SetLoginSettings(const LoginSettings& _loginSettings);

                    /**
                     * 判断参数 LoginSettings 是否已赋值
                     * @return LoginSettings 是否已赋值
                     * 
                     */
                    bool LoginSettingsHasBeenSet() const;

                    /**
                     * 获取工作空间所属安全组
                     * @return SecurityGroupIds 工作空间所属安全组
                     * 
                     */
                    std::vector<std::string> GetSecurityGroupIds() const;

                    /**
                     * 设置工作空间所属安全组
                     * @param _securityGroupIds 工作空间所属安全组
                     * 
                     */
                    void SetSecurityGroupIds(const std::vector<std::string>& _securityGroupIds);

                    /**
                     * 判断参数 SecurityGroupIds 是否已赋值
                     * @return SecurityGroupIds 是否已赋值
                     * 
                     */
                    bool SecurityGroupIdsHasBeenSet() const;

                    /**
                     * 获取增强服务
                     * @return EnhancedService 增强服务
                     * 
                     */
                    EnhancedService GetEnhancedService() const;

                    /**
                     * 设置增强服务
                     * @param _enhancedService 增强服务
                     * 
                     */
                    void SetEnhancedService(const EnhancedService& _enhancedService);

                    /**
                     * 判断参数 EnhancedService 是否已赋值
                     * @return EnhancedService 是否已赋值
                     * 
                     */
                    bool EnhancedServiceHasBeenSet() const;

                    /**
                     * 获取是否只预检此次请求
                     * @return DryRun 是否只预检此次请求
                     * 
                     */
                    bool GetDryRun() const;

                    /**
                     * 设置是否只预检此次请求
                     * @param _dryRun 是否只预检此次请求
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
                     * 获取提供给工作空间使用的用户数据
                     * @return UserData 提供给工作空间使用的用户数据
                     * 
                     */
                    std::string GetUserData() const;

                    /**
                     * 设置提供给工作空间使用的用户数据
                     * @param _userData 提供给工作空间使用的用户数据
                     * 
                     */
                    void SetUserData(const std::string& _userData);

                    /**
                     * 判断参数 UserData 是否已赋值
                     * @return UserData 是否已赋值
                     * 
                     */
                    bool UserDataHasBeenSet() const;

                    /**
                     * 获取置放群组id
                     * @return DisasterRecoverGroupIds 置放群组id
                     * 
                     */
                    std::vector<std::string> GetDisasterRecoverGroupIds() const;

                    /**
                     * 设置置放群组id
                     * @param _disasterRecoverGroupIds 置放群组id
                     * 
                     */
                    void SetDisasterRecoverGroupIds(const std::vector<std::string>& _disasterRecoverGroupIds);

                    /**
                     * 判断参数 DisasterRecoverGroupIds 是否已赋值
                     * @return DisasterRecoverGroupIds 是否已赋值
                     * 
                     */
                    bool DisasterRecoverGroupIdsHasBeenSet() const;

                    /**
                     * 获取标签描述列表
                     * @return TagSpecification 标签描述列表
                     * 
                     */
                    std::vector<TagSpecification> GetTagSpecification() const;

                    /**
                     * 设置标签描述列表
                     * @param _tagSpecification 标签描述列表
                     * 
                     */
                    void SetTagSpecification(const std::vector<TagSpecification>& _tagSpecification);

                    /**
                     * 判断参数 TagSpecification 是否已赋值
                     * @return TagSpecification 是否已赋值
                     * 
                     */
                    bool TagSpecificationHasBeenSet() const;

                    /**
                     * 获取高性能计算集群ID
                     * @return HpcClusterId 高性能计算集群ID
                     * 
                     */
                    std::string GetHpcClusterId() const;

                    /**
                     * 设置高性能计算集群ID
                     * @param _hpcClusterId 高性能计算集群ID
                     * 
                     */
                    void SetHpcClusterId(const std::string& _hpcClusterId);

                    /**
                     * 判断参数 HpcClusterId 是否已赋值
                     * @return HpcClusterId 是否已赋值
                     * 
                     */
                    bool HpcClusterIdHasBeenSet() const;

                    /**
                     * 获取CAM角色名称
                     * @return CamRoleName CAM角色名称
                     * 
                     */
                    std::string GetCamRoleName() const;

                    /**
                     * 设置CAM角色名称
                     * @param _camRoleName CAM角色名称
                     * 
                     */
                    void SetCamRoleName(const std::string& _camRoleName);

                    /**
                     * 判断参数 CamRoleName 是否已赋值
                     * @return CamRoleName 是否已赋值
                     * 
                     */
                    bool CamRoleNameHasBeenSet() const;

                    /**
                     * 获取实例主机名。<br><li>点号（.）和短横线（-）不能作为 HostName 的首尾字符，不能连续使用。</li><br><li>Windows 实例：主机名名字符长度为[2, 15]，允许字母（不限制大小写）、数字和短横线（-）组成，不支持点号（.），不能全是数字。</li><br><li>其他类型（Linux 等）实例：主机名字符长度为[2, 60]，允许支持多个点号，点之间为一段，每段允许字母（不限制大小写）、数字和短横线（-）组成。</li><br><li>购买多台实例，如果指定模式串`{R:x}`，表示生成数字`[x, x+n-1]`，其中`n`表示购买实例的数量，例如`server{R:3}`，购买1台时，实例主机名为`server3`；购买2台时，实例主机名分别为`server3`，`server4`。支持指定多个模式串`{R:x}`。</li><br><li>购买多台实例，如果不指定模式串，则在实例主机名添加后缀`1、2...n`，其中`n`表示购买实例的数量，例如`server`，购买2台时，实例主机名分别为`server1`，`server2`。</li>
                     * @return HostName 实例主机名。<br><li>点号（.）和短横线（-）不能作为 HostName 的首尾字符，不能连续使用。</li><br><li>Windows 实例：主机名名字符长度为[2, 15]，允许字母（不限制大小写）、数字和短横线（-）组成，不支持点号（.），不能全是数字。</li><br><li>其他类型（Linux 等）实例：主机名字符长度为[2, 60]，允许支持多个点号，点之间为一段，每段允许字母（不限制大小写）、数字和短横线（-）组成。</li><br><li>购买多台实例，如果指定模式串`{R:x}`，表示生成数字`[x, x+n-1]`，其中`n`表示购买实例的数量，例如`server{R:3}`，购买1台时，实例主机名为`server3`；购买2台时，实例主机名分别为`server3`，`server4`。支持指定多个模式串`{R:x}`。</li><br><li>购买多台实例，如果不指定模式串，则在实例主机名添加后缀`1、2...n`，其中`n`表示购买实例的数量，例如`server`，购买2台时，实例主机名分别为`server1`，`server2`。</li>
                     * 
                     */
                    std::string GetHostName() const;

                    /**
                     * 设置实例主机名。<br><li>点号（.）和短横线（-）不能作为 HostName 的首尾字符，不能连续使用。</li><br><li>Windows 实例：主机名名字符长度为[2, 15]，允许字母（不限制大小写）、数字和短横线（-）组成，不支持点号（.），不能全是数字。</li><br><li>其他类型（Linux 等）实例：主机名字符长度为[2, 60]，允许支持多个点号，点之间为一段，每段允许字母（不限制大小写）、数字和短横线（-）组成。</li><br><li>购买多台实例，如果指定模式串`{R:x}`，表示生成数字`[x, x+n-1]`，其中`n`表示购买实例的数量，例如`server{R:3}`，购买1台时，实例主机名为`server3`；购买2台时，实例主机名分别为`server3`，`server4`。支持指定多个模式串`{R:x}`。</li><br><li>购买多台实例，如果不指定模式串，则在实例主机名添加后缀`1、2...n`，其中`n`表示购买实例的数量，例如`server`，购买2台时，实例主机名分别为`server1`，`server2`。</li>
                     * @param _hostName 实例主机名。<br><li>点号（.）和短横线（-）不能作为 HostName 的首尾字符，不能连续使用。</li><br><li>Windows 实例：主机名名字符长度为[2, 15]，允许字母（不限制大小写）、数字和短横线（-）组成，不支持点号（.），不能全是数字。</li><br><li>其他类型（Linux 等）实例：主机名字符长度为[2, 60]，允许支持多个点号，点之间为一段，每段允许字母（不限制大小写）、数字和短横线（-）组成。</li><br><li>购买多台实例，如果指定模式串`{R:x}`，表示生成数字`[x, x+n-1]`，其中`n`表示购买实例的数量，例如`server{R:3}`，购买1台时，实例主机名为`server3`；购买2台时，实例主机名分别为`server3`，`server4`。支持指定多个模式串`{R:x}`。</li><br><li>购买多台实例，如果不指定模式串，则在实例主机名添加后缀`1、2...n`，其中`n`表示购买实例的数量，例如`server`，购买2台时，实例主机名分别为`server1`，`server2`。</li>
                     * 
                     */
                    void SetHostName(const std::string& _hostName);

                    /**
                     * 判断参数 HostName 是否已赋值
                     * @return HostName 是否已赋值
                     * 
                     */
                    bool HostNameHasBeenSet() const;

                private:

                    /**
                     * 用于保证请求幂等性的字符串。该字符串由客户生成，需保证不同请求之间唯一，最大值不超过64个ASCII字符。若不指定该参数，则无法保证请求的幂等性。
                     */
                    std::string m_clientToken;
                    bool m_clientTokenHasBeenSet;

                    /**
                     * 实例所在的位置。通过该参数可以指定实例所属可用区，所属项目，所属宿主机（在专用宿主机上创建子机时指定）等属性。 <b>注：如果您不指定LaunchTemplate参数，则Placement为必选参数。若同时传递Placement和LaunchTemplate，则默认覆盖LaunchTemplate中对应的Placement的值。</b>
                     */
                    SpacePlacement m_placement;
                    bool m_placementHasBeenSet;

                    /**
                     * 预付费模式，即包年包月相关参数设置。通过该参数可以指定包年包月实例的购买时长、是否设置自动续费等属性。若指定实例的付费模式为预付费则该参数必传。
                     */
                    SpaceChargePrepaid m_spaceChargePrepaid;
                    bool m_spaceChargePrepaidHasBeenSet;

                    /**
                     * 工作空间计费类型，包括：PREPAID，UNDERWRITE。工作空间计费类型，包括：PREPAID，UNDERWRITE。
                     */
                    std::string m_spaceChargeType;
                    bool m_spaceChargeTypeHasBeenSet;

                    /**
                     * 工作空间规格
                     */
                    std::string m_spaceType;
                    bool m_spaceTypeHasBeenSet;

                    /**
                     * 镜像ID
                     */
                    std::string m_imageId;
                    bool m_imageIdHasBeenSet;

                    /**
                     * 工作空间系统盘信息
                     */
                    SpaceSystemDisk m_systemDisk;
                    bool m_systemDiskHasBeenSet;

                    /**
                     * 工作空间数据盘信息
                     */
                    std::vector<SpaceDataDisk> m_dataDisks;
                    bool m_dataDisksHasBeenSet;

                    /**
                     * 私有网络相关信息
                     */
                    SpaceVirtualPrivateCloud m_virtualPrivateCloud;
                    bool m_virtualPrivateCloudHasBeenSet;

                    /**
                     * 公网带宽相关信息设置
                     */
                    SpaceInternetAccessible m_internetAccessible;
                    bool m_internetAccessibleHasBeenSet;

                    /**
                     * 购买工作空间数量
                     */
                    int64_t m_spaceCount;
                    bool m_spaceCountHasBeenSet;

                    /**
                     * 工作空间显示名称
                     */
                    std::string m_spaceName;
                    bool m_spaceNameHasBeenSet;

                    /**
                     * 工作空间登陆设置
                     */
                    LoginSettings m_loginSettings;
                    bool m_loginSettingsHasBeenSet;

                    /**
                     * 工作空间所属安全组
                     */
                    std::vector<std::string> m_securityGroupIds;
                    bool m_securityGroupIdsHasBeenSet;

                    /**
                     * 增强服务
                     */
                    EnhancedService m_enhancedService;
                    bool m_enhancedServiceHasBeenSet;

                    /**
                     * 是否只预检此次请求
                     */
                    bool m_dryRun;
                    bool m_dryRunHasBeenSet;

                    /**
                     * 提供给工作空间使用的用户数据
                     */
                    std::string m_userData;
                    bool m_userDataHasBeenSet;

                    /**
                     * 置放群组id
                     */
                    std::vector<std::string> m_disasterRecoverGroupIds;
                    bool m_disasterRecoverGroupIdsHasBeenSet;

                    /**
                     * 标签描述列表
                     */
                    std::vector<TagSpecification> m_tagSpecification;
                    bool m_tagSpecificationHasBeenSet;

                    /**
                     * 高性能计算集群ID
                     */
                    std::string m_hpcClusterId;
                    bool m_hpcClusterIdHasBeenSet;

                    /**
                     * CAM角色名称
                     */
                    std::string m_camRoleName;
                    bool m_camRoleNameHasBeenSet;

                    /**
                     * 实例主机名。<br><li>点号（.）和短横线（-）不能作为 HostName 的首尾字符，不能连续使用。</li><br><li>Windows 实例：主机名名字符长度为[2, 15]，允许字母（不限制大小写）、数字和短横线（-）组成，不支持点号（.），不能全是数字。</li><br><li>其他类型（Linux 等）实例：主机名字符长度为[2, 60]，允许支持多个点号，点之间为一段，每段允许字母（不限制大小写）、数字和短横线（-）组成。</li><br><li>购买多台实例，如果指定模式串`{R:x}`，表示生成数字`[x, x+n-1]`，其中`n`表示购买实例的数量，例如`server{R:3}`，购买1台时，实例主机名为`server3`；购买2台时，实例主机名分别为`server3`，`server4`。支持指定多个模式串`{R:x}`。</li><br><li>购买多台实例，如果不指定模式串，则在实例主机名添加后缀`1、2...n`，其中`n`表示购买实例的数量，例如`server`，购买2台时，实例主机名分别为`server1`，`server2`。</li>
                     */
                    std::string m_hostName;
                    bool m_hostNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_THPC_V20230321_MODEL_CREATEWORKSPACESREQUEST_H_
