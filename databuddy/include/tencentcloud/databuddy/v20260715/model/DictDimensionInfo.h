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

#ifndef TENCENTCLOUD_DATABUDDY_V20260715_MODEL_DICTDIMENSIONINFO_H_
#define TENCENTCLOUD_DATABUDDY_V20260715_MODEL_DICTDIMENSIONINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/databuddy/v20260715/model/DictItem.h>


namespace TencentCloud
{
    namespace Databuddy
    {
        namespace V20260715
        {
            namespace Model
            {
                /**
                * 字段关联的字典维度信息，仅返回类型为DICT（字典维度）的维度关联
                */
                class DictDimensionInfo : public AbstractModel
                {
                public:
                    DictDimensionInfo();
                    ~DictDimensionInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取关联的标准字典代码ID
                     * @return DictCodeId 关联的标准字典代码ID
                     * 
                     */
                    std::string GetDictCodeId() const;

                    /**
                     * 设置关联的标准字典代码ID
                     * @param _dictCodeId 关联的标准字典代码ID
                     * 
                     */
                    void SetDictCodeId(const std::string& _dictCodeId);

                    /**
                     * 判断参数 DictCodeId 是否已赋值
                     * @return DictCodeId 是否已赋值
                     * 
                     */
                    bool DictCodeIdHasBeenSet() const;

                    /**
                     * 获取字典项列表（key-value映射）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DictItems 字典项列表（key-value映射）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<DictItem> GetDictItems() const;

                    /**
                     * 设置字典项列表（key-value映射）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dictItems 字典项列表（key-value映射）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDictItems(const std::vector<DictItem>& _dictItems);

                    /**
                     * 判断参数 DictItems 是否已赋值
                     * @return DictItems 是否已赋值
                     * 
                     */
                    bool DictItemsHasBeenSet() const;

                private:

                    /**
                     * 关联的标准字典代码ID
                     */
                    std::string m_dictCodeId;
                    bool m_dictCodeIdHasBeenSet;

                    /**
                     * 字典项列表（key-value映射）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<DictItem> m_dictItems;
                    bool m_dictItemsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATABUDDY_V20260715_MODEL_DICTDIMENSIONINFO_H_
