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

#ifndef TENCENTCLOUD_CVM_V20170312_MODEL_HOSTITEM_H_
#define TENCENTCLOUD_CVM_V20170312_MODEL_HOSTITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cvm/v20170312/model/Placement.h>
#include <tencentcloud/cvm/v20170312/model/HostResource.h>
#include <tencentcloud/cvm/v20170312/model/Tag.h>


namespace TencentCloud
{
    namespace Cvm
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * 专用宿主机实例详细信息
                */
                class HostItem : public AbstractModel
                {
                public:
                    HostItem();
                    ~HostItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取专用宿主机实例所在的位置。通过该参数可以指定实例所属可用区，所属项目等属性。
                     * @return Placement 专用宿主机实例所在的位置。通过该参数可以指定实例所属可用区，所属项目等属性。
                     * 
                     */
                    Placement GetPlacement() const;

                    /**
                     * 设置专用宿主机实例所在的位置。通过该参数可以指定实例所属可用区，所属项目等属性。
                     * @param _placement 专用宿主机实例所在的位置。通过该参数可以指定实例所属可用区，所属项目等属性。
                     * 
                     */
                    void SetPlacement(const Placement& _placement);

                    /**
                     * 判断参数 Placement 是否已赋值
                     * @return Placement 是否已赋值
                     * 
                     */
                    bool PlacementHasBeenSet() const;

                    /**
                     * 获取专用宿主机实例ID
                     * @return HostId 专用宿主机实例ID
                     * 
                     */
                    std::string GetHostId() const;

                    /**
                     * 设置专用宿主机实例ID
                     * @param _hostId 专用宿主机实例ID
                     * 
                     */
                    void SetHostId(const std::string& _hostId);

                    /**
                     * 判断参数 HostId 是否已赋值
                     * @return HostId 是否已赋值
                     * 
                     */
                    bool HostIdHasBeenSet() const;

                    /**
                     * 获取专用宿主机实例类型
                     * @return HostType 专用宿主机实例类型
                     * 
                     */
                    std::string GetHostType() const;

                    /**
                     * 设置专用宿主机实例类型
                     * @param _hostType 专用宿主机实例类型
                     * 
                     */
                    void SetHostType(const std::string& _hostType);

                    /**
                     * 判断参数 HostType 是否已赋值
                     * @return HostType 是否已赋值
                     * 
                     */
                    bool HostTypeHasBeenSet() const;

                    /**
                     * 获取专用宿主机实例名称
                     * @return HostName 专用宿主机实例名称
                     * 
                     */
                    std::string GetHostName() const;

                    /**
                     * 设置专用宿主机实例名称
                     * @param _hostName 专用宿主机实例名称
                     * 
                     */
                    void SetHostName(const std::string& _hostName);

                    /**
                     * 判断参数 HostName 是否已赋值
                     * @return HostName 是否已赋值
                     * 
                     */
                    bool HostNameHasBeenSet() const;

                    /**
                     * 获取专用宿主机实例付费模式
                     * @return HostChargeType 专用宿主机实例付费模式
                     * 
                     */
                    std::string GetHostChargeType() const;

                    /**
                     * 设置专用宿主机实例付费模式
                     * @param _hostChargeType 专用宿主机实例付费模式
                     * 
                     */
                    void SetHostChargeType(const std::string& _hostChargeType);

                    /**
                     * 判断参数 HostChargeType 是否已赋值
                     * @return HostChargeType 是否已赋值
                     * 
                     */
                    bool HostChargeTypeHasBeenSet() const;

                    /**
                     * 获取专用宿主机实例自动续费标记
                     * @return RenewFlag 专用宿主机实例自动续费标记
                     * 
                     */
                    std::string GetRenewFlag() const;

                    /**
                     * 设置专用宿主机实例自动续费标记
                     * @param _renewFlag 专用宿主机实例自动续费标记
                     * 
                     */
                    void SetRenewFlag(const std::string& _renewFlag);

                    /**
                     * 判断参数 RenewFlag 是否已赋值
                     * @return RenewFlag 是否已赋值
                     * 
                     */
                    bool RenewFlagHasBeenSet() const;

                    /**
                     * 获取专用宿主机实例创建时间
                     * @return CreatedTime 专用宿主机实例创建时间
                     * 
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置专用宿主机实例创建时间
                     * @param _createdTime 专用宿主机实例创建时间
                     * 
                     */
                    void SetCreatedTime(const std::string& _createdTime);

                    /**
                     * 判断参数 CreatedTime 是否已赋值
                     * @return CreatedTime 是否已赋值
                     * 
                     */
                    bool CreatedTimeHasBeenSet() const;

                    /**
                     * 获取专用宿主机实例过期时间
                     * @return ExpiredTime 专用宿主机实例过期时间
                     * 
                     */
                    std::string GetExpiredTime() const;

                    /**
                     * 设置专用宿主机实例过期时间
                     * @param _expiredTime 专用宿主机实例过期时间
                     * 
                     */
                    void SetExpiredTime(const std::string& _expiredTime);

                    /**
                     * 判断参数 ExpiredTime 是否已赋值
                     * @return ExpiredTime 是否已赋值
                     * 
                     */
                    bool ExpiredTimeHasBeenSet() const;

                    /**
                     * 获取专用宿主机实例上已创建云子机的实例id列表
                     * @return InstanceIds 专用宿主机实例上已创建云子机的实例id列表
                     * 
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 设置专用宿主机实例上已创建云子机的实例id列表
                     * @param _instanceIds 专用宿主机实例上已创建云子机的实例id列表
                     * 
                     */
                    void SetInstanceIds(const std::vector<std::string>& _instanceIds);

                    /**
                     * 判断参数 InstanceIds 是否已赋值
                     * @return InstanceIds 是否已赋值
                     * 
                     */
                    bool InstanceIdsHasBeenSet() const;

                    /**
                     * 获取专用宿主机实例状态
                     * @return HostState 专用宿主机实例状态
                     * 
                     */
                    std::string GetHostState() const;

                    /**
                     * 设置专用宿主机实例状态
                     * @param _hostState 专用宿主机实例状态
                     * 
                     */
                    void SetHostState(const std::string& _hostState);

                    /**
                     * 判断参数 HostState 是否已赋值
                     * @return HostState 是否已赋值
                     * 
                     */
                    bool HostStateHasBeenSet() const;

                    /**
                     * 获取专用宿主机实例IP
                     * @return HostIp 专用宿主机实例IP
                     * 
                     */
                    std::string GetHostIp() const;

                    /**
                     * 设置专用宿主机实例IP
                     * @param _hostIp 专用宿主机实例IP
                     * 
                     */
                    void SetHostIp(const std::string& _hostIp);

                    /**
                     * 判断参数 HostIp 是否已赋值
                     * @return HostIp 是否已赋值
                     * 
                     */
                    bool HostIpHasBeenSet() const;

                    /**
                     * 获取专用宿主机实例资源信息
                     * @return HostResource 专用宿主机实例资源信息
                     * 
                     */
                    HostResource GetHostResource() const;

                    /**
                     * 设置专用宿主机实例资源信息
                     * @param _hostResource 专用宿主机实例资源信息
                     * 
                     */
                    void SetHostResource(const HostResource& _hostResource);

                    /**
                     * 判断参数 HostResource 是否已赋值
                     * @return HostResource 是否已赋值
                     * 
                     */
                    bool HostResourceHasBeenSet() const;

                    /**
                     * 获取专用宿主机所属的围笼ID。该字段仅对金融专区围笼内的专用宿主机有效。
                     * @return CageId 专用宿主机所属的围笼ID。该字段仅对金融专区围笼内的专用宿主机有效。
                     * 
                     */
                    std::string GetCageId() const;

                    /**
                     * 设置专用宿主机所属的围笼ID。该字段仅对金融专区围笼内的专用宿主机有效。
                     * @param _cageId 专用宿主机所属的围笼ID。该字段仅对金融专区围笼内的专用宿主机有效。
                     * 
                     */
                    void SetCageId(const std::string& _cageId);

                    /**
                     * 判断参数 CageId 是否已赋值
                     * @return CageId 是否已赋值
                     * 
                     */
                    bool CageIdHasBeenSet() const;

                    /**
                     * 获取专用宿主机关联的标签列表。
                     * @return Tags 专用宿主机关联的标签列表。
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置专用宿主机关联的标签列表。
                     * @param _tags 专用宿主机关联的标签列表。
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
                     * 专用宿主机实例所在的位置。通过该参数可以指定实例所属可用区，所属项目等属性。
                     */
                    Placement m_placement;
                    bool m_placementHasBeenSet;

                    /**
                     * 专用宿主机实例ID
                     */
                    std::string m_hostId;
                    bool m_hostIdHasBeenSet;

                    /**
                     * 专用宿主机实例类型
                     */
                    std::string m_hostType;
                    bool m_hostTypeHasBeenSet;

                    /**
                     * 专用宿主机实例名称
                     */
                    std::string m_hostName;
                    bool m_hostNameHasBeenSet;

                    /**
                     * 专用宿主机实例付费模式
                     */
                    std::string m_hostChargeType;
                    bool m_hostChargeTypeHasBeenSet;

                    /**
                     * 专用宿主机实例自动续费标记
                     */
                    std::string m_renewFlag;
                    bool m_renewFlagHasBeenSet;

                    /**
                     * 专用宿主机实例创建时间
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * 专用宿主机实例过期时间
                     */
                    std::string m_expiredTime;
                    bool m_expiredTimeHasBeenSet;

                    /**
                     * 专用宿主机实例上已创建云子机的实例id列表
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                    /**
                     * 专用宿主机实例状态
                     */
                    std::string m_hostState;
                    bool m_hostStateHasBeenSet;

                    /**
                     * 专用宿主机实例IP
                     */
                    std::string m_hostIp;
                    bool m_hostIpHasBeenSet;

                    /**
                     * 专用宿主机实例资源信息
                     */
                    HostResource m_hostResource;
                    bool m_hostResourceHasBeenSet;

                    /**
                     * 专用宿主机所属的围笼ID。该字段仅对金融专区围笼内的专用宿主机有效。
                     */
                    std::string m_cageId;
                    bool m_cageIdHasBeenSet;

                    /**
                     * 专用宿主机关联的标签列表。
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVM_V20170312_MODEL_HOSTITEM_H_
