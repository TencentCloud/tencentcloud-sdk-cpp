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

#ifndef TENCENTCLOUD_APIS_V20240801_MODEL_AGENTAPPMCPSERVERDTO_H_
#define TENCENTCLOUD_APIS_V20240801_MODEL_AGENTAPPMCPSERVERDTO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Apis
    {
        namespace V20240801
        {
            namespace Model
            {
                /**
                * 关联的mcp服务配置
                */
                class AgentAppMcpServerDTO : public AbstractModel
                {
                public:
                    AgentAppMcpServerDTO();
                    ~AgentAppMcpServerDTO() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取mcp server id
                     * @return ID mcp server id
                     * 
                     */
                    std::string GetID() const;

                    /**
                     * 设置mcp server id
                     * @param _iD mcp server id
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
                     * 获取是否需要鉴权
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NeedAuth 是否需要鉴权
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetNeedAuth() const;

                    /**
                     * 设置是否需要鉴权
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _needAuth 是否需要鉴权
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取凭据代填的ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AgentCredentialID 凭据代填的ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAgentCredentialID() const;

                    /**
                     * 设置凭据代填的ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _agentCredentialID 凭据代填的ID
注意：此字段可能返回 null，表示取不到有效值。
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

                private:

                    /**
                     * mcp server id
                     */
                    std::string m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * 是否需要鉴权
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_needAuth;
                    bool m_needAuthHasBeenSet;

                    /**
                     * 凭据代填的ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_agentCredentialID;
                    bool m_agentCredentialIDHasBeenSet;

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

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APIS_V20240801_MODEL_AGENTAPPMCPSERVERDTO_H_
