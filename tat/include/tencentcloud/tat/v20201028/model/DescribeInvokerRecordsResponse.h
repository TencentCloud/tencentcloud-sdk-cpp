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

#ifndef TENCENTCLOUD_TAT_V20201028_MODEL_DESCRIBEINVOKERRECORDSRESPONSE_H_
#define TENCENTCLOUD_TAT_V20201028_MODEL_DESCRIBEINVOKERRECORDSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tat/v20201028/model/InvokerRecord.h>


namespace TencentCloud
{
    namespace Tat
    {
        namespace V20201028
        {
            namespace Model
            {
                /**
                * DescribeInvokerRecords返回参数结构体
                */
                class DescribeInvokerRecordsResponse : public AbstractModel
                {
                public:
                    DescribeInvokerRecordsResponse();
                    ~DescribeInvokerRecordsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取符合条件的历史记录数量。
                     * @return TotalCount 符合条件的历史记录数量。
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取执行器执行历史记录。
                     * @return InvokerRecordSet 执行器执行历史记录。
                     * 
                     */
                    std::vector<InvokerRecord> GetInvokerRecordSet() const;

                    /**
                     * 判断参数 InvokerRecordSet 是否已赋值
                     * @return InvokerRecordSet 是否已赋值
                     * 
                     */
                    bool InvokerRecordSetHasBeenSet() const;

                private:

                    /**
                     * 符合条件的历史记录数量。
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 执行器执行历史记录。
                     */
                    std::vector<InvokerRecord> m_invokerRecordSet;
                    bool m_invokerRecordSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TAT_V20201028_MODEL_DESCRIBEINVOKERRECORDSRESPONSE_H_
