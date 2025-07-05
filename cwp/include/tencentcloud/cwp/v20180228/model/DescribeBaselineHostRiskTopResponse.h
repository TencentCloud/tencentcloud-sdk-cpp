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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEBASELINEHOSTRISKTOPRESPONSE_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEBASELINEHOSTRISKTOPRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/HostRiskLevelCount.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * DescribeBaselineHostRiskTop返回参数结构体
                */
                class DescribeBaselineHostRiskTopResponse : public AbstractModel
                {
                public:
                    DescribeBaselineHostRiskTopResponse();
                    ~DescribeBaselineHostRiskTopResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取风险主机top5
                     * @return HostRiskTop5 风险主机top5
                     * 
                     */
                    std::vector<HostRiskLevelCount> GetHostRiskTop5() const;

                    /**
                     * 判断参数 HostRiskTop5 是否已赋值
                     * @return HostRiskTop5 是否已赋值
                     * 
                     */
                    bool HostRiskTop5HasBeenSet() const;

                private:

                    /**
                     * 风险主机top5
                     */
                    std::vector<HostRiskLevelCount> m_hostRiskTop5;
                    bool m_hostRiskTop5HasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEBASELINEHOSTRISKTOPRESPONSE_H_
