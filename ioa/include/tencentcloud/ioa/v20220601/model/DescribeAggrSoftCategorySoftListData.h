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

#ifndef TENCENTCLOUD_IOA_V20220601_MODEL_DESCRIBEAGGRSOFTCATEGORYSOFTLISTDATA_H_
#define TENCENTCLOUD_IOA_V20220601_MODEL_DESCRIBEAGGRSOFTCATEGORYSOFTLISTDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ioa/v20220601/model/Paging.h>
#include <tencentcloud/ioa/v20220601/model/AggrCategorySoftDetailRow.h>


namespace TencentCloud
{
    namespace Ioa
    {
        namespace V20220601
        {
            namespace Model
            {
                /**
                * 业务响应数据
                */
                class DescribeAggrSoftCategorySoftListData : public AbstractModel
                {
                public:
                    DescribeAggrSoftCategorySoftListData();
                    ~DescribeAggrSoftCategorySoftListData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取分页公共对象
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Page 分页公共对象
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    Paging GetPage() const;

                    /**
                     * 设置分页公共对象
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _page 分页公共对象
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPage(const Paging& _page);

                    /**
                     * 判断参数 Page 是否已赋值
                     * @return Page 是否已赋值
                     * 
                     */
                    bool PageHasBeenSet() const;

                    /**
                     * 获取总数(只支持32位)
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Total 总数(只支持32位)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetTotal() const;

                    /**
                     * 设置总数(只支持32位)
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _total 总数(只支持32位)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTotal(const int64_t& _total);

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                    /**
                     * 获取行数据
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AggrSoftCategorySoftList 行数据
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<AggrCategorySoftDetailRow> GetAggrSoftCategorySoftList() const;

                    /**
                     * 设置行数据
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _aggrSoftCategorySoftList 行数据
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAggrSoftCategorySoftList(const std::vector<AggrCategorySoftDetailRow>& _aggrSoftCategorySoftList);

                    /**
                     * 判断参数 AggrSoftCategorySoftList 是否已赋值
                     * @return AggrSoftCategorySoftList 是否已赋值
                     * 
                     */
                    bool AggrSoftCategorySoftListHasBeenSet() const;

                private:

                    /**
                     * 分页公共对象
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Paging m_page;
                    bool m_pageHasBeenSet;

                    /**
                     * 总数(只支持32位)
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * 行数据
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<AggrCategorySoftDetailRow> m_aggrSoftCategorySoftList;
                    bool m_aggrSoftCategorySoftListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOA_V20220601_MODEL_DESCRIBEAGGRSOFTCATEGORYSOFTLISTDATA_H_
