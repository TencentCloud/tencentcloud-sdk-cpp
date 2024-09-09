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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_DIFFDETAIL_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_DIFFDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/emr/v20190103/model/DiffDetailItem.h>
#include <tencentcloud/emr/v20190103/model/DiffHeader.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * 动态生成的变更详情
                */
                class DiffDetail : public AbstractModel
                {
                public:
                    DiffDetail();
                    ~DiffDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取tab页的头
                     * @return Name tab页的头
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置tab页的头
                     * @param _name tab页的头
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
                     * 获取变化项的个数
                     * @return Count 变化项的个数
                     * 
                     */
                    uint64_t GetCount() const;

                    /**
                     * 设置变化项的个数
                     * @param _count 变化项的个数
                     * 
                     */
                    void SetCount(const uint64_t& _count);

                    /**
                     * 判断参数 Count 是否已赋值
                     * @return Count 是否已赋值
                     * 
                     */
                    bool CountHasBeenSet() const;

                    /**
                     * 获取要渲染的明细数据
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Rows 要渲染的明细数据
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<DiffDetailItem> GetRows() const;

                    /**
                     * 设置要渲染的明细数据
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _rows 要渲染的明细数据
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRows(const std::vector<DiffDetailItem>& _rows);

                    /**
                     * 判断参数 Rows 是否已赋值
                     * @return Rows 是否已赋值
                     * 
                     */
                    bool RowsHasBeenSet() const;

                    /**
                     * 获取要渲染的头部信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Header 要渲染的头部信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<DiffHeader> GetHeader() const;

                    /**
                     * 设置要渲染的头部信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _header 要渲染的头部信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetHeader(const std::vector<DiffHeader>& _header);

                    /**
                     * 判断参数 Header 是否已赋值
                     * @return Header 是否已赋值
                     * 
                     */
                    bool HeaderHasBeenSet() const;

                private:

                    /**
                     * tab页的头
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 变化项的个数
                     */
                    uint64_t m_count;
                    bool m_countHasBeenSet;

                    /**
                     * 要渲染的明细数据
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<DiffDetailItem> m_rows;
                    bool m_rowsHasBeenSet;

                    /**
                     * 要渲染的头部信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<DiffHeader> m_header;
                    bool m_headerHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_DIFFDETAIL_H_
