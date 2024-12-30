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

#ifndef TENCENTCLOUD_APM_V20210622_MODEL_DESCRIBEGENERALSPANLISTRESPONSE_H_
#define TENCENTCLOUD_APM_V20210622_MODEL_DESCRIBEGENERALSPANLISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/apm/v20210622/model/Span.h>


namespace TencentCloud
{
    namespace Apm
    {
        namespace V20210622
        {
            namespace Model
            {
                /**
                * DescribeGeneralSpanList返回参数结构体
                */
                class DescribeGeneralSpanListResponse : public AbstractModel
                {
                public:
                    DescribeGeneralSpanListResponse();
                    ~DescribeGeneralSpanListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取总数量
                     * @return TotalCount 总数量
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
                     * 获取Span 分页列表
                     * @return Spans Span 分页列表
                     * 
                     */
                    std::vector<Span> GetSpans() const;

                    /**
                     * 判断参数 Spans 是否已赋值
                     * @return Spans 是否已赋值
                     * 
                     */
                    bool SpansHasBeenSet() const;

                private:

                    /**
                     * 总数量
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * Span 分页列表
                     */
                    std::vector<Span> m_spans;
                    bool m_spansHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APM_V20210622_MODEL_DESCRIBEGENERALSPANLISTRESPONSE_H_
