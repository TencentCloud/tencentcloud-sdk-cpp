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
                     * 获取<p>连接器 ID</p>
                     * @return ConnectorId <p>连接器 ID</p>
                     * 
                     */
                    std::string GetConnectorId() const;

                    /**
                     * 设置<p>连接器 ID</p>
                     * @param _connectorId <p>连接器 ID</p>
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
                     * 获取<p>连接器短标识（终身不变，跨版本稳定）</p>
                     * @return ConnectorSlug <p>连接器短标识（终身不变，跨版本稳定）</p>
                     * 
                     */
                    std::string GetConnectorSlug() const;

                    /**
                     * 设置<p>连接器短标识（终身不变，跨版本稳定）</p>
                     * @param _connectorSlug <p>连接器短标识（终身不变，跨版本稳定）</p>
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
                     * 获取<p>版本级连接器密钥</p>
                     * @return ConnectorKey <p>版本级连接器密钥</p>
                     * 
                     */
                    std::string GetConnectorKey() const;

                    /**
                     * 设置<p>版本级连接器密钥</p>
                     * @param _connectorKey <p>版本级连接器密钥</p>
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
                     * 获取<p>连接器名称</p>
                     * @return Name <p>连接器名称</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>连接器名称</p>
                     * @param _name <p>连接器名称</p>
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
                     * 获取<p>连接器描述</p>
                     * @return Description <p>连接器描述</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>连接器描述</p>
                     * @param _description <p>连接器描述</p>
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
                     * 获取<p>头像 URL</p>
                     * @return AvatarUrl <p>头像 URL</p>
                     * 
                     */
                    std::string GetAvatarUrl() const;

                    /**
                     * 设置<p>头像 URL</p>
                     * @param _avatarUrl <p>头像 URL</p>
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
                     * 获取<p>连接器来源：ENTERPRISE_AGENT / ASSISTANT</p>
                     * @return Source <p>连接器来源：ENTERPRISE_AGENT / ASSISTANT</p>
                     * 
                     */
                    std::string GetSource() const;

                    /**
                     * 设置<p>连接器来源：ENTERPRISE_AGENT / ASSISTANT</p>
                     * @param _source <p>连接器来源：ENTERPRISE_AGENT / ASSISTANT</p>
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
                     * 获取<p>归属企业 ID</p>
                     * @return EnterpriseId <p>归属企业 ID</p>
                     * 
                     */
                    std::string GetEnterpriseId() const;

                    /**
                     * 设置<p>归属企业 ID</p>
                     * @param _enterpriseId <p>归属企业 ID</p>
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
                     * 获取<p>连接器类型：MCP_SERVER / A2A / API_SERVICE</p>
                     * @return Type <p>连接器类型：MCP_SERVER / A2A / API_SERVICE</p>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>连接器类型：MCP_SERVER / A2A / API_SERVICE</p>
                     * @param _type <p>连接器类型：MCP_SERVER / A2A / API_SERVICE</p>
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
                     * 获取<p>上游服务地址</p>
                     * @return ServiceUrl <p>上游服务地址</p>
                     * 
                     */
                    std::string GetServiceUrl() const;

                    /**
                     * 设置<p>上游服务地址</p>
                     * @param _serviceUrl <p>上游服务地址</p>
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
                     * 获取<p>授权方式列表：NONE / ONEID / OAUTH2_IDP / API_KEY / DYNAMIC_API_KEY。DYNAMIC_API_KEY 表示按每轮请求提供的动态字段，通过 HeaderMappings 注入出站 HTTP Header。</p>
                     * @return AuthModes <p>授权方式列表：NONE / ONEID / OAUTH2_IDP / API_KEY / DYNAMIC_API_KEY。DYNAMIC_API_KEY 表示按每轮请求提供的动态字段，通过 HeaderMappings 注入出站 HTTP Header。</p>
                     * 
                     */
                    std::vector<std::string> GetAuthModes() const;

                    /**
                     * 设置<p>授权方式列表：NONE / ONEID / OAUTH2_IDP / API_KEY / DYNAMIC_API_KEY。DYNAMIC_API_KEY 表示按每轮请求提供的动态字段，通过 HeaderMappings 注入出站 HTTP Header。</p>
                     * @param _authModes <p>授权方式列表：NONE / ONEID / OAUTH2_IDP / API_KEY / DYNAMIC_API_KEY。DYNAMIC_API_KEY 表示按每轮请求提供的动态字段，通过 HeaderMappings 注入出站 HTTP Header。</p>
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
                     * 获取<p>最新版本号</p>
                     * @return LatestVersionNo <p>最新版本号</p>
                     * 
                     */
                    int64_t GetLatestVersionNo() const;

                    /**
                     * 设置<p>最新版本号</p>
                     * @param _latestVersionNo <p>最新版本号</p>
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
                     * 获取<p>连接器状态：ACTIVE / DISABLED</p>
                     * @return Status <p>连接器状态：ACTIVE / DISABLED</p>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>连接器状态：ACTIVE / DISABLED</p>
                     * @param _status <p>连接器状态：ACTIVE / DISABLED</p>
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
                     * 获取<p>创建人 ID</p>
                     * @return CreatorId <p>创建人 ID</p>
                     * 
                     */
                    std::string GetCreatorId() const;

                    /**
                     * 设置<p>创建人 ID</p>
                     * @param _creatorId <p>创建人 ID</p>
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
                     * 获取<p>创建时间（ISO8601，UTC）</p>
                     * @return CreatedTime <p>创建时间（ISO8601，UTC）</p>
                     * 
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置<p>创建时间（ISO8601，UTC）</p>
                     * @param _createdTime <p>创建时间（ISO8601，UTC）</p>
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
                     * 获取<p>最后修改时间（ISO8601，UTC）</p>
                     * @return ModifiedTime <p>最后修改时间（ISO8601，UTC）</p>
                     * 
                     */
                    std::string GetModifiedTime() const;

                    /**
                     * 设置<p>最后修改时间（ISO8601，UTC）</p>
                     * @param _modifiedTime <p>最后修改时间（ISO8601，UTC）</p>
                     * 
                     */
                    void SetModifiedTime(const std::string& _modifiedTime);

                    /**
                     * 判断参数 ModifiedTime 是否已赋值
                     * @return ModifiedTime 是否已赋值
                     * 
                     */
                    bool ModifiedTimeHasBeenSet() const;

                    /**
                     * 获取<p>VPC 网络配置 ID。为空表示该连接器通过公网访问 ServiceUrl。仅绑定 VPC 网络配置时本字段有值。</p>
                     * @return VpcConfigId <p>VPC 网络配置 ID。为空表示该连接器通过公网访问 ServiceUrl。仅绑定 VPC 网络配置时本字段有值。</p>
                     * 
                     */
                    std::string GetVpcConfigId() const;

                    /**
                     * 设置<p>VPC 网络配置 ID。为空表示该连接器通过公网访问 ServiceUrl。仅绑定 VPC 网络配置时本字段有值。</p>
                     * @param _vpcConfigId <p>VPC 网络配置 ID。为空表示该连接器通过公网访问 ServiceUrl。仅绑定 VPC 网络配置时本字段有值。</p>
                     * 
                     */
                    void SetVpcConfigId(const std::string& _vpcConfigId);

                    /**
                     * 判断参数 VpcConfigId 是否已赋值
                     * @return VpcConfigId 是否已赋值
                     * 
                     */
                    bool VpcConfigIdHasBeenSet() const;

                    /**
                     * 获取<p>展示名：console 老连接器目录（DescribeConsoleConnectorList）下发，取 registry data.display_name，老数据缺失时回落 Name；云上目录无独立展示名，省略不返回。Name 是存储名/选型回写键（含 scope 前缀），不承担展示职责。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DisplayName <p>展示名：console 老连接器目录（DescribeConsoleConnectorList）下发，取 registry data.display_name，老数据缺失时回落 Name；云上目录无独立展示名，省略不返回。Name 是存储名/选型回写键（含 scope 前缀），不承担展示职责。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDisplayName() const;

                    /**
                     * 设置<p>展示名：console 老连接器目录（DescribeConsoleConnectorList）下发，取 registry data.display_name，老数据缺失时回落 Name；云上目录无独立展示名，省略不返回。Name 是存储名/选型回写键（含 scope 前缀），不承担展示职责。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _displayName <p>展示名：console 老连接器目录（DescribeConsoleConnectorList）下发，取 registry data.display_name，老数据缺失时回落 Name；云上目录无独立展示名，省略不返回。Name 是存储名/选型回写键（含 scope 前缀），不承担展示职责。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDisplayName(const std::string& _displayName);

                    /**
                     * 判断参数 DisplayName 是否已赋值
                     * @return DisplayName 是否已赋值
                     * 
                     */
                    bool DisplayNameHasBeenSet() const;

                private:

                    /**
                     * <p>连接器 ID</p>
                     */
                    std::string m_connectorId;
                    bool m_connectorIdHasBeenSet;

                    /**
                     * <p>连接器短标识（终身不变，跨版本稳定）</p>
                     */
                    std::string m_connectorSlug;
                    bool m_connectorSlugHasBeenSet;

                    /**
                     * <p>版本级连接器密钥</p>
                     */
                    std::string m_connectorKey;
                    bool m_connectorKeyHasBeenSet;

                    /**
                     * <p>连接器名称</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>连接器描述</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>头像 URL</p>
                     */
                    std::string m_avatarUrl;
                    bool m_avatarUrlHasBeenSet;

                    /**
                     * <p>连接器来源：ENTERPRISE_AGENT / ASSISTANT</p>
                     */
                    std::string m_source;
                    bool m_sourceHasBeenSet;

                    /**
                     * <p>归属企业 ID</p>
                     */
                    std::string m_enterpriseId;
                    bool m_enterpriseIdHasBeenSet;

                    /**
                     * <p>连接器类型：MCP_SERVER / A2A / API_SERVICE</p>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>上游服务地址</p>
                     */
                    std::string m_serviceUrl;
                    bool m_serviceUrlHasBeenSet;

                    /**
                     * <p>授权方式列表：NONE / ONEID / OAUTH2_IDP / API_KEY / DYNAMIC_API_KEY。DYNAMIC_API_KEY 表示按每轮请求提供的动态字段，通过 HeaderMappings 注入出站 HTTP Header。</p>
                     */
                    std::vector<std::string> m_authModes;
                    bool m_authModesHasBeenSet;

                    /**
                     * <p>最新版本号</p>
                     */
                    int64_t m_latestVersionNo;
                    bool m_latestVersionNoHasBeenSet;

                    /**
                     * <p>连接器状态：ACTIVE / DISABLED</p>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>创建人 ID</p>
                     */
                    std::string m_creatorId;
                    bool m_creatorIdHasBeenSet;

                    /**
                     * <p>创建时间（ISO8601，UTC）</p>
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * <p>最后修改时间（ISO8601，UTC）</p>
                     */
                    std::string m_modifiedTime;
                    bool m_modifiedTimeHasBeenSet;

                    /**
                     * <p>VPC 网络配置 ID。为空表示该连接器通过公网访问 ServiceUrl。仅绑定 VPC 网络配置时本字段有值。</p>
                     */
                    std::string m_vpcConfigId;
                    bool m_vpcConfigIdHasBeenSet;

                    /**
                     * <p>展示名：console 老连接器目录（DescribeConsoleConnectorList）下发，取 registry data.display_name，老数据缺失时回落 Name；云上目录无独立展示名，省略不返回。Name 是存储名/选型回写键（含 scope 前缀），不承担展示职责。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_displayName;
                    bool m_displayNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WORKBUDDYENTERPRISE_V20260709_MODEL_CONNECTORINFO_H_
