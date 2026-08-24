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

#ifndef TENCENTCLOUD_BDRC_V20260330_MODEL_CREATESECURITYGROUPMAPPINGREQUEST_H_
#define TENCENTCLOUD_BDRC_V20260330_MODEL_CREATESECURITYGROUPMAPPINGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bdrc
    {
        namespace V20260330
        {
            namespace Model
            {
                /**
                * CreateSecurityGroupMapping请求参数结构体
                */
                class CreateSecurityGroupMappingRequest : public AbstractModel
                {
                public:
                    CreateSecurityGroupMappingRequest();
                    ~CreateSecurityGroupMappingRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取生产端实例绑定的安全组ID
                     * @return SrcSecurityGroupId 生产端实例绑定的安全组ID
                     * 
                     */
                    std::string GetSrcSecurityGroupId() const;

                    /**
                     * 设置生产端实例绑定的安全组ID
                     * @param _srcSecurityGroupId 生产端实例绑定的安全组ID
                     * 
                     */
                    void SetSrcSecurityGroupId(const std::string& _srcSecurityGroupId);

                    /**
                     * 判断参数 SrcSecurityGroupId 是否已赋值
                     * @return SrcSecurityGroupId 是否已赋值
                     * 
                     */
                    bool SrcSecurityGroupIdHasBeenSet() const;

                    /**
                     * 获取容灾端实例绑定的安全组ID
                     * @return TargetSecurityGroupId 容灾端实例绑定的安全组ID
                     * 
                     */
                    std::string GetTargetSecurityGroupId() const;

                    /**
                     * 设置容灾端实例绑定的安全组ID
                     * @param _targetSecurityGroupId 容灾端实例绑定的安全组ID
                     * 
                     */
                    void SetTargetSecurityGroupId(const std::string& _targetSecurityGroupId);

                    /**
                     * 判断参数 TargetSecurityGroupId 是否已赋值
                     * @return TargetSecurityGroupId 是否已赋值
                     * 
                     */
                    bool TargetSecurityGroupIdHasBeenSet() const;

                    /**
                     * 获取安全组映射所属的站点对ID。
                     * @return SitePairId 安全组映射所属的站点对ID。
                     * 
                     */
                    std::string GetSitePairId() const;

                    /**
                     * 设置安全组映射所属的站点对ID。
                     * @param _sitePairId 安全组映射所属的站点对ID。
                     * 
                     */
                    void SetSitePairId(const std::string& _sitePairId);

                    /**
                     * 判断参数 SitePairId 是否已赋值
                     * @return SitePairId 是否已赋值
                     * 
                     */
                    bool SitePairIdHasBeenSet() const;

                private:

                    /**
                     * 生产端实例绑定的安全组ID
                     */
                    std::string m_srcSecurityGroupId;
                    bool m_srcSecurityGroupIdHasBeenSet;

                    /**
                     * 容灾端实例绑定的安全组ID
                     */
                    std::string m_targetSecurityGroupId;
                    bool m_targetSecurityGroupIdHasBeenSet;

                    /**
                     * 安全组映射所属的站点对ID。
                     */
                    std::string m_sitePairId;
                    bool m_sitePairIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BDRC_V20260330_MODEL_CREATESECURITYGROUPMAPPINGREQUEST_H_
