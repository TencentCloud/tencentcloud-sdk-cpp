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

#ifndef TENCENTCLOUD_NLP_V20190408_MODEL_DESCRIBEDICTSRESPONSE_H_
#define TENCENTCLOUD_NLP_V20190408_MODEL_DESCRIBEDICTSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/nlp/v20190408/model/DictInfo.h>


namespace TencentCloud
{
    namespace Nlp
    {
        namespace V20190408
        {
            namespace Model
            {
                /**
                * DescribeDicts返回参数结构体
                */
                class DescribeDictsResponse : public AbstractModel
                {
                public:
                    DescribeDictsResponse();
                    ~DescribeDictsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取记录总条数。
                     * @return TotalCount 记录总条数。
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取自定义词库信息列表。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Dicts 自定义词库信息列表。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<DictInfo> GetDicts() const;

                    /**
                     * 判断参数 Dicts 是否已赋值
                     * @return Dicts 是否已赋值
                     */
                    bool DictsHasBeenSet() const;

                private:

                    /**
                     * 记录总条数。
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 自定义词库信息列表。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<DictInfo> m_dicts;
                    bool m_dictsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_NLP_V20190408_MODEL_DESCRIBEDICTSRESPONSE_H_
