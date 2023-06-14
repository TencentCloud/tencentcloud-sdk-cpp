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

#ifndef TENCENTCLOUD_CII_V20210408_MODEL_STRUCTUREONEITEM_H_
#define TENCENTCLOUD_CII_V20210408_MODEL_STRUCTUREONEITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cii
    {
        namespace V20210408
        {
            namespace Model
            {
                /**
                * 复核差异接口的新增或者删除的项
                */
                class StructureOneItem : public AbstractModel
                {
                public:
                    StructureOneItem();
                    ~StructureOneItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取新字段的路径
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Path 新字段的路径
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPath() const;

                    /**
                     * 设置新字段的路径
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _path 新字段的路径
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPath(const std::string& _path);

                    /**
                     * 判断参数 Path 是否已赋值
                     * @return Path 是否已赋值
                     * 
                     */
                    bool PathHasBeenSet() const;

                    /**
                     * 获取字段的值
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Value 字段的值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetValue() const;

                    /**
                     * 设置字段的值
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _value 字段的值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetValue(const std::string& _value);

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     * 
                     */
                    bool ValueHasBeenSet() const;

                private:

                    /**
                     * 新字段的路径
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_path;
                    bool m_pathHasBeenSet;

                    /**
                     * 字段的值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CII_V20210408_MODEL_STRUCTUREONEITEM_H_
