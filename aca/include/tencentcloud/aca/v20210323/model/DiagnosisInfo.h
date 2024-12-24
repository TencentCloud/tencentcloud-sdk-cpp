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

#ifndef TENCENTCLOUD_ACA_V20210323_MODEL_DIAGNOSISINFO_H_
#define TENCENTCLOUD_ACA_V20210323_MODEL_DIAGNOSISINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/aca/v20210323/model/SuspectedDiagnosis.h>
#include <tencentcloud/aca/v20210323/model/ReferralInfo.h>
#include <tencentcloud/aca/v20210323/model/CriticalInfo.h>
#include <tencentcloud/aca/v20210323/model/VitalSignsInfo.h>
#include <tencentcloud/aca/v20210323/model/DifferDiagnosis.h>
#include <tencentcloud/aca/v20210323/model/RecordQuality.h>
#include <tencentcloud/aca/v20210323/model/CurrentDiagnosis.h>
#include <tencentcloud/aca/v20210323/model/TreatmentGuide.h>
#include <tencentcloud/aca/v20210323/model/EmrQuality.h>
#include <tencentcloud/aca/v20210323/model/HealthPrescriptions.h>


namespace TencentCloud
{
    namespace Aca
    {
        namespace V20210323
        {
            namespace Model
            {
                /**
                * 诊断、辅助内容
                */
                class DiagnosisInfo : public AbstractModel
                {
                public:
                    DiagnosisInfo();
                    ~DiagnosisInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取默认0，0:初诊-常规诊疗 1:复诊 2:检验检查/取药/咨询/疫苗 3:信息缺失 4:信息错误
                     * @return IntentType 默认0，0:初诊-常规诊疗 1:复诊 2:检验检查/取药/咨询/疫苗 3:信息缺失 4:信息错误
                     * 
                     */
                    int64_t GetIntentType() const;

                    /**
                     * 设置默认0，0:初诊-常规诊疗 1:复诊 2:检验检查/取药/咨询/疫苗 3:信息缺失 4:信息错误
                     * @param _intentType 默认0，0:初诊-常规诊疗 1:复诊 2:检验检查/取药/咨询/疫苗 3:信息缺失 4:信息错误
                     * 
                     */
                    void SetIntentType(const int64_t& _intentType);

                    /**
                     * 判断参数 IntentType 是否已赋值
                     * @return IntentType 是否已赋值
                     * 
                     */
                    bool IntentTypeHasBeenSet() const;

                    /**
                     * 获取诊断风险
                     * @return RiskInfo 诊断风险
                     * 
                     */
                    std::string GetRiskInfo() const;

                    /**
                     * 设置诊断风险
                     * @param _riskInfo 诊断风险
                     * 
                     */
                    void SetRiskInfo(const std::string& _riskInfo);

                    /**
                     * 判断参数 RiskInfo 是否已赋值
                     * @return RiskInfo 是否已赋值
                     * 
                     */
                    bool RiskInfoHasBeenSet() const;

                    /**
                     * 获取疑似诊断列表
                     * @return SuspectedDiagnosis 疑似诊断列表
                     * 
                     */
                    std::vector<SuspectedDiagnosis> GetSuspectedDiagnosis() const;

                    /**
                     * 设置疑似诊断列表
                     * @param _suspectedDiagnosis 疑似诊断列表
                     * 
                     */
                    void SetSuspectedDiagnosis(const std::vector<SuspectedDiagnosis>& _suspectedDiagnosis);

                    /**
                     * 判断参数 SuspectedDiagnosis 是否已赋值
                     * @return SuspectedDiagnosis 是否已赋值
                     * 
                     */
                    bool SuspectedDiagnosisHasBeenSet() const;

                    /**
                     * 获取转诊提醒
                     * @return ReferralInfo 转诊提醒
                     * 
                     */
                    ReferralInfo GetReferralInfo() const;

                    /**
                     * 设置转诊提醒
                     * @param _referralInfo 转诊提醒
                     * 
                     */
                    void SetReferralInfo(const ReferralInfo& _referralInfo);

                    /**
                     * 判断参数 ReferralInfo 是否已赋值
                     * @return ReferralInfo 是否已赋值
                     * 
                     */
                    bool ReferralInfoHasBeenSet() const;

                    /**
                     * 获取危急重症
                     * @return CriticalInfo 危急重症
                     * 
                     */
                    std::vector<CriticalInfo> GetCriticalInfo() const;

                    /**
                     * 设置危急重症
                     * @param _criticalInfo 危急重症
                     * 
                     */
                    void SetCriticalInfo(const std::vector<CriticalInfo>& _criticalInfo);

                    /**
                     * 判断参数 CriticalInfo 是否已赋值
                     * @return CriticalInfo 是否已赋值
                     * 
                     */
                    bool CriticalInfoHasBeenSet() const;

                    /**
                     * 获取生命体征风险
                     * @return VitalSignsInfo 生命体征风险
                     * 
                     */
                    VitalSignsInfo GetVitalSignsInfo() const;

                    /**
                     * 设置生命体征风险
                     * @param _vitalSignsInfo 生命体征风险
                     * 
                     */
                    void SetVitalSignsInfo(const VitalSignsInfo& _vitalSignsInfo);

                    /**
                     * 判断参数 VitalSignsInfo 是否已赋值
                     * @return VitalSignsInfo 是否已赋值
                     * 
                     */
                    bool VitalSignsInfoHasBeenSet() const;

                    /**
                     * 获取鉴别诊断
                     * @return DifferDiagnosis 鉴别诊断
                     * 
                     */
                    std::vector<DifferDiagnosis> GetDifferDiagnosis() const;

                    /**
                     * 设置鉴别诊断
                     * @param _differDiagnosis 鉴别诊断
                     * 
                     */
                    void SetDifferDiagnosis(const std::vector<DifferDiagnosis>& _differDiagnosis);

                    /**
                     * 判断参数 DifferDiagnosis 是否已赋值
                     * @return DifferDiagnosis 是否已赋值
                     * 
                     */
                    bool DifferDiagnosisHasBeenSet() const;

                    /**
                     * 获取病历质控
                     * @return RecordQuality 病历质控
                     * 
                     */
                    RecordQuality GetRecordQuality() const;

                    /**
                     * 设置病历质控
                     * @param _recordQuality 病历质控
                     * 
                     */
                    void SetRecordQuality(const RecordQuality& _recordQuality);

                    /**
                     * 判断参数 RecordQuality 是否已赋值
                     * @return RecordQuality 是否已赋值
                     * 
                     */
                    bool RecordQualityHasBeenSet() const;

                    /**
                     * 获取当前诊断
                     * @return CurrentDiagnosis 当前诊断
                     * 
                     */
                    std::vector<CurrentDiagnosis> GetCurrentDiagnosis() const;

                    /**
                     * 设置当前诊断
                     * @param _currentDiagnosis 当前诊断
                     * 
                     */
                    void SetCurrentDiagnosis(const std::vector<CurrentDiagnosis>& _currentDiagnosis);

                    /**
                     * 判断参数 CurrentDiagnosis 是否已赋值
                     * @return CurrentDiagnosis 是否已赋值
                     * 
                     */
                    bool CurrentDiagnosisHasBeenSet() const;

                    /**
                     * 获取治疗方案
                     * @return TreatmentGuide 治疗方案
                     * 
                     */
                    std::vector<TreatmentGuide> GetTreatmentGuide() const;

                    /**
                     * 设置治疗方案
                     * @param _treatmentGuide 治疗方案
                     * 
                     */
                    void SetTreatmentGuide(const std::vector<TreatmentGuide>& _treatmentGuide);

                    /**
                     * 判断参数 TreatmentGuide 是否已赋值
                     * @return TreatmentGuide 是否已赋值
                     * 
                     */
                    bool TreatmentGuideHasBeenSet() const;

                    /**
                     * 获取病历质控
                     * @return EmrQuality 病历质控
                     * 
                     */
                    EmrQuality GetEmrQuality() const;

                    /**
                     * 设置病历质控
                     * @param _emrQuality 病历质控
                     * 
                     */
                    void SetEmrQuality(const EmrQuality& _emrQuality);

                    /**
                     * 判断参数 EmrQuality 是否已赋值
                     * @return EmrQuality 是否已赋值
                     * 
                     */
                    bool EmrQualityHasBeenSet() const;

                    /**
                     * 获取健康处方
                     * @return HealthPrescriptions 健康处方
                     * 
                     */
                    std::vector<HealthPrescriptions> GetHealthPrescriptions() const;

                    /**
                     * 设置健康处方
                     * @param _healthPrescriptions 健康处方
                     * 
                     */
                    void SetHealthPrescriptions(const std::vector<HealthPrescriptions>& _healthPrescriptions);

                    /**
                     * 判断参数 HealthPrescriptions 是否已赋值
                     * @return HealthPrescriptions 是否已赋值
                     * 
                     */
                    bool HealthPrescriptionsHasBeenSet() const;

                private:

                    /**
                     * 默认0，0:初诊-常规诊疗 1:复诊 2:检验检查/取药/咨询/疫苗 3:信息缺失 4:信息错误
                     */
                    int64_t m_intentType;
                    bool m_intentTypeHasBeenSet;

                    /**
                     * 诊断风险
                     */
                    std::string m_riskInfo;
                    bool m_riskInfoHasBeenSet;

                    /**
                     * 疑似诊断列表
                     */
                    std::vector<SuspectedDiagnosis> m_suspectedDiagnosis;
                    bool m_suspectedDiagnosisHasBeenSet;

                    /**
                     * 转诊提醒
                     */
                    ReferralInfo m_referralInfo;
                    bool m_referralInfoHasBeenSet;

                    /**
                     * 危急重症
                     */
                    std::vector<CriticalInfo> m_criticalInfo;
                    bool m_criticalInfoHasBeenSet;

                    /**
                     * 生命体征风险
                     */
                    VitalSignsInfo m_vitalSignsInfo;
                    bool m_vitalSignsInfoHasBeenSet;

                    /**
                     * 鉴别诊断
                     */
                    std::vector<DifferDiagnosis> m_differDiagnosis;
                    bool m_differDiagnosisHasBeenSet;

                    /**
                     * 病历质控
                     */
                    RecordQuality m_recordQuality;
                    bool m_recordQualityHasBeenSet;

                    /**
                     * 当前诊断
                     */
                    std::vector<CurrentDiagnosis> m_currentDiagnosis;
                    bool m_currentDiagnosisHasBeenSet;

                    /**
                     * 治疗方案
                     */
                    std::vector<TreatmentGuide> m_treatmentGuide;
                    bool m_treatmentGuideHasBeenSet;

                    /**
                     * 病历质控
                     */
                    EmrQuality m_emrQuality;
                    bool m_emrQualityHasBeenSet;

                    /**
                     * 健康处方
                     */
                    std::vector<HealthPrescriptions> m_healthPrescriptions;
                    bool m_healthPrescriptionsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ACA_V20210323_MODEL_DIAGNOSISINFO_H_
