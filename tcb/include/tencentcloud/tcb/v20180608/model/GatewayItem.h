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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_GATEWAYITEM_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_GATEWAYITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcb/v20180608/model/Tag.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * 网关信息
                */
                class GatewayItem : public AbstractModel
                {
                public:
                    GatewayItem();
                    ~GatewayItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取用户uin
                     * @return Uin 用户uin
                     * 
                     */
                    std::string GetUin() const;

                    /**
                     * 设置用户uin
                     * @param _uin 用户uin
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
                     * 获取用户appid
                     * @return AppId 用户appid
                     * 
                     */
                    uint64_t GetAppId() const;

                    /**
                     * 设置用户appid
                     * @param _appId 用户appid
                     * 
                     */
                    void SetAppId(const uint64_t& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取WxAppId
                     * @return WxAppId WxAppId
                     * 
                     */
                    std::string GetWxAppId() const;

                    /**
                     * 设置WxAppId
                     * @param _wxAppId WxAppId
                     * 
                     */
                    void SetWxAppId(const std::string& _wxAppId);

                    /**
                     * 判断参数 WxAppId 是否已赋值
                     * @return WxAppId 是否已赋值
                     * 
                     */
                    bool WxAppIdHasBeenSet() const;

                    /**
                     * 获取环境id
                     * @return EnvId 环境id
                     * 
                     */
                    std::string GetEnvId() const;

                    /**
                     * 设置环境id
                     * @param _envId 环境id
                     * 
                     */
                    void SetEnvId(const std::string& _envId);

                    /**
                     * 判断参数 EnvId 是否已赋值
                     * @return EnvId 是否已赋值
                     * 
                     */
                    bool EnvIdHasBeenSet() const;

                    /**
                     * 获取Gateway唯一id
                     * @return GatewayId Gateway唯一id
                     * 
                     */
                    std::string GetGatewayId() const;

                    /**
                     * 设置Gateway唯一id
                     * @param _gatewayId Gateway唯一id
                     * 
                     */
                    void SetGatewayId(const std::string& _gatewayId);

                    /**
                     * 判断参数 GatewayId 是否已赋值
                     * @return GatewayId 是否已赋值
                     * 
                     */
                    bool GatewayIdHasBeenSet() const;

                    /**
                     * 获取Gateway名称
                     * @return GatewayName Gateway名称
                     * 
                     */
                    std::string GetGatewayName() const;

                    /**
                     * 设置Gateway名称
                     * @param _gatewayName Gateway名称
                     * 
                     */
                    void SetGatewayName(const std::string& _gatewayName);

                    /**
                     * 判断参数 GatewayName 是否已赋值
                     * @return GatewayName 是否已赋值
                     * 
                     */
                    bool GatewayNameHasBeenSet() const;

                    /**
                     * 获取Gateway类型
                     * @return GatewayType Gateway类型
                     * 
                     */
                    std::string GetGatewayType() const;

                    /**
                     * 设置Gateway类型
                     * @param _gatewayType Gateway类型
                     * 
                     */
                    void SetGatewayType(const std::string& _gatewayType);

                    /**
                     * 判断参数 GatewayType 是否已赋值
                     * @return GatewayType 是否已赋值
                     * 
                     */
                    bool GatewayTypeHasBeenSet() const;

                    /**
                     * 获取Gateway描述
                     * @return GatewayDesc Gateway描述
                     * 
                     */
                    std::string GetGatewayDesc() const;

                    /**
                     * 设置Gateway描述
                     * @param _gatewayDesc Gateway描述
                     * 
                     */
                    void SetGatewayDesc(const std::string& _gatewayDesc);

                    /**
                     * 判断参数 GatewayDesc 是否已赋值
                     * @return GatewayDesc 是否已赋值
                     * 
                     */
                    bool GatewayDescHasBeenSet() const;

                    /**
                     * 获取套餐版本
                     * @return PackageVersion 套餐版本
                     * 
                     */
                    std::string GetPackageVersion() const;

                    /**
                     * 设置套餐版本
                     * @param _packageVersion 套餐版本
                     * 
                     */
                    void SetPackageVersion(const std::string& _packageVersion);

                    /**
                     * 判断参数 PackageVersion 是否已赋值
                     * @return PackageVersion 是否已赋值
                     * 
                     */
                    bool PackageVersionHasBeenSet() const;

                    /**
                     * 获取套餐唯一id
                     * @return PackageId 套餐唯一id
                     * 
                     */
                    uint64_t GetPackageId() const;

                    /**
                     * 设置套餐唯一id
                     * @param _packageId 套餐唯一id
                     * 
                     */
                    void SetPackageId(const uint64_t& _packageId);

                    /**
                     * 判断参数 PackageId 是否已赋值
                     * @return PackageId 是否已赋值
                     * 
                     */
                    bool PackageIdHasBeenSet() const;

                    /**
                     * 获取vpc唯一id
                     * @return VpcId vpc唯一id
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置vpc唯一id
                     * @param _vpcId vpc唯一id
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
                     * 获取子网id
                     * @return SubnetIds 子网id
                     * 
                     */
                    std::vector<std::string> GetSubnetIds() const;

                    /**
                     * 设置子网id
                     * @param _subnetIds 子网id
                     * 
                     */
                    void SetSubnetIds(const std::vector<std::string>& _subnetIds);

                    /**
                     * 判断参数 SubnetIds 是否已赋值
                     * @return SubnetIds 是否已赋值
                     * 
                     */
                    bool SubnetIdsHasBeenSet() const;

                    /**
                     * 获取网关状态
                     * @return Status 网关状态
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置网关状态
                     * @param _status 网关状态
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
                     * 获取l5地址
                     * @return L5Addr l5地址
                     * 
                     */
                    std::string GetL5Addr() const;

                    /**
                     * 设置l5地址
                     * @param _l5Addr l5地址
                     * 
                     */
                    void SetL5Addr(const std::string& _l5Addr);

                    /**
                     * 判断参数 L5Addr 是否已赋值
                     * @return L5Addr 是否已赋值
                     * 
                     */
                    bool L5AddrHasBeenSet() const;

                    /**
                     * 获取地域
                     * @return Region 地域
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置地域
                     * @param _region 地域
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
                     * 获取是否可以续费
                     * @return CanRenew 是否可以续费
                     * 
                     */
                    bool GetCanRenew() const;

                    /**
                     * 设置是否可以续费
                     * @param _canRenew 是否可以续费
                     * 
                     */
                    void SetCanRenew(const bool& _canRenew);

                    /**
                     * 判断参数 CanRenew 是否已赋值
                     * @return CanRenew 是否已赋值
                     * 
                     */
                    bool CanRenewHasBeenSet() const;

                    /**
                     * 获取自动续费标志
                     * @return AutoRenewFlag 自动续费标志
                     * 
                     */
                    uint64_t GetAutoRenewFlag() const;

                    /**
                     * 设置自动续费标志
                     * @param _autoRenewFlag 自动续费标志
                     * 
                     */
                    void SetAutoRenewFlag(const uint64_t& _autoRenewFlag);

                    /**
                     * 判断参数 AutoRenewFlag 是否已赋值
                     * @return AutoRenewFlag 是否已赋值
                     * 
                     */
                    bool AutoRenewFlagHasBeenSet() const;

                    /**
                     * 获取隔离时间
                     * @return IsolateTime 隔离时间
                     * 
                     */
                    std::string GetIsolateTime() const;

                    /**
                     * 设置隔离时间
                     * @param _isolateTime 隔离时间
                     * 
                     */
                    void SetIsolateTime(const std::string& _isolateTime);

                    /**
                     * 判断参数 IsolateTime 是否已赋值
                     * @return IsolateTime 是否已赋值
                     * 
                     */
                    bool IsolateTimeHasBeenSet() const;

                    /**
                     * 获取到期时间
                     * @return ExpireTime 到期时间
                     * 
                     */
                    std::string GetExpireTime() const;

                    /**
                     * 设置到期时间
                     * @param _expireTime 到期时间
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
                     * 获取创建时间
                     * @return CreateTime 创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间
                     * @param _createTime 创建时间
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取变更时间
                     * @return UpdateTime 变更时间
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置变更时间
                     * @param _updateTime 变更时间
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取是否可以降配
                     * @return CanDowngrade 是否可以降配
                     * 
                     */
                    bool GetCanDowngrade() const;

                    /**
                     * 设置是否可以降配
                     * @param _canDowngrade 是否可以降配
                     * 
                     */
                    void SetCanDowngrade(const bool& _canDowngrade);

                    /**
                     * 判断参数 CanDowngrade 是否已赋值
                     * @return CanDowngrade 是否已赋值
                     * 
                     */
                    bool CanDowngradeHasBeenSet() const;

                    /**
                     * 获取允许未登录访问
                     * @return AllowUncertified 允许未登录访问
                     * 
                     */
                    int64_t GetAllowUncertified() const;

                    /**
                     * 设置允许未登录访问
                     * @param _allowUncertified 允许未登录访问
                     * 
                     */
                    void SetAllowUncertified(const int64_t& _allowUncertified);

                    /**
                     * 判断参数 AllowUncertified 是否已赋值
                     * @return AllowUncertified 是否已赋值
                     * 
                     */
                    bool AllowUncertifiedHasBeenSet() const;

                    /**
                     * 获取网关版本限额
                     * @return VersionNumLimit 网关版本限额
                     * 
                     */
                    int64_t GetVersionNumLimit() const;

                    /**
                     * 设置网关版本限额
                     * @param _versionNumLimit 网关版本限额
                     * 
                     */
                    void SetVersionNumLimit(const int64_t& _versionNumLimit);

                    /**
                     * 判断参数 VersionNumLimit 是否已赋值
                     * @return VersionNumLimit 是否已赋值
                     * 
                     */
                    bool VersionNumLimitHasBeenSet() const;

                    /**
                     * 获取Donut接入ID
                     * @return LongAccessId Donut接入ID
                     * 
                     */
                    std::string GetLongAccessId() const;

                    /**
                     * 设置Donut接入ID
                     * @param _longAccessId Donut接入ID
                     * 
                     */
                    void SetLongAccessId(const std::string& _longAccessId);

                    /**
                     * 判断参数 LongAccessId 是否已赋值
                     * @return LongAccessId 是否已赋值
                     * 
                     */
                    bool LongAccessIdHasBeenSet() const;

                    /**
                     * 获取Donut接入域名
                     * @return AccessDomain Donut接入域名
                     * 
                     */
                    std::string GetAccessDomain() const;

                    /**
                     * 设置Donut接入域名
                     * @param _accessDomain Donut接入域名
                     * 
                     */
                    void SetAccessDomain(const std::string& _accessDomain);

                    /**
                     * 判断参数 AccessDomain 是否已赋值
                     * @return AccessDomain 是否已赋值
                     * 
                     */
                    bool AccessDomainHasBeenSet() const;

                    /**
                     * 获取标签键值对
                     * @return Tags 标签键值对
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置标签键值对
                     * @param _tags 标签键值对
                     * 
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                private:

                    /**
                     * 用户uin
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * 用户appid
                     */
                    uint64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * WxAppId
                     */
                    std::string m_wxAppId;
                    bool m_wxAppIdHasBeenSet;

                    /**
                     * 环境id
                     */
                    std::string m_envId;
                    bool m_envIdHasBeenSet;

                    /**
                     * Gateway唯一id
                     */
                    std::string m_gatewayId;
                    bool m_gatewayIdHasBeenSet;

                    /**
                     * Gateway名称
                     */
                    std::string m_gatewayName;
                    bool m_gatewayNameHasBeenSet;

                    /**
                     * Gateway类型
                     */
                    std::string m_gatewayType;
                    bool m_gatewayTypeHasBeenSet;

                    /**
                     * Gateway描述
                     */
                    std::string m_gatewayDesc;
                    bool m_gatewayDescHasBeenSet;

                    /**
                     * 套餐版本
                     */
                    std::string m_packageVersion;
                    bool m_packageVersionHasBeenSet;

                    /**
                     * 套餐唯一id
                     */
                    uint64_t m_packageId;
                    bool m_packageIdHasBeenSet;

                    /**
                     * vpc唯一id
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 子网id
                     */
                    std::vector<std::string> m_subnetIds;
                    bool m_subnetIdsHasBeenSet;

                    /**
                     * 网关状态
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * l5地址
                     */
                    std::string m_l5Addr;
                    bool m_l5AddrHasBeenSet;

                    /**
                     * 地域
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 是否可以续费
                     */
                    bool m_canRenew;
                    bool m_canRenewHasBeenSet;

                    /**
                     * 自动续费标志
                     */
                    uint64_t m_autoRenewFlag;
                    bool m_autoRenewFlagHasBeenSet;

                    /**
                     * 隔离时间
                     */
                    std::string m_isolateTime;
                    bool m_isolateTimeHasBeenSet;

                    /**
                     * 到期时间
                     */
                    std::string m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 变更时间
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 是否可以降配
                     */
                    bool m_canDowngrade;
                    bool m_canDowngradeHasBeenSet;

                    /**
                     * 允许未登录访问
                     */
                    int64_t m_allowUncertified;
                    bool m_allowUncertifiedHasBeenSet;

                    /**
                     * 网关版本限额
                     */
                    int64_t m_versionNumLimit;
                    bool m_versionNumLimitHasBeenSet;

                    /**
                     * Donut接入ID
                     */
                    std::string m_longAccessId;
                    bool m_longAccessIdHasBeenSet;

                    /**
                     * Donut接入域名
                     */
                    std::string m_accessDomain;
                    bool m_accessDomainHasBeenSet;

                    /**
                     * 标签键值对
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_GATEWAYITEM_H_
