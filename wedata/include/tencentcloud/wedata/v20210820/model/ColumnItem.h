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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_COLUMNITEM_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_COLUMNITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * ColumnItem
                */
                class ColumnItem : public AbstractModel
                {
                public:
                    ColumnItem();
                    ~ColumnItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取ColumnName1
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ColumnName ColumnName1
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetColumnName() const;

                    /**
                     * 设置ColumnName1
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _columnName ColumnName1
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetColumnName(const std::string& _columnName);

                    /**
                     * 判断参数 ColumnName 是否已赋值
                     * @return ColumnName 是否已赋值
                     * 
                     */
                    bool ColumnNameHasBeenSet() const;

                    /**
                     * 获取ColumnName1
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ColumnRef ColumnName1
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetColumnRef() const;

                    /**
                     * 设置ColumnName1
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _columnRef ColumnName1
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetColumnRef(const std::string& _columnRef);

                    /**
                     * 判断参数 ColumnRef 是否已赋值
                     * @return ColumnRef 是否已赋值
                     * 
                     */
                    bool ColumnRefHasBeenSet() const;

                private:

                    /**
                     * ColumnName1
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_columnName;
                    bool m_columnNameHasBeenSet;

                    /**
                     * ColumnName1
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_columnRef;
                    bool m_columnRefHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_COLUMNITEM_H_
