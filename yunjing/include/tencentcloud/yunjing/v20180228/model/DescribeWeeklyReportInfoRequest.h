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

#ifndef TENCENTCLOUD_YUNJING_V20180228_MODEL_DESCRIBEWEEKLYREPORTINFOREQUEST_H_
#define TENCENTCLOUD_YUNJING_V20180228_MODEL_DESCRIBEWEEKLYREPORTINFOREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Yunjing
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * DescribeWeeklyReportInfo请求参数结构体
                */
                class DescribeWeeklyReportInfoRequest : public AbstractModel
                {
                public:
                    DescribeWeeklyReportInfoRequest();
                    ~DescribeWeeklyReportInfoRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取专业周报开始时间。
                     * @return BeginDate 专业周报开始时间。
                     * 
                     */
                    std::string GetBeginDate() const;

                    /**
                     * 设置专业周报开始时间。
                     * @param _beginDate 专业周报开始时间。
                     * 
                     */
                    void SetBeginDate(const std::string& _beginDate);

                    /**
                     * 判断参数 BeginDate 是否已赋值
                     * @return BeginDate 是否已赋值
                     * 
                     */
                    bool BeginDateHasBeenSet() const;

                private:

                    /**
                     * 专业周报开始时间。
                     */
                    std::string m_beginDate;
                    bool m_beginDateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_YUNJING_V20180228_MODEL_DESCRIBEWEEKLYREPORTINFOREQUEST_H_
