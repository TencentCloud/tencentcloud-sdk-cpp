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

#ifndef TENCENTCLOUD_MAKERS_V20261113_MODEL_DESCRIBEZONECUSTOMDOMAINSREQUEST_H_
#define TENCENTCLOUD_MAKERS_V20261113_MODEL_DESCRIBEZONECUSTOMDOMAINSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/makers/v20261113/model/CustomDomainInput.h>


namespace TencentCloud
{
    namespace Makers
    {
        namespace V20261113
        {
            namespace Model
            {
                /**
                * DescribeZoneCustomDomains请求参数结构体
                */
                class DescribeZoneCustomDomainsRequest : public AbstractModel
                {
                public:
                    DescribeZoneCustomDomainsRequest();
                    ~DescribeZoneCustomDomainsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Makers 站点 ID</p>
                     * @return ZoneId <p>Makers 站点 ID</p>
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置<p>Makers 站点 ID</p>
                     * @param _zoneId <p>Makers 站点 ID</p>
                     * 
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取<p>项目 ID</p>
                     * @return ProjectId <p>项目 ID</p>
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置<p>项目 ID</p>
                     * @param _projectId <p>项目 ID</p>
                     * 
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取<p>只查询这些域名。不传则返回项目下的域名</p>
                     * @return CustomDomains <p>只查询这些域名。不传则返回项目下的域名</p>
                     * 
                     */
                    std::vector<CustomDomainInput> GetCustomDomains() const;

                    /**
                     * 设置<p>只查询这些域名。不传则返回项目下的域名</p>
                     * @param _customDomains <p>只查询这些域名。不传则返回项目下的域名</p>
                     * 
                     */
                    void SetCustomDomains(const std::vector<CustomDomainInput>& _customDomains);

                    /**
                     * 判断参数 CustomDomains 是否已赋值
                     * @return CustomDomains 是否已赋值
                     * 
                     */
                    bool CustomDomainsHasBeenSet() const;

                private:

                    /**
                     * <p>Makers 站点 ID</p>
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * <p>项目 ID</p>
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * <p>只查询这些域名。不传则返回项目下的域名</p>
                     */
                    std::vector<CustomDomainInput> m_customDomains;
                    bool m_customDomainsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MAKERS_V20261113_MODEL_DESCRIBEZONECUSTOMDOMAINSREQUEST_H_
