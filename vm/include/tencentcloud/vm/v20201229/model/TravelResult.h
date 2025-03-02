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

#ifndef TENCENTCLOUD_VM_V20201229_MODEL_TRAVELRESULT_H_
#define TENCENTCLOUD_VM_V20201229_MODEL_TRAVELRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vm
    {
        namespace V20201229
        {
            namespace Model
            {
                /**
                * 出行结果
                */
                class TravelResult : public AbstractModel
                {
                public:
                    TravelResult();
                    ~TravelResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取一级标签
                     * @return Label 一级标签
                     * 
                     */
                    std::string GetLabel() const;

                    /**
                     * 设置一级标签
                     * @param _label 一级标签
                     * 
                     */
                    void SetLabel(const std::string& _label);

                    /**
                     * 判断参数 Label 是否已赋值
                     * @return Label 是否已赋值
                     * 
                     */
                    bool LabelHasBeenSet() const;

                    /**
                     * 获取二级标签
                     * @return SubLabel 二级标签
                     * 
                     */
                    std::string GetSubLabel() const;

                    /**
                     * 设置二级标签
                     * @param _subLabel 二级标签
                     * 
                     */
                    void SetSubLabel(const std::string& _subLabel);

                    /**
                     * 判断参数 SubLabel 是否已赋值
                     * @return SubLabel 是否已赋值
                     * 
                     */
                    bool SubLabelHasBeenSet() const;

                    /**
                     * 获取风险等级
                     * @return RiskLevel 风险等级
                     * 
                     */
                    std::string GetRiskLevel() const;

                    /**
                     * 设置风险等级
                     * @param _riskLevel 风险等级
                     * 
                     */
                    void SetRiskLevel(const std::string& _riskLevel);

                    /**
                     * 判断参数 RiskLevel 是否已赋值
                     * @return RiskLevel 是否已赋值
                     * 
                     */
                    bool RiskLevelHasBeenSet() const;

                    /**
                     * 获取音频角色
                     * @return AudioRole 音频角色
                     * 
                     */
                    std::string GetAudioRole() const;

                    /**
                     * 设置音频角色
                     * @param _audioRole 音频角色
                     * 
                     */
                    void SetAudioRole(const std::string& _audioRole);

                    /**
                     * 判断参数 AudioRole 是否已赋值
                     * @return AudioRole 是否已赋值
                     * 
                     */
                    bool AudioRoleHasBeenSet() const;

                    /**
                     * 获取音频语音文本
                     * @return AudioText 音频语音文本
                     * 
                     */
                    std::string GetAudioText() const;

                    /**
                     * 设置音频语音文本
                     * @param _audioText 音频语音文本
                     * 
                     */
                    void SetAudioText(const std::string& _audioText);

                    /**
                     * 判断参数 AudioText 是否已赋值
                     * @return AudioText 是否已赋值
                     * 
                     */
                    bool AudioTextHasBeenSet() const;

                    /**
                     * 获取开始时间
                     * @return StartTime 开始时间
                     * 
                     */
                    double GetStartTime() const;

                    /**
                     * 设置开始时间
                     * @param _startTime 开始时间
                     * 
                     */
                    void SetStartTime(const double& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取结束时间
                     * @return EndTime 结束时间
                     * 
                     */
                    double GetEndTime() const;

                    /**
                     * 设置结束时间
                     * @param _endTime 结束时间
                     * 
                     */
                    void SetEndTime(const double& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                private:

                    /**
                     * 一级标签
                     */
                    std::string m_label;
                    bool m_labelHasBeenSet;

                    /**
                     * 二级标签
                     */
                    std::string m_subLabel;
                    bool m_subLabelHasBeenSet;

                    /**
                     * 风险等级
                     */
                    std::string m_riskLevel;
                    bool m_riskLevelHasBeenSet;

                    /**
                     * 音频角色
                     */
                    std::string m_audioRole;
                    bool m_audioRoleHasBeenSet;

                    /**
                     * 音频语音文本
                     */
                    std::string m_audioText;
                    bool m_audioTextHasBeenSet;

                    /**
                     * 开始时间
                     */
                    double m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 结束时间
                     */
                    double m_endTime;
                    bool m_endTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VM_V20201229_MODEL_TRAVELRESULT_H_
