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

#ifndef TENCENTCLOUD_PARTNERS_V20180321_MODEL_DESCRIBEREBATEINFOSNEWREQUEST_H_
#define TENCENTCLOUD_PARTNERS_V20180321_MODEL_DESCRIBEREBATEINFOSNEWREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Partners
    {
        namespace V20180321
        {
            namespace Model
            {
                /**
                * DescribeRebateInfosNew请求参数结构体
                */
                class DescribeRebateInfosNewRequest : public AbstractModel
                {
                public:
                    DescribeRebateInfosNewRequest();
                    ~DescribeRebateInfosNewRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取返佣月份，如2018-02
                     * @return RebateMonth 返佣月份，如2018-02
                     * 
                     */
                    std::string GetRebateMonth() const;

                    /**
                     * 设置返佣月份，如2018-02
                     * @param _rebateMonth 返佣月份，如2018-02
                     * 
                     */
                    void SetRebateMonth(const std::string& _rebateMonth);

                    /**
                     * 判断参数 RebateMonth 是否已赋值
                     * @return RebateMonth 是否已赋值
                     * 
                     */
                    bool RebateMonthHasBeenSet() const;

                    /**
                     * 获取偏移量
                     * @return Offset 偏移量
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置偏移量
                     * @param _offset 偏移量
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取限制数目
                     * @return Limit 限制数目
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置限制数目
                     * @param _limit 限制数目
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * 返佣月份，如2018-02
                     */
                    std::string m_rebateMonth;
                    bool m_rebateMonthHasBeenSet;

                    /**
                     * 偏移量
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 限制数目
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_PARTNERS_V20180321_MODEL_DESCRIBEREBATEINFOSNEWREQUEST_H_
