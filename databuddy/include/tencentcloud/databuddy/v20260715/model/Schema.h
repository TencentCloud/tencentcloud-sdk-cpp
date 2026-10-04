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

#ifndef TENCENTCLOUD_DATABUDDY_V20260715_MODEL_SCHEMA_H_
#define TENCENTCLOUD_DATABUDDY_V20260715_MODEL_SCHEMA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/databuddy/v20260715/model/KVPair.h>
#include <tencentcloud/databuddy/v20260715/model/Audit.h>
#include <tencentcloud/databuddy/v20260715/model/MetaOwner.h>
#include <tencentcloud/databuddy/v20260715/model/PermissionDetail.h>
#include <tencentcloud/databuddy/v20260715/model/CommonTagInfo.h>


namespace TencentCloud
{
    namespace Databuddy
    {
        namespace V20260715
        {
            namespace Model
            {
                /**
                * Schema信息
                */
                class Schema : public AbstractModel
                {
                public:
                    Schema();
                    ~Schema() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>schema名称</p>
                     * @return Name <p>schema名称</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>schema名称</p>
                     * @param _name <p>schema名称</p>
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
                     * 获取<p>描述。注意：此字段可能返回null，表示取不到有效值</p>
                     * @return Comment <p>描述。注意：此字段可能返回null，表示取不到有效值</p>
                     * 
                     */
                    std::string GetComment() const;

                    /**
                     * 设置<p>描述。注意：此字段可能返回null，表示取不到有效值</p>
                     * @param _comment <p>描述。注意：此字段可能返回null，表示取不到有效值</p>
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
                     * 获取<p>属性。注意：此字段可能返回null，表示取不到有效值</p>
                     * @return Properties <p>属性。注意：此字段可能返回null，表示取不到有效值</p>
                     * 
                     */
                    std::vector<KVPair> GetProperties() const;

                    /**
                     * 设置<p>属性。注意：此字段可能返回null，表示取不到有效值</p>
                     * @param _properties <p>属性。注意：此字段可能返回null，表示取不到有效值</p>
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
                     * 获取<p>审计信息。注意：此字段可能返回null，表示取不到有效值</p>
                     * @return Audit <p>审计信息。注意：此字段可能返回null，表示取不到有效值</p>
                     * 
                     */
                    Audit GetAudit() const;

                    /**
                     * 设置<p>审计信息。注意：此字段可能返回null，表示取不到有效值</p>
                     * @param _audit <p>审计信息。注意：此字段可能返回null，表示取不到有效值</p>
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
                     * 获取<p>owner信息</p>
                     * @return MetaOwner <p>owner信息</p>
                     * 
                     */
                    MetaOwner GetMetaOwner() const;

                    /**
                     * 设置<p>owner信息</p>
                     * @param _metaOwner <p>owner信息</p>
                     * 
                     */
                    void SetMetaOwner(const MetaOwner& _metaOwner);

                    /**
                     * 判断参数 MetaOwner 是否已赋值
                     * @return MetaOwner 是否已赋值
                     * 
                     */
                    bool MetaOwnerHasBeenSet() const;

                    /**
                     * 获取<p>资产全局唯一ID，通过WedataAssetUIDUtils.generateUID生成</p>
                     * @return AssetGuid <p>资产全局唯一ID，通过WedataAssetUIDUtils.generateUID生成</p>
                     * 
                     */
                    std::string GetAssetGuid() const;

                    /**
                     * 设置<p>资产全局唯一ID，通过WedataAssetUIDUtils.generateUID生成</p>
                     * @param _assetGuid <p>资产全局唯一ID，通过WedataAssetUIDUtils.generateUID生成</p>
                     * 
                     */
                    void SetAssetGuid(const std::string& _assetGuid);

                    /**
                     * 判断参数 AssetGuid 是否已赋值
                     * @return AssetGuid 是否已赋值
                     * 
                     */
                    bool AssetGuidHasBeenSet() const;

                    /**
                     * 获取<p>当前用户对该schema的权限信息。注意：此字段可能返回null，请求中未开启FetchPermissions时不返回</p>
                     * @return PermissionDetail <p>当前用户对该schema的权限信息。注意：此字段可能返回null，请求中未开启FetchPermissions时不返回</p>
                     * 
                     */
                    PermissionDetail GetPermissionDetail() const;

                    /**
                     * 设置<p>当前用户对该schema的权限信息。注意：此字段可能返回null，请求中未开启FetchPermissions时不返回</p>
                     * @param _permissionDetail <p>当前用户对该schema的权限信息。注意：此字段可能返回null，请求中未开启FetchPermissions时不返回</p>
                     * 
                     */
                    void SetPermissionDetail(const PermissionDetail& _permissionDetail);

                    /**
                     * 判断参数 PermissionDetail 是否已赋值
                     * @return PermissionDetail 是否已赋值
                     * 
                     */
                    bool PermissionDetailHasBeenSet() const;

                    /**
                     * 获取<p>标签信息列表。注意：此字段可能返回null，请求中未开启FetchTags时不返回</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Tags <p>标签信息列表。注意：此字段可能返回null，请求中未开启FetchTags时不返回</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<CommonTagInfo> GetTags() const;

                    /**
                     * 设置<p>标签信息列表。注意：此字段可能返回null，请求中未开启FetchTags时不返回</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tags <p>标签信息列表。注意：此字段可能返回null，请求中未开启FetchTags时不返回</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTags(const std::vector<CommonTagInfo>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                private:

                    /**
                     * <p>schema名称</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>描述。注意：此字段可能返回null，表示取不到有效值</p>
                     */
                    std::string m_comment;
                    bool m_commentHasBeenSet;

                    /**
                     * <p>属性。注意：此字段可能返回null，表示取不到有效值</p>
                     */
                    std::vector<KVPair> m_properties;
                    bool m_propertiesHasBeenSet;

                    /**
                     * <p>审计信息。注意：此字段可能返回null，表示取不到有效值</p>
                     */
                    Audit m_audit;
                    bool m_auditHasBeenSet;

                    /**
                     * <p>owner信息</p>
                     */
                    MetaOwner m_metaOwner;
                    bool m_metaOwnerHasBeenSet;

                    /**
                     * <p>资产全局唯一ID，通过WedataAssetUIDUtils.generateUID生成</p>
                     */
                    std::string m_assetGuid;
                    bool m_assetGuidHasBeenSet;

                    /**
                     * <p>当前用户对该schema的权限信息。注意：此字段可能返回null，请求中未开启FetchPermissions时不返回</p>
                     */
                    PermissionDetail m_permissionDetail;
                    bool m_permissionDetailHasBeenSet;

                    /**
                     * <p>标签信息列表。注意：此字段可能返回null，请求中未开启FetchTags时不返回</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<CommonTagInfo> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATABUDDY_V20260715_MODEL_SCHEMA_H_
