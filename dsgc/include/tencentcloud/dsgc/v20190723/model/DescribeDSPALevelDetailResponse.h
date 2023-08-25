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

#ifndef TENCENTCLOUD_DSGC_V20190723_MODEL_DESCRIBEDSPALEVELDETAILRESPONSE_H_
#define TENCENTCLOUD_DSGC_V20190723_MODEL_DESCRIBEDSPALEVELDETAILRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dsgc/v20190723/model/LevelItem.h>


namespace TencentCloud
{
    namespace Dsgc
    {
        namespace V20190723
        {
            namespace Model
            {
                /**
                * DescribeDSPALevelDetail返回参数结构体
                */
                class DescribeDSPALevelDetailResponse : public AbstractModel
                {
                public:
                    DescribeDSPALevelDetailResponse();
                    ~DescribeDSPALevelDetailResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取符合条件的敏感数据分级标识记录
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Items 符合条件的敏感数据分级标识记录
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<LevelItem> GetItems() const;

                    /**
                     * 判断参数 Items 是否已赋值
                     * @return Items 是否已赋值
                     * 
                     */
                    bool ItemsHasBeenSet() const;

                    /**
                     * 获取符合条件的敏感数据分级标识记录数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TotalCount 符合条件的敏感数据分级标识记录数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * 符合条件的敏感数据分级标识记录
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<LevelItem> m_items;
                    bool m_itemsHasBeenSet;

                    /**
                     * 符合条件的敏感数据分级标识记录数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DSGC_V20190723_MODEL_DESCRIBEDSPALEVELDETAILRESPONSE_H_
