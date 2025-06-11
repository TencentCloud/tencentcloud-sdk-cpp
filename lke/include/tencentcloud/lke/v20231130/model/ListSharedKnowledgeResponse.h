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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_LISTSHAREDKNOWLEDGERESPONSE_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_LISTSHAREDKNOWLEDGERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lke/v20231130/model/KnowledgeDetailInfo.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * ListSharedKnowledge返回参数结构体
                */
                class ListSharedKnowledgeResponse : public AbstractModel
                {
                public:
                    ListSharedKnowledgeResponse();
                    ~ListSharedKnowledgeResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取累计数量
                     * @return Total 累计数量
                     * 
                     */
                    uint64_t GetTotal() const;

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                    /**
                     * 获取知识库列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return KnowledgeList 知识库列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<KnowledgeDetailInfo> GetKnowledgeList() const;

                    /**
                     * 判断参数 KnowledgeList 是否已赋值
                     * @return KnowledgeList 是否已赋值
                     * 
                     */
                    bool KnowledgeListHasBeenSet() const;

                private:

                    /**
                     * 累计数量
                     */
                    uint64_t m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * 知识库列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<KnowledgeDetailInfo> m_knowledgeList;
                    bool m_knowledgeListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_LISTSHAREDKNOWLEDGERESPONSE_H_
