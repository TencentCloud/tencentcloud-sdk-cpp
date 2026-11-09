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

#ifndef TENCENTCLOUD_APIS_V20240801_MODEL_AGENTAPPMCPSERVERVO_H_
#define TENCENTCLOUD_APIS_V20240801_MODEL_AGENTAPPMCPSERVERVO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/apis/v20240801/model/DescribeAgentCredentialResp.h>
#include <tencentcloud/apis/v20240801/model/DescribeMcpServerResponseVO.h>
#include <tencentcloud/apis/v20240801/model/DescribeAgentAppResp.h>


namespace TencentCloud
{
    namespace Apis
    {
        namespace V20240801
        {
            namespace Model
            {
                /**
                * 应用关联的mcp响应
                */
                class AgentAppMcpServerVO : public AbstractModel
                {
                public:
                    AgentAppMcpServerVO();
                    ~AgentAppMcpServerVO() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>绑定ID</p>
                     * @return ID <p>绑定ID</p>
                     * 
                     */
                    std::string GetID() const;

                    /**
                     * 设置<p>绑定ID</p>
                     * @param _iD <p>绑定ID</p>
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
                     * 获取<p>需要认证</p>
                     * @return NeedAuth <p>需要认证</p>
                     * 
                     */
                    bool GetNeedAuth() const;

                    /**
                     * 设置<p>需要认证</p>
                     * @param _needAuth <p>需要认证</p>
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

                    /**
                     * 获取<p>mcp详情</p>
                     * @return McpServerVO <p>mcp详情</p>
                     * 
                     */
                    DescribeMcpServerResponseVO GetMcpServerVO() const;

                    /**
                     * 设置<p>mcp详情</p>
                     * @param _mcpServerVO <p>mcp详情</p>
                     * 
                     */
                    void SetMcpServerVO(const DescribeMcpServerResponseVO& _mcpServerVO);

                    /**
                     * 判断参数 McpServerVO 是否已赋值
                     * @return McpServerVO 是否已赋值
                     * 
                     */
                    bool McpServerVOHasBeenSet() const;

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
                     * 获取<p>应用为OAuth2认证时，sse模式请求mcp时的资源标识</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SSEResourceIdentifier <p>应用为OAuth2认证时，sse模式请求mcp时的资源标识</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSSEResourceIdentifier() const;

                    /**
                     * 设置<p>应用为OAuth2认证时，sse模式请求mcp时的资源标识</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sSEResourceIdentifier <p>应用为OAuth2认证时，sse模式请求mcp时的资源标识</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSSEResourceIdentifier(const std::string& _sSEResourceIdentifier);

                    /**
                     * 判断参数 SSEResourceIdentifier 是否已赋值
                     * @return SSEResourceIdentifier 是否已赋值
                     * 
                     */
                    bool SSEResourceIdentifierHasBeenSet() const;

                    /**
                     * 获取<p>应用为OAuth2认证时，streamable模式请求mcp时的资源标识</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StreamableResourceIdentifier <p>应用为OAuth2认证时，streamable模式请求mcp时的资源标识</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStreamableResourceIdentifier() const;

                    /**
                     * 设置<p>应用为OAuth2认证时，streamable模式请求mcp时的资源标识</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _streamableResourceIdentifier <p>应用为OAuth2认证时，streamable模式请求mcp时的资源标识</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStreamableResourceIdentifier(const std::string& _streamableResourceIdentifier);

                    /**
                     * 判断参数 StreamableResourceIdentifier 是否已赋值
                     * @return StreamableResourceIdentifier 是否已赋值
                     * 
                     */
                    bool StreamableResourceIdentifierHasBeenSet() const;

                    /**
                     * 获取<p>应用ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AgentAppID <p>应用ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAgentAppID() const;

                    /**
                     * 设置<p>应用ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _agentAppID <p>应用ID</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>mcp ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return McpServerID <p>mcp ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMcpServerID() const;

                    /**
                     * 设置<p>mcp ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _mcpServerID <p>mcp ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMcpServerID(const std::string& _mcpServerID);

                    /**
                     * 判断参数 McpServerID 是否已赋值
                     * @return McpServerID 是否已赋值
                     * 
                     */
                    bool McpServerIDHasBeenSet() const;

                    /**
                     * 获取<p>应用</p>
                     * @return AgentAppVO <p>应用</p>
                     * 
                     */
                    DescribeAgentAppResp GetAgentAppVO() const;

                    /**
                     * 设置<p>应用</p>
                     * @param _agentAppVO <p>应用</p>
                     * 
                     */
                    void SetAgentAppVO(const DescribeAgentAppResp& _agentAppVO);

                    /**
                     * 判断参数 AgentAppVO 是否已赋值
                     * @return AgentAppVO 是否已赋值
                     * 
                     */
                    bool AgentAppVOHasBeenSet() const;

                private:

                    /**
                     * <p>绑定ID</p>
                     */
                    std::string m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * <p>需要认证</p>
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

                    /**
                     * <p>mcp详情</p>
                     */
                    DescribeMcpServerResponseVO m_mcpServerVO;
                    bool m_mcpServerVOHasBeenSet;

                    /**
                     * <p>关联时间</p>
                     */
                    std::string m_relateTime;
                    bool m_relateTimeHasBeenSet;

                    /**
                     * <p>应用为OAuth2认证时，sse模式请求mcp时的资源标识</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_sSEResourceIdentifier;
                    bool m_sSEResourceIdentifierHasBeenSet;

                    /**
                     * <p>应用为OAuth2认证时，streamable模式请求mcp时的资源标识</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_streamableResourceIdentifier;
                    bool m_streamableResourceIdentifierHasBeenSet;

                    /**
                     * <p>应用ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_agentAppID;
                    bool m_agentAppIDHasBeenSet;

                    /**
                     * <p>mcp ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_mcpServerID;
                    bool m_mcpServerIDHasBeenSet;

                    /**
                     * <p>应用</p>
                     */
                    DescribeAgentAppResp m_agentAppVO;
                    bool m_agentAppVOHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APIS_V20240801_MODEL_AGENTAPPMCPSERVERVO_H_
