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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_ALGDETECTSESSION_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_ALGDETECTSESSION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/AlgDetectResult.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * Cookie校验与会话跟踪。
                */
                class AlgDetectSession : public AbstractModel
                {
                public:
                    AlgDetectSession();
                    ~AlgDetectSession() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取操作名称。
                     * @return Name 操作名称。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置操作名称。
                     * @param _name 操作名称。
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取校验方式，默认update_detect，取值有：
<li>detect：仅校验；</li>
<li>update_detect：更新Cookie并校验。</li>
                     * @return DetectMode 校验方式，默认update_detect，取值有：
<li>detect：仅校验；</li>
<li>update_detect：更新Cookie并校验。</li>
                     * 
                     */
                    std::string GetDetectMode() const;

                    /**
                     * 设置校验方式，默认update_detect，取值有：
<li>detect：仅校验；</li>
<li>update_detect：更新Cookie并校验。</li>
                     * @param _detectMode 校验方式，默认update_detect，取值有：
<li>detect：仅校验；</li>
<li>update_detect：更新Cookie并校验。</li>
                     * 
                     */
                    void SetDetectMode(const std::string& _detectMode);

                    /**
                     * 判断参数 DetectMode 是否已赋值
                     * @return DetectMode 是否已赋值
                     * 
                     */
                    bool DetectModeHasBeenSet() const;

                    /**
                     * 获取会话速率和周期特征校验开关，默认off，取值有：
<li>off：关闭；</li>
<li>on：打开。</li>
                     * @return SessionAnalyzeSwitch 会话速率和周期特征校验开关，默认off，取值有：
<li>off：关闭；</li>
<li>on：打开。</li>
                     * 
                     */
                    std::string GetSessionAnalyzeSwitch() const;

                    /**
                     * 设置会话速率和周期特征校验开关，默认off，取值有：
<li>off：关闭；</li>
<li>on：打开。</li>
                     * @param _sessionAnalyzeSwitch 会话速率和周期特征校验开关，默认off，取值有：
<li>off：关闭；</li>
<li>on：打开。</li>
                     * 
                     */
                    void SetSessionAnalyzeSwitch(const std::string& _sessionAnalyzeSwitch);

                    /**
                     * 判断参数 SessionAnalyzeSwitch 是否已赋值
                     * @return SessionAnalyzeSwitch 是否已赋值
                     * 
                     */
                    bool SessionAnalyzeSwitchHasBeenSet() const;

                    /**
                     * 获取校验结果为未携带Cookie或Cookie已过期的统计周期。单位为秒，默认10，取值：5～3600。
                     * @return InvalidStatTime 校验结果为未携带Cookie或Cookie已过期的统计周期。单位为秒，默认10，取值：5～3600。
                     * 
                     */
                    int64_t GetInvalidStatTime() const;

                    /**
                     * 设置校验结果为未携带Cookie或Cookie已过期的统计周期。单位为秒，默认10，取值：5～3600。
                     * @param _invalidStatTime 校验结果为未携带Cookie或Cookie已过期的统计周期。单位为秒，默认10，取值：5～3600。
                     * 
                     */
                    void SetInvalidStatTime(const int64_t& _invalidStatTime);

                    /**
                     * 判断参数 InvalidStatTime 是否已赋值
                     * @return InvalidStatTime 是否已赋值
                     * 
                     */
                    bool InvalidStatTimeHasBeenSet() const;

                    /**
                     * 获取校验结果为未携带Cookie或Cookie已过期的触发阈值。单位为次，默认300，取值：1～100000000。
                     * @return InvalidThreshold 校验结果为未携带Cookie或Cookie已过期的触发阈值。单位为次，默认300，取值：1～100000000。
                     * 
                     */
                    int64_t GetInvalidThreshold() const;

                    /**
                     * 设置校验结果为未携带Cookie或Cookie已过期的触发阈值。单位为次，默认300，取值：1～100000000。
                     * @param _invalidThreshold 校验结果为未携带Cookie或Cookie已过期的触发阈值。单位为次，默认300，取值：1～100000000。
                     * 
                     */
                    void SetInvalidThreshold(const int64_t& _invalidThreshold);

                    /**
                     * 判断参数 InvalidThreshold 是否已赋值
                     * @return InvalidThreshold 是否已赋值
                     * 
                     */
                    bool InvalidThresholdHasBeenSet() const;

                    /**
                     * 获取Cookie校验校验结果。
                     * @return AlgDetectResults Cookie校验校验结果。
                     * 
                     */
                    std::vector<AlgDetectResult> GetAlgDetectResults() const;

                    /**
                     * 设置Cookie校验校验结果。
                     * @param _algDetectResults Cookie校验校验结果。
                     * 
                     */
                    void SetAlgDetectResults(const std::vector<AlgDetectResult>& _algDetectResults);

                    /**
                     * 判断参数 AlgDetectResults 是否已赋值
                     * @return AlgDetectResults 是否已赋值
                     * 
                     */
                    bool AlgDetectResultsHasBeenSet() const;

                    /**
                     * 获取会话速率和周期特征校验结果。
                     * @return SessionBehaviors 会话速率和周期特征校验结果。
                     * 
                     */
                    std::vector<AlgDetectResult> GetSessionBehaviors() const;

                    /**
                     * 设置会话速率和周期特征校验结果。
                     * @param _sessionBehaviors 会话速率和周期特征校验结果。
                     * 
                     */
                    void SetSessionBehaviors(const std::vector<AlgDetectResult>& _sessionBehaviors);

                    /**
                     * 判断参数 SessionBehaviors 是否已赋值
                     * @return SessionBehaviors 是否已赋值
                     * 
                     */
                    bool SessionBehaviorsHasBeenSet() const;

                private:

                    /**
                     * 操作名称。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 校验方式，默认update_detect，取值有：
<li>detect：仅校验；</li>
<li>update_detect：更新Cookie并校验。</li>
                     */
                    std::string m_detectMode;
                    bool m_detectModeHasBeenSet;

                    /**
                     * 会话速率和周期特征校验开关，默认off，取值有：
<li>off：关闭；</li>
<li>on：打开。</li>
                     */
                    std::string m_sessionAnalyzeSwitch;
                    bool m_sessionAnalyzeSwitchHasBeenSet;

                    /**
                     * 校验结果为未携带Cookie或Cookie已过期的统计周期。单位为秒，默认10，取值：5～3600。
                     */
                    int64_t m_invalidStatTime;
                    bool m_invalidStatTimeHasBeenSet;

                    /**
                     * 校验结果为未携带Cookie或Cookie已过期的触发阈值。单位为次，默认300，取值：1～100000000。
                     */
                    int64_t m_invalidThreshold;
                    bool m_invalidThresholdHasBeenSet;

                    /**
                     * Cookie校验校验结果。
                     */
                    std::vector<AlgDetectResult> m_algDetectResults;
                    bool m_algDetectResultsHasBeenSet;

                    /**
                     * 会话速率和周期特征校验结果。
                     */
                    std::vector<AlgDetectResult> m_sessionBehaviors;
                    bool m_sessionBehaviorsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_ALGDETECTSESSION_H_
