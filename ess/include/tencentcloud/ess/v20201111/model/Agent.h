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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_AGENT_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_AGENT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ess
    {
        namespace V20201111
        {
            namespace Model
            {
                /**
                * 代理相关应用信息，如集团主企业代子企业操作
                */
                class Agent : public AbstractModel
                {
                public:
                    Agent();
                    ~Agent() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>CA-API应用编号，用于同平台企业下标识不同的CA-API应用</p>
                     * @return AppId <p>CA-API应用编号，用于同平台企业下标识不同的CA-API应用</p>
                     * @deprecated
                     */
                    std::string GetAppId() const;

                    /**
                     * 设置<p>CA-API应用编号，用于同平台企业下标识不同的CA-API应用</p>
                     * @param _appId <p>CA-API应用编号，用于同平台企业下标识不同的CA-API应用</p>
                     * @deprecated
                     */
                    void SetAppId(const std::string& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * @deprecated
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取<p>被代理机构的应用号，一般不用传</p>
                     * @return ProxyAppId <p>被代理机构的应用号，一般不用传</p>
                     * @deprecated
                     */
                    std::string GetProxyAppId() const;

                    /**
                     * 设置<p>被代理机构的应用号，一般不用传</p>
                     * @param _proxyAppId <p>被代理机构的应用号，一般不用传</p>
                     * @deprecated
                     */
                    void SetProxyAppId(const std::string& _proxyAppId);

                    /**
                     * 判断参数 ProxyAppId 是否已赋值
                     * @return ProxyAppId 是否已赋值
                     * @deprecated
                     */
                    bool ProxyAppIdHasBeenSet() const;

                    /**
                     * 获取<p>被代理机构在电子签平台的机构编号，集团代理下场景必传</p>
                     * @return ProxyOrganizationId <p>被代理机构在电子签平台的机构编号，集团代理下场景必传</p>
                     * 
                     */
                    std::string GetProxyOrganizationId() const;

                    /**
                     * 设置<p>被代理机构在电子签平台的机构编号，集团代理下场景必传</p>
                     * @param _proxyOrganizationId <p>被代理机构在电子签平台的机构编号，集团代理下场景必传</p>
                     * 
                     */
                    void SetProxyOrganizationId(const std::string& _proxyOrganizationId);

                    /**
                     * 判断参数 ProxyOrganizationId 是否已赋值
                     * @return ProxyOrganizationId 是否已赋值
                     * 
                     */
                    bool ProxyOrganizationIdHasBeenSet() const;

                    /**
                     * 获取<p>被代理机构的经办人，一般不用传</p>
                     * @return ProxyOperator <p>被代理机构的经办人，一般不用传</p>
                     * @deprecated
                     */
                    std::string GetProxyOperator() const;

                    /**
                     * 设置<p>被代理机构的经办人，一般不用传</p>
                     * @param _proxyOperator <p>被代理机构的经办人，一般不用传</p>
                     * @deprecated
                     */
                    void SetProxyOperator(const std::string& _proxyOperator);

                    /**
                     * 判断参数 ProxyOperator 是否已赋值
                     * @return ProxyOperator 是否已赋值
                     * @deprecated
                     */
                    bool ProxyOperatorHasBeenSet() const;

                private:

                    /**
                     * <p>CA-API应用编号，用于同平台企业下标识不同的CA-API应用</p>
                     */
                    std::string m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * <p>被代理机构的应用号，一般不用传</p>
                     */
                    std::string m_proxyAppId;
                    bool m_proxyAppIdHasBeenSet;

                    /**
                     * <p>被代理机构在电子签平台的机构编号，集团代理下场景必传</p>
                     */
                    std::string m_proxyOrganizationId;
                    bool m_proxyOrganizationIdHasBeenSet;

                    /**
                     * <p>被代理机构的经办人，一般不用传</p>
                     */
                    std::string m_proxyOperator;
                    bool m_proxyOperatorHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_AGENT_H_
