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

#ifndef TENCENTCLOUD_GME_V20180711_MODEL_DESCRIBEFILTERRESULTLISTREQUEST_H_
#define TENCENTCLOUD_GME_V20180711_MODEL_DESCRIBEFILTERRESULTLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Gme
    {
        namespace V20180711
        {
            namespace Model
            {
                /**
                * DescribeFilterResultList请求参数结构体
                */
                class DescribeFilterResultListRequest : public AbstractModel
                {
                public:
                    DescribeFilterResultListRequest();
                    ~DescribeFilterResultListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取应用ID
                     * @return BizId 应用ID
                     */
                    uint64_t GetBizId() const;

                    /**
                     * 设置应用ID
                     * @param BizId 应用ID
                     */
                    void SetBizId(const uint64_t& _bizId);

                    /**
                     * 判断参数 BizId 是否已赋值
                     * @return BizId 是否已赋值
                     */
                    bool BizIdHasBeenSet() const;

                    /**
                     * 获取开始时间，格式为 年-月-日，如: 2018-07-11
                     * @return StartDate 开始时间，格式为 年-月-日，如: 2018-07-11
                     */
                    std::string GetStartDate() const;

                    /**
                     * 设置开始时间，格式为 年-月-日，如: 2018-07-11
                     * @param StartDate 开始时间，格式为 年-月-日，如: 2018-07-11
                     */
                    void SetStartDate(const std::string& _startDate);

                    /**
                     * 判断参数 StartDate 是否已赋值
                     * @return StartDate 是否已赋值
                     */
                    bool StartDateHasBeenSet() const;

                    /**
                     * 获取结束时间，格式为 年-月-日，如: 2018-07-11
                     * @return EndDate 结束时间，格式为 年-月-日，如: 2018-07-11
                     */
                    std::string GetEndDate() const;

                    /**
                     * 设置结束时间，格式为 年-月-日，如: 2018-07-11
                     * @param EndDate 结束时间，格式为 年-月-日，如: 2018-07-11
                     */
                    void SetEndDate(const std::string& _endDate);

                    /**
                     * 判断参数 EndDate 是否已赋值
                     * @return EndDate 是否已赋值
                     */
                    bool EndDateHasBeenSet() const;

                    /**
                     * 获取偏移量，默认值为0。
                     * @return Offset 偏移量，默认值为0。
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置偏移量，默认值为0。
                     * @param Offset 偏移量，默认值为0。
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取返回数量，默认值为10，最大值为100。
                     * @return Limit 返回数量，默认值为10，最大值为100。
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置返回数量，默认值为10，最大值为100。
                     * @param Limit 返回数量，默认值为10，最大值为100。
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * 应用ID
                     */
                    uint64_t m_bizId;
                    bool m_bizIdHasBeenSet;

                    /**
                     * 开始时间，格式为 年-月-日，如: 2018-07-11
                     */
                    std::string m_startDate;
                    bool m_startDateHasBeenSet;

                    /**
                     * 结束时间，格式为 年-月-日，如: 2018-07-11
                     */
                    std::string m_endDate;
                    bool m_endDateHasBeenSet;

                    /**
                     * 偏移量，默认值为0。
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 返回数量，默认值为10，最大值为100。
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GME_V20180711_MODEL_DESCRIBEFILTERRESULTLISTREQUEST_H_
