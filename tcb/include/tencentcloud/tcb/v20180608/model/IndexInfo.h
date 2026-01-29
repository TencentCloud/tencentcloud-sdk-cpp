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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_INDEXINFO_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_INDEXINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcb/v20180608/model/Indexkey.h>
#include <tencentcloud/tcb/v20180608/model/IndexAccesses.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * 索引信息
                */
                class IndexInfo : public AbstractModel
                {
                public:
                    IndexInfo();
                    ~IndexInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取索引名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Name 索引名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置索引名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _name 索引名称
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取索引大小，单位: 字节
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Size 索引大小，单位: 字节
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetSize() const;

                    /**
                     * 设置索引大小，单位: 字节
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _size 索引大小，单位: 字节
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSize(const int64_t& _size);

                    /**
                     * 判断参数 Size 是否已赋值
                     * @return Size 是否已赋值
                     * 
                     */
                    bool SizeHasBeenSet() const;

                    /**
                     * 获取索引键值
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Keys 索引键值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<Indexkey> GetKeys() const;

                    /**
                     * 设置索引键值
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _keys 索引键值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetKeys(const std::vector<Indexkey>& _keys);

                    /**
                     * 判断参数 Keys 是否已赋值
                     * @return Keys 是否已赋值
                     * 
                     */
                    bool KeysHasBeenSet() const;

                    /**
                     * 获取索引使用信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Accesses 索引使用信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    IndexAccesses GetAccesses() const;

                    /**
                     * 设置索引使用信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _accesses 索引使用信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAccesses(const IndexAccesses& _accesses);

                    /**
                     * 判断参数 Accesses 是否已赋值
                     * @return Accesses 是否已赋值
                     * 
                     */
                    bool AccessesHasBeenSet() const;

                    /**
                     * 获取是否为唯一索引
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Unique 是否为唯一索引
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetUnique() const;

                    /**
                     * 设置是否为唯一索引
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _unique 是否为唯一索引
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUnique(const bool& _unique);

                    /**
                     * 判断参数 Unique 是否已赋值
                     * @return Unique 是否已赋值
                     * 
                     */
                    bool UniqueHasBeenSet() const;

                private:

                    /**
                     * 索引名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 索引大小，单位: 字节
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_size;
                    bool m_sizeHasBeenSet;

                    /**
                     * 索引键值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Indexkey> m_keys;
                    bool m_keysHasBeenSet;

                    /**
                     * 索引使用信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    IndexAccesses m_accesses;
                    bool m_accessesHasBeenSet;

                    /**
                     * 是否为唯一索引
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_unique;
                    bool m_uniqueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_INDEXINFO_H_
