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

#ifndef TENCENTCLOUD_CLOUDRC_V20240606_MODEL_RESOURCESUMMARY_H_
#define TENCENTCLOUD_CLOUDRC_V20240606_MODEL_RESOURCESUMMARY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cloudrc/v20240606/model/Tag.h>


namespace TencentCloud
{
    namespace Cloudrc
    {
        namespace V20240606
        {
            namespace Model
            {
                /**
                * 资源信息
                */
                class ResourceSummary : public AbstractModel
                {
                public:
                    ResourceSummary();
                    ~ResourceSummary() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>资源ID</p>
                     * @return ResourceId <p>资源ID</p>
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置<p>资源ID</p>
                     * @param _resourceId <p>资源ID</p>
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
                     * 获取<p>资源别名</p>
                     * @return ResourceAlias <p>资源别名</p>
                     * 
                     */
                    std::string GetResourceAlias() const;

                    /**
                     * 设置<p>资源别名</p>
                     * @param _resourceAlias <p>资源别名</p>
                     * 
                     */
                    void SetResourceAlias(const std::string& _resourceAlias);

                    /**
                     * 判断参数 ResourceAlias 是否已赋值
                     * @return ResourceAlias 是否已赋值
                     * 
                     */
                    bool ResourceAliasHasBeenSet() const;

                    /**
                     * 获取<p>uin</p>
                     * @return Uin <p>uin</p>
                     * 
                     */
                    int64_t GetUin() const;

                    /**
                     * 设置<p>uin</p>
                     * @param _uin <p>uin</p>
                     * 
                     */
                    void SetUin(const int64_t& _uin);

                    /**
                     * 判断参数 Uin 是否已赋值
                     * @return Uin 是否已赋值
                     * 
                     */
                    bool UinHasBeenSet() const;

                    /**
                     * 获取<p>资源类型</p>
                     * @return ResourceType <p>资源类型</p>
                     * 
                     */
                    std::string GetResourceType() const;

                    /**
                     * 设置<p>资源类型</p>
                     * @param _resourceType <p>资源类型</p>
                     * 
                     */
                    void SetResourceType(const std::string& _resourceType);

                    /**
                     * 判断参数 ResourceType 是否已赋值
                     * @return ResourceType 是否已赋值
                     * 
                     */
                    bool ResourceTypeHasBeenSet() const;

                    /**
                     * 获取<p>地域编码</p>
                     * @return RegionCode <p>地域编码</p>
                     * 
                     */
                    std::string GetRegionCode() const;

                    /**
                     * 设置<p>地域编码</p>
                     * @param _regionCode <p>地域编码</p>
                     * 
                     */
                    void SetRegionCode(const std::string& _regionCode);

                    /**
                     * 判断参数 RegionCode 是否已赋值
                     * @return RegionCode 是否已赋值
                     * 
                     */
                    bool RegionCodeHasBeenSet() const;

                    /**
                     * 获取<p>可用区编码</p>
                     * @return ZoneCode <p>可用区编码</p>
                     * 
                     */
                    std::string GetZoneCode() const;

                    /**
                     * 设置<p>可用区编码</p>
                     * @param _zoneCode <p>可用区编码</p>
                     * 
                     */
                    void SetZoneCode(const std::string& _zoneCode);

                    /**
                     * 判断参数 ZoneCode 是否已赋值
                     * @return ZoneCode 是否已赋值
                     * 
                     */
                    bool ZoneCodeHasBeenSet() const;

                    /**
                     * 获取<p>付费类型，包括后付费(0)、预付费(1)、预留实例(2)</p>
                     * @return PayMode <p>付费类型，包括后付费(0)、预付费(1)、预留实例(2)</p>
                     * 
                     */
                    std::string GetPayMode() const;

                    /**
                     * 设置<p>付费类型，包括后付费(0)、预付费(1)、预留实例(2)</p>
                     * @param _payMode <p>付费类型，包括后付费(0)、预付费(1)、预留实例(2)</p>
                     * 
                     */
                    void SetPayMode(const std::string& _payMode);

                    /**
                     * 判断参数 PayMode 是否已赋值
                     * @return PayMode 是否已赋值
                     * 
                     */
                    bool PayModeHasBeenSet() const;

                    /**
                     * 获取<p>资源创建时间</p>
                     * @return CreateTime <p>资源创建时间</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>资源创建时间</p>
                     * @param _createTime <p>资源创建时间</p>
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
                     * 获取<p>资源过期时间</p>
                     * @return ExpireTime <p>资源过期时间</p>
                     * 
                     */
                    std::string GetExpireTime() const;

                    /**
                     * 设置<p>资源过期时间</p>
                     * @param _expireTime <p>资源过期时间</p>
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
                     * 获取<p>内网IP</p>
                     * @return PrivateIpAddress <p>内网IP</p>
                     * 
                     */
                    std::vector<std::string> GetPrivateIpAddress() const;

                    /**
                     * 设置<p>内网IP</p>
                     * @param _privateIpAddress <p>内网IP</p>
                     * 
                     */
                    void SetPrivateIpAddress(const std::vector<std::string>& _privateIpAddress);

                    /**
                     * 判断参数 PrivateIpAddress 是否已赋值
                     * @return PrivateIpAddress 是否已赋值
                     * 
                     */
                    bool PrivateIpAddressHasBeenSet() const;

                    /**
                     * 获取<p>外网IP</p>
                     * @return PublicIpAddress <p>外网IP</p>
                     * 
                     */
                    std::vector<std::string> GetPublicIpAddress() const;

                    /**
                     * 设置<p>外网IP</p>
                     * @param _publicIpAddress <p>外网IP</p>
                     * 
                     */
                    void SetPublicIpAddress(const std::vector<std::string>& _publicIpAddress);

                    /**
                     * 判断参数 PublicIpAddress 是否已赋值
                     * @return PublicIpAddress 是否已赋值
                     * 
                     */
                    bool PublicIpAddressHasBeenSet() const;

                    /**
                     * 获取<p>标签</p>
                     * @return Tags <p>标签</p>
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置<p>标签</p>
                     * @param _tags <p>标签</p>
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
                     * <p>资源ID</p>
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * <p>资源别名</p>
                     */
                    std::string m_resourceAlias;
                    bool m_resourceAliasHasBeenSet;

                    /**
                     * <p>uin</p>
                     */
                    int64_t m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * <p>资源类型</p>
                     */
                    std::string m_resourceType;
                    bool m_resourceTypeHasBeenSet;

                    /**
                     * <p>地域编码</p>
                     */
                    std::string m_regionCode;
                    bool m_regionCodeHasBeenSet;

                    /**
                     * <p>可用区编码</p>
                     */
                    std::string m_zoneCode;
                    bool m_zoneCodeHasBeenSet;

                    /**
                     * <p>付费类型，包括后付费(0)、预付费(1)、预留实例(2)</p>
                     */
                    std::string m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * <p>资源创建时间</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>资源过期时间</p>
                     */
                    std::string m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * <p>内网IP</p>
                     */
                    std::vector<std::string> m_privateIpAddress;
                    bool m_privateIpAddressHasBeenSet;

                    /**
                     * <p>外网IP</p>
                     */
                    std::vector<std::string> m_publicIpAddress;
                    bool m_publicIpAddressHasBeenSet;

                    /**
                     * <p>标签</p>
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLOUDRC_V20240606_MODEL_RESOURCESUMMARY_H_
