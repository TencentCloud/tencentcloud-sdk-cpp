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

#ifndef TENCENTCLOUD_ES_V20180416_MODEL_BACKINGINDEXMETAFIELD_H_
#define TENCENTCLOUD_ES_V20180416_MODEL_BACKINGINDEXMETAFIELD_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Es
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * 后备索引元数据字段
                */
                class BackingIndexMetaField : public AbstractModel
                {
                public:
                    BackingIndexMetaField();
                    ~BackingIndexMetaField() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取后备索引名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IndexName 后备索引名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetIndexName() const;

                    /**
                     * 设置后备索引名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _indexName 后备索引名
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
                     * 获取后备索引状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IndexStatus 后备索引状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetIndexStatus() const;

                    /**
                     * 设置后备索引状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _indexStatus 后备索引状态
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
                     * 获取后备索引存储大小
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IndexStorage 后备索引存储大小
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetIndexStorage() const;

                    /**
                     * 设置后备索引存储大小
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _indexStorage 后备索引存储大小
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
                     * 获取后备索引当前生命周期
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IndexPhrase 后备索引当前生命周期
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetIndexPhrase() const;

                    /**
                     * 设置后备索引当前生命周期
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _indexPhrase 后备索引当前生命周期
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIndexPhrase(const std::string& _indexPhrase);

                    /**
                     * 判断参数 IndexPhrase 是否已赋值
                     * @return IndexPhrase 是否已赋值
                     * 
                     */
                    bool IndexPhraseHasBeenSet() const;

                    /**
                     * 获取后备索引创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IndexCreateTime 后备索引创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetIndexCreateTime() const;

                    /**
                     * 设置后备索引创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _indexCreateTime 后备索引创建时间
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

                private:

                    /**
                     * 后备索引名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_indexName;
                    bool m_indexNameHasBeenSet;

                    /**
                     * 后备索引状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_indexStatus;
                    bool m_indexStatusHasBeenSet;

                    /**
                     * 后备索引存储大小
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_indexStorage;
                    bool m_indexStorageHasBeenSet;

                    /**
                     * 后备索引当前生命周期
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_indexPhrase;
                    bool m_indexPhraseHasBeenSet;

                    /**
                     * 后备索引创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_indexCreateTime;
                    bool m_indexCreateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20180416_MODEL_BACKINGINDEXMETAFIELD_H_
