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

#ifndef TENCENTCLOUD_MRS_V20200910_MODEL_MENSTRUALHISTORY_H_
#define TENCENTCLOUD_MRS_V20200910_MODEL_MENSTRUALHISTORY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mrs
    {
        namespace V20200910
        {
            namespace Model
            {
                /**
                * 月经史
                */
                class MenstrualHistory : public AbstractModel
                {
                public:
                    MenstrualHistory();
                    ~MenstrualHistory() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取是否来月经
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsOrNot 是否来月经
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetIsOrNot() const;

                    /**
                     * 设置是否来月经
注意：此字段可能返回 null，表示取不到有效值。
                     * @param IsOrNot 是否来月经
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetIsOrNot(const std::string& _isOrNot);

                    /**
                     * 判断参数 IsOrNot 是否已赋值
                     * @return IsOrNot 是否已赋值
                     */
                    bool IsOrNotHasBeenSet() const;

                    /**
                     * 获取月经初潮年龄
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MenarcheAge 月经初潮年龄
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetMenarcheAge() const;

                    /**
                     * 设置月经初潮年龄
注意：此字段可能返回 null，表示取不到有效值。
                     * @param MenarcheAge 月经初潮年龄
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetMenarcheAge(const std::string& _menarcheAge);

                    /**
                     * 判断参数 MenarcheAge 是否已赋值
                     * @return MenarcheAge 是否已赋值
                     */
                    bool MenarcheAgeHasBeenSet() const;

                    /**
                     * 获取末次月经时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LastTime 末次月经时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetLastTime() const;

                    /**
                     * 设置末次月经时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param LastTime 末次月经时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetLastTime(const std::string& _lastTime);

                    /**
                     * 判断参数 LastTime 是否已赋值
                     * @return LastTime 是否已赋值
                     */
                    bool LastTimeHasBeenSet() const;

                    /**
                     * 获取经量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Flow 经量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetFlow() const;

                    /**
                     * 设置经量
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Flow 经量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetFlow(const std::string& _flow);

                    /**
                     * 判断参数 Flow 是否已赋值
                     * @return Flow 是否已赋值
                     */
                    bool FlowHasBeenSet() const;

                    /**
                     * 获取月经周期
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Cycles 月经周期
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetCycles() const;

                    /**
                     * 设置月经周期
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Cycles 月经周期
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCycles(const std::string& _cycles);

                    /**
                     * 判断参数 Cycles 是否已赋值
                     * @return Cycles 是否已赋值
                     */
                    bool CyclesHasBeenSet() const;

                    /**
                     * 获取行经天数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Duration 行经天数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetDuration() const;

                    /**
                     * 设置行经天数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Duration 行经天数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDuration(const std::string& _duration);

                    /**
                     * 判断参数 Duration 是否已赋值
                     * @return Duration 是否已赋值
                     */
                    bool DurationHasBeenSet() const;

                private:

                    /**
                     * 是否来月经
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_isOrNot;
                    bool m_isOrNotHasBeenSet;

                    /**
                     * 月经初潮年龄
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_menarcheAge;
                    bool m_menarcheAgeHasBeenSet;

                    /**
                     * 末次月经时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_lastTime;
                    bool m_lastTimeHasBeenSet;

                    /**
                     * 经量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_flow;
                    bool m_flowHasBeenSet;

                    /**
                     * 月经周期
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_cycles;
                    bool m_cyclesHasBeenSet;

                    /**
                     * 行经天数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_duration;
                    bool m_durationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MRS_V20200910_MODEL_MENSTRUALHISTORY_H_
