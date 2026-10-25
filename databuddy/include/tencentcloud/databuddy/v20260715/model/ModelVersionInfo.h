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

#ifndef TENCENTCLOUD_DATABUDDY_V20260715_MODEL_MODELVERSIONINFO_H_
#define TENCENTCLOUD_DATABUDDY_V20260715_MODEL_MODELVERSIONINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/databuddy/v20260715/model/KVPair.h>
#include <tencentcloud/databuddy/v20260715/model/Audit.h>
#include <tencentcloud/databuddy/v20260715/model/AssetTagVote.h>


namespace TencentCloud
{
    namespace Databuddy
    {
        namespace V20260715
        {
            namespace Model
            {
                /**
                * 模型版本信息
                */
                class ModelVersionInfo : public AbstractModel
                {
                public:
                    ModelVersionInfo();
                    ~ModelVersionInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取版本号
                     * @return Version 版本号
                     * 
                     */
                    std::string GetVersion() const;

                    /**
                     * 设置版本号
                     * @param _version 版本号
                     * 
                     */
                    void SetVersion(const std::string& _version);

                    /**
                     * 判断参数 Version 是否已赋值
                     * @return Version 是否已赋值
                     * 
                     */
                    bool VersionHasBeenSet() const;

                    /**
                     * 获取模型版本uri
                     * @return Uri 模型版本uri
                     * 
                     */
                    std::string GetUri() const;

                    /**
                     * 设置模型版本uri
                     * @param _uri 模型版本uri
                     * 
                     */
                    void SetUri(const std::string& _uri);

                    /**
                     * 判断参数 Uri 是否已赋值
                     * @return Uri 是否已赋值
                     * 
                     */
                    bool UriHasBeenSet() const;

                    /**
                     * 获取描述信息
                     * @return Comment 描述信息
                     * 
                     */
                    std::string GetComment() const;

                    /**
                     * 设置描述信息
                     * @param _comment 描述信息
                     * 
                     */
                    void SetComment(const std::string& _comment);

                    /**
                     * 判断参数 Comment 是否已赋值
                     * @return Comment 是否已赋值
                     * 
                     */
                    bool CommentHasBeenSet() const;

                    /**
                     * 获取扩展参数
                     * @return Properties 扩展参数
                     * 
                     */
                    std::vector<KVPair> GetProperties() const;

                    /**
                     * 设置扩展参数
                     * @param _properties 扩展参数
                     * 
                     */
                    void SetProperties(const std::vector<KVPair>& _properties);

                    /**
                     * 判断参数 Properties 是否已赋值
                     * @return Properties 是否已赋值
                     * 
                     */
                    bool PropertiesHasBeenSet() const;

                    /**
                     * 获取别名
                     * @return Aliases 别名
                     * 
                     */
                    std::vector<std::string> GetAliases() const;

                    /**
                     * 设置别名
                     * @param _aliases 别名
                     * 
                     */
                    void SetAliases(const std::vector<std::string>& _aliases);

                    /**
                     * 判断参数 Aliases 是否已赋值
                     * @return Aliases 是否已赋值
                     * 
                     */
                    bool AliasesHasBeenSet() const;

                    /**
                     * 获取审计信息
                     * @return Audit 审计信息
                     * 
                     */
                    Audit GetAudit() const;

                    /**
                     * 设置审计信息
                     * @param _audit 审计信息
                     * 
                     */
                    void SetAudit(const Audit& _audit);

                    /**
                     * 判断参数 Audit 是否已赋值
                     * @return Audit 是否已赋值
                     * 
                     */
                    bool AuditHasBeenSet() const;

                    /**
                     * 获取Catalog Name
                     * @return CatalogName Catalog Name
                     * 
                     */
                    std::string GetCatalogName() const;

                    /**
                     * 设置Catalog Name
                     * @param _catalogName Catalog Name
                     * 
                     */
                    void SetCatalogName(const std::string& _catalogName);

                    /**
                     * 判断参数 CatalogName 是否已赋值
                     * @return CatalogName 是否已赋值
                     * 
                     */
                    bool CatalogNameHasBeenSet() const;

                    /**
                     * 获取Schema Name
                     * @return SchemaName Schema Name
                     * 
                     */
                    std::string GetSchemaName() const;

                    /**
                     * 设置Schema Name
                     * @param _schemaName Schema Name
                     * 
                     */
                    void SetSchemaName(const std::string& _schemaName);

                    /**
                     * 判断参数 SchemaName 是否已赋值
                     * @return SchemaName 是否已赋值
                     * 
                     */
                    bool SchemaNameHasBeenSet() const;

                    /**
                     * 获取Model Name
                     * @return ModelName Model Name
                     * 
                     */
                    std::string GetModelName() const;

                    /**
                     * 设置Model Name
                     * @param _modelName Model Name
                     * 
                     */
                    void SetModelName(const std::string& _modelName);

                    /**
                     * 判断参数 ModelName 是否已赋值
                     * @return ModelName 是否已赋值
                     * 
                     */
                    bool ModelNameHasBeenSet() const;

                    /**
                     * 获取标签列表
                     * @return Tags 标签列表
                     * 
                     */
                    std::vector<AssetTagVote> GetTags() const;

                    /**
                     * 设置标签列表
                     * @param _tags 标签列表
                     * 
                     */
                    void SetTags(const std::vector<AssetTagVote>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取资产全局唯一ID
                     * @return AssetGuid 资产全局唯一ID
                     * 
                     */
                    std::string GetAssetGuid() const;

                    /**
                     * 设置资产全局唯一ID
                     * @param _assetGuid 资产全局唯一ID
                     * 
                     */
                    void SetAssetGuid(const std::string& _assetGuid);

                    /**
                     * 判断参数 AssetGuid 是否已赋值
                     * @return AssetGuid 是否已赋值
                     * 
                     */
                    bool AssetGuidHasBeenSet() const;

                private:

                    /**
                     * 版本号
                     */
                    std::string m_version;
                    bool m_versionHasBeenSet;

                    /**
                     * 模型版本uri
                     */
                    std::string m_uri;
                    bool m_uriHasBeenSet;

                    /**
                     * 描述信息
                     */
                    std::string m_comment;
                    bool m_commentHasBeenSet;

                    /**
                     * 扩展参数
                     */
                    std::vector<KVPair> m_properties;
                    bool m_propertiesHasBeenSet;

                    /**
                     * 别名
                     */
                    std::vector<std::string> m_aliases;
                    bool m_aliasesHasBeenSet;

                    /**
                     * 审计信息
                     */
                    Audit m_audit;
                    bool m_auditHasBeenSet;

                    /**
                     * Catalog Name
                     */
                    std::string m_catalogName;
                    bool m_catalogNameHasBeenSet;

                    /**
                     * Schema Name
                     */
                    std::string m_schemaName;
                    bool m_schemaNameHasBeenSet;

                    /**
                     * Model Name
                     */
                    std::string m_modelName;
                    bool m_modelNameHasBeenSet;

                    /**
                     * 标签列表
                     */
                    std::vector<AssetTagVote> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 资产全局唯一ID
                     */
                    std::string m_assetGuid;
                    bool m_assetGuidHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATABUDDY_V20260715_MODEL_MODELVERSIONINFO_H_
