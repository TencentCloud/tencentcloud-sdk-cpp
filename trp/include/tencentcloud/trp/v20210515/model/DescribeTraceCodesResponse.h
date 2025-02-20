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

#ifndef TENCENTCLOUD_TRP_V20210515_MODEL_DESCRIBETRACECODESRESPONSE_H_
#define TENCENTCLOUD_TRP_V20210515_MODEL_DESCRIBETRACECODESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/trp/v20210515/model/TraceCode.h>


namespace TencentCloud
{
    namespace Trp
    {
        namespace V20210515
        {
            namespace Model
            {
                /**
                * DescribeTraceCodes返回参数结构体
                */
                class DescribeTraceCodesResponse : public AbstractModel
                {
                public:
                    DescribeTraceCodesResponse();
                    ~DescribeTraceCodesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取标识列表
                     * @return TraceCodes 标识列表
                     * 
                     */
                    std::vector<TraceCode> GetTraceCodes() const;

                    /**
                     * 判断参数 TraceCodes 是否已赋值
                     * @return TraceCodes 是否已赋值
                     * 
                     */
                    bool TraceCodesHasBeenSet() const;

                    /**
                     * 获取条数
                     * @return TotalCount 条数
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * 标识列表
                     */
                    std::vector<TraceCode> m_traceCodes;
                    bool m_traceCodesHasBeenSet;

                    /**
                     * 条数
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRP_V20210515_MODEL_DESCRIBETRACECODESRESPONSE_H_
