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

#ifndef TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DESCRIBEPROXYPROCESSSTATISTICSRESPONSE_H_
#define TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DESCRIBEPROXYPROCESSSTATISTICSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dbbrain/v20210527/model/ProcessStatistic.h>


namespace TencentCloud
{
    namespace Dbbrain
    {
        namespace V20210527
        {
            namespace Model
            {
                /**
                * DescribeProxyProcessStatistics返回参数结构体
                */
                class DescribeProxyProcessStatisticsResponse : public AbstractModel
                {
                public:
                    DescribeProxyProcessStatisticsResponse();
                    ~DescribeProxyProcessStatisticsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取实时会话统计详情。
                     * @return ProcessStatistics 实时会话统计详情。
                     * 
                     */
                    ProcessStatistic GetProcessStatistics() const;

                    /**
                     * 判断参数 ProcessStatistics 是否已赋值
                     * @return ProcessStatistics 是否已赋值
                     * 
                     */
                    bool ProcessStatisticsHasBeenSet() const;

                private:

                    /**
                     * 实时会话统计详情。
                     */
                    ProcessStatistic m_processStatistics;
                    bool m_processStatisticsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DESCRIBEPROXYPROCESSSTATISTICSRESPONSE_H_
