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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_DESCRIBECREDITSUSAGEREQUEST_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_DESCRIBECREDITSUSAGEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * DescribeCreditsUsage请求参数结构体
                */
                class DescribeCreditsUsageRequest : public AbstractModel
                {
                public:
                    DescribeCreditsUsageRequest();
                    ~DescribeCreditsUsageRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>开始日期</p>
                     * @return StartDate <p>开始日期</p>
                     * 
                     */
                    std::string GetStartDate() const;

                    /**
                     * 设置<p>开始日期</p>
                     * @param _startDate <p>开始日期</p>
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
                     * 获取<p>结束日期</p>
                     * @return EndDate <p>结束日期</p>
                     * 
                     */
                    std::string GetEndDate() const;

                    /**
                     * 设置<p>结束日期</p>
                     * @param _endDate <p>结束日期</p>
                     * 
                     */
                    void SetEndDate(const std::string& _endDate);

                    /**
                     * 判断参数 EndDate 是否已赋值
                     * @return EndDate 是否已赋值
                     * 
                     */
                    bool EndDateHasBeenSet() const;

                    /**
                     * 获取<p>环境id</p>
                     * @return EnvId <p>环境id</p>
                     * 
                     */
                    std::string GetEnvId() const;

                    /**
                     * 设置<p>环境id</p>
                     * @param _envId <p>环境id</p>
                     * 
                     */
                    void SetEnvId(const std::string& _envId);

                    /**
                     * 判断参数 EnvId 是否已赋值
                     * @return EnvId 是否已赋值
                     * 
                     */
                    bool EnvIdHasBeenSet() const;

                private:

                    /**
                     * <p>开始日期</p>
                     */
                    std::string m_startDate;
                    bool m_startDateHasBeenSet;

                    /**
                     * <p>结束日期</p>
                     */
                    std::string m_endDate;
                    bool m_endDateHasBeenSet;

                    /**
                     * <p>环境id</p>
                     */
                    std::string m_envId;
                    bool m_envIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_DESCRIBECREDITSUSAGEREQUEST_H_
