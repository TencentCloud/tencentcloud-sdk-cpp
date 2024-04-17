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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DIAGNOSEREP_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DIAGNOSEREP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/Content.h>
#include <tencentcloud/wedata/v20210820/model/Table.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * DiagnoseRep
                */
                class DiagnoseRep : public AbstractModel
                {
                public:
                    DiagnoseRep();
                    ~DiagnoseRep() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取诊断信息内容
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Content 诊断信息内容
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    Content GetContent() const;

                    /**
                     * 设置诊断信息内容
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _content 诊断信息内容
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetContent(const Content& _content);

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     * 
                     */
                    bool ContentHasBeenSet() const;

                    /**
                     * 获取诊断结果相关信息列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Table 诊断结果相关信息列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    Table GetTable() const;

                    /**
                     * 设置诊断结果相关信息列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _table 诊断结果相关信息列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTable(const Table& _table);

                    /**
                     * 判断参数 Table 是否已赋值
                     * @return Table 是否已赋值
                     * 
                     */
                    bool TableHasBeenSet() const;

                private:

                    /**
                     * 诊断信息内容
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Content m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * 诊断结果相关信息列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Table m_table;
                    bool m_tableHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DIAGNOSEREP_H_
