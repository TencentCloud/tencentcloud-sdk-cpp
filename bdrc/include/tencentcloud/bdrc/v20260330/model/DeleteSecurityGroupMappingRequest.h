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

#ifndef TENCENTCLOUD_BDRC_V20260330_MODEL_DELETESECURITYGROUPMAPPINGREQUEST_H_
#define TENCENTCLOUD_BDRC_V20260330_MODEL_DELETESECURITYGROUPMAPPINGREQUEST_H_

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
                * DeleteSecurityGroupMapping请求参数结构体
                */
                class DeleteSecurityGroupMappingRequest : public AbstractModel
                {
                public:
                    DeleteSecurityGroupMappingRequest();
                    ~DeleteSecurityGroupMappingRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取要删除安全组映射所属的站点对ID
                     * @return SitePairId 要删除安全组映射所属的站点对ID
                     * 
                     */
                    std::string GetSitePairId() const;

                    /**
                     * 设置要删除安全组映射所属的站点对ID
                     * @param _sitePairId 要删除安全组映射所属的站点对ID
                     * 
                     */
                    void SetSitePairId(const std::string& _sitePairId);

                    /**
                     * 判断参数 SitePairId 是否已赋值
                     * @return SitePairId 是否已赋值
                     * 
                     */
                    bool SitePairIdHasBeenSet() const;

                    /**
                     * 获取要删除的安全组映射ID列表
                     * @return SecurityGroupMappingIds 要删除的安全组映射ID列表
                     * 
                     */
                    std::vector<std::string> GetSecurityGroupMappingIds() const;

                    /**
                     * 设置要删除的安全组映射ID列表
                     * @param _securityGroupMappingIds 要删除的安全组映射ID列表
                     * 
                     */
                    void SetSecurityGroupMappingIds(const std::vector<std::string>& _securityGroupMappingIds);

                    /**
                     * 判断参数 SecurityGroupMappingIds 是否已赋值
                     * @return SecurityGroupMappingIds 是否已赋值
                     * 
                     */
                    bool SecurityGroupMappingIdsHasBeenSet() const;

                private:

                    /**
                     * 要删除安全组映射所属的站点对ID
                     */
                    std::string m_sitePairId;
                    bool m_sitePairIdHasBeenSet;

                    /**
                     * 要删除的安全组映射ID列表
                     */
                    std::vector<std::string> m_securityGroupMappingIds;
                    bool m_securityGroupMappingIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BDRC_V20260330_MODEL_DELETESECURITYGROUPMAPPINGREQUEST_H_
