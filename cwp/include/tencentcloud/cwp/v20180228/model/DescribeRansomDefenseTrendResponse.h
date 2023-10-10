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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBERANSOMDEFENSETRENDRESPONSE_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBERANSOMDEFENSETRENDRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * DescribeRansomDefenseTrend返回参数结构体
                */
                class DescribeRansomDefenseTrendResponse : public AbstractModel
                {
                public:
                    DescribeRansomDefenseTrendResponse();
                    ~DescribeRansomDefenseTrendResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取勒索事件数量
                     * @return EventCount 勒索事件数量
                     * 
                     */
                    uint64_t GetEventCount() const;

                    /**
                     * 判断参数 EventCount 是否已赋值
                     * @return EventCount 是否已赋值
                     * 
                     */
                    bool EventCountHasBeenSet() const;

                    /**
                     * 获取影响行业数量
                     * @return IndustryCount 影响行业数量
                     * 
                     */
                    uint64_t GetIndustryCount() const;

                    /**
                     * 判断参数 IndustryCount 是否已赋值
                     * @return IndustryCount 是否已赋值
                     * 
                     */
                    bool IndustryCountHasBeenSet() const;

                    /**
                     * 获取开通勒索的公司数量
                     * @return CompanyCount 开通勒索的公司数量
                     * 
                     */
                    uint64_t GetCompanyCount() const;

                    /**
                     * 判断参数 CompanyCount 是否已赋值
                     * @return CompanyCount 是否已赋值
                     * 
                     */
                    bool CompanyCountHasBeenSet() const;

                private:

                    /**
                     * 勒索事件数量
                     */
                    uint64_t m_eventCount;
                    bool m_eventCountHasBeenSet;

                    /**
                     * 影响行业数量
                     */
                    uint64_t m_industryCount;
                    bool m_industryCountHasBeenSet;

                    /**
                     * 开通勒索的公司数量
                     */
                    uint64_t m_companyCount;
                    bool m_companyCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBERANSOMDEFENSETRENDRESPONSE_H_
