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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_CLUSTERFWPREACCESSCHECKRESULT_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_CLUSTERFWPREACCESSCHECKRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cfw/v20190904/model/ClusterFwPreAccessCheckStage.h>
#include <tencentcloud/cfw/v20190904/model/PolicyRoutePreCheckReport.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * 预接入检查结果，序列化后写入 cfw_gwlb_lead_switch.check_result 列
                */
                class ClusterFwPreAccessCheckResult : public AbstractModel
                {
                public:
                    ClusterFwPreAccessCheckResult();
                    ~ClusterFwPreAccessCheckResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取检查状态，0：进行中，1：通过，2：失败
                     * @return Status 检查状态，0：进行中，1：通过，2：失败
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置检查状态，0：进行中，1：通过，2：失败
                     * @param _status 检查状态，0：进行中，1：通过，2：失败
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取当前/最后所处检查项。Status=1（通过）时为 done，Status=2（失败）时为失败的检查项 key，Status=0（进行中）时为正在执行的检查项 key
                     * @return CurrentStage 当前/最后所处检查项。Status=1（通过）时为 done，Status=2（失败）时为失败的检查项 key，Status=0（进行中）时为正在执行的检查项 key
                     * 
                     */
                    std::string GetCurrentStage() const;

                    /**
                     * 设置当前/最后所处检查项。Status=1（通过）时为 done，Status=2（失败）时为失败的检查项 key，Status=0（进行中）时为正在执行的检查项 key
                     * @param _currentStage 当前/最后所处检查项。Status=1（通过）时为 done，Status=2（失败）时为失败的检查项 key，Status=0（进行中）时为正在执行的检查项 key
                     * 
                     */
                    void SetCurrentStage(const std::string& _currentStage);

                    /**
                     * 判断参数 CurrentStage 是否已赋值
                     * @return CurrentStage 是否已赋值
                     * 
                     */
                    bool CurrentStageHasBeenSet() const;

                    /**
                     * 获取逐条检查项结果列表，按执行顺序追加
                     * @return Stages 逐条检查项结果列表，按执行顺序追加
                     * 
                     */
                    std::vector<ClusterFwPreAccessCheckStage> GetStages() const;

                    /**
                     * 设置逐条检查项结果列表，按执行顺序追加
                     * @param _stages 逐条检查项结果列表，按执行顺序追加
                     * 
                     */
                    void SetStages(const std::vector<ClusterFwPreAccessCheckStage>& _stages);

                    /**
                     * 判断参数 Stages 是否已赋值
                     * @return Stages 是否已赋值
                     * 
                     */
                    bool StagesHasBeenSet() const;

                    /**
                     * 获取策略路由配额核算报告，仅在 Status=1（通过）时非空
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PolicyRouteReport 策略路由配额核算报告，仅在 Status=1（通过）时非空
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    PolicyRoutePreCheckReport GetPolicyRouteReport() const;

                    /**
                     * 设置策略路由配额核算报告，仅在 Status=1（通过）时非空
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _policyRouteReport 策略路由配额核算报告，仅在 Status=1（通过）时非空
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPolicyRouteReport(const PolicyRoutePreCheckReport& _policyRouteReport);

                    /**
                     * 判断参数 PolicyRouteReport 是否已赋值
                     * @return PolicyRouteReport 是否已赋值
                     * 
                     */
                    bool PolicyRouteReportHasBeenSet() const;

                    /**
                     * 获取最近一次更新时间，格式：YYYY-MM-DD HH:MM:SS
                     * @return UpdateTime 最近一次更新时间，格式：YYYY-MM-DD HH:MM:SS
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置最近一次更新时间，格式：YYYY-MM-DD HH:MM:SS
                     * @param _updateTime 最近一次更新时间，格式：YYYY-MM-DD HH:MM:SS
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                private:

                    /**
                     * 检查状态，0：进行中，1：通过，2：失败
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 当前/最后所处检查项。Status=1（通过）时为 done，Status=2（失败）时为失败的检查项 key，Status=0（进行中）时为正在执行的检查项 key
                     */
                    std::string m_currentStage;
                    bool m_currentStageHasBeenSet;

                    /**
                     * 逐条检查项结果列表，按执行顺序追加
                     */
                    std::vector<ClusterFwPreAccessCheckStage> m_stages;
                    bool m_stagesHasBeenSet;

                    /**
                     * 策略路由配额核算报告，仅在 Status=1（通过）时非空
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    PolicyRoutePreCheckReport m_policyRouteReport;
                    bool m_policyRouteReportHasBeenSet;

                    /**
                     * 最近一次更新时间，格式：YYYY-MM-DD HH:MM:SS
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_CLUSTERFWPREACCESSCHECKRESULT_H_
