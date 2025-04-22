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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_RULETARGETS_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_RULETARGETS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/clb/v20180317/model/Backend.h>
#include <tencentcloud/clb/v20180317/model/FunctionTarget.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * HTTP/HTTPS监听器下的转发规则绑定的后端服务信息
                */
                class RuleTargets : public AbstractModel
                {
                public:
                    RuleTargets();
                    ~RuleTargets() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取转发规则的 ID
                     * @return LocationId 转发规则的 ID
                     * 
                     */
                    std::string GetLocationId() const;

                    /**
                     * 设置转发规则的 ID
                     * @param _locationId 转发规则的 ID
                     * 
                     */
                    void SetLocationId(const std::string& _locationId);

                    /**
                     * 判断参数 LocationId 是否已赋值
                     * @return LocationId 是否已赋值
                     * 
                     */
                    bool LocationIdHasBeenSet() const;

                    /**
                     * 获取转发规则的域名
                     * @return Domain 转发规则的域名
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置转发规则的域名
                     * @param _domain 转发规则的域名
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
                     * 获取转发规则的路径。
                     * @return Url 转发规则的路径。
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置转发规则的路径。
                     * @param _url 转发规则的路径。
                     * 
                     */
                    void SetUrl(const std::string& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     * 
                     */
                    bool UrlHasBeenSet() const;

                    /**
                     * 获取后端服务的信息
                     * @return Targets 后端服务的信息
                     * 
                     */
                    std::vector<Backend> GetTargets() const;

                    /**
                     * 设置后端服务的信息
                     * @param _targets 后端服务的信息
                     * 
                     */
                    void SetTargets(const std::vector<Backend>& _targets);

                    /**
                     * 判断参数 Targets 是否已赋值
                     * @return Targets 是否已赋值
                     * 
                     */
                    bool TargetsHasBeenSet() const;

                    /**
                     * 获取后端云函数的信息
                     * @return FunctionTargets 后端云函数的信息
                     * 
                     */
                    std::vector<FunctionTarget> GetFunctionTargets() const;

                    /**
                     * 设置后端云函数的信息
                     * @param _functionTargets 后端云函数的信息
                     * 
                     */
                    void SetFunctionTargets(const std::vector<FunctionTarget>& _functionTargets);

                    /**
                     * 判断参数 FunctionTargets 是否已赋值
                     * @return FunctionTargets 是否已赋值
                     * 
                     */
                    bool FunctionTargetsHasBeenSet() const;

                private:

                    /**
                     * 转发规则的 ID
                     */
                    std::string m_locationId;
                    bool m_locationIdHasBeenSet;

                    /**
                     * 转发规则的域名
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * 转发规则的路径。
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * 后端服务的信息
                     */
                    std::vector<Backend> m_targets;
                    bool m_targetsHasBeenSet;

                    /**
                     * 后端云函数的信息
                     */
                    std::vector<FunctionTarget> m_functionTargets;
                    bool m_functionTargetsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_RULETARGETS_H_
