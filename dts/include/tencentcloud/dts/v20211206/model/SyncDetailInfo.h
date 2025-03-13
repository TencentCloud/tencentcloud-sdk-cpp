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

#ifndef TENCENTCLOUD_DTS_V20211206_MODEL_SYNCDETAILINFO_H_
#define TENCENTCLOUD_DTS_V20211206_MODEL_SYNCDETAILINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dts/v20211206/model/StepInfo.h>
#include <tencentcloud/dts/v20211206/model/ErrInfo.h>


namespace TencentCloud
{
    namespace Dts
    {
        namespace V20211206
        {
            namespace Model
            {
                /**
                * 同步任务的步骤信息
                */
                class SyncDetailInfo : public AbstractModel
                {
                public:
                    SyncDetailInfo();
                    ~SyncDetailInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取总步骤数
                     * @return StepAll 总步骤数
                     * 
                     */
                    uint64_t GetStepAll() const;

                    /**
                     * 设置总步骤数
                     * @param _stepAll 总步骤数
                     * 
                     */
                    void SetStepAll(const uint64_t& _stepAll);

                    /**
                     * 判断参数 StepAll 是否已赋值
                     * @return StepAll 是否已赋值
                     * 
                     */
                    bool StepAllHasBeenSet() const;

                    /**
                     * 获取当前步骤
                     * @return StepNow 当前步骤
                     * 
                     */
                    uint64_t GetStepNow() const;

                    /**
                     * 设置当前步骤
                     * @param _stepNow 当前步骤
                     * 
                     */
                    void SetStepNow(const uint64_t& _stepNow);

                    /**
                     * 判断参数 StepNow 是否已赋值
                     * @return StepNow 是否已赋值
                     * 
                     */
                    bool StepNowHasBeenSet() const;

                    /**
                     * 获取总体进度
                     * @return Progress 总体进度
                     * 
                     */
                    int64_t GetProgress() const;

                    /**
                     * 设置总体进度
                     * @param _progress 总体进度
                     * 
                     */
                    void SetProgress(const int64_t& _progress);

                    /**
                     * 判断参数 Progress 是否已赋值
                     * @return Progress 是否已赋值
                     * 
                     */
                    bool ProgressHasBeenSet() const;

                    /**
                     * 获取当前步骤进度，范围为[0-100]，若为-1表示当前步骤不支持查看进度
                     * @return CurrentStepProgress 当前步骤进度，范围为[0-100]，若为-1表示当前步骤不支持查看进度
                     * 
                     */
                    int64_t GetCurrentStepProgress() const;

                    /**
                     * 设置当前步骤进度，范围为[0-100]，若为-1表示当前步骤不支持查看进度
                     * @param _currentStepProgress 当前步骤进度，范围为[0-100]，若为-1表示当前步骤不支持查看进度
                     * 
                     */
                    void SetCurrentStepProgress(const int64_t& _currentStepProgress);

                    /**
                     * 判断参数 CurrentStepProgress 是否已赋值
                     * @return CurrentStepProgress 是否已赋值
                     * 
                     */
                    bool CurrentStepProgressHasBeenSet() const;

                    /**
                     * 获取同步两端数据量差距
                     * @return MasterSlaveDistance 同步两端数据量差距
                     * 
                     */
                    int64_t GetMasterSlaveDistance() const;

                    /**
                     * 设置同步两端数据量差距
                     * @param _masterSlaveDistance 同步两端数据量差距
                     * 
                     */
                    void SetMasterSlaveDistance(const int64_t& _masterSlaveDistance);

                    /**
                     * 判断参数 MasterSlaveDistance 是否已赋值
                     * @return MasterSlaveDistance 是否已赋值
                     * 
                     */
                    bool MasterSlaveDistanceHasBeenSet() const;

                    /**
                     * 获取同步两端时间差距
                     * @return SecondsBehindMaster 同步两端时间差距
                     * 
                     */
                    int64_t GetSecondsBehindMaster() const;

                    /**
                     * 设置同步两端时间差距
                     * @param _secondsBehindMaster 同步两端时间差距
                     * 
                     */
                    void SetSecondsBehindMaster(const int64_t& _secondsBehindMaster);

                    /**
                     * 判断参数 SecondsBehindMaster 是否已赋值
                     * @return SecondsBehindMaster 是否已赋值
                     * 
                     */
                    bool SecondsBehindMasterHasBeenSet() const;

                    /**
                     * 获取总体描述信息
                     * @return Message 总体描述信息
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置总体描述信息
                     * @param _message 总体描述信息
                     * 
                     */
                    void SetMessage(const std::string& _message);

                    /**
                     * 判断参数 Message 是否已赋值
                     * @return Message 是否已赋值
                     * 
                     */
                    bool MessageHasBeenSet() const;

                    /**
                     * 获取详细步骤信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StepInfos 详细步骤信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<StepInfo> GetStepInfos() const;

                    /**
                     * 设置详细步骤信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _stepInfos 详细步骤信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStepInfos(const std::vector<StepInfo>& _stepInfos);

                    /**
                     * 判断参数 StepInfos 是否已赋值
                     * @return StepInfos 是否已赋值
                     * 
                     */
                    bool StepInfosHasBeenSet() const;

                    /**
                     * 获取不能发起一致性校验的原因
                     * @return CauseOfCompareDisable 不能发起一致性校验的原因
                     * 
                     */
                    std::string GetCauseOfCompareDisable() const;

                    /**
                     * 设置不能发起一致性校验的原因
                     * @param _causeOfCompareDisable 不能发起一致性校验的原因
                     * 
                     */
                    void SetCauseOfCompareDisable(const std::string& _causeOfCompareDisable);

                    /**
                     * 判断参数 CauseOfCompareDisable 是否已赋值
                     * @return CauseOfCompareDisable 是否已赋值
                     * 
                     */
                    bool CauseOfCompareDisableHasBeenSet() const;

                    /**
                     * 获取任务的错误和解决方案信息
                     * @return ErrInfo 任务的错误和解决方案信息
                     * 
                     */
                    ErrInfo GetErrInfo() const;

                    /**
                     * 设置任务的错误和解决方案信息
                     * @param _errInfo 任务的错误和解决方案信息
                     * 
                     */
                    void SetErrInfo(const ErrInfo& _errInfo);

                    /**
                     * 判断参数 ErrInfo 是否已赋值
                     * @return ErrInfo 是否已赋值
                     * 
                     */
                    bool ErrInfoHasBeenSet() const;

                private:

                    /**
                     * 总步骤数
                     */
                    uint64_t m_stepAll;
                    bool m_stepAllHasBeenSet;

                    /**
                     * 当前步骤
                     */
                    uint64_t m_stepNow;
                    bool m_stepNowHasBeenSet;

                    /**
                     * 总体进度
                     */
                    int64_t m_progress;
                    bool m_progressHasBeenSet;

                    /**
                     * 当前步骤进度，范围为[0-100]，若为-1表示当前步骤不支持查看进度
                     */
                    int64_t m_currentStepProgress;
                    bool m_currentStepProgressHasBeenSet;

                    /**
                     * 同步两端数据量差距
                     */
                    int64_t m_masterSlaveDistance;
                    bool m_masterSlaveDistanceHasBeenSet;

                    /**
                     * 同步两端时间差距
                     */
                    int64_t m_secondsBehindMaster;
                    bool m_secondsBehindMasterHasBeenSet;

                    /**
                     * 总体描述信息
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                    /**
                     * 详细步骤信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<StepInfo> m_stepInfos;
                    bool m_stepInfosHasBeenSet;

                    /**
                     * 不能发起一致性校验的原因
                     */
                    std::string m_causeOfCompareDisable;
                    bool m_causeOfCompareDisableHasBeenSet;

                    /**
                     * 任务的错误和解决方案信息
                     */
                    ErrInfo m_errInfo;
                    bool m_errInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20211206_MODEL_SYNCDETAILINFO_H_
