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

#ifndef TENCENTCLOUD_FWM_V20250611_MODEL_DESCRIBESTRATEGYDISPATCHSTATUSRESPONSE_H_
#define TENCENTCLOUD_FWM_V20250611_MODEL_DESCRIBESTRATEGYDISPATCHSTATUSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Fwm
    {
        namespace V20250611
        {
            namespace Model
            {
                /**
                * DescribeStrategyDispatchStatus返回参数结构体
                */
                class DescribeStrategyDispatchStatusResponse : public AbstractModel
                {
                public:
                    DescribeStrategyDispatchStatusResponse();
                    ~DescribeStrategyDispatchStatusResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取进度
                     * @return Progress 进度
                     * 
                     */
                    double GetProgress() const;

                    /**
                     * 判断参数 Progress 是否已赋值
                     * @return Progress 是否已赋值
                     * 
                     */
                    bool ProgressHasBeenSet() const;

                    /**
                     * 获取下发开始时间
                     * @return StartTime 下发开始时间
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取下发结束时间
                     * @return EndTime 下发结束时间
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取下发状态，0无变动，1下发中，2下发成功，3下发失败，4更新待下发
                     * @return Status 下发状态，0无变动，1下发中，2下发成功，3下发失败，4更新待下发
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取下发规则组数量
                     * @return RuleGroupNum 下发规则组数量
                     * 
                     */
                    int64_t GetRuleGroupNum() const;

                    /**
                     * 判断参数 RuleGroupNum 是否已赋值
                     * @return RuleGroupNum 是否已赋值
                     * 
                     */
                    bool RuleGroupNumHasBeenSet() const;

                    /**
                     * 获取下发失败错误信息
                     * @return ErrorMsg 下发失败错误信息
                     * 
                     */
                    std::string GetErrorMsg() const;

                    /**
                     * 判断参数 ErrorMsg 是否已赋值
                     * @return ErrorMsg 是否已赋值
                     * 
                     */
                    bool ErrorMsgHasBeenSet() const;

                    /**
                     * 获取下发关联策略id列表
                     * @return DispatchStrategyList 下发关联策略id列表
                     * 
                     */
                    std::vector<std::string> GetDispatchStrategyList() const;

                    /**
                     * 判断参数 DispatchStrategyList 是否已赋值
                     * @return DispatchStrategyList 是否已赋值
                     * 
                     */
                    bool DispatchStrategyListHasBeenSet() const;

                private:

                    /**
                     * 进度
                     */
                    double m_progress;
                    bool m_progressHasBeenSet;

                    /**
                     * 下发开始时间
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 下发结束时间
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 下发状态，0无变动，1下发中，2下发成功，3下发失败，4更新待下发
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 下发规则组数量
                     */
                    int64_t m_ruleGroupNum;
                    bool m_ruleGroupNumHasBeenSet;

                    /**
                     * 下发失败错误信息
                     */
                    std::string m_errorMsg;
                    bool m_errorMsgHasBeenSet;

                    /**
                     * 下发关联策略id列表
                     */
                    std::vector<std::string> m_dispatchStrategyList;
                    bool m_dispatchStrategyListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FWM_V20250611_MODEL_DESCRIBESTRATEGYDISPATCHSTATUSRESPONSE_H_
