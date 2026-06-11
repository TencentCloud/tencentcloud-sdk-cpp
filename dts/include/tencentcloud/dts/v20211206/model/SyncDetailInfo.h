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
                     * 获取<p>总步骤数</p>
                     * @return StepAll <p>总步骤数</p>
                     * 
                     */
                    uint64_t GetStepAll() const;

                    /**
                     * 设置<p>总步骤数</p>
                     * @param _stepAll <p>总步骤数</p>
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
                     * 获取<p>当前步骤</p>
                     * @return StepNow <p>当前步骤</p>
                     * 
                     */
                    uint64_t GetStepNow() const;

                    /**
                     * 设置<p>当前步骤</p>
                     * @param _stepNow <p>当前步骤</p>
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
                     * 获取<p>总体进度</p>
                     * @return Progress <p>总体进度</p>
                     * 
                     */
                    int64_t GetProgress() const;

                    /**
                     * 设置<p>总体进度</p>
                     * @param _progress <p>总体进度</p>
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
                     * 获取<p>当前步骤进度，范围为[0-100]，若为-1表示当前步骤不支持查看进度</p>
                     * @return CurrentStepProgress <p>当前步骤进度，范围为[0-100]，若为-1表示当前步骤不支持查看进度</p>
                     * 
                     */
                    int64_t GetCurrentStepProgress() const;

                    /**
                     * 设置<p>当前步骤进度，范围为[0-100]，若为-1表示当前步骤不支持查看进度</p>
                     * @param _currentStepProgress <p>当前步骤进度，范围为[0-100]，若为-1表示当前步骤不支持查看进度</p>
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
                     * 获取<p>同步两端数据量差距</p>
                     * @return MasterSlaveDistance <p>同步两端数据量差距</p>
                     * 
                     */
                    int64_t GetMasterSlaveDistance() const;

                    /**
                     * 设置<p>同步两端数据量差距</p>
                     * @param _masterSlaveDistance <p>同步两端数据量差距</p>
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
                     * 获取<p>同步两端时间差距</p>
                     * @return SecondsBehindMaster <p>同步两端时间差距</p>
                     * 
                     */
                    int64_t GetSecondsBehindMaster() const;

                    /**
                     * 设置<p>同步两端时间差距</p>
                     * @param _secondsBehindMaster <p>同步两端时间差距</p>
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
                     * 获取<p>总体描述信息</p>
                     * @return Message <p>总体描述信息</p>
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置<p>总体描述信息</p>
                     * @param _message <p>总体描述信息</p>
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
                     * 获取<p>详细步骤信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StepInfos <p>详细步骤信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<StepInfo> GetStepInfos() const;

                    /**
                     * 设置<p>详细步骤信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _stepInfos <p>详细步骤信息</p>
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
                     * 获取<p>不能发起内置校验的原因</p>
                     * @return CauseOfCompareDisable <p>不能发起内置校验的原因</p>
                     * 
                     */
                    std::string GetCauseOfCompareDisable() const;

                    /**
                     * 设置<p>不能发起内置校验的原因</p>
                     * @param _causeOfCompareDisable <p>不能发起内置校验的原因</p>
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
                     * 获取<p>任务的错误和解决方案信息</p>
                     * @return ErrInfo <p>任务的错误和解决方案信息</p>
                     * 
                     */
                    ErrInfo GetErrInfo() const;

                    /**
                     * 设置<p>任务的错误和解决方案信息</p>
                     * @param _errInfo <p>任务的错误和解决方案信息</p>
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
                     * <p>总步骤数</p>
                     */
                    uint64_t m_stepAll;
                    bool m_stepAllHasBeenSet;

                    /**
                     * <p>当前步骤</p>
                     */
                    uint64_t m_stepNow;
                    bool m_stepNowHasBeenSet;

                    /**
                     * <p>总体进度</p>
                     */
                    int64_t m_progress;
                    bool m_progressHasBeenSet;

                    /**
                     * <p>当前步骤进度，范围为[0-100]，若为-1表示当前步骤不支持查看进度</p>
                     */
                    int64_t m_currentStepProgress;
                    bool m_currentStepProgressHasBeenSet;

                    /**
                     * <p>同步两端数据量差距</p>
                     */
                    int64_t m_masterSlaveDistance;
                    bool m_masterSlaveDistanceHasBeenSet;

                    /**
                     * <p>同步两端时间差距</p>
                     */
                    int64_t m_secondsBehindMaster;
                    bool m_secondsBehindMasterHasBeenSet;

                    /**
                     * <p>总体描述信息</p>
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                    /**
                     * <p>详细步骤信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<StepInfo> m_stepInfos;
                    bool m_stepInfosHasBeenSet;

                    /**
                     * <p>不能发起内置校验的原因</p>
                     */
                    std::string m_causeOfCompareDisable;
                    bool m_causeOfCompareDisableHasBeenSet;

                    /**
                     * <p>任务的错误和解决方案信息</p>
                     */
                    ErrInfo m_errInfo;
                    bool m_errInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20211206_MODEL_SYNCDETAILINFO_H_
