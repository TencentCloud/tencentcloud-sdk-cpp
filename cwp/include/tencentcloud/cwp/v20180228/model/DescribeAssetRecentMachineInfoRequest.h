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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEASSETRECENTMACHINEINFOREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEASSETRECENTMACHINEINFOREQUEST_H_

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
                * DescribeAssetRecentMachineInfo请求参数结构体
                */
                class DescribeAssetRecentMachineInfoRequest : public AbstractModel
                {
                public:
                    DescribeAssetRecentMachineInfoRequest();
                    ~DescribeAssetRecentMachineInfoRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取开始时间，如：2020-09-22
                     * @return BeginDate 开始时间，如：2020-09-22
                     * 
                     */
                    std::string GetBeginDate() const;

                    /**
                     * 设置开始时间，如：2020-09-22
                     * @param _beginDate 开始时间，如：2020-09-22
                     * 
                     */
                    void SetBeginDate(const std::string& _beginDate);

                    /**
                     * 判断参数 BeginDate 是否已赋值
                     * @return BeginDate 是否已赋值
                     * 
                     */
                    bool BeginDateHasBeenSet() const;

                    /**
                     * 获取结束时间，如：2020-09-22
                     * @return EndDate 结束时间，如：2020-09-22
                     * 
                     */
                    std::string GetEndDate() const;

                    /**
                     * 设置结束时间，如：2020-09-22
                     * @param _endDate 结束时间，如：2020-09-22
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
                     * 开始时间，如：2020-09-22
                     */
                    std::string m_beginDate;
                    bool m_beginDateHasBeenSet;

                    /**
                     * 结束时间，如：2020-09-22
                     */
                    std::string m_endDate;
                    bool m_endDateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEASSETRECENTMACHINEINFOREQUEST_H_
