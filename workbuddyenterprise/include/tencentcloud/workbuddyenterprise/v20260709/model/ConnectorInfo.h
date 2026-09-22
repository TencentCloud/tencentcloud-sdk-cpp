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

#ifndef TENCENTCLOUD_WORKBUDDYENTERPRISE_V20260709_MODEL_CONNECTORINFO_H_
#define TENCENTCLOUD_WORKBUDDYENTERPRISE_V20260709_MODEL_CONNECTORINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Workbuddyenterprise
    {
        namespace V20260709
        {
            namespace Model
            {
                /**
                * 连接器详情（主表 + 最新版本展开）。
                */
                class ConnectorInfo : public AbstractModel
                {
                public:
                    ConnectorInfo();
                    ~ConnectorInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取连接器 ID
                     * @return ConnectorId 连接器 ID
                     * 
                     */
                    std::string GetConnectorId() const;

                    /**
                     * 设置连接器 ID
                     * @param _connectorId 连接器 ID
                     * 
                     */
                    void SetConnectorId(const std::string& _connectorId);

                    /**
                     * 判断参数 ConnectorId 是否已赋值
                     * @return ConnectorId 是否已赋值
                     * 
                     */
                    bool ConnectorIdHasBeenSet() const;

                    /**
                     * 获取连接器短标识（终身不变，跨版本稳定）
                     * @return ConnectorSlug 连接器短标识（终身不变，跨版本稳定）
                     * 
                     */
                    std::string GetConnectorSlug() const;

                    /**
                     * 设置连接器短标识（终身不变，跨版本稳定）
                     * @param _connectorSlug 连接器短标识（终身不变，跨版本稳定）
                     * 
                     */
                    void SetConnectorSlug(const std::string& _connectorSlug);

                    /**
                     * 判断参数 ConnectorSlug 是否已赋值
                     * @return ConnectorSlug 是否已赋值
                     * 
                     */
                    bool ConnectorSlugHasBeenSet() const;

                    /**
                     * 获取版本级连接器密钥
                     * @return ConnectorKey 版本级连接器密钥
                     * 
                     */
                    std::string GetConnectorKey() const;

                    /**
                     * 设置版本级连接器密钥
                     * @param _connectorKey 版本级连接器密钥
                     * 
                     */
                    void SetConnectorKey(const std::string& _connectorKey);

                    /**
                     * 判断参数 ConnectorKey 是否已赋值
                     * @return ConnectorKey 是否已赋值
                     * 
                     */
                    bool ConnectorKeyHasBeenSet() const;

                    /**
                     * 获取连接器名称
                     * @return Name 连接器名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置连接器名称
                     * @param _name 连接器名称
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
                     * 获取连接器描述
                     * @return Description 连接器描述
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置连接器描述
                     * @param _description 连接器描述
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
                     * 获取头像 URL
                     * @return AvatarUrl 头像 URL
                     * 
                     */
                    std::string GetAvatarUrl() const;

                    /**
                     * 设置头像 URL
                     * @param _avatarUrl 头像 URL
                     * 
                     */
                    void SetAvatarUrl(const std::string& _avatarUrl);

                    /**
                     * 判断参数 AvatarUrl 是否已赋值
                     * @return AvatarUrl 是否已赋值
                     * 
                     */
                    bool AvatarUrlHasBeenSet() const;

                    /**
                     * 获取连接器来源：ENTERPRISE_AGENT / ASSISTANT
                     * @return Source 连接器来源：ENTERPRISE_AGENT / ASSISTANT
                     * 
                     */
                    std::string GetSource() const;

                    /**
                     * 设置连接器来源：ENTERPRISE_AGENT / ASSISTANT
                     * @param _source 连接器来源：ENTERPRISE_AGENT / ASSISTANT
                     * 
                     */
                    void SetSource(const std::string& _source);

                    /**
                     * 判断参数 Source 是否已赋值
                     * @return Source 是否已赋值
                     * 
                     */
                    bool SourceHasBeenSet() const;

                    /**
                     * 获取归属企业 ID
                     * @return EnterpriseId 归属企业 ID
                     * 
                     */
                    std::string GetEnterpriseId() const;

                    /**
                     * 设置归属企业 ID
                     * @param _enterpriseId 归属企业 ID
                     * 
                     */
                    void SetEnterpriseId(const std::string& _enterpriseId);

                    /**
                     * 判断参数 EnterpriseId 是否已赋值
                     * @return EnterpriseId 是否已赋值
                     * 
                     */
                    bool EnterpriseIdHasBeenSet() const;

                    /**
                     * 获取连接器类型：MCP_SERVER / A2A / API_SERVICE
                     * @return Type 连接器类型：MCP_SERVER / A2A / API_SERVICE
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置连接器类型：MCP_SERVER / A2A / API_SERVICE
                     * @param _type 连接器类型：MCP_SERVER / A2A / API_SERVICE
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取上游服务地址
                     * @return ServiceUrl 上游服务地址
                     * 
                     */
                    std::string GetServiceUrl() const;

                    /**
                     * 设置上游服务地址
                     * @param _serviceUrl 上游服务地址
                     * 
                     */
                    void SetServiceUrl(const std::string& _serviceUrl);

                    /**
                     * 判断参数 ServiceUrl 是否已赋值
                     * @return ServiceUrl 是否已赋值
                     * 
                     */
                    bool ServiceUrlHasBeenSet() const;

                    /**
                     * 获取授权方式列表：NONE / ONEID / OAUTH2_IDP
                     * @return AuthModes 授权方式列表：NONE / ONEID / OAUTH2_IDP
                     * 
                     */
                    std::vector<std::string> GetAuthModes() const;

                    /**
                     * 设置授权方式列表：NONE / ONEID / OAUTH2_IDP
                     * @param _authModes 授权方式列表：NONE / ONEID / OAUTH2_IDP
                     * 
                     */
                    void SetAuthModes(const std::vector<std::string>& _authModes);

                    /**
                     * 判断参数 AuthModes 是否已赋值
                     * @return AuthModes 是否已赋值
                     * 
                     */
                    bool AuthModesHasBeenSet() const;

                    /**
                     * 获取最新版本号
                     * @return LatestVersionNo 最新版本号
                     * 
                     */
                    int64_t GetLatestVersionNo() const;

                    /**
                     * 设置最新版本号
                     * @param _latestVersionNo 最新版本号
                     * 
                     */
                    void SetLatestVersionNo(const int64_t& _latestVersionNo);

                    /**
                     * 判断参数 LatestVersionNo 是否已赋值
                     * @return LatestVersionNo 是否已赋值
                     * 
                     */
                    bool LatestVersionNoHasBeenSet() const;

                    /**
                     * 获取连接器状态：ACTIVE / DISABLED
                     * @return Status 连接器状态：ACTIVE / DISABLED
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置连接器状态：ACTIVE / DISABLED
                     * @param _status 连接器状态：ACTIVE / DISABLED
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
                     * 获取创建人 ID
                     * @return CreatorId 创建人 ID
                     * 
                     */
                    std::string GetCreatorId() const;

                    /**
                     * 设置创建人 ID
                     * @param _creatorId 创建人 ID
                     * 
                     */
                    void SetCreatorId(const std::string& _creatorId);

                    /**
                     * 判断参数 CreatorId 是否已赋值
                     * @return CreatorId 是否已赋值
                     * 
                     */
                    bool CreatorIdHasBeenSet() const;

                    /**
                     * 获取创建时间（ISO8601，UTC）
                     * @return CreatedTime 创建时间（ISO8601，UTC）
                     * 
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置创建时间（ISO8601，UTC）
                     * @param _createdTime 创建时间（ISO8601，UTC）
                     * 
                     */
                    void SetCreatedTime(const std::string& _createdTime);

                    /**
                     * 判断参数 CreatedTime 是否已赋值
                     * @return CreatedTime 是否已赋值
                     * 
                     */
                    bool CreatedTimeHasBeenSet() const;

                    /**
                     * 获取最后修改时间（ISO8601，UTC）
                     * @return ModifiedTime 最后修改时间（ISO8601，UTC）
                     * 
                     */
                    std::string GetModifiedTime() const;

                    /**
                     * 设置最后修改时间（ISO8601，UTC）
                     * @param _modifiedTime 最后修改时间（ISO8601，UTC）
                     * 
                     */
                    void SetModifiedTime(const std::string& _modifiedTime);

                    /**
                     * 判断参数 ModifiedTime 是否已赋值
                     * @return ModifiedTime 是否已赋值
                     * 
                     */
                    bool ModifiedTimeHasBeenSet() const;

                private:

                    /**
                     * 连接器 ID
                     */
                    std::string m_connectorId;
                    bool m_connectorIdHasBeenSet;

                    /**
                     * 连接器短标识（终身不变，跨版本稳定）
                     */
                    std::string m_connectorSlug;
                    bool m_connectorSlugHasBeenSet;

                    /**
                     * 版本级连接器密钥
                     */
                    std::string m_connectorKey;
                    bool m_connectorKeyHasBeenSet;

                    /**
                     * 连接器名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 连接器描述
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 头像 URL
                     */
                    std::string m_avatarUrl;
                    bool m_avatarUrlHasBeenSet;

                    /**
                     * 连接器来源：ENTERPRISE_AGENT / ASSISTANT
                     */
                    std::string m_source;
                    bool m_sourceHasBeenSet;

                    /**
                     * 归属企业 ID
                     */
                    std::string m_enterpriseId;
                    bool m_enterpriseIdHasBeenSet;

                    /**
                     * 连接器类型：MCP_SERVER / A2A / API_SERVICE
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 上游服务地址
                     */
                    std::string m_serviceUrl;
                    bool m_serviceUrlHasBeenSet;

                    /**
                     * 授权方式列表：NONE / ONEID / OAUTH2_IDP
                     */
                    std::vector<std::string> m_authModes;
                    bool m_authModesHasBeenSet;

                    /**
                     * 最新版本号
                     */
                    int64_t m_latestVersionNo;
                    bool m_latestVersionNoHasBeenSet;

                    /**
                     * 连接器状态：ACTIVE / DISABLED
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 创建人 ID
                     */
                    std::string m_creatorId;
                    bool m_creatorIdHasBeenSet;

                    /**
                     * 创建时间（ISO8601，UTC）
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * 最后修改时间（ISO8601，UTC）
                     */
                    std::string m_modifiedTime;
                    bool m_modifiedTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WORKBUDDYENTERPRISE_V20260709_MODEL_CONNECTORINFO_H_
