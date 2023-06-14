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

#ifndef TENCENTCLOUD_GME_V20180711_MODEL_DESCRIBEAPPLICATIONDATAREQUEST_H_
#define TENCENTCLOUD_GME_V20180711_MODEL_DESCRIBEAPPLICATIONDATAREQUEST_H_

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
                * DescribeApplicationData请求参数结构体
                */
                class DescribeApplicationDataRequest : public AbstractModel
                {
                public:
                    DescribeApplicationDataRequest();
                    ~DescribeApplicationDataRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取应用ID
                     * @return BizId 应用ID
                     * 
                     */
                    uint64_t GetBizId() const;

                    /**
                     * 设置应用ID
                     * @param _bizId 应用ID
                     * 
                     */
                    void SetBizId(const uint64_t& _bizId);

                    /**
                     * 判断参数 BizId 是否已赋值
                     * @return BizId 是否已赋值
                     * 
                     */
                    bool BizIdHasBeenSet() const;

                    /**
                     * 获取数据开始时间，格式为 年-月-日，如: 2018-07-13
                     * @return StartDate 数据开始时间，格式为 年-月-日，如: 2018-07-13
                     * 
                     */
                    std::string GetStartDate() const;

                    /**
                     * 设置数据开始时间，格式为 年-月-日，如: 2018-07-13
                     * @param _startDate 数据开始时间，格式为 年-月-日，如: 2018-07-13
                     * 
                     */
                    void SetStartDate(const std::string& _startDate);

                    /**
                     * 判断参数 StartDate 是否已赋值
                     * @return StartDate 是否已赋值
                     * 
                     */
                    bool StartDateHasBeenSet() const;

                    /**
                     * 获取数据结束时间，格式为 年-月-日，如: 2018-07-13
                     * @return EndDate 数据结束时间，格式为 年-月-日，如: 2018-07-13
                     * 
                     */
                    std::string GetEndDate() const;

                    /**
                     * 设置数据结束时间，格式为 年-月-日，如: 2018-07-13
                     * @param _endDate 数据结束时间，格式为 年-月-日，如: 2018-07-13
                     * 
                     */
                    void SetEndDate(const std::string& _endDate);

                    /**
                     * 判断参数 EndDate 是否已赋值
                     * @return EndDate 是否已赋值
                     * 
                     */
                    bool EndDateHasBeenSet() const;

                private:

                    /**
                     * 应用ID
                     */
                    uint64_t m_bizId;
                    bool m_bizIdHasBeenSet;

                    /**
                     * 数据开始时间，格式为 年-月-日，如: 2018-07-13
                     */
                    std::string m_startDate;
                    bool m_startDateHasBeenSet;

                    /**
                     * 数据结束时间，格式为 年-月-日，如: 2018-07-13
                     */
                    std::string m_endDate;
                    bool m_endDateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GME_V20180711_MODEL_DESCRIBEAPPLICATIONDATAREQUEST_H_
