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

#ifndef TENCENTCLOUD_DBBRAIN_V20191016_MODEL_DESCRIBEDBSPACESTATUSRESPONSE_H_
#define TENCENTCLOUD_DBBRAIN_V20191016_MODEL_DESCRIBEDBSPACESTATUSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dbbrain
    {
        namespace V20191016
        {
            namespace Model
            {
                /**
                * DescribeDBSpaceStatus返回参数结构体
                */
                class DescribeDBSpaceStatusResponse : public AbstractModel
                {
                public:
                    DescribeDBSpaceStatusResponse();
                    ~DescribeDBSpaceStatusResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取磁盘增长量(MB)。
                     * @return Growth 磁盘增长量(MB)。
                     * 
                     */
                    int64_t GetGrowth() const;

                    /**
                     * 判断参数 Growth 是否已赋值
                     * @return Growth 是否已赋值
                     * 
                     */
                    bool GrowthHasBeenSet() const;

                    /**
                     * 获取磁盘剩余(MB)。
                     * @return Remain 磁盘剩余(MB)。
                     * 
                     */
                    int64_t GetRemain() const;

                    /**
                     * 判断参数 Remain 是否已赋值
                     * @return Remain 是否已赋值
                     * 
                     */
                    bool RemainHasBeenSet() const;

                    /**
                     * 获取磁盘总量(MB)。
                     * @return Total 磁盘总量(MB)。
                     * 
                     */
                    int64_t GetTotal() const;

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                    /**
                     * 获取预计可用天数。
                     * @return AvailableDays 预计可用天数。
                     * 
                     */
                    int64_t GetAvailableDays() const;

                    /**
                     * 判断参数 AvailableDays 是否已赋值
                     * @return AvailableDays 是否已赋值
                     * 
                     */
                    bool AvailableDaysHasBeenSet() const;

                private:

                    /**
                     * 磁盘增长量(MB)。
                     */
                    int64_t m_growth;
                    bool m_growthHasBeenSet;

                    /**
                     * 磁盘剩余(MB)。
                     */
                    int64_t m_remain;
                    bool m_remainHasBeenSet;

                    /**
                     * 磁盘总量(MB)。
                     */
                    int64_t m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * 预计可用天数。
                     */
                    int64_t m_availableDays;
                    bool m_availableDaysHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBBRAIN_V20191016_MODEL_DESCRIBEDBSPACESTATUSRESPONSE_H_
