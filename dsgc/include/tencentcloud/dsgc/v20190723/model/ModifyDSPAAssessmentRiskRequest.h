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

#ifndef TENCENTCLOUD_DSGC_V20190723_MODEL_MODIFYDSPAASSESSMENTRISKREQUEST_H_
#define TENCENTCLOUD_DSGC_V20190723_MODEL_MODIFYDSPAASSESSMENTRISKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dsgc
    {
        namespace V20190723
        {
            namespace Model
            {
                /**
                * ModifyDSPAAssessmentRisk请求参数结构体
                */
                class ModifyDSPAAssessmentRiskRequest : public AbstractModel
                {
                public:
                    ModifyDSPAAssessmentRiskRequest();
                    ~ModifyDSPAAssessmentRiskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取DSPA实例Id，格式“dspa-xxxxxxxx”
                     * @return DspaId DSPA实例Id，格式“dspa-xxxxxxxx”
                     * 
                     */
                    std::string GetDspaId() const;

                    /**
                     * 设置DSPA实例Id，格式“dspa-xxxxxxxx”
                     * @param _dspaId DSPA实例Id，格式“dspa-xxxxxxxx”
                     * 
                     */
                    void SetDspaId(const std::string& _dspaId);

                    /**
                     * 判断参数 DspaId 是否已赋值
                     * @return DspaId 是否已赋值
                     * 
                     */
                    bool DspaIdHasBeenSet() const;

                    /**
                     * 获取评估任务Id，格式“task-xxxxxxxx”
                     * @return TaskId 评估任务Id，格式“task-xxxxxxxx”
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置评估任务Id，格式“task-xxxxxxxx”
                     * @param _taskId 评估任务Id，格式“task-xxxxxxxx”
                     * 
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取风险项Id，格式“risk-xxxxxxxx”
                     * @return RiskId 风险项Id，格式“risk-xxxxxxxx”
                     * 
                     */
                    std::string GetRiskId() const;

                    /**
                     * 设置风险项Id，格式“risk-xxxxxxxx”
                     * @param _riskId 风险项Id，格式“risk-xxxxxxxx”
                     * 
                     */
                    void SetRiskId(const std::string& _riskId);

                    /**
                     * 判断参数 RiskId 是否已赋值
                     * @return RiskId 是否已赋值
                     * 
                     */
                    bool RiskIdHasBeenSet() const;

                    /**
                     * 获取风险项状态。（waiting:待处理，processing:处理中，finished:已处理）
                     * @return Status 风险项状态。（waiting:待处理，processing:处理中，finished:已处理）
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置风险项状态。（waiting:待处理，processing:处理中，finished:已处理）
                     * @param _status 风险项状态。（waiting:待处理，processing:处理中，finished:已处理）
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * DSPA实例Id，格式“dspa-xxxxxxxx”
                     */
                    std::string m_dspaId;
                    bool m_dspaIdHasBeenSet;

                    /**
                     * 评估任务Id，格式“task-xxxxxxxx”
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 风险项Id，格式“risk-xxxxxxxx”
                     */
                    std::string m_riskId;
                    bool m_riskIdHasBeenSet;

                    /**
                     * 风险项状态。（waiting:待处理，processing:处理中，finished:已处理）
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DSGC_V20190723_MODEL_MODIFYDSPAASSESSMENTRISKREQUEST_H_
