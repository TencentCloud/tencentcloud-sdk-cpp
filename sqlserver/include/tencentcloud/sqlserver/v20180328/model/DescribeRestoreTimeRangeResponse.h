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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBERESTORETIMERANGERESPONSE_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBERESTORETIMERANGERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Sqlserver
    {
        namespace V20180328
        {
            namespace Model
            {
                /**
                * DescribeRestoreTimeRange返回参数结构体
                */
                class DescribeRestoreTimeRangeResponse : public AbstractModel
                {
                public:
                    DescribeRestoreTimeRangeResponse();
                    ~DescribeRestoreTimeRangeResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取按照时间点可回档的最小时间
                     * @return MinTime 按照时间点可回档的最小时间
                     * 
                     */
                    std::string GetMinTime() const;

                    /**
                     * 判断参数 MinTime 是否已赋值
                     * @return MinTime 是否已赋值
                     * 
                     */
                    bool MinTimeHasBeenSet() const;

                    /**
                     * 获取按照时间点可回档的最大时间
                     * @return MaxTime 按照时间点可回档的最大时间
                     * 
                     */
                    std::string GetMaxTime() const;

                    /**
                     * 判断参数 MaxTime 是否已赋值
                     * @return MaxTime 是否已赋值
                     * 
                     */
                    bool MaxTimeHasBeenSet() const;

                private:

                    /**
                     * 按照时间点可回档的最小时间
                     */
                    std::string m_minTime;
                    bool m_minTimeHasBeenSet;

                    /**
                     * 按照时间点可回档的最大时间
                     */
                    std::string m_maxTime;
                    bool m_maxTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBERESTORETIMERANGERESPONSE_H_
