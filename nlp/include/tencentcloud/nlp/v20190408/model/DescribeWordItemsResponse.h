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

#ifndef TENCENTCLOUD_NLP_V20190408_MODEL_DESCRIBEWORDITEMSRESPONSE_H_
#define TENCENTCLOUD_NLP_V20190408_MODEL_DESCRIBEWORDITEMSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/nlp/v20190408/model/WordItem.h>


namespace TencentCloud
{
    namespace Nlp
    {
        namespace V20190408
        {
            namespace Model
            {
                /**
                * DescribeWordItems返回参数结构体
                */
                class DescribeWordItemsResponse : public AbstractModel
                {
                public:
                    DescribeWordItemsResponse();
                    ~DescribeWordItemsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取词条记录总条数。
                     * @return TotalCount 词条记录总条数。
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取词条信息列表。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WordItems 词条信息列表。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<WordItem> GetWordItems() const;

                    /**
                     * 判断参数 WordItems 是否已赋值
                     * @return WordItems 是否已赋值
                     */
                    bool WordItemsHasBeenSet() const;

                private:

                    /**
                     * 词条记录总条数。
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 词条信息列表。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<WordItem> m_wordItems;
                    bool m_wordItemsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_NLP_V20190408_MODEL_DESCRIBEWORDITEMSRESPONSE_H_
