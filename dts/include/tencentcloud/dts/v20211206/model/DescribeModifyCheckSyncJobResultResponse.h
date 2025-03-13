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

#ifndef TENCENTCLOUD_DTS_V20211206_MODEL_DESCRIBEMODIFYCHECKSYNCJOBRESULTRESPONSE_H_
#define TENCENTCLOUD_DTS_V20211206_MODEL_DESCRIBEMODIFYCHECKSYNCJOBRESULTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dts/v20211206/model/StepInfo.h>


namespace TencentCloud
{
    namespace Dts
    {
        namespace V20211206
        {
            namespace Model
            {
                /**
                * DescribeModifyCheckSyncJobResult返回参数结构体
                */
                class DescribeModifyCheckSyncJobResultResponse : public AbstractModel
                {
                public:
                    DescribeModifyCheckSyncJobResultResponse();
                    ~DescribeModifyCheckSyncJobResultResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取校验任务执行状态，如：notStarted(未开始)、running(校验中)、failed(校验任务失败)、success(任务成功)
                     * @return Status 校验任务执行状态，如：notStarted(未开始)、running(校验中)、failed(校验任务失败)、success(任务成功)
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取校验的步骤总数
                     * @return StepCount 校验的步骤总数
                     * 
                     */
                    uint64_t GetStepCount() const;

                    /**
                     * 判断参数 StepCount 是否已赋值
                     * @return StepCount 是否已赋值
                     * 
                     */
                    bool StepCountHasBeenSet() const;

                    /**
                     * 获取当前所在步骤
                     * @return StepCur 当前所在步骤
                     * 
                     */
                    uint64_t GetStepCur() const;

                    /**
                     * 判断参数 StepCur 是否已赋值
                     * @return StepCur 是否已赋值
                     * 
                     */
                    bool StepCurHasBeenSet() const;

                    /**
                     * 获取总体进度，范围为[0,100]	
                     * @return Progress 总体进度，范围为[0,100]	
                     * 
                     */
                    uint64_t GetProgress() const;

                    /**
                     * 判断参数 Progress 是否已赋值
                     * @return Progress 是否已赋值
                     * 
                     */
                    bool ProgressHasBeenSet() const;

                    /**
                     * 获取步骤详细信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StepInfos 步骤详细信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<StepInfo> GetStepInfos() const;

                    /**
                     * 判断参数 StepInfos 是否已赋值
                     * @return StepInfos 是否已赋值
                     * 
                     */
                    bool StepInfosHasBeenSet() const;

                private:

                    /**
                     * 校验任务执行状态，如：notStarted(未开始)、running(校验中)、failed(校验任务失败)、success(任务成功)
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 校验的步骤总数
                     */
                    uint64_t m_stepCount;
                    bool m_stepCountHasBeenSet;

                    /**
                     * 当前所在步骤
                     */
                    uint64_t m_stepCur;
                    bool m_stepCurHasBeenSet;

                    /**
                     * 总体进度，范围为[0,100]	
                     */
                    uint64_t m_progress;
                    bool m_progressHasBeenSet;

                    /**
                     * 步骤详细信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<StepInfo> m_stepInfos;
                    bool m_stepInfosHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20211206_MODEL_DESCRIBEMODIFYCHECKSYNCJOBRESULTRESPONSE_H_
