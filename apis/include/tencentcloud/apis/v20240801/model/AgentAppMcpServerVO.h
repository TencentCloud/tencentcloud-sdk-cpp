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
                     * 获取绑定ID
                     * @return ID 绑定ID
                     * 
                     */
                    std::string GetID() const;

                    /**
                     * 设置绑定ID
                     * @param _iD 绑定ID
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
                     * 获取需要认证
                     * @return NeedAuth 需要认证
                     * 
                     */
                    bool GetNeedAuth() const;

                    /**
                     * 设置需要认证
                     * @param _needAuth 需要认证
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
                     * 获取凭据ID
                     * @return AgentCredentialID 凭据ID
                     * 
                     */
                    std::string GetAgentCredentialID() const;

                    /**
                     * 设置凭据ID
                     * @param _agentCredentialID 凭据ID
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
                     * 获取凭据详情
                     * @return AgentCredentialVO 凭据详情
                     * 
                     */
                    DescribeAgentCredentialResp GetAgentCredentialVO() const;

                    /**
                     * 设置凭据详情
                     * @param _agentCredentialVO 凭据详情
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
                     * 获取mcp详情
                     * @return McpServerVO mcp详情
                     * 
                     */
                    DescribeMcpServerResponseVO GetMcpServerVO() const;

                    /**
                     * 设置mcp详情
                     * @param _mcpServerVO mcp详情
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
                     * 获取关联时间
                     * @return RelateTime 关联时间
                     * 
                     */
                    std::string GetRelateTime() const;

                    /**
                     * 设置关联时间
                     * @param _relateTime 关联时间
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
                     * 获取应用为OAuth2认证时，sse模式请求mcp时的资源标识
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SSEResourceIdentifier 应用为OAuth2认证时，sse模式请求mcp时的资源标识
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSSEResourceIdentifier() const;

                    /**
                     * 设置应用为OAuth2认证时，sse模式请求mcp时的资源标识
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sSEResourceIdentifier 应用为OAuth2认证时，sse模式请求mcp时的资源标识
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
                     * 获取应用为OAuth2认证时，streamable模式请求mcp时的资源标识
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StreamableResourceIdentifier 应用为OAuth2认证时，streamable模式请求mcp时的资源标识
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStreamableResourceIdentifier() const;

                    /**
                     * 设置应用为OAuth2认证时，streamable模式请求mcp时的资源标识
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _streamableResourceIdentifier 应用为OAuth2认证时，streamable模式请求mcp时的资源标识
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
                     * 获取应用ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AgentAppID 应用ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAgentAppID() const;

                    /**
                     * 设置应用ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _agentAppID 应用ID
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
                     * 获取mcp ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return McpServerID mcp ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMcpServerID() const;

                    /**
                     * 设置mcp ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _mcpServerID mcp ID
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

                private:

                    /**
                     * 绑定ID
                     */
                    std::string m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * 需要认证
                     */
                    bool m_needAuth;
                    bool m_needAuthHasBeenSet;

                    /**
                     * 凭据ID
                     */
                    std::string m_agentCredentialID;
                    bool m_agentCredentialIDHasBeenSet;

                    /**
                     * 凭据详情
                     */
                    DescribeAgentCredentialResp m_agentCredentialVO;
                    bool m_agentCredentialVOHasBeenSet;

                    /**
                     * mcp详情
                     */
                    DescribeMcpServerResponseVO m_mcpServerVO;
                    bool m_mcpServerVOHasBeenSet;

                    /**
                     * 关联时间
                     */
                    std::string m_relateTime;
                    bool m_relateTimeHasBeenSet;

                    /**
                     * 应用为OAuth2认证时，sse模式请求mcp时的资源标识
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_sSEResourceIdentifier;
                    bool m_sSEResourceIdentifierHasBeenSet;

                    /**
                     * 应用为OAuth2认证时，streamable模式请求mcp时的资源标识
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_streamableResourceIdentifier;
                    bool m_streamableResourceIdentifierHasBeenSet;

                    /**
                     * 应用ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_agentAppID;
                    bool m_agentAppIDHasBeenSet;

                    /**
                     * mcp ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_mcpServerID;
                    bool m_mcpServerIDHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APIS_V20240801_MODEL_AGENTAPPMCPSERVERVO_H_
