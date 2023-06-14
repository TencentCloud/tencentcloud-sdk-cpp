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

#ifndef TENCENTCLOUD_IOTVIDEOINDUSTRY_V20201201_MODEL_DESCRIBESTATISTICSUMMARYREQUEST_H_
#define TENCENTCLOUD_IOTVIDEOINDUSTRY_V20201201_MODEL_DESCRIBESTATISTICSUMMARYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotvideoindustry
    {
        namespace V20201201
        {
            namespace Model
            {
                /**
                * DescribeStatisticSummary请求参数结构体
                */
                class DescribeStatisticSummaryRequest : public AbstractModel
                {
                public:
                    DescribeStatisticSummaryRequest();
                    ~DescribeStatisticSummaryRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取指定日期。格式【YYYY-MM-DD】
                     * @return Date 指定日期。格式【YYYY-MM-DD】
                     * 
                     */
                    std::string GetDate() const;

                    /**
                     * 设置指定日期。格式【YYYY-MM-DD】
                     * @param _date 指定日期。格式【YYYY-MM-DD】
                     * 
                     */
                    void SetDate(const std::string& _date);

                    /**
                     * 判断参数 Date 是否已赋值
                     * @return Date 是否已赋值
                     * 
                     */
                    bool DateHasBeenSet() const;

                private:

                    /**
                     * 指定日期。格式【YYYY-MM-DD】
                     */
                    std::string m_date;
                    bool m_dateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTVIDEOINDUSTRY_V20201201_MODEL_DESCRIBESTATISTICSUMMARYREQUEST_H_
