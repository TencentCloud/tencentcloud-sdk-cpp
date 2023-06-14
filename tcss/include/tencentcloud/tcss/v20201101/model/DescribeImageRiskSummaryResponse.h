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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEIMAGERISKSUMMARYRESPONSE_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEIMAGERISKSUMMARYRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcss/v20201101/model/RunTimeRiskInfo.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * DescribeImageRiskSummary返回参数结构体
                */
                class DescribeImageRiskSummaryResponse : public AbstractModel
                {
                public:
                    DescribeImageRiskSummaryResponse();
                    ~DescribeImageRiskSummaryResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取安全漏洞
                     * @return VulnerabilityCnt 安全漏洞
                     * 
                     */
                    std::vector<RunTimeRiskInfo> GetVulnerabilityCnt() const;

                    /**
                     * 判断参数 VulnerabilityCnt 是否已赋值
                     * @return VulnerabilityCnt 是否已赋值
                     * 
                     */
                    bool VulnerabilityCntHasBeenSet() const;

                    /**
                     * 获取木马病毒
                     * @return MalwareVirusCnt 木马病毒
                     * 
                     */
                    std::vector<RunTimeRiskInfo> GetMalwareVirusCnt() const;

                    /**
                     * 判断参数 MalwareVirusCnt 是否已赋值
                     * @return MalwareVirusCnt 是否已赋值
                     * 
                     */
                    bool MalwareVirusCntHasBeenSet() const;

                    /**
                     * 获取敏感信息
                     * @return RiskCnt 敏感信息
                     * 
                     */
                    std::vector<RunTimeRiskInfo> GetRiskCnt() const;

                    /**
                     * 判断参数 RiskCnt 是否已赋值
                     * @return RiskCnt 是否已赋值
                     * 
                     */
                    bool RiskCntHasBeenSet() const;

                private:

                    /**
                     * 安全漏洞
                     */
                    std::vector<RunTimeRiskInfo> m_vulnerabilityCnt;
                    bool m_vulnerabilityCntHasBeenSet;

                    /**
                     * 木马病毒
                     */
                    std::vector<RunTimeRiskInfo> m_malwareVirusCnt;
                    bool m_malwareVirusCntHasBeenSet;

                    /**
                     * 敏感信息
                     */
                    std::vector<RunTimeRiskInfo> m_riskCnt;
                    bool m_riskCntHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEIMAGERISKSUMMARYRESPONSE_H_
