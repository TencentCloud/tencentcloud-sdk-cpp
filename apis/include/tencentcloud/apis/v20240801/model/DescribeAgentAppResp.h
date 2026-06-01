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

#ifndef TENCENTCLOUD_APIS_V20240801_MODEL_DESCRIBEAGENTAPPRESP_H_
#define TENCENTCLOUD_APIS_V20240801_MODEL_DESCRIBEAGENTAPPRESP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/apis/v20240801/model/AgentAppSecretKeyVO.h>


namespace TencentCloud
{
    namespace Apis
    {
        namespace V20240801
        {
            namespace Model
            {
                /**
                * 查询app详情响应
                */
                class DescribeAgentAppResp : public AbstractModel
                {
                public:
                    DescribeAgentAppResp();
                    ~DescribeAgentAppResp() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>租户appID</p>
                     * @return AppID <p>租户appID</p>
                     * 
                     */
                    int64_t GetAppID() const;

                    /**
                     * 设置<p>租户appID</p>
                     * @param _appID <p>租户appID</p>
                     * 
                     */
                    void SetAppID(const int64_t& _appID);

                    /**
                     * 判断参数 AppID 是否已赋值
                     * @return AppID 是否已赋值
                     * 
                     */
                    bool AppIDHasBeenSet() const;

                    /**
                     * 获取<p>租户ID</p>
                     * @return Uin <p>租户ID</p>
                     * 
                     */
                    std::string GetUin() const;

                    /**
                     * 设置<p>租户ID</p>
                     * @param _uin <p>租户ID</p>
                     * 
                     */
                    void SetUin(const std::string& _uin);

                    /**
                     * 判断参数 Uin 是否已赋值
                     * @return Uin 是否已赋值
                     * 
                     */
                    bool UinHasBeenSet() const;

                    /**
                     * 获取<p>实例ID</p>
                     * @return InstanceID <p>实例ID</p>
                     * 
                     */
                    std::string GetInstanceID() const;

                    /**
                     * 设置<p>实例ID</p>
                     * @param _instanceID <p>实例ID</p>
                     * 
                     */
                    void SetInstanceID(const std::string& _instanceID);

                    /**
                     * 判断参数 InstanceID 是否已赋值
                     * @return InstanceID 是否已赋值
                     * 
                     */
                    bool InstanceIDHasBeenSet() const;

                    /**
                     * 获取<p>应用ID</p>
                     * @return ID <p>应用ID</p>
                     * 
                     */
                    std::string GetID() const;

                    /**
                     * 设置<p>应用ID</p>
                     * @param _iD <p>应用ID</p>
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
                     * 获取<p>名称</p>
                     * @return Name <p>名称</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>名称</p>
                     * @param _name <p>名称</p>
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取<p>描述</p>
                     * @return Description <p>描述</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>描述</p>
                     * @param _description <p>描述</p>
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取<p>状态</p>
                     * @return Status <p>状态</p>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>状态</p>
                     * @param _status <p>状态</p>
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>创建时间</p>
                     * @return CreateTime <p>创建时间</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>创建时间</p>
                     * @param _createTime <p>创建时间</p>
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取<p>修改时间</p>
                     * @return UpdateTime <p>修改时间</p>
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置<p>修改时间</p>
                     * @param _updateTime <p>修改时间</p>
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取<p>认证类型</p>
                     * @return AuthType <p>认证类型</p>
                     * 
                     */
                    std::string GetAuthType() const;

                    /**
                     * 设置<p>认证类型</p>
                     * @param _authType <p>认证类型</p>
                     * 
                     */
                    void SetAuthType(const std::string& _authType);

                    /**
                     * 判断参数 AuthType 是否已赋值
                     * @return AuthType 是否已赋值
                     * 
                     */
                    bool AuthTypeHasBeenSet() const;

                    /**
                     * 获取<p>apiKeys列表，脱敏</p>
                     * @return ApiKeys <p>apiKeys列表，脱敏</p>
                     * 
                     */
                    std::vector<std::string> GetApiKeys() const;

                    /**
                     * 设置<p>apiKeys列表，脱敏</p>
                     * @param _apiKeys <p>apiKeys列表，脱敏</p>
                     * 
                     */
                    void SetApiKeys(const std::vector<std::string>& _apiKeys);

                    /**
                     * 判断参数 ApiKeys 是否已赋值
                     * @return ApiKeys 是否已赋值
                     * 
                     */
                    bool ApiKeysHasBeenSet() const;

                    /**
                     * 获取<p>secretKey列表，脱敏</p>
                     * @return SecretKeys <p>secretKey列表，脱敏</p>
                     * 
                     */
                    std::vector<AgentAppSecretKeyVO> GetSecretKeys() const;

                    /**
                     * 设置<p>secretKey列表，脱敏</p>
                     * @param _secretKeys <p>secretKey列表，脱敏</p>
                     * 
                     */
                    void SetSecretKeys(const std::vector<AgentAppSecretKeyVO>& _secretKeys);

                    /**
                     * 判断参数 SecretKeys 是否已赋值
                     * @return SecretKeys 是否已赋值
                     * 
                     */
                    bool SecretKeysHasBeenSet() const;

                    /**
                     * 获取<p>OAuth2 Resource Server ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OAuth2ResourceServerID <p>OAuth2 Resource Server ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOAuth2ResourceServerID() const;

                    /**
                     * 设置<p>OAuth2 Resource Server ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _oAuth2ResourceServerID <p>OAuth2 Resource Server ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOAuth2ResourceServerID(const std::string& _oAuth2ResourceServerID);

                    /**
                     * 判断参数 OAuth2ResourceServerID 是否已赋值
                     * @return OAuth2ResourceServerID 是否已赋值
                     * 
                     */
                    bool OAuth2ResourceServerIDHasBeenSet() const;

                    /**
                     * 获取<p>绑定mcpServer数量</p>
                     * @return McpServersNum <p>绑定mcpServer数量</p>
                     * 
                     */
                    int64_t GetMcpServersNum() const;

                    /**
                     * 设置<p>绑定mcpServer数量</p>
                     * @param _mcpServersNum <p>绑定mcpServer数量</p>
                     * 
                     */
                    void SetMcpServersNum(const int64_t& _mcpServersNum);

                    /**
                     * 判断参数 McpServersNum 是否已赋值
                     * @return McpServersNum 是否已赋值
                     * 
                     */
                    bool McpServersNumHasBeenSet() const;

                    /**
                     * 获取<p>绑定的模型服务数量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ModelServicesNum <p>绑定的模型服务数量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetModelServicesNum() const;

                    /**
                     * 设置<p>绑定的模型服务数量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _modelServicesNum <p>绑定的模型服务数量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetModelServicesNum(const int64_t& _modelServicesNum);

                    /**
                     * 判断参数 ModelServicesNum 是否已赋值
                     * @return ModelServicesNum 是否已赋值
                     * 
                     */
                    bool ModelServicesNumHasBeenSet() const;

                    /**
                     * 获取<p>API认证列表</p>
                     * @return ConnectorIDs <p>API认证列表</p>
                     * 
                     */
                    std::vector<std::string> GetConnectorIDs() const;

                    /**
                     * 设置<p>API认证列表</p>
                     * @param _connectorIDs <p>API认证列表</p>
                     * 
                     */
                    void SetConnectorIDs(const std::vector<std::string>& _connectorIDs);

                    /**
                     * 判断参数 ConnectorIDs 是否已赋值
                     * @return ConnectorIDs 是否已赋值
                     * 
                     */
                    bool ConnectorIDsHasBeenSet() const;

                    /**
                     * 获取<p>关联API数量</p>
                     * @return ServicesNum <p>关联API数量</p>
                     * 
                     */
                    int64_t GetServicesNum() const;

                    /**
                     * 设置<p>关联API数量</p>
                     * @param _servicesNum <p>关联API数量</p>
                     * 
                     */
                    void SetServicesNum(const int64_t& _servicesNum);

                    /**
                     * 判断参数 ServicesNum 是否已赋值
                     * @return ServicesNum 是否已赋值
                     * 
                     */
                    bool ServicesNumHasBeenSet() const;

                private:

                    /**
                     * <p>租户appID</p>
                     */
                    int64_t m_appID;
                    bool m_appIDHasBeenSet;

                    /**
                     * <p>租户ID</p>
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * <p>实例ID</p>
                     */
                    std::string m_instanceID;
                    bool m_instanceIDHasBeenSet;

                    /**
                     * <p>应用ID</p>
                     */
                    std::string m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * <p>名称</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>描述</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>状态</p>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>创建时间</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>修改时间</p>
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * <p>认证类型</p>
                     */
                    std::string m_authType;
                    bool m_authTypeHasBeenSet;

                    /**
                     * <p>apiKeys列表，脱敏</p>
                     */
                    std::vector<std::string> m_apiKeys;
                    bool m_apiKeysHasBeenSet;

                    /**
                     * <p>secretKey列表，脱敏</p>
                     */
                    std::vector<AgentAppSecretKeyVO> m_secretKeys;
                    bool m_secretKeysHasBeenSet;

                    /**
                     * <p>OAuth2 Resource Server ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_oAuth2ResourceServerID;
                    bool m_oAuth2ResourceServerIDHasBeenSet;

                    /**
                     * <p>绑定mcpServer数量</p>
                     */
                    int64_t m_mcpServersNum;
                    bool m_mcpServersNumHasBeenSet;

                    /**
                     * <p>绑定的模型服务数量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_modelServicesNum;
                    bool m_modelServicesNumHasBeenSet;

                    /**
                     * <p>API认证列表</p>
                     */
                    std::vector<std::string> m_connectorIDs;
                    bool m_connectorIDsHasBeenSet;

                    /**
                     * <p>关联API数量</p>
                     */
                    int64_t m_servicesNum;
                    bool m_servicesNumHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APIS_V20240801_MODEL_DESCRIBEAGENTAPPRESP_H_
