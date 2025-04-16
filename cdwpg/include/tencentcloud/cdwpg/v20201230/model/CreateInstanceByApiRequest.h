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

#ifndef TENCENTCLOUD_CDWPG_V20201230_MODEL_CREATEINSTANCEBYAPIREQUEST_H_
#define TENCENTCLOUD_CDWPG_V20201230_MODEL_CREATEINSTANCEBYAPIREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdwpg/v20201230/model/ChargeProperties.h>
#include <tencentcloud/cdwpg/v20201230/model/ResourceSpecNew.h>
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
                * CreateInstanceByApi请求参数结构体
                */
                class CreateInstanceByApiRequest : public AbstractModel
                {
                public:
                    CreateInstanceByApiRequest();
                    ~CreateInstanceByApiRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例名称
                     * @return InstanceName 实例名称
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置实例名称
                     * @param _instanceName 实例名称
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
                     * 获取可用区
                     * @return Zone 可用区
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置可用区
                     * @param _zone 可用区
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
                     * @return UserVPCId 私有网络
                     * 
                     */
                    std::string GetUserVPCId() const;

                    /**
                     * 设置私有网络
                     * @param _userVPCId 私有网络
                     * 
                     */
                    void SetUserVPCId(const std::string& _userVPCId);

                    /**
                     * 判断参数 UserVPCId 是否已赋值
                     * @return UserVPCId 是否已赋值
                     * 
                     */
                    bool UserVPCIdHasBeenSet() const;

                    /**
                     * 获取子网
                     * @return UserSubnetId 子网
                     * 
                     */
                    std::string GetUserSubnetId() const;

                    /**
                     * 设置子网
                     * @param _userSubnetId 子网
                     * 
                     */
                    void SetUserSubnetId(const std::string& _userSubnetId);

                    /**
                     * 判断参数 UserSubnetId 是否已赋值
                     * @return UserSubnetId 是否已赋值
                     * 
                     */
                    bool UserSubnetIdHasBeenSet() const;

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
                     * 获取集群密码
                     * @return AdminPassword 集群密码
                     * 
                     */
                    std::string GetAdminPassword() const;

                    /**
                     * 设置集群密码
                     * @param _adminPassword 集群密码
                     * 
                     */
                    void SetAdminPassword(const std::string& _adminPassword);

                    /**
                     * 判断参数 AdminPassword 是否已赋值
                     * @return AdminPassword 是否已赋值
                     * 
                     */
                    bool AdminPasswordHasBeenSet() const;

                    /**
                     * 获取资源信息
                     * @return Resources 资源信息
                     * 
                     */
                    std::vector<ResourceSpecNew> GetResources() const;

                    /**
                     * 设置资源信息
                     * @param _resources 资源信息
                     * 
                     */
                    void SetResources(const std::vector<ResourceSpecNew>& _resources);

                    /**
                     * 判断参数 Resources 是否已赋值
                     * @return Resources 是否已赋值
                     * 
                     */
                    bool ResourcesHasBeenSet() const;

                    /**
                     * 获取废弃，用TagItems
                     * @return Tags 废弃，用TagItems
                     * 
                     */
                    Tag GetTags() const;

                    /**
                     * 设置废弃，用TagItems
                     * @param _tags 废弃，用TagItems
                     * 
                     */
                    void SetTags(const Tag& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取版本
                     * @return ProductVersion 版本
                     * 
                     */
                    std::string GetProductVersion() const;

                    /**
                     * 设置版本
                     * @param _productVersion 版本
                     * 
                     */
                    void SetProductVersion(const std::string& _productVersion);

                    /**
                     * 判断参数 ProductVersion 是否已赋值
                     * @return ProductVersion 是否已赋值
                     * 
                     */
                    bool ProductVersionHasBeenSet() const;

                    /**
                     * 获取标签列表
                     * @return TagItems 标签列表
                     * 
                     */
                    std::vector<Tag> GetTagItems() const;

                    /**
                     * 设置标签列表
                     * @param _tagItems 标签列表
                     * 
                     */
                    void SetTagItems(const std::vector<Tag>& _tagItems);

                    /**
                     * 判断参数 TagItems 是否已赋值
                     * @return TagItems 是否已赋值
                     * 
                     */
                    bool TagItemsHasBeenSet() const;

                private:

                    /**
                     * 实例名称
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * 可用区
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * 私有网络
                     */
                    std::string m_userVPCId;
                    bool m_userVPCIdHasBeenSet;

                    /**
                     * 子网
                     */
                    std::string m_userSubnetId;
                    bool m_userSubnetIdHasBeenSet;

                    /**
                     * 计费方式
                     */
                    ChargeProperties m_chargeProperties;
                    bool m_chargePropertiesHasBeenSet;

                    /**
                     * 集群密码
                     */
                    std::string m_adminPassword;
                    bool m_adminPasswordHasBeenSet;

                    /**
                     * 资源信息
                     */
                    std::vector<ResourceSpecNew> m_resources;
                    bool m_resourcesHasBeenSet;

                    /**
                     * 废弃，用TagItems
                     */
                    Tag m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 版本
                     */
                    std::string m_productVersion;
                    bool m_productVersionHasBeenSet;

                    /**
                     * 标签列表
                     */
                    std::vector<Tag> m_tagItems;
                    bool m_tagItemsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWPG_V20201230_MODEL_CREATEINSTANCEBYAPIREQUEST_H_
