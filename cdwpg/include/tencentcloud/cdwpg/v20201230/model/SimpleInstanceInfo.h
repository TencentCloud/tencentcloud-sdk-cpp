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

#ifndef TENCENTCLOUD_CDWPG_V20201230_MODEL_SIMPLEINSTANCEINFO_H_
#define TENCENTCLOUD_CDWPG_V20201230_MODEL_SIMPLEINSTANCEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdwpg/v20201230/model/ChargeProperties.h>
#include <tencentcloud/cdwpg/v20201230/model/ResourceInfo.h>
#include <tencentcloud/cdwpg/v20201230/model/Tag.h>


namespace TencentCloud
{
    namespace Cdwpg
    {
        namespace V20201230
        {
            namespace Model
            {
                /**
                * 集群信息
                */
                class SimpleInstanceInfo : public AbstractModel
                {
                public:
                    SimpleInstanceInfo();
                    ~SimpleInstanceInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取ID
                     * @return ID ID
                     * 
                     */
                    int64_t GetID() const;

                    /**
                     * 设置ID
                     * @param _iD ID
                     * 
                     */
                    void SetID(const int64_t& _iD);

                    /**
                     * 判断参数 ID 是否已赋值
                     * @return ID 是否已赋值
                     * 
                     */
                    bool IDHasBeenSet() const;

                    /**
                     * 获取集群Id
                     * @return InstanceId 集群Id
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置集群Id
                     * @param _instanceId 集群Id
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
                     * 获取集群名字
                     * @return InstanceName 集群名字
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置集群名字
                     * @param _instanceName 集群名字
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
                     * 获取内核版本
                     * @return Version 内核版本
                     * 
                     */
                    std::string GetVersion() const;

                    /**
                     * 设置内核版本
                     * @param _version 内核版本
                     * 
                     */
                    void SetVersion(const std::string& _version);

                    /**
                     * 判断参数 Version 是否已赋值
                     * @return Version 是否已赋值
                     * 
                     */
                    bool VersionHasBeenSet() const;

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
                     * 获取地区
                     * @return Zone 地区
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置地区
                     * @param _zone 地区
                     * 
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     * 
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取私有网络
                     * @return UserVPCID 私有网络
                     * 
                     */
                    std::string GetUserVPCID() const;

                    /**
                     * 设置私有网络
                     * @param _userVPCID 私有网络
                     * 
                     */
                    void SetUserVPCID(const std::string& _userVPCID);

                    /**
                     * 判断参数 UserVPCID 是否已赋值
                     * @return UserVPCID 是否已赋值
                     * 
                     */
                    bool UserVPCIDHasBeenSet() const;

                    /**
                     * 获取子网
                     * @return UserSubnetID 子网
                     * 
                     */
                    std::string GetUserSubnetID() const;

                    /**
                     * 设置子网
                     * @param _userSubnetID 子网
                     * 
                     */
                    void SetUserSubnetID(const std::string& _userSubnetID);

                    /**
                     * 判断参数 UserSubnetID 是否已赋值
                     * @return UserSubnetID 是否已赋值
                     * 
                     */
                    bool UserSubnetIDHasBeenSet() const;

                    /**
                     * 获取开始时间
                     * @return CreateTime 开始时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置开始时间
                     * @param _createTime 开始时间
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
                     * 获取访问地址
                     * @return AccessInfo 访问地址
                     * 
                     */
                    std::string GetAccessInfo() const;

                    /**
                     * 设置访问地址
                     * @param _accessInfo 访问地址
                     * 
                     */
                    void SetAccessInfo(const std::string& _accessInfo);

                    /**
                     * 判断参数 AccessInfo 是否已赋值
                     * @return AccessInfo 是否已赋值
                     * 
                     */
                    bool AccessInfoHasBeenSet() const;

                    /**
                     * 获取自动续费开关，0为不自动续费，1为自动续费
                     * @return RenewFlag 自动续费开关，0为不自动续费，1为自动续费
                     * 
                     */
                    int64_t GetRenewFlag() const;

                    /**
                     * 设置自动续费开关，0为不自动续费，1为自动续费
                     * @param _renewFlag 自动续费开关，0为不自动续费，1为自动续费
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
                     * 获取计费方式
                     * @return ChargeProperties 计费方式
                     * 
                     */
                    ChargeProperties GetChargeProperties() const;

                    /**
                     * 设置计费方式
                     * @param _chargeProperties 计费方式
                     * 
                     */
                    void SetChargeProperties(const ChargeProperties& _chargeProperties);

                    /**
                     * 判断参数 ChargeProperties 是否已赋值
                     * @return ChargeProperties 是否已赋值
                     * 
                     */
                    bool ChargePropertiesHasBeenSet() const;

                    /**
                     * 获取资源集合
                     * @return Resources 资源集合
                     * 
                     */
                    std::vector<ResourceInfo> GetResources() const;

                    /**
                     * 设置资源集合
                     * @param _resources 资源集合
                     * 
                     */
                    void SetResources(const std::vector<ResourceInfo>& _resources);

                    /**
                     * 判断参数 Resources 是否已赋值
                     * @return Resources 是否已赋值
                     * 
                     */
                    bool ResourcesHasBeenSet() const;

                    /**
                     * 获取标签列表
                     * @return Tags 标签列表
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置标签列表
                     * @param _tags 标签列表
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
                     * 获取集群状态
                     * @return Status 集群状态
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置集群状态
                     * @param _status 集群状态
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * ID
                     */
                    int64_t m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * 集群Id
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 集群名字
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * 内核版本
                     */
                    std::string m_version;
                    bool m_versionHasBeenSet;

                    /**
                     * 地域
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 地区
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * 私有网络
                     */
                    std::string m_userVPCID;
                    bool m_userVPCIDHasBeenSet;

                    /**
                     * 子网
                     */
                    std::string m_userSubnetID;
                    bool m_userSubnetIDHasBeenSet;

                    /**
                     * 开始时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 到期时间
                     */
                    std::string m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * 访问地址
                     */
                    std::string m_accessInfo;
                    bool m_accessInfoHasBeenSet;

                    /**
                     * 自动续费开关，0为不自动续费，1为自动续费
                     */
                    int64_t m_renewFlag;
                    bool m_renewFlagHasBeenSet;

                    /**
                     * 计费方式
                     */
                    ChargeProperties m_chargeProperties;
                    bool m_chargePropertiesHasBeenSet;

                    /**
                     * 资源集合
                     */
                    std::vector<ResourceInfo> m_resources;
                    bool m_resourcesHasBeenSet;

                    /**
                     * 标签列表
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 集群状态
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWPG_V20201230_MODEL_SIMPLEINSTANCEINFO_H_
