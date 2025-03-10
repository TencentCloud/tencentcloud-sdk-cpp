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

#ifndef TENCENTCLOUD_TAT_V20201028_MODEL_DESCRIBEINVOKERRECORDSREQUEST_H_
#define TENCENTCLOUD_TAT_V20201028_MODEL_DESCRIBEINVOKERRECORDSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tat
    {
        namespace V20201028
        {
            namespace Model
            {
                /**
                * DescribeInvokerRecords请求参数结构体
                */
                class DescribeInvokerRecordsRequest : public AbstractModel
                {
                public:
                    DescribeInvokerRecordsRequest();
                    ~DescribeInvokerRecordsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取执行器ID列表。列表上限 100。

可通过 [DescribeInvokers(查询执行器)](https://cloud.tencent.com/document/api/1340/61759) 接口获取。
                     * @return InvokerIds 执行器ID列表。列表上限 100。

可通过 [DescribeInvokers(查询执行器)](https://cloud.tencent.com/document/api/1340/61759) 接口获取。
                     * 
                     */
                    std::vector<std::string> GetInvokerIds() const;

                    /**
                     * 设置执行器ID列表。列表上限 100。

可通过 [DescribeInvokers(查询执行器)](https://cloud.tencent.com/document/api/1340/61759) 接口获取。
                     * @param _invokerIds 执行器ID列表。列表上限 100。

可通过 [DescribeInvokers(查询执行器)](https://cloud.tencent.com/document/api/1340/61759) 接口获取。
                     * 
                     */
                    void SetInvokerIds(const std::vector<std::string>& _invokerIds);

                    /**
                     * 判断参数 InvokerIds 是否已赋值
                     * @return InvokerIds 是否已赋值
                     * 
                     */
                    bool InvokerIdsHasBeenSet() const;

                    /**
                     * 获取返回数量，默认为20，最大值为100。
                     * @return Limit 返回数量，默认为20，最大值为100。
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置返回数量，默认为20，最大值为100。
                     * @param _limit 返回数量，默认为20，最大值为100。
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取偏移量，默认为0。
                     * @return Offset 偏移量，默认为0。
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置偏移量，默认为0。
                     * @param _offset 偏移量，默认为0。
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                private:

                    /**
                     * 执行器ID列表。列表上限 100。

可通过 [DescribeInvokers(查询执行器)](https://cloud.tencent.com/document/api/1340/61759) 接口获取。
                     */
                    std::vector<std::string> m_invokerIds;
                    bool m_invokerIdsHasBeenSet;

                    /**
                     * 返回数量，默认为20，最大值为100。
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 偏移量，默认为0。
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TAT_V20201028_MODEL_DESCRIBEINVOKERRECORDSREQUEST_H_
