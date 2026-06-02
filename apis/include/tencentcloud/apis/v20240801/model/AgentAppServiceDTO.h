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

#ifndef TENCENTCLOUD_APIS_V20240801_MODEL_AGENTAPPSERVICEDTO_H_
#define TENCENTCLOUD_APIS_V20240801_MODEL_AGENTAPPSERVICEDTO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/apis/v20240801/model/InvokeLimitConfigDTO.h>


namespace TencentCloud
{
    namespace Apis
    {
        namespace V20240801
        {
            namespace Model
            {
                /**
                * Agent应用关联的服务配置
                */
                class AgentAppServiceDTO : public AbstractModel
                {
                public:
                    AgentAppServiceDTO();
                    ~AgentAppServiceDTO() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>ID</p>
                     * @return ID <p>ID</p>
                     * 
                     */
                    std::string GetID() const;

                    /**
                     * 设置<p>ID</p>
                     * @param _iD <p>ID</p>
                     * 
                     */
                    void SetID(const std::string& _iD);

                    /**
                     * 判断参数 ID 是否已赋值
                     * @return ID 是否已赋值
                     * 
                     */
                    bool IDHasBeenSet() const;

                    /**
                     * 获取<p>是否限流</p>
                     * @return InvokeLimitConfigStatus <p>是否限流</p>
                     * 
                     */
                    bool GetInvokeLimitConfigStatus() const;

                    /**
                     * 设置<p>是否限流</p>
                     * @param _invokeLimitConfigStatus <p>是否限流</p>
                     * 
                     */
                    void SetInvokeLimitConfigStatus(const bool& _invokeLimitConfigStatus);

                    /**
                     * 判断参数 InvokeLimitConfigStatus 是否已赋值
                     * @return InvokeLimitConfigStatus 是否已赋值
                     * 
                     */
                    bool InvokeLimitConfigStatusHasBeenSet() const;

                    /**
                     * 获取<p>限流配置</p>
                     * @return InvokeLimitConfig <p>限流配置</p>
                     * 
                     */
                    InvokeLimitConfigDTO GetInvokeLimitConfig() const;

                    /**
                     * 设置<p>限流配置</p>
                     * @param _invokeLimitConfig <p>限流配置</p>
                     * 
                     */
                    void SetInvokeLimitConfig(const InvokeLimitConfigDTO& _invokeLimitConfig);

                    /**
                     * 判断参数 InvokeLimitConfig 是否已赋值
                     * @return InvokeLimitConfig 是否已赋值
                     * 
                     */
                    bool InvokeLimitConfigHasBeenSet() const;

                    /**
                     * 获取<p>是否要认证</p>
                     * @return NeedAuth <p>是否要认证</p>
                     * 
                     */
                    bool GetNeedAuth() const;

                    /**
                     * 设置<p>是否要认证</p>
                     * @param _needAuth <p>是否要认证</p>
                     * 
                     */
                    void SetNeedAuth(const bool& _needAuth);

                    /**
                     * 判断参数 NeedAuth 是否已赋值
                     * @return NeedAuth 是否已赋值
                     * 
                     */
                    bool NeedAuthHasBeenSet() const;

                    /**
                     * 获取<p>凭据ID</p>
                     * @return AgentCredentialID <p>凭据ID</p>
                     * 
                     */
                    std::string GetAgentCredentialID() const;

                    /**
                     * 设置<p>凭据ID</p>
                     * @param _agentCredentialID <p>凭据ID</p>
                     * 
                     */
                    void SetAgentCredentialID(const std::string& _agentCredentialID);

                    /**
                     * 判断参数 AgentCredentialID 是否已赋值
                     * @return AgentCredentialID 是否已赋值
                     * 
                     */
                    bool AgentCredentialIDHasBeenSet() const;

                private:

                    /**
                     * <p>ID</p>
                     */
                    std::string m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * <p>是否限流</p>
                     */
                    bool m_invokeLimitConfigStatus;
                    bool m_invokeLimitConfigStatusHasBeenSet;

                    /**
                     * <p>限流配置</p>
                     */
                    InvokeLimitConfigDTO m_invokeLimitConfig;
                    bool m_invokeLimitConfigHasBeenSet;

                    /**
                     * <p>是否要认证</p>
                     */
                    bool m_needAuth;
                    bool m_needAuthHasBeenSet;

                    /**
                     * <p>凭据ID</p>
                     */
                    std::string m_agentCredentialID;
                    bool m_agentCredentialIDHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APIS_V20240801_MODEL_AGENTAPPSERVICEDTO_H_
