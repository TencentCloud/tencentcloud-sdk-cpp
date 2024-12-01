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

#ifndef TENCENTCLOUD_MRS_V20200910_MODEL_MENSTRUALMEDICALHISTORY_H_
#define TENCENTCLOUD_MRS_V20200910_MODEL_MENSTRUALMEDICALHISTORY_H_

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
                class MenstrualMedicalHistory : public AbstractModel
                {
                public:
                    MenstrualMedicalHistory();
                    ~MenstrualMedicalHistory() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取末次月经时间
                     * @return LastMenstrualPeriod 末次月经时间
                     * 
                     */
                    std::string GetLastMenstrualPeriod() const;

                    /**
                     * 设置末次月经时间
                     * @param _lastMenstrualPeriod 末次月经时间
                     * 
                     */
                    void SetLastMenstrualPeriod(const std::string& _lastMenstrualPeriod);

                    /**
                     * 判断参数 LastMenstrualPeriod 是否已赋值
                     * @return LastMenstrualPeriod 是否已赋值
                     * 
                     */
                    bool LastMenstrualPeriodHasBeenSet() const;

                    /**
                     * 获取经量
                     * @return MenstrualFlow 经量
                     * 
                     */
                    std::string GetMenstrualFlow() const;

                    /**
                     * 设置经量
                     * @param _menstrualFlow 经量
                     * 
                     */
                    void SetMenstrualFlow(const std::string& _menstrualFlow);

                    /**
                     * 判断参数 MenstrualFlow 是否已赋值
                     * @return MenstrualFlow 是否已赋值
                     * 
                     */
                    bool MenstrualFlowHasBeenSet() const;

                    /**
                     * 获取月经初潮年龄
                     * @return MenarcheAge 月经初潮年龄
                     * 
                     */
                    std::string GetMenarcheAge() const;

                    /**
                     * 设置月经初潮年龄
                     * @param _menarcheAge 月经初潮年龄
                     * 
                     */
                    void SetMenarcheAge(const std::string& _menarcheAge);

                    /**
                     * 判断参数 MenarcheAge 是否已赋值
                     * @return MenarcheAge 是否已赋值
                     * 
                     */
                    bool MenarcheAgeHasBeenSet() const;

                    /**
                     * 获取是否来月经
                     * @return MenstruationOrNot 是否来月经
                     * 
                     */
                    std::string GetMenstruationOrNot() const;

                    /**
                     * 设置是否来月经
                     * @param _menstruationOrNot 是否来月经
                     * 
                     */
                    void SetMenstruationOrNot(const std::string& _menstruationOrNot);

                    /**
                     * 判断参数 MenstruationOrNot 是否已赋值
                     * @return MenstruationOrNot 是否已赋值
                     * 
                     */
                    bool MenstruationOrNotHasBeenSet() const;

                    /**
                     * 获取月经周期
                     * @return MenstrualCycles 月经周期
                     * 
                     */
                    std::string GetMenstrualCycles() const;

                    /**
                     * 设置月经周期
                     * @param _menstrualCycles 月经周期
                     * 
                     */
                    void SetMenstrualCycles(const std::string& _menstrualCycles);

                    /**
                     * 判断参数 MenstrualCycles 是否已赋值
                     * @return MenstrualCycles 是否已赋值
                     * 
                     */
                    bool MenstrualCyclesHasBeenSet() const;

                    /**
                     * 获取月经持续天数
                     * @return MenstrualPeriod 月经持续天数
                     * 
                     */
                    std::string GetMenstrualPeriod() const;

                    /**
                     * 设置月经持续天数
                     * @param _menstrualPeriod 月经持续天数
                     * 
                     */
                    void SetMenstrualPeriod(const std::string& _menstrualPeriod);

                    /**
                     * 判断参数 MenstrualPeriod 是否已赋值
                     * @return MenstrualPeriod 是否已赋值
                     * 
                     */
                    bool MenstrualPeriodHasBeenSet() const;

                private:

                    /**
                     * 末次月经时间
                     */
                    std::string m_lastMenstrualPeriod;
                    bool m_lastMenstrualPeriodHasBeenSet;

                    /**
                     * 经量
                     */
                    std::string m_menstrualFlow;
                    bool m_menstrualFlowHasBeenSet;

                    /**
                     * 月经初潮年龄
                     */
                    std::string m_menarcheAge;
                    bool m_menarcheAgeHasBeenSet;

                    /**
                     * 是否来月经
                     */
                    std::string m_menstruationOrNot;
                    bool m_menstruationOrNotHasBeenSet;

                    /**
                     * 月经周期
                     */
                    std::string m_menstrualCycles;
                    bool m_menstrualCyclesHasBeenSet;

                    /**
                     * 月经持续天数
                     */
                    std::string m_menstrualPeriod;
                    bool m_menstrualPeriodHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MRS_V20200910_MODEL_MENSTRUALMEDICALHISTORY_H_
