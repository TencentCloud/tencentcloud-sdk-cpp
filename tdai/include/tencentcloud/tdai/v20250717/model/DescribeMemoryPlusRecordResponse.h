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

#ifndef TENCENTCLOUD_TDAI_V20250717_MODEL_DESCRIBEMEMORYPLUSRECORDRESPONSE_H_
#define TENCENTCLOUD_TDAI_V20250717_MODEL_DESCRIBEMEMORYPLUSRECORDRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tdai/v20250717/model/VDBDocument.h>


namespace TencentCloud
{
    namespace Tdai
    {
        namespace V20250717
        {
            namespace Model
            {
                /**
                * DescribeMemoryPlusRecord返回参数结构体
                */
                class DescribeMemoryPlusRecordResponse : public AbstractModel
                {
                public:
                    DescribeMemoryPlusRecordResponse();
                    ~DescribeMemoryPlusRecordResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>查询结果总数量。</p>
                     * @return TotalCount <p>查询结果总数量。</p>
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取<p>查询的记忆数据。</p>
                     * @return Documents <p>查询的记忆数据。</p>
                     * 
                     */
                    std::vector<VDBDocument> GetDocuments() const;

                    /**
                     * 判断参数 Documents 是否已赋值
                     * @return Documents 是否已赋值
                     * 
                     */
                    bool DocumentsHasBeenSet() const;

                private:

                    /**
                     * <p>查询结果总数量。</p>
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * <p>查询的记忆数据。</p>
                     */
                    std::vector<VDBDocument> m_documents;
                    bool m_documentsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDAI_V20250717_MODEL_DESCRIBEMEMORYPLUSRECORDRESPONSE_H_
