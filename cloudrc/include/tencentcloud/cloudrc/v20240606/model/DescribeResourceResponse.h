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

#ifndef TENCENTCLOUD_CLOUDRC_V20240606_MODEL_DESCRIBERESOURCERESPONSE_H_
#define TENCENTCLOUD_CLOUDRC_V20240606_MODEL_DESCRIBERESOURCERESPONSE_H_

#include <string>
#include <vector>
#include <map>
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
                * DescribeResource返回参数结构体
                */
                class DescribeResourceResponse : public AbstractModel
                {
                public:
                    DescribeResourceResponse();
                    ~DescribeResourceResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>资源ID</p>
                     * @return ResourceId <p>资源ID</p>
                     * 
                     */
                    std::string GetResourceId() const;

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
                     * 判断参数 ZoneCode 是否已赋值
                     * @return ZoneCode 是否已赋值
                     * 
                     */
                    bool ZoneCodeHasBeenSet() const;

                    /**
                     * 获取<p>付费类型</p>
                     * @return PayMode <p>付费类型</p>
                     * 
                     */
                    std::string GetPayMode() const;

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
                     * 判断参数 PublicIpAddress 是否已赋值
                     * @return PublicIpAddress 是否已赋值
                     * 
                     */
                    bool PublicIpAddressHasBeenSet() const;

                    /**
                     * 获取<p>资源属性</p>
                     * @return Properties <p>资源属性</p>
                     * 
                     */
                    std::string GetProperties() const;

                    /**
                     * 判断参数 Properties 是否已赋值
                     * @return Properties 是否已赋值
                     * 
                     */
                    bool PropertiesHasBeenSet() const;

                    /**
                     * 获取<p>标签信息</p>
                     * @return Tags <p>标签信息</p>
                     * 
                     */
                    std::vector<Tag> GetTags() const;

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
                     * <p>付费类型</p>
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
                     * <p>资源属性</p>
                     */
                    std::string m_properties;
                    bool m_propertiesHasBeenSet;

                    /**
                     * <p>标签信息</p>
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLOUDRC_V20240606_MODEL_DESCRIBERESOURCERESPONSE_H_
