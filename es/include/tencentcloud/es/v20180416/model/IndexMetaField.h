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

#ifndef TENCENTCLOUD_ES_V20180416_MODEL_INDEXMETAFIELD_H_
#define TENCENTCLOUD_ES_V20180416_MODEL_INDEXMETAFIELD_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/es/v20180416/model/BackingIndexMetaField.h>
#include <tencentcloud/es/v20180416/model/IndexPolicyField.h>
#include <tencentcloud/es/v20180416/model/IndexOptionsField.h>
#include <tencentcloud/es/v20180416/model/IndexSettingsField.h>


namespace TencentCloud
{
    namespace Es
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * 索引元数据字段
                */
                class IndexMetaField : public AbstractModel
                {
                public:
                    IndexMetaField();
                    ~IndexMetaField() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>索引类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IndexType <p>索引类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetIndexType() const;

                    /**
                     * 设置<p>索引类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _indexType <p>索引类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIndexType(const std::string& _indexType);

                    /**
                     * 判断参数 IndexType 是否已赋值
                     * @return IndexType 是否已赋值
                     * 
                     */
                    bool IndexTypeHasBeenSet() const;

                    /**
                     * 获取<p>索引名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IndexName <p>索引名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetIndexName() const;

                    /**
                     * 设置<p>索引名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _indexName <p>索引名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIndexName(const std::string& _indexName);

                    /**
                     * 判断参数 IndexName 是否已赋值
                     * @return IndexName 是否已赋值
                     * 
                     */
                    bool IndexNameHasBeenSet() const;

                    /**
                     * 获取<p>索引元数据JSON</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IndexMetaJson <p>索引元数据JSON</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetIndexMetaJson() const;

                    /**
                     * 设置<p>索引元数据JSON</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _indexMetaJson <p>索引元数据JSON</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIndexMetaJson(const std::string& _indexMetaJson);

                    /**
                     * 判断参数 IndexMetaJson 是否已赋值
                     * @return IndexMetaJson 是否已赋值
                     * 
                     */
                    bool IndexMetaJsonHasBeenSet() const;

                    /**
                     * 获取<p>索引状态</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IndexStatus <p>索引状态</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetIndexStatus() const;

                    /**
                     * 设置<p>索引状态</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _indexStatus <p>索引状态</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIndexStatus(const std::string& _indexStatus);

                    /**
                     * 判断参数 IndexStatus 是否已赋值
                     * @return IndexStatus 是否已赋值
                     * 
                     */
                    bool IndexStatusHasBeenSet() const;

                    /**
                     * 获取<p>索引存储大小，单位Byte</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IndexStorage <p>索引存储大小，单位Byte</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetIndexStorage() const;

                    /**
                     * 设置<p>索引存储大小，单位Byte</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _indexStorage <p>索引存储大小，单位Byte</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIndexStorage(const int64_t& _indexStorage);

                    /**
                     * 判断参数 IndexStorage 是否已赋值
                     * @return IndexStorage 是否已赋值
                     * 
                     */
                    bool IndexStorageHasBeenSet() const;

                    /**
                     * 获取<p>索引创建时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IndexCreateTime <p>索引创建时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetIndexCreateTime() const;

                    /**
                     * 设置<p>索引创建时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _indexCreateTime <p>索引创建时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIndexCreateTime(const std::string& _indexCreateTime);

                    /**
                     * 判断参数 IndexCreateTime 是否已赋值
                     * @return IndexCreateTime 是否已赋值
                     * 
                     */
                    bool IndexCreateTimeHasBeenSet() const;

                    /**
                     * 获取<p>后备索引</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BackingIndices <p>后备索引</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<BackingIndexMetaField> GetBackingIndices() const;

                    /**
                     * 设置<p>后备索引</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _backingIndices <p>后备索引</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBackingIndices(const std::vector<BackingIndexMetaField>& _backingIndices);

                    /**
                     * 判断参数 BackingIndices 是否已赋值
                     * @return BackingIndices 是否已赋值
                     * 
                     */
                    bool BackingIndicesHasBeenSet() const;

                    /**
                     * 获取<p>索引所属集群ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClusterId <p>索引所属集群ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置<p>索引所属集群ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _clusterId <p>索引所属集群ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取<p>索引所属集群名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClusterName <p>索引所属集群名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetClusterName() const;

                    /**
                     * 设置<p>索引所属集群名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _clusterName <p>索引所属集群名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetClusterName(const std::string& _clusterName);

                    /**
                     * 判断参数 ClusterName 是否已赋值
                     * @return ClusterName 是否已赋值
                     * 
                     */
                    bool ClusterNameHasBeenSet() const;

                    /**
                     * 获取<p>索引所属集群版本</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClusterVersion <p>索引所属集群版本</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetClusterVersion() const;

                    /**
                     * 设置<p>索引所属集群版本</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _clusterVersion <p>索引所属集群版本</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetClusterVersion(const std::string& _clusterVersion);

                    /**
                     * 判断参数 ClusterVersion 是否已赋值
                     * @return ClusterVersion 是否已赋值
                     * 
                     */
                    bool ClusterVersionHasBeenSet() const;

                    /**
                     * 获取<p>索引生命周期字段</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IndexPolicyField <p>索引生命周期字段</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    IndexPolicyField GetIndexPolicyField() const;

                    /**
                     * 设置<p>索引生命周期字段</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _indexPolicyField <p>索引生命周期字段</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIndexPolicyField(const IndexPolicyField& _indexPolicyField);

                    /**
                     * 判断参数 IndexPolicyField 是否已赋值
                     * @return IndexPolicyField 是否已赋值
                     * 
                     */
                    bool IndexPolicyFieldHasBeenSet() const;

                    /**
                     * 获取<p>索引自治字段</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IndexOptionsField <p>索引自治字段</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    IndexOptionsField GetIndexOptionsField() const;

                    /**
                     * 设置<p>索引自治字段</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _indexOptionsField <p>索引自治字段</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIndexOptionsField(const IndexOptionsField& _indexOptionsField);

                    /**
                     * 判断参数 IndexOptionsField 是否已赋值
                     * @return IndexOptionsField 是否已赋值
                     * 
                     */
                    bool IndexOptionsFieldHasBeenSet() const;

                    /**
                     * 获取<p>索引配置字段</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IndexSettingsField <p>索引配置字段</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    IndexSettingsField GetIndexSettingsField() const;

                    /**
                     * 设置<p>索引配置字段</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _indexSettingsField <p>索引配置字段</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIndexSettingsField(const IndexSettingsField& _indexSettingsField);

                    /**
                     * 判断参数 IndexSettingsField 是否已赋值
                     * @return IndexSettingsField 是否已赋值
                     * 
                     */
                    bool IndexSettingsFieldHasBeenSet() const;

                    /**
                     * 获取<p>索引别名字段</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IndexAliasesField <p>索引别名字段</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetIndexAliasesField() const;

                    /**
                     * 设置<p>索引别名字段</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _indexAliasesField <p>索引别名字段</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIndexAliasesField(const std::vector<std::string>& _indexAliasesField);

                    /**
                     * 判断参数 IndexAliasesField 是否已赋值
                     * @return IndexAliasesField 是否已赋值
                     * 
                     */
                    bool IndexAliasesFieldHasBeenSet() const;

                    /**
                     * 获取<p>索引所属集群APP ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AppId <p>索引所属集群APP ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetAppId() const;

                    /**
                     * 设置<p>索引所属集群APP ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _appId <p>索引所属集群APP ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAppId(const uint64_t& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取<p>索引文档数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IndexDocs <p>索引文档数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetIndexDocs() const;

                    /**
                     * 设置<p>索引文档数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _indexDocs <p>索引文档数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIndexDocs(const uint64_t& _indexDocs);

                    /**
                     * 判断参数 IndexDocs 是否已赋值
                     * @return IndexDocs 是否已赋值
                     * 
                     */
                    bool IndexDocsHasBeenSet() const;

                    /**
                     * 获取<p>当前字段数</p>
                     * @return FieldCount <p>当前字段数</p>
                     * 
                     */
                    int64_t GetFieldCount() const;

                    /**
                     * 设置<p>当前字段数</p>
                     * @param _fieldCount <p>当前字段数</p>
                     * 
                     */
                    void SetFieldCount(const int64_t& _fieldCount);

                    /**
                     * 判断参数 FieldCount 是否已赋值
                     * @return FieldCount 是否已赋值
                     * 
                     */
                    bool FieldCountHasBeenSet() const;

                    /**
                     * 获取<p>当前上限</p>
                     * @return FieldLimit <p>当前上限</p>
                     * 
                     */
                    int64_t GetFieldLimit() const;

                    /**
                     * 设置<p>当前上限</p>
                     * @param _fieldLimit <p>当前上限</p>
                     * 
                     */
                    void SetFieldLimit(const int64_t& _fieldLimit);

                    /**
                     * 判断参数 FieldLimit 是否已赋值
                     * @return FieldLimit 是否已赋值
                     * 
                     */
                    bool FieldLimitHasBeenSet() const;

                    /**
                     * 获取<p>使用率</p>
                     * @return FieldUsageRatio <p>使用率</p>
                     * 
                     */
                    std::string GetFieldUsageRatio() const;

                    /**
                     * 设置<p>使用率</p>
                     * @param _fieldUsageRatio <p>使用率</p>
                     * 
                     */
                    void SetFieldUsageRatio(const std::string& _fieldUsageRatio);

                    /**
                     * 判断参数 FieldUsageRatio 是否已赋值
                     * @return FieldUsageRatio 是否已赋值
                     * 
                     */
                    bool FieldUsageRatioHasBeenSet() const;

                    /**
                     * 获取<p>占用分片数</p>
                     * @return OccupiedShards <p>占用分片数</p>
                     * 
                     */
                    int64_t GetOccupiedShards() const;

                    /**
                     * 设置<p>占用分片数</p>
                     * @param _occupiedShards <p>占用分片数</p>
                     * 
                     */
                    void SetOccupiedShards(const int64_t& _occupiedShards);

                    /**
                     * 判断参数 OccupiedShards 是否已赋值
                     * @return OccupiedShards 是否已赋值
                     * 
                     */
                    bool OccupiedShardsHasBeenSet() const;

                    /**
                     * 获取<p>索引开启状态</p>
                     * @return IndexOpenStatus <p>索引开启状态</p>
                     * 
                     */
                    std::string GetIndexOpenStatus() const;

                    /**
                     * 设置<p>索引开启状态</p>
                     * @param _indexOpenStatus <p>索引开启状态</p>
                     * 
                     */
                    void SetIndexOpenStatus(const std::string& _indexOpenStatus);

                    /**
                     * 判断参数 IndexOpenStatus 是否已赋值
                     * @return IndexOpenStatus 是否已赋值
                     * 
                     */
                    bool IndexOpenStatusHasBeenSet() const;

                    /**
                     * 获取<p>索引字段数硬上限</p>
                     * @return FieldLimitHardCap <p>索引字段数硬上限</p>
                     * 
                     */
                    int64_t GetFieldLimitHardCap() const;

                    /**
                     * 设置<p>索引字段数硬上限</p>
                     * @param _fieldLimitHardCap <p>索引字段数硬上限</p>
                     * 
                     */
                    void SetFieldLimitHardCap(const int64_t& _fieldLimitHardCap);

                    /**
                     * 判断参数 FieldLimitHardCap 是否已赋值
                     * @return FieldLimitHardCap 是否已赋值
                     * 
                     */
                    bool FieldLimitHardCapHasBeenSet() const;

                    /**
                     * 获取<p>上限可调整最小值</p>
                     * @return FieldLimitMin <p>上限可调整最小值</p>
                     * 
                     */
                    int64_t GetFieldLimitMin() const;

                    /**
                     * 设置<p>上限可调整最小值</p>
                     * @param _fieldLimitMin <p>上限可调整最小值</p>
                     * 
                     */
                    void SetFieldLimitMin(const int64_t& _fieldLimitMin);

                    /**
                     * 判断参数 FieldLimitMin 是否已赋值
                     * @return FieldLimitMin 是否已赋值
                     * 
                     */
                    bool FieldLimitMinHasBeenSet() const;

                    /**
                     * 获取<p>剩余调整次数</p>
                     * @return FieldAutoAdjustRemaining <p>剩余调整次数</p>
                     * 
                     */
                    int64_t GetFieldAutoAdjustRemaining() const;

                    /**
                     * 设置<p>剩余调整次数</p>
                     * @param _fieldAutoAdjustRemaining <p>剩余调整次数</p>
                     * 
                     */
                    void SetFieldAutoAdjustRemaining(const int64_t& _fieldAutoAdjustRemaining);

                    /**
                     * 判断参数 FieldAutoAdjustRemaining 是否已赋值
                     * @return FieldAutoAdjustRemaining 是否已赋值
                     * 
                     */
                    bool FieldAutoAdjustRemainingHasBeenSet() const;

                private:

                    /**
                     * <p>索引类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_indexType;
                    bool m_indexTypeHasBeenSet;

                    /**
                     * <p>索引名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_indexName;
                    bool m_indexNameHasBeenSet;

                    /**
                     * <p>索引元数据JSON</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_indexMetaJson;
                    bool m_indexMetaJsonHasBeenSet;

                    /**
                     * <p>索引状态</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_indexStatus;
                    bool m_indexStatusHasBeenSet;

                    /**
                     * <p>索引存储大小，单位Byte</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_indexStorage;
                    bool m_indexStorageHasBeenSet;

                    /**
                     * <p>索引创建时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_indexCreateTime;
                    bool m_indexCreateTimeHasBeenSet;

                    /**
                     * <p>后备索引</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<BackingIndexMetaField> m_backingIndices;
                    bool m_backingIndicesHasBeenSet;

                    /**
                     * <p>索引所属集群ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * <p>索引所属集群名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_clusterName;
                    bool m_clusterNameHasBeenSet;

                    /**
                     * <p>索引所属集群版本</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_clusterVersion;
                    bool m_clusterVersionHasBeenSet;

                    /**
                     * <p>索引生命周期字段</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    IndexPolicyField m_indexPolicyField;
                    bool m_indexPolicyFieldHasBeenSet;

                    /**
                     * <p>索引自治字段</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    IndexOptionsField m_indexOptionsField;
                    bool m_indexOptionsFieldHasBeenSet;

                    /**
                     * <p>索引配置字段</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    IndexSettingsField m_indexSettingsField;
                    bool m_indexSettingsFieldHasBeenSet;

                    /**
                     * <p>索引别名字段</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_indexAliasesField;
                    bool m_indexAliasesFieldHasBeenSet;

                    /**
                     * <p>索引所属集群APP ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * <p>索引文档数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_indexDocs;
                    bool m_indexDocsHasBeenSet;

                    /**
                     * <p>当前字段数</p>
                     */
                    int64_t m_fieldCount;
                    bool m_fieldCountHasBeenSet;

                    /**
                     * <p>当前上限</p>
                     */
                    int64_t m_fieldLimit;
                    bool m_fieldLimitHasBeenSet;

                    /**
                     * <p>使用率</p>
                     */
                    std::string m_fieldUsageRatio;
                    bool m_fieldUsageRatioHasBeenSet;

                    /**
                     * <p>占用分片数</p>
                     */
                    int64_t m_occupiedShards;
                    bool m_occupiedShardsHasBeenSet;

                    /**
                     * <p>索引开启状态</p>
                     */
                    std::string m_indexOpenStatus;
                    bool m_indexOpenStatusHasBeenSet;

                    /**
                     * <p>索引字段数硬上限</p>
                     */
                    int64_t m_fieldLimitHardCap;
                    bool m_fieldLimitHardCapHasBeenSet;

                    /**
                     * <p>上限可调整最小值</p>
                     */
                    int64_t m_fieldLimitMin;
                    bool m_fieldLimitMinHasBeenSet;

                    /**
                     * <p>剩余调整次数</p>
                     */
                    int64_t m_fieldAutoAdjustRemaining;
                    bool m_fieldAutoAdjustRemainingHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20180416_MODEL_INDEXMETAFIELD_H_
