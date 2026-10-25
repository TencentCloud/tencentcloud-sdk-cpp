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

#ifndef TENCENTCLOUD_DATABUDDY_V20260715_MODEL_SEARCHRESULT_H_
#define TENCENTCLOUD_DATABUDDY_V20260715_MODEL_SEARCHRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/databuddy/v20260715/model/UserActivityInfo.h>
#include <tencentcloud/databuddy/v20260715/model/TagInfo.h>
#include <tencentcloud/databuddy/v20260715/model/Owner.h>
#include <tencentcloud/databuddy/v20260715/model/Highlighting.h>
#include <tencentcloud/databuddy/v20260715/model/KVPair.h>
#include <tencentcloud/databuddy/v20260715/model/FieldInfo.h>
#include <tencentcloud/databuddy/v20260715/model/HighlightingInfo.h>
#include <tencentcloud/databuddy/v20260715/model/FieldTagInfo.h>


namespace TencentCloud
{
    namespace Databuddy
    {
        namespace V20260715
        {
            namespace Model
            {
                /**
                * 统一搜索返回结果
                */
                class SearchResult : public AbstractModel
                {
                public:
                    SearchResult();
                    ~SearchResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>资产全名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FullName <p>资产全名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFullName() const;

                    /**
                     * 设置<p>资产全名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _fullName <p>资产全名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFullName(const std::string& _fullName);

                    /**
                     * 判断参数 FullName 是否已赋值
                     * @return FullName 是否已赋值
                     * 
                     */
                    bool FullNameHasBeenSet() const;

                    /**
                     * 获取<p>资产全局ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AssetGuid <p>资产全局ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAssetGuid() const;

                    /**
                     * 设置<p>资产全局ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _assetGuid <p>资产全局ID</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>各资产类别下的唯一ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AssetId <p>各资产类别下的唯一ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAssetId() const;

                    /**
                     * 设置<p>各资产类别下的唯一ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _assetId <p>各资产类别下的唯一ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAssetId(const std::string& _assetId);

                    /**
                     * 判断参数 AssetId 是否已赋值
                     * @return AssetId 是否已赋值
                     * 
                     */
                    bool AssetIdHasBeenSet() const;

                    /**
                     * 获取<p>资产名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AssetName <p>资产名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAssetName() const;

                    /**
                     * 设置<p>资产名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _assetName <p>资产名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAssetName(const std::string& _assetName);

                    /**
                     * 判断参数 AssetName 是否已赋值
                     * @return AssetName 是否已赋值
                     * 
                     */
                    bool AssetNameHasBeenSet() const;

                    /**
                     * 获取<p>资产类型，参见ListEntityTypeMetas返回的EntityType</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AssetType <p>资产类型，参见ListEntityTypeMetas返回的EntityType</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAssetType() const;

                    /**
                     * 设置<p>资产类型，参见ListEntityTypeMetas返回的EntityType</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _assetType <p>资产类型，参见ListEntityTypeMetas返回的EntityType</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAssetType(const std::string& _assetType);

                    /**
                     * 判断参数 AssetType 是否已赋值
                     * @return AssetType 是否已赋值
                     * 
                     */
                    bool AssetTypeHasBeenSet() const;

                    /**
                     * 获取<p>用户活动</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UserActivityInfo <p>用户活动</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    UserActivityInfo GetUserActivityInfo() const;

                    /**
                     * 设置<p>用户活动</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _userActivityInfo <p>用户活动</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUserActivityInfo(const UserActivityInfo& _userActivityInfo);

                    /**
                     * 判断参数 UserActivityInfo 是否已赋值
                     * @return UserActivityInfo 是否已赋值
                     * 
                     */
                    bool UserActivityInfoHasBeenSet() const;

                    /**
                     * 获取<p>热度，值范围：[1,2,3,4]</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Popularity <p>热度，值范围：[1,2,3,4]</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPopularity() const;

                    /**
                     * 设置<p>热度，值范围：[1,2,3,4]</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _popularity <p>热度，值范围：[1,2,3,4]</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPopularity(const std::string& _popularity);

                    /**
                     * 判断参数 Popularity 是否已赋值
                     * @return Popularity 是否已赋值
                     * 
                     */
                    bool PopularityHasBeenSet() const;

                    /**
                     * 获取<p>资产标签</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Tags <p>资产标签</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<TagInfo> GetTags() const;

                    /**
                     * 设置<p>资产标签</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tags <p>资产标签</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTags(const std::vector<TagInfo>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取<p>责任人</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Owner <p>责任人</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    Owner GetOwner() const;

                    /**
                     * 设置<p>责任人</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _owner <p>责任人</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOwner(const Owner& _owner);

                    /**
                     * 判断参数 Owner 是否已赋值
                     * @return Owner 是否已赋值
                     * 
                     */
                    bool OwnerHasBeenSet() const;

                    /**
                     * 获取<p>最近更新时间，毫秒时间戳</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ModifiedTime <p>最近更新时间，毫秒时间戳</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetModifiedTime() const;

                    /**
                     * 设置<p>最近更新时间，毫秒时间戳</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _modifiedTime <p>最近更新时间，毫秒时间戳</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>描述</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Comment <p>描述</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetComment() const;

                    /**
                     * 设置<p>描述</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _comment <p>描述</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>工作空间ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WorkspaceId <p>工作空间ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetWorkspaceId() const;

                    /**
                     * 设置<p>工作空间ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _workspaceId <p>工作空间ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetWorkspaceId(const std::string& _workspaceId);

                    /**
                     * 判断参数 WorkspaceId 是否已赋值
                     * @return WorkspaceId 是否已赋值
                     * 
                     */
                    bool WorkspaceIdHasBeenSet() const;

                    /**
                     * 获取<p>工作空间文件夹路径（废弃）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WorkspaceFolderPath <p>工作空间文件夹路径（废弃）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetWorkspaceFolderPath() const;

                    /**
                     * 设置<p>工作空间文件夹路径（废弃）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _workspaceFolderPath <p>工作空间文件夹路径（废弃）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetWorkspaceFolderPath(const std::string& _workspaceFolderPath);

                    /**
                     * 判断参数 WorkspaceFolderPath 是否已赋值
                     * @return WorkspaceFolderPath 是否已赋值
                     * 
                     */
                    bool WorkspaceFolderPathHasBeenSet() const;

                    /**
                     * 获取<p>高亮(废弃)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Highlighting <p>高亮(废弃)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<Highlighting> GetHighlighting() const;

                    /**
                     * 设置<p>高亮(废弃)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _highlighting <p>高亮(废弃)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetHighlighting(const std::vector<Highlighting>& _highlighting);

                    /**
                     * 判断参数 Highlighting 是否已赋值
                     * @return Highlighting 是否已赋值
                     * 
                     */
                    bool HighlightingHasBeenSet() const;

                    /**
                     * 获取<p>各类资产扩展信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Properties <p>各类资产扩展信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<KVPair> GetProperties() const;

                    /**
                     * 设置<p>各类资产扩展信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _properties <p>各类资产扩展信息</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>工作空间文件夹路径</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WorkspacePath <p>工作空间文件夹路径</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetWorkspacePath() const;

                    /**
                     * 设置<p>工作空间文件夹路径</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _workspacePath <p>工作空间文件夹路径</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetWorkspacePath(const std::string& _workspacePath);

                    /**
                     * 判断参数 WorkspacePath 是否已赋值
                     * @return WorkspacePath 是否已赋值
                     * 
                     */
                    bool WorkspacePathHasBeenSet() const;

                    /**
                     * 获取<p>字段信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FieldInfo <p>字段信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<FieldInfo> GetFieldInfo() const;

                    /**
                     * 设置<p>字段信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _fieldInfo <p>字段信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFieldInfo(const std::vector<FieldInfo>& _fieldInfo);

                    /**
                     * 判断参数 FieldInfo 是否已赋值
                     * @return FieldInfo 是否已赋值
                     * 
                     */
                    bool FieldInfoHasBeenSet() const;

                    /**
                     * 获取<p>废弃</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SignalLevel <p>废弃</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSignalLevel() const;

                    /**
                     * 设置<p>废弃</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _signalLevel <p>废弃</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSignalLevel(const std::string& _signalLevel);

                    /**
                     * 判断参数 SignalLevel 是否已赋值
                     * @return SignalLevel 是否已赋值
                     * 
                     */
                    bool SignalLevelHasBeenSet() const;

                    /**
                     * 获取<p>热度值</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PopularityQuantity <p>热度值</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPopularityQuantity() const;

                    /**
                     * 设置<p>热度值</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _popularityQuantity <p>热度值</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPopularityQuantity(const std::string& _popularityQuantity);

                    /**
                     * 判断参数 PopularityQuantity 是否已赋值
                     * @return PopularityQuantity 是否已赋值
                     * 
                     */
                    bool PopularityQuantityHasBeenSet() const;

                    /**
                     * 获取<p>高亮</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HighlightingInfo <p>高亮</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    HighlightingInfo GetHighlightingInfo() const;

                    /**
                     * 设置<p>高亮</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _highlightingInfo <p>高亮</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetHighlightingInfo(const HighlightingInfo& _highlightingInfo);

                    /**
                     * 判断参数 HighlightingInfo 是否已赋值
                     * @return HighlightingInfo 是否已赋值
                     * 
                     */
                    bool HighlightingInfoHasBeenSet() const;

                    /**
                     * 获取<p>字段标签列表，返回资产下所有字段上打的标签信息，用于展示字段级标签；每项包含 LabelId、LabelName、LabelType、FieldName、FieldType</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FieldTags <p>字段标签列表，返回资产下所有字段上打的标签信息，用于展示字段级标签；每项包含 LabelId、LabelName、LabelType、FieldName、FieldType</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<FieldTagInfo> GetFieldTags() const;

                    /**
                     * 设置<p>字段标签列表，返回资产下所有字段上打的标签信息，用于展示字段级标签；每项包含 LabelId、LabelName、LabelType、FieldName、FieldType</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _fieldTags <p>字段标签列表，返回资产下所有字段上打的标签信息，用于展示字段级标签；每项包含 LabelId、LabelName、LabelType、FieldName、FieldType</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFieldTags(const std::vector<FieldTagInfo>& _fieldTags);

                    /**
                     * 判断参数 FieldTags 是否已赋值
                     * @return FieldTags 是否已赋值
                     * 
                     */
                    bool FieldTagsHasBeenSet() const;

                    /**
                     * 获取<p>资产别名列表。使用场景：仅指标、语义模型等业务资产支持多别名，其他资产类型返回空列表。前端可选择在资产名后面以【别名1、别名2】的形式展示</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Aliases <p>资产别名列表。使用场景：仅指标、语义模型等业务资产支持多别名，其他资产类型返回空列表。前端可选择在资产名后面以【别名1、别名2】的形式展示</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetAliases() const;

                    /**
                     * 设置<p>资产别名列表。使用场景：仅指标、语义模型等业务资产支持多别名，其他资产类型返回空列表。前端可选择在资产名后面以【别名1、别名2】的形式展示</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _aliases <p>资产别名列表。使用场景：仅指标、语义模型等业务资产支持多别名，其他资产类型返回空列表。前端可选择在资产名后面以【别名1、别名2】的形式展示</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>资产元数据来源。取值：METALAKE（专业版tclake）/ CONNECTION（分析版Linked Catalog）/ SETATS（Setats元数据）。仅catalog类资产（CATALOG/SCHEMA/TABLE/VIEW/MODEL/VOLUME/FUNCTION/TABLE_COLUMN）返回该字段，非catalog类资产该字段为空字符串。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CatalogSource <p>资产元数据来源。取值：METALAKE（专业版tclake）/ CONNECTION（分析版Linked Catalog）/ SETATS（Setats元数据）。仅catalog类资产（CATALOG/SCHEMA/TABLE/VIEW/MODEL/VOLUME/FUNCTION/TABLE_COLUMN）返回该字段，非catalog类资产该字段为空字符串。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCatalogSource() const;

                    /**
                     * 设置<p>资产元数据来源。取值：METALAKE（专业版tclake）/ CONNECTION（分析版Linked Catalog）/ SETATS（Setats元数据）。仅catalog类资产（CATALOG/SCHEMA/TABLE/VIEW/MODEL/VOLUME/FUNCTION/TABLE_COLUMN）返回该字段，非catalog类资产该字段为空字符串。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _catalogSource <p>资产元数据来源。取值：METALAKE（专业版tclake）/ CONNECTION（分析版Linked Catalog）/ SETATS（Setats元数据）。仅catalog类资产（CATALOG/SCHEMA/TABLE/VIEW/MODEL/VOLUME/FUNCTION/TABLE_COLUMN）返回该字段，非catalog类资产该字段为空字符串。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCatalogSource(const std::string& _catalogSource);

                    /**
                     * 判断参数 CatalogSource 是否已赋值
                     * @return CatalogSource 是否已赋值
                     * 
                     */
                    bool CatalogSourceHasBeenSet() const;

                private:

                    /**
                     * <p>资产全名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_fullName;
                    bool m_fullNameHasBeenSet;

                    /**
                     * <p>资产全局ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_assetGuid;
                    bool m_assetGuidHasBeenSet;

                    /**
                     * <p>各资产类别下的唯一ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_assetId;
                    bool m_assetIdHasBeenSet;

                    /**
                     * <p>资产名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_assetName;
                    bool m_assetNameHasBeenSet;

                    /**
                     * <p>资产类型，参见ListEntityTypeMetas返回的EntityType</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_assetType;
                    bool m_assetTypeHasBeenSet;

                    /**
                     * <p>用户活动</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    UserActivityInfo m_userActivityInfo;
                    bool m_userActivityInfoHasBeenSet;

                    /**
                     * <p>热度，值范围：[1,2,3,4]</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_popularity;
                    bool m_popularityHasBeenSet;

                    /**
                     * <p>资产标签</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<TagInfo> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * <p>责任人</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Owner m_owner;
                    bool m_ownerHasBeenSet;

                    /**
                     * <p>最近更新时间，毫秒时间戳</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_modifiedTime;
                    bool m_modifiedTimeHasBeenSet;

                    /**
                     * <p>描述</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_comment;
                    bool m_commentHasBeenSet;

                    /**
                     * <p>工作空间ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_workspaceId;
                    bool m_workspaceIdHasBeenSet;

                    /**
                     * <p>工作空间文件夹路径（废弃）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_workspaceFolderPath;
                    bool m_workspaceFolderPathHasBeenSet;

                    /**
                     * <p>高亮(废弃)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Highlighting> m_highlighting;
                    bool m_highlightingHasBeenSet;

                    /**
                     * <p>各类资产扩展信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<KVPair> m_properties;
                    bool m_propertiesHasBeenSet;

                    /**
                     * <p>工作空间文件夹路径</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_workspacePath;
                    bool m_workspacePathHasBeenSet;

                    /**
                     * <p>字段信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<FieldInfo> m_fieldInfo;
                    bool m_fieldInfoHasBeenSet;

                    /**
                     * <p>废弃</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_signalLevel;
                    bool m_signalLevelHasBeenSet;

                    /**
                     * <p>热度值</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_popularityQuantity;
                    bool m_popularityQuantityHasBeenSet;

                    /**
                     * <p>高亮</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    HighlightingInfo m_highlightingInfo;
                    bool m_highlightingInfoHasBeenSet;

                    /**
                     * <p>字段标签列表，返回资产下所有字段上打的标签信息，用于展示字段级标签；每项包含 LabelId、LabelName、LabelType、FieldName、FieldType</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<FieldTagInfo> m_fieldTags;
                    bool m_fieldTagsHasBeenSet;

                    /**
                     * <p>资产别名列表。使用场景：仅指标、语义模型等业务资产支持多别名，其他资产类型返回空列表。前端可选择在资产名后面以【别名1、别名2】的形式展示</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_aliases;
                    bool m_aliasesHasBeenSet;

                    /**
                     * <p>资产元数据来源。取值：METALAKE（专业版tclake）/ CONNECTION（分析版Linked Catalog）/ SETATS（Setats元数据）。仅catalog类资产（CATALOG/SCHEMA/TABLE/VIEW/MODEL/VOLUME/FUNCTION/TABLE_COLUMN）返回该字段，非catalog类资产该字段为空字符串。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_catalogSource;
                    bool m_catalogSourceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATABUDDY_V20260715_MODEL_SEARCHRESULT_H_
