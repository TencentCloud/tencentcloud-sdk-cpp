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

#ifndef TENCENTCLOUD_MAKERS_V20261113_MODEL_MODIFYZONECUSTOMDOMAINENVREQUEST_H_
#define TENCENTCLOUD_MAKERS_V20261113_MODEL_MODIFYZONECUSTOMDOMAINENVREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Makers
    {
        namespace V20261113
        {
            namespace Model
            {
                /**
                * ModifyZoneCustomDomainEnv请求参数结构体
                */
                class ModifyZoneCustomDomainEnvRequest : public AbstractModel
                {
                public:
                    ModifyZoneCustomDomainEnvRequest();
                    ~ModifyZoneCustomDomainEnvRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>站点 ID</p>
                     * @return ZoneId <p>站点 ID</p>
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置<p>站点 ID</p>
                     * @param _zoneId <p>站点 ID</p>
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
                     * 获取<p>域名</p>
                     * @return Domain <p>域名</p>
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置<p>域名</p>
                     * @param _domain <p>域名</p>
                     * 
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取<p>目标环境 slug</p>
                     * @return Env <p>目标环境 slug</p>
                     * 
                     */
                    std::string GetEnv() const;

                    /**
                     * 设置<p>目标环境 slug</p>
                     * @param _env <p>目标环境 slug</p>
                     * 
                     */
                    void SetEnv(const std::string& _env);

                    /**
                     * 判断参数 Env 是否已赋值
                     * @return Env 是否已赋值
                     * 
                     */
                    bool EnvHasBeenSet() const;

                private:

                    /**
                     * <p>站点 ID</p>
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * <p>项目 ID</p>
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * <p>域名</p>
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * <p>目标环境 slug</p>
                     */
                    std::string m_env;
                    bool m_envHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MAKERS_V20261113_MODEL_MODIFYZONECUSTOMDOMAINENVREQUEST_H_
