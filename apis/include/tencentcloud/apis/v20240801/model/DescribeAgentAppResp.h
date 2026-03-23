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
                     * 获取租户appID
                     * @return AppID 租户appID
                     * 
                     */
                    int64_t GetAppID() const;

                    /**
                     * 设置租户appID
                     * @param _appID 租户appID
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
                     * 获取租户ID
                     * @return Uin 租户ID
                     * 
                     */
                    std::string GetUin() const;

                    /**
                     * 设置租户ID
                     * @param _uin 租户ID
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
                     * 获取实例ID
                     * @return InstanceID 实例ID
                     * 
                     */
                    std::string GetInstanceID() const;

                    /**
                     * 设置实例ID
                     * @param _instanceID 实例ID
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
                     * 获取应用ID
                     * @return ID 应用ID
                     * 
                     */
                    std::string GetID() const;

                    /**
                     * 设置应用ID
                     * @param _iD 应用ID
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
                     * 获取名称
                     * @return Name 名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置名称
                     * @param _name 名称
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
                     * 获取描述
                     * @return Description 描述
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置描述
                     * @param _description 描述
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
                     * 获取状态
                     * @return Status 状态
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置状态
                     * @param _status 状态
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
                     * 获取创建时间
                     * @return CreateTime 创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间
                     * @param _createTime 创建时间
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
                     * 获取修改时间
                     * @return UpdateTime 修改时间
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置修改时间
                     * @param _updateTime 修改时间
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
                     * 获取认证类型
                     * @return AuthType 认证类型
                     * 
                     */
                    std::string GetAuthType() const;

                    /**
                     * 设置认证类型
                     * @param _authType 认证类型
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
                     * 获取apiKeys列表，脱敏
                     * @return ApiKeys apiKeys列表，脱敏
                     * 
                     */
                    std::vector<std::string> GetApiKeys() const;

                    /**
                     * 设置apiKeys列表，脱敏
                     * @param _apiKeys apiKeys列表，脱敏
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
                     * 获取secretKey列表，脱敏
                     * @return SecretKeys secretKey列表，脱敏
                     * 
                     */
                    std::vector<AgentAppSecretKeyVO> GetSecretKeys() const;

                    /**
                     * 设置secretKey列表，脱敏
                     * @param _secretKeys secretKey列表，脱敏
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
                     * 获取OAuth2 Resource Server ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OAuth2ResourceServerID OAuth2 Resource Server ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOAuth2ResourceServerID() const;

                    /**
                     * 设置OAuth2 Resource Server ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _oAuth2ResourceServerID OAuth2 Resource Server ID
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
                     * 获取绑定mcpServer数量
                     * @return McpServersNum 绑定mcpServer数量
                     * 
                     */
                    int64_t GetMcpServersNum() const;

                    /**
                     * 设置绑定mcpServer数量
                     * @param _mcpServersNum 绑定mcpServer数量
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
                     * 获取绑定的模型服务数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ModelServicesNum 绑定的模型服务数量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetModelServicesNum() const;

                    /**
                     * 设置绑定的模型服务数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _modelServicesNum 绑定的模型服务数量
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

                private:

                    /**
                     * 租户appID
                     */
                    int64_t m_appID;
                    bool m_appIDHasBeenSet;

                    /**
                     * 租户ID
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * 实例ID
                     */
                    std::string m_instanceID;
                    bool m_instanceIDHasBeenSet;

                    /**
                     * 应用ID
                     */
                    std::string m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * 名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 描述
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 状态
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 修改时间
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 认证类型
                     */
                    std::string m_authType;
                    bool m_authTypeHasBeenSet;

                    /**
                     * apiKeys列表，脱敏
                     */
                    std::vector<std::string> m_apiKeys;
                    bool m_apiKeysHasBeenSet;

                    /**
                     * secretKey列表，脱敏
                     */
                    std::vector<AgentAppSecretKeyVO> m_secretKeys;
                    bool m_secretKeysHasBeenSet;

                    /**
                     * OAuth2 Resource Server ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_oAuth2ResourceServerID;
                    bool m_oAuth2ResourceServerIDHasBeenSet;

                    /**
                     * 绑定mcpServer数量
                     */
                    int64_t m_mcpServersNum;
                    bool m_mcpServersNumHasBeenSet;

                    /**
                     * 绑定的模型服务数量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_modelServicesNum;
                    bool m_modelServicesNumHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APIS_V20240801_MODEL_DESCRIBEAGENTAPPRESP_H_
