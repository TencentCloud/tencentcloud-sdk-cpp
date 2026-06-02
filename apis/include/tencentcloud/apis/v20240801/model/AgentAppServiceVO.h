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

#ifndef TENCENTCLOUD_APIS_V20240801_MODEL_AGENTAPPSERVICEVO_H_
#define TENCENTCLOUD_APIS_V20240801_MODEL_AGENTAPPSERVICEVO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/apis/v20240801/model/InvokeLimitConfigDTO.h>
#include <tencentcloud/apis/v20240801/model/ServiceVO.h>
#include <tencentcloud/apis/v20240801/model/DescribeAgentCredentialResp.h>


namespace TencentCloud
{
    namespace Apis
    {
        namespace V20240801
        {
            namespace Model
            {
                /**
                * 应用API详情
                */
                class AgentAppServiceVO : public AbstractModel
                {
                public:
                    AgentAppServiceVO();
                    ~AgentAppServiceVO() = default;
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
                     * 获取<p>应用ID</p>
                     * @return AgentAppID <p>应用ID</p>
                     * 
                     */
                    std::string GetAgentAppID() const;

                    /**
                     * 设置<p>应用ID</p>
                     * @param _agentAppID <p>应用ID</p>
                     * 
                     */
                    void SetAgentAppID(const std::string& _agentAppID);

                    /**
                     * 判断参数 AgentAppID 是否已赋值
                     * @return AgentAppID 是否已赋值
                     * 
                     */
                    bool AgentAppIDHasBeenSet() const;

                    /**
                     * 获取<p>服务ID</p>
                     * @return ServiceID <p>服务ID</p>
                     * 
                     */
                    std::string GetServiceID() const;

                    /**
                     * 设置<p>服务ID</p>
                     * @param _serviceID <p>服务ID</p>
                     * 
                     */
                    void SetServiceID(const std::string& _serviceID);

                    /**
                     * 判断参数 ServiceID 是否已赋值
                     * @return ServiceID 是否已赋值
                     * 
                     */
                    bool ServiceIDHasBeenSet() const;

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
                     * 获取<p>服务详情</p>
                     * @return ServiceVO <p>服务详情</p>
                     * 
                     */
                    ServiceVO GetServiceVO() const;

                    /**
                     * 设置<p>服务详情</p>
                     * @param _serviceVO <p>服务详情</p>
                     * 
                     */
                    void SetServiceVO(const ServiceVO& _serviceVO);

                    /**
                     * 判断参数 ServiceVO 是否已赋值
                     * @return ServiceVO 是否已赋值
                     * 
                     */
                    bool ServiceVOHasBeenSet() const;

                    /**
                     * 获取<p>关联时间</p>
                     * @return RelateTime <p>关联时间</p>
                     * 
                     */
                    std::string GetRelateTime() const;

                    /**
                     * 设置<p>关联时间</p>
                     * @param _relateTime <p>关联时间</p>
                     * 
                     */
                    void SetRelateTime(const std::string& _relateTime);

                    /**
                     * 判断参数 RelateTime 是否已赋值
                     * @return RelateTime 是否已赋值
                     * 
                     */
                    bool RelateTimeHasBeenSet() const;

                    /**
                     * 获取<p>是否需要认证</p>
                     * @return NeedAuth <p>是否需要认证</p>
                     * 
                     */
                    bool GetNeedAuth() const;

                    /**
                     * 设置<p>是否需要认证</p>
                     * @param _needAuth <p>是否需要认证</p>
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

                    /**
                     * 获取<p>凭据详情</p>
                     * @return AgentCredentialVO <p>凭据详情</p>
                     * 
                     */
                    DescribeAgentCredentialResp GetAgentCredentialVO() const;

                    /**
                     * 设置<p>凭据详情</p>
                     * @param _agentCredentialVO <p>凭据详情</p>
                     * 
                     */
                    void SetAgentCredentialVO(const DescribeAgentCredentialResp& _agentCredentialVO);

                    /**
                     * 判断参数 AgentCredentialVO 是否已赋值
                     * @return AgentCredentialVO 是否已赋值
                     * 
                     */
                    bool AgentCredentialVOHasBeenSet() const;

                private:

                    /**
                     * <p>ID</p>
                     */
                    std::string m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * <p>应用ID</p>
                     */
                    std::string m_agentAppID;
                    bool m_agentAppIDHasBeenSet;

                    /**
                     * <p>服务ID</p>
                     */
                    std::string m_serviceID;
                    bool m_serviceIDHasBeenSet;

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
                     * <p>服务详情</p>
                     */
                    ServiceVO m_serviceVO;
                    bool m_serviceVOHasBeenSet;

                    /**
                     * <p>关联时间</p>
                     */
                    std::string m_relateTime;
                    bool m_relateTimeHasBeenSet;

                    /**
                     * <p>是否需要认证</p>
                     */
                    bool m_needAuth;
                    bool m_needAuthHasBeenSet;

                    /**
                     * <p>凭据ID</p>
                     */
                    std::string m_agentCredentialID;
                    bool m_agentCredentialIDHasBeenSet;

                    /**
                     * <p>凭据详情</p>
                     */
                    DescribeAgentCredentialResp m_agentCredentialVO;
                    bool m_agentCredentialVOHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APIS_V20240801_MODEL_AGENTAPPSERVICEVO_H_
