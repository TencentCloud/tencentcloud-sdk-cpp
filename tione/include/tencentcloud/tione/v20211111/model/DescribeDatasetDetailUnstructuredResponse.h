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

#ifndef TENCENTCLOUD_TIONE_V20211111_MODEL_DESCRIBEDATASETDETAILUNSTRUCTUREDRESPONSE_H_
#define TENCENTCLOUD_TIONE_V20211111_MODEL_DESCRIBEDATASETDETAILUNSTRUCTUREDRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tione/v20211111/model/FilterLabelInfo.h>


namespace TencentCloud
{
    namespace Tione
    {
        namespace V20211111
        {
            namespace Model
            {
                /**
                * DescribeDatasetDetailUnstructured返回参数结构体
                */
                class DescribeDatasetDetailUnstructuredResponse : public AbstractModel
                {
                public:
                    DescribeDatasetDetailUnstructuredResponse();
                    ~DescribeDatasetDetailUnstructuredResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取已标注数据量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AnnotatedTotalCount 已标注数据量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetAnnotatedTotalCount() const;

                    /**
                     * 判断参数 AnnotatedTotalCount 是否已赋值
                     * @return AnnotatedTotalCount 是否已赋值
                     * 
                     */
                    bool AnnotatedTotalCountHasBeenSet() const;

                    /**
                     * 获取没有标注数据量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NonAnnotatedTotalCount 没有标注数据量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetNonAnnotatedTotalCount() const;

                    /**
                     * 判断参数 NonAnnotatedTotalCount 是否已赋值
                     * @return NonAnnotatedTotalCount 是否已赋值
                     * 
                     */
                    bool NonAnnotatedTotalCountHasBeenSet() const;

                    /**
                     * 获取过滤数据总量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FilterTotalCount 过滤数据总量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetFilterTotalCount() const;

                    /**
                     * 判断参数 FilterTotalCount 是否已赋值
                     * @return FilterTotalCount 是否已赋值
                     * 
                     */
                    bool FilterTotalCountHasBeenSet() const;

                    /**
                     * 获取过滤数据详情
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FilterLabelList 过滤数据详情
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<FilterLabelInfo> GetFilterLabelList() const;

                    /**
                     * 判断参数 FilterLabelList 是否已赋值
                     * @return FilterLabelList 是否已赋值
                     * 
                     */
                    bool FilterLabelListHasBeenSet() const;

                    /**
                     * 获取数据文本行，默认返回前1000行
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RowTexts 数据文本行，默认返回前1000行
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetRowTexts() const;

                    /**
                     * 判断参数 RowTexts 是否已赋值
                     * @return RowTexts 是否已赋值
                     * 
                     */
                    bool RowTextsHasBeenSet() const;

                private:

                    /**
                     * 已标注数据量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_annotatedTotalCount;
                    bool m_annotatedTotalCountHasBeenSet;

                    /**
                     * 没有标注数据量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_nonAnnotatedTotalCount;
                    bool m_nonAnnotatedTotalCountHasBeenSet;

                    /**
                     * 过滤数据总量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_filterTotalCount;
                    bool m_filterTotalCountHasBeenSet;

                    /**
                     * 过滤数据详情
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<FilterLabelInfo> m_filterLabelList;
                    bool m_filterLabelListHasBeenSet;

                    /**
                     * 数据文本行，默认返回前1000行
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_rowTexts;
                    bool m_rowTextsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_DESCRIBEDATASETDETAILUNSTRUCTUREDRESPONSE_H_
