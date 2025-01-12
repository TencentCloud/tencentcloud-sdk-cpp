/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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
                     * 获取索引类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IndexType 索引类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetIndexType() const;

                    /**
                     * 设置索引类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _indexType 索引类型
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
                     * 获取索引名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IndexName 索引名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetIndexName() const;

                    /**
                     * 设置索引名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _indexName 索引名
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
                     * 获取索引元数据JSON
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IndexMetaJson 索引元数据JSON
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetIndexMetaJson() const;

                    /**
                     * 设置索引元数据JSON
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _indexMetaJson 索引元数据JSON
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
                     * 获取索引状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IndexStatus 索引状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetIndexStatus() const;

                    /**
                     * 设置索引状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _indexStatus 索引状态
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
                     * 获取索引存储大小，单位Byte
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IndexStorage 索引存储大小，单位Byte
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetIndexStorage() const;

                    /**
                     * 设置索引存储大小，单位Byte
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _indexStorage 索引存储大小，单位Byte
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
                     * 获取索引创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IndexCreateTime 索引创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetIndexCreateTime() const;

                    /**
                     * 设置索引创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _indexCreateTime 索引创建时间
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
                     * 获取后备索引
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BackingIndices 后备索引
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<BackingIndexMetaField> GetBackingIndices() const;

                    /**
                     * 设置后备索引
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _backingIndices 后备索引
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
                     * 获取索引所属集群ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClusterId 索引所属集群ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置索引所属集群ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _clusterId 索引所属集群ID
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
                     * 获取索引所属集群名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClusterName 索引所属集群名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetClusterName() const;

                    /**
                     * 设置索引所属集群名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _clusterName 索引所属集群名
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
                     * 获取索引所属集群版本
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClusterVersion 索引所属集群版本
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetClusterVersion() const;

                    /**
                     * 设置索引所属集群版本
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _clusterVersion 索引所属集群版本
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
                     * 获取索引生命周期字段
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IndexPolicyField 索引生命周期字段
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    IndexPolicyField GetIndexPolicyField() const;

                    /**
                     * 设置索引生命周期字段
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _indexPolicyField 索引生命周期字段
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
                     * 获取索引自治字段
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IndexOptionsField 索引自治字段
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    IndexOptionsField GetIndexOptionsField() const;

                    /**
                     * 设置索引自治字段
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _indexOptionsField 索引自治字段
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
                     * 获取索引配置字段
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IndexSettingsField 索引配置字段
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    IndexSettingsField GetIndexSettingsField() const;

                    /**
                     * 设置索引配置字段
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _indexSettingsField 索引配置字段
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
                     * 获取索引别名字段
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IndexAliasesField 索引别名字段
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetIndexAliasesField() const;

                    /**
                     * 设置索引别名字段
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _indexAliasesField 索引别名字段
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
                     * 获取索引所属集群APP ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AppId 索引所属集群APP ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetAppId() const;

                    /**
                     * 设置索引所属集群APP ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _appId 索引所属集群APP ID
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
                     * 获取索引文档数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IndexDocs 索引文档数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetIndexDocs() const;

                    /**
                     * 设置索引文档数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _indexDocs 索引文档数
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

                private:

                    /**
                     * 索引类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_indexType;
                    bool m_indexTypeHasBeenSet;

                    /**
                     * 索引名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_indexName;
                    bool m_indexNameHasBeenSet;

                    /**
                     * 索引元数据JSON
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_indexMetaJson;
                    bool m_indexMetaJsonHasBeenSet;

                    /**
                     * 索引状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_indexStatus;
                    bool m_indexStatusHasBeenSet;

                    /**
                     * 索引存储大小，单位Byte
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_indexStorage;
                    bool m_indexStorageHasBeenSet;

                    /**
                     * 索引创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_indexCreateTime;
                    bool m_indexCreateTimeHasBeenSet;

                    /**
                     * 后备索引
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<BackingIndexMetaField> m_backingIndices;
                    bool m_backingIndicesHasBeenSet;

                    /**
                     * 索引所属集群ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 索引所属集群名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_clusterName;
                    bool m_clusterNameHasBeenSet;

                    /**
                     * 索引所属集群版本
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_clusterVersion;
                    bool m_clusterVersionHasBeenSet;

                    /**
                     * 索引生命周期字段
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    IndexPolicyField m_indexPolicyField;
                    bool m_indexPolicyFieldHasBeenSet;

                    /**
                     * 索引自治字段
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    IndexOptionsField m_indexOptionsField;
                    bool m_indexOptionsFieldHasBeenSet;

                    /**
                     * 索引配置字段
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    IndexSettingsField m_indexSettingsField;
                    bool m_indexSettingsFieldHasBeenSet;

                    /**
                     * 索引别名字段
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_indexAliasesField;
                    bool m_indexAliasesFieldHasBeenSet;

                    /**
                     * 索引所属集群APP ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * 索引文档数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_indexDocs;
                    bool m_indexDocsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20180416_MODEL_INDEXMETAFIELD_H_
