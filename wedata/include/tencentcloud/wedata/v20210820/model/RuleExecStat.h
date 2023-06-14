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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_RULEEXECSTAT_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_RULEEXECSTAT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * 规则运行情况结果
                */
                class RuleExecStat : public AbstractModel
                {
                public:
                    RuleExecStat();
                    ~RuleExecStat() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取规则运行总数
                     * @return TotalCnt 规则运行总数
                     * 
                     */
                    uint64_t GetTotalCnt() const;

                    /**
                     * 设置规则运行总数
                     * @param _totalCnt 规则运行总数
                     * 
                     */
                    void SetTotalCnt(const uint64_t& _totalCnt);

                    /**
                     * 判断参数 TotalCnt 是否已赋值
                     * @return TotalCnt 是否已赋值
                     * 
                     */
                    bool TotalCntHasBeenSet() const;

                    /**
                     * 获取环比规则运行总数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LastTotalCnt 环比规则运行总数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetLastTotalCnt() const;

                    /**
                     * 设置环比规则运行总数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _lastTotalCnt 环比规则运行总数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLastTotalCnt(const uint64_t& _lastTotalCnt);

                    /**
                     * 判断参数 LastTotalCnt 是否已赋值
                     * @return LastTotalCnt 是否已赋值
                     * 
                     */
                    bool LastTotalCntHasBeenSet() const;

                    /**
                     * 获取规则运行总数占比
                     * @return TotalCntRatio 规则运行总数占比
                     * 
                     */
                    double GetTotalCntRatio() const;

                    /**
                     * 设置规则运行总数占比
                     * @param _totalCntRatio 规则运行总数占比
                     * 
                     */
                    void SetTotalCntRatio(const double& _totalCntRatio);

                    /**
                     * 判断参数 TotalCntRatio 是否已赋值
                     * @return TotalCntRatio 是否已赋值
                     * 
                     */
                    bool TotalCntRatioHasBeenSet() const;

                    /**
                     * 获取规则运行总数环比变化
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LastTotalCntRatio 规则运行总数环比变化
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetLastTotalCntRatio() const;

                    /**
                     * 设置规则运行总数环比变化
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _lastTotalCntRatio 规则运行总数环比变化
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLastTotalCntRatio(const double& _lastTotalCntRatio);

                    /**
                     * 判断参数 LastTotalCntRatio 是否已赋值
                     * @return LastTotalCntRatio 是否已赋值
                     * 
                     */
                    bool LastTotalCntRatioHasBeenSet() const;

                    /**
                     * 获取规则触发数
                     * @return TriggerCnt 规则触发数
                     * 
                     */
                    uint64_t GetTriggerCnt() const;

                    /**
                     * 设置规则触发数
                     * @param _triggerCnt 规则触发数
                     * 
                     */
                    void SetTriggerCnt(const uint64_t& _triggerCnt);

                    /**
                     * 判断参数 TriggerCnt 是否已赋值
                     * @return TriggerCnt 是否已赋值
                     * 
                     */
                    bool TriggerCntHasBeenSet() const;

                    /**
                     * 获取环比规则触发数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LastTriggerCnt 环比规则触发数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetLastTriggerCnt() const;

                    /**
                     * 设置环比规则触发数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _lastTriggerCnt 环比规则触发数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLastTriggerCnt(const uint64_t& _lastTriggerCnt);

                    /**
                     * 判断参数 LastTriggerCnt 是否已赋值
                     * @return LastTriggerCnt 是否已赋值
                     * 
                     */
                    bool LastTriggerCntHasBeenSet() const;

                    /**
                     * 获取触发占总数占比
                     * @return TriggerCntRatio 触发占总数占比
                     * 
                     */
                    double GetTriggerCntRatio() const;

                    /**
                     * 设置触发占总数占比
                     * @param _triggerCntRatio 触发占总数占比
                     * 
                     */
                    void SetTriggerCntRatio(const double& _triggerCntRatio);

                    /**
                     * 判断参数 TriggerCntRatio 是否已赋值
                     * @return TriggerCntRatio 是否已赋值
                     * 
                     */
                    bool TriggerCntRatioHasBeenSet() const;

                    /**
                     * 获取环比规则触发数变化
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LastTriggerCntRatio 环比规则触发数变化
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetLastTriggerCntRatio() const;

                    /**
                     * 设置环比规则触发数变化
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _lastTriggerCntRatio 环比规则触发数变化
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLastTriggerCntRatio(const double& _lastTriggerCntRatio);

                    /**
                     * 判断参数 LastTriggerCntRatio 是否已赋值
                     * @return LastTriggerCntRatio 是否已赋值
                     * 
                     */
                    bool LastTriggerCntRatioHasBeenSet() const;

                    /**
                     * 获取规则报警数
                     * @return AlarmCnt 规则报警数
                     * 
                     */
                    uint64_t GetAlarmCnt() const;

                    /**
                     * 设置规则报警数
                     * @param _alarmCnt 规则报警数
                     * 
                     */
                    void SetAlarmCnt(const uint64_t& _alarmCnt);

                    /**
                     * 判断参数 AlarmCnt 是否已赋值
                     * @return AlarmCnt 是否已赋值
                     * 
                     */
                    bool AlarmCntHasBeenSet() const;

                    /**
                     * 获取环比规则报警数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LastAlarmCnt 环比规则报警数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetLastAlarmCnt() const;

                    /**
                     * 设置环比规则报警数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _lastAlarmCnt 环比规则报警数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLastAlarmCnt(const uint64_t& _lastAlarmCnt);

                    /**
                     * 判断参数 LastAlarmCnt 是否已赋值
                     * @return LastAlarmCnt 是否已赋值
                     * 
                     */
                    bool LastAlarmCntHasBeenSet() const;

                    /**
                     * 获取报警占总数占比
                     * @return AlarmCntRatio 报警占总数占比
                     * 
                     */
                    double GetAlarmCntRatio() const;

                    /**
                     * 设置报警占总数占比
                     * @param _alarmCntRatio 报警占总数占比
                     * 
                     */
                    void SetAlarmCntRatio(const double& _alarmCntRatio);

                    /**
                     * 判断参数 AlarmCntRatio 是否已赋值
                     * @return AlarmCntRatio 是否已赋值
                     * 
                     */
                    bool AlarmCntRatioHasBeenSet() const;

                    /**
                     * 获取环比报警数变化
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LastAlarmCntRatio 环比报警数变化
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetLastAlarmCntRatio() const;

                    /**
                     * 设置环比报警数变化
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _lastAlarmCntRatio 环比报警数变化
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLastAlarmCntRatio(const double& _lastAlarmCntRatio);

                    /**
                     * 判断参数 LastAlarmCntRatio 是否已赋值
                     * @return LastAlarmCntRatio 是否已赋值
                     * 
                     */
                    bool LastAlarmCntRatioHasBeenSet() const;

                    /**
                     * 获取阻塞发生数
                     * @return PipelineCnt 阻塞发生数
                     * 
                     */
                    uint64_t GetPipelineCnt() const;

                    /**
                     * 设置阻塞发生数
                     * @param _pipelineCnt 阻塞发生数
                     * 
                     */
                    void SetPipelineCnt(const uint64_t& _pipelineCnt);

                    /**
                     * 判断参数 PipelineCnt 是否已赋值
                     * @return PipelineCnt 是否已赋值
                     * 
                     */
                    bool PipelineCntHasBeenSet() const;

                    /**
                     * 获取环比阻塞发生数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LastPipelineCnt 环比阻塞发生数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetLastPipelineCnt() const;

                    /**
                     * 设置环比阻塞发生数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _lastPipelineCnt 环比阻塞发生数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLastPipelineCnt(const uint64_t& _lastPipelineCnt);

                    /**
                     * 判断参数 LastPipelineCnt 是否已赋值
                     * @return LastPipelineCnt 是否已赋值
                     * 
                     */
                    bool LastPipelineCntHasBeenSet() const;

                    /**
                     * 获取阻塞占总数占比
                     * @return PipelineCntRatio 阻塞占总数占比
                     * 
                     */
                    double GetPipelineCntRatio() const;

                    /**
                     * 设置阻塞占总数占比
                     * @param _pipelineCntRatio 阻塞占总数占比
                     * 
                     */
                    void SetPipelineCntRatio(const double& _pipelineCntRatio);

                    /**
                     * 判断参数 PipelineCntRatio 是否已赋值
                     * @return PipelineCntRatio 是否已赋值
                     * 
                     */
                    bool PipelineCntRatioHasBeenSet() const;

                    /**
                     * 获取环比阻塞发生数变化
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LastPipelineCntRatio 环比阻塞发生数变化
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetLastPipelineCntRatio() const;

                    /**
                     * 设置环比阻塞发生数变化
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _lastPipelineCntRatio 环比阻塞发生数变化
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLastPipelineCntRatio(const double& _lastPipelineCntRatio);

                    /**
                     * 判断参数 LastPipelineCntRatio 是否已赋值
                     * @return LastPipelineCntRatio 是否已赋值
                     * 
                     */
                    bool LastPipelineCntRatioHasBeenSet() const;

                private:

                    /**
                     * 规则运行总数
                     */
                    uint64_t m_totalCnt;
                    bool m_totalCntHasBeenSet;

                    /**
                     * 环比规则运行总数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_lastTotalCnt;
                    bool m_lastTotalCntHasBeenSet;

                    /**
                     * 规则运行总数占比
                     */
                    double m_totalCntRatio;
                    bool m_totalCntRatioHasBeenSet;

                    /**
                     * 规则运行总数环比变化
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_lastTotalCntRatio;
                    bool m_lastTotalCntRatioHasBeenSet;

                    /**
                     * 规则触发数
                     */
                    uint64_t m_triggerCnt;
                    bool m_triggerCntHasBeenSet;

                    /**
                     * 环比规则触发数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_lastTriggerCnt;
                    bool m_lastTriggerCntHasBeenSet;

                    /**
                     * 触发占总数占比
                     */
                    double m_triggerCntRatio;
                    bool m_triggerCntRatioHasBeenSet;

                    /**
                     * 环比规则触发数变化
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_lastTriggerCntRatio;
                    bool m_lastTriggerCntRatioHasBeenSet;

                    /**
                     * 规则报警数
                     */
                    uint64_t m_alarmCnt;
                    bool m_alarmCntHasBeenSet;

                    /**
                     * 环比规则报警数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_lastAlarmCnt;
                    bool m_lastAlarmCntHasBeenSet;

                    /**
                     * 报警占总数占比
                     */
                    double m_alarmCntRatio;
                    bool m_alarmCntRatioHasBeenSet;

                    /**
                     * 环比报警数变化
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_lastAlarmCntRatio;
                    bool m_lastAlarmCntRatioHasBeenSet;

                    /**
                     * 阻塞发生数
                     */
                    uint64_t m_pipelineCnt;
                    bool m_pipelineCntHasBeenSet;

                    /**
                     * 环比阻塞发生数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_lastPipelineCnt;
                    bool m_lastPipelineCntHasBeenSet;

                    /**
                     * 阻塞占总数占比
                     */
                    double m_pipelineCntRatio;
                    bool m_pipelineCntRatioHasBeenSet;

                    /**
                     * 环比阻塞发生数变化
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_lastPipelineCntRatio;
                    bool m_lastPipelineCntRatioHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_RULEEXECSTAT_H_
