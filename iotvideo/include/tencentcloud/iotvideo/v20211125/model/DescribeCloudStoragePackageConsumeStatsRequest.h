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

#ifndef TENCENTCLOUD_IOTVIDEO_V20211125_MODEL_DESCRIBECLOUDSTORAGEPACKAGECONSUMESTATSREQUEST_H_
#define TENCENTCLOUD_IOTVIDEO_V20211125_MODEL_DESCRIBECLOUDSTORAGEPACKAGECONSUMESTATSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotvideo
    {
        namespace V20211125
        {
            namespace Model
            {
                /**
                * DescribeCloudStoragePackageConsumeStats请求参数结构体
                */
                class DescribeCloudStoragePackageConsumeStatsRequest : public AbstractModel
                {
                public:
                    DescribeCloudStoragePackageConsumeStatsRequest();
                    ~DescribeCloudStoragePackageConsumeStatsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取开始日期
                     * @return StartDate 开始日期
                     * 
                     */
                    std::string GetStartDate() const;

                    /**
                     * 设置开始日期
                     * @param _startDate 开始日期
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
                     * 获取结束日期，开始与结束日期间隔不可超过一年
                     * @return EndDate 结束日期，开始与结束日期间隔不可超过一年
                     * 
                     */
                    std::string GetEndDate() const;

                    /**
                     * 设置结束日期，开始与结束日期间隔不可超过一年
                     * @param _endDate 结束日期，开始与结束日期间隔不可超过一年
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
                     * 开始日期
                     */
                    std::string m_startDate;
                    bool m_startDateHasBeenSet;

                    /**
                     * 结束日期，开始与结束日期间隔不可超过一年
                     */
                    std::string m_endDate;
                    bool m_endDateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTVIDEO_V20211125_MODEL_DESCRIBECLOUDSTORAGEPACKAGECONSUMESTATSREQUEST_H_
