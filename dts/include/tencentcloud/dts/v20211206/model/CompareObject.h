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

#ifndef TENCENTCLOUD_DTS_V20211206_MODEL_COMPAREOBJECT_H_
#define TENCENTCLOUD_DTS_V20211206_MODEL_COMPAREOBJECT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dts/v20211206/model/CompareObjectItem.h>


namespace TencentCloud
{
    namespace Dts
    {
        namespace V20211206
        {
            namespace Model
            {
                /**
                * 一致性对比对象配置
                */
                class CompareObject : public AbstractModel
                {
                public:
                    CompareObject();
                    ~CompareObject() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取对象模式 整实例-all,部分对象-partial
                     * @return ObjectMode 对象模式 整实例-all,部分对象-partial
                     * 
                     */
                    std::string GetObjectMode() const;

                    /**
                     * 设置对象模式 整实例-all,部分对象-partial
                     * @param _objectMode 对象模式 整实例-all,部分对象-partial
                     * 
                     */
                    void SetObjectMode(const std::string& _objectMode);

                    /**
                     * 判断参数 ObjectMode 是否已赋值
                     * @return ObjectMode 是否已赋值
                     * 
                     */
                    bool ObjectModeHasBeenSet() const;

                    /**
                     * 获取对象列表
                     * @return ObjectItems 对象列表
                     * 
                     */
                    std::vector<CompareObjectItem> GetObjectItems() const;

                    /**
                     * 设置对象列表
                     * @param _objectItems 对象列表
                     * 
                     */
                    void SetObjectItems(const std::vector<CompareObjectItem>& _objectItems);

                    /**
                     * 判断参数 ObjectItems 是否已赋值
                     * @return ObjectItems 是否已赋值
                     * 
                     */
                    bool ObjectItemsHasBeenSet() const;

                    /**
                     * 获取高级对象类型，目前只支持mongodb链路。如index(索引),shardkey(片键),schema(库表)
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AdvancedObjects 高级对象类型，目前只支持mongodb链路。如index(索引),shardkey(片键),schema(库表)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetAdvancedObjects() const;

                    /**
                     * 设置高级对象类型，目前只支持mongodb链路。如index(索引),shardkey(片键),schema(库表)
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _advancedObjects 高级对象类型，目前只支持mongodb链路。如index(索引),shardkey(片键),schema(库表)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAdvancedObjects(const std::vector<std::string>& _advancedObjects);

                    /**
                     * 判断参数 AdvancedObjects 是否已赋值
                     * @return AdvancedObjects 是否已赋值
                     * 
                     */
                    bool AdvancedObjectsHasBeenSet() const;

                private:

                    /**
                     * 对象模式 整实例-all,部分对象-partial
                     */
                    std::string m_objectMode;
                    bool m_objectModeHasBeenSet;

                    /**
                     * 对象列表
                     */
                    std::vector<CompareObjectItem> m_objectItems;
                    bool m_objectItemsHasBeenSet;

                    /**
                     * 高级对象类型，目前只支持mongodb链路。如index(索引),shardkey(片键),schema(库表)
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_advancedObjects;
                    bool m_advancedObjectsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20211206_MODEL_COMPAREOBJECT_H_
