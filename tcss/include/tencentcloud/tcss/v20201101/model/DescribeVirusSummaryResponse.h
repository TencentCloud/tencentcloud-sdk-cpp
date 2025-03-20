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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEVIRUSSUMMARYRESPONSE_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEVIRUSSUMMARYRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * DescribeVirusSummary返回参数结构体
                */
                class DescribeVirusSummaryResponse : public AbstractModel
                {
                public:
                    DescribeVirusSummaryResponse();
                    ~DescribeVirusSummaryResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取最近的一次扫描任务id
                     * @return TaskId 最近的一次扫描任务id
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取木马影响容器个数
                     * @return RiskContainerCnt 木马影响容器个数
                     * 
                     */
                    uint64_t GetRiskContainerCnt() const;

                    /**
                     * 判断参数 RiskContainerCnt 是否已赋值
                     * @return RiskContainerCnt 是否已赋值
                     * 
                     */
                    bool RiskContainerCntHasBeenSet() const;

                    /**
                     * 获取待处理风险个数
                     * @return RiskCnt 待处理风险个数
                     * 
                     */
                    uint64_t GetRiskCnt() const;

                    /**
                     * 判断参数 RiskCnt 是否已赋值
                     * @return RiskCnt 是否已赋值
                     * 
                     */
                    bool RiskCntHasBeenSet() const;

                    /**
                     * 获取病毒库更新时间
                     * @return VirusDataBaseModifyTime 病毒库更新时间
                     * 
                     */
                    std::string GetVirusDataBaseModifyTime() const;

                    /**
                     * 判断参数 VirusDataBaseModifyTime 是否已赋值
                     * @return VirusDataBaseModifyTime 是否已赋值
                     * 
                     */
                    bool VirusDataBaseModifyTimeHasBeenSet() const;

                    /**
                     * 获取木马影响容器个数较昨日增长
                     * @return RiskContainerIncrease 木马影响容器个数较昨日增长
                     * 
                     */
                    int64_t GetRiskContainerIncrease() const;

                    /**
                     * 判断参数 RiskContainerIncrease 是否已赋值
                     * @return RiskContainerIncrease 是否已赋值
                     * 
                     */
                    bool RiskContainerIncreaseHasBeenSet() const;

                    /**
                     * 获取待处理风险个数较昨日增长
                     * @return RiskIncrease 待处理风险个数较昨日增长
                     * 
                     */
                    int64_t GetRiskIncrease() const;

                    /**
                     * 判断参数 RiskIncrease 是否已赋值
                     * @return RiskIncrease 是否已赋值
                     * 
                     */
                    bool RiskIncreaseHasBeenSet() const;

                    /**
                     * 获取隔离事件个数较昨日新增
                     * @return IsolateIncrease 隔离事件个数较昨日新增
                     * 
                     */
                    int64_t GetIsolateIncrease() const;

                    /**
                     * 判断参数 IsolateIncrease 是否已赋值
                     * @return IsolateIncrease 是否已赋值
                     * 
                     */
                    bool IsolateIncreaseHasBeenSet() const;

                    /**
                     * 获取隔离事件总数
                     * @return IsolateCnt 隔离事件总数
                     * 
                     */
                    int64_t GetIsolateCnt() const;

                    /**
                     * 判断参数 IsolateCnt 是否已赋值
                     * @return IsolateCnt 是否已赋值
                     * 
                     */
                    bool IsolateCntHasBeenSet() const;

                private:

                    /**
                     * 最近的一次扫描任务id
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 木马影响容器个数
                     */
                    uint64_t m_riskContainerCnt;
                    bool m_riskContainerCntHasBeenSet;

                    /**
                     * 待处理风险个数
                     */
                    uint64_t m_riskCnt;
                    bool m_riskCntHasBeenSet;

                    /**
                     * 病毒库更新时间
                     */
                    std::string m_virusDataBaseModifyTime;
                    bool m_virusDataBaseModifyTimeHasBeenSet;

                    /**
                     * 木马影响容器个数较昨日增长
                     */
                    int64_t m_riskContainerIncrease;
                    bool m_riskContainerIncreaseHasBeenSet;

                    /**
                     * 待处理风险个数较昨日增长
                     */
                    int64_t m_riskIncrease;
                    bool m_riskIncreaseHasBeenSet;

                    /**
                     * 隔离事件个数较昨日新增
                     */
                    int64_t m_isolateIncrease;
                    bool m_isolateIncreaseHasBeenSet;

                    /**
                     * 隔离事件总数
                     */
                    int64_t m_isolateCnt;
                    bool m_isolateCntHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEVIRUSSUMMARYRESPONSE_H_
