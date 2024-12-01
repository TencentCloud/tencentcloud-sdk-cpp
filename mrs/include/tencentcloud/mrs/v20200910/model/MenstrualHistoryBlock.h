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

#ifndef TENCENTCLOUD_MRS_V20200910_MODEL_MENSTRUALHISTORYBLOCK_H_
#define TENCENTCLOUD_MRS_V20200910_MODEL_MENSTRUALHISTORYBLOCK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mrs/v20200910/model/LastMenstrualPeriodBlock.h>
#include <tencentcloud/mrs/v20200910/model/MenstrualFlowBlock.h>
#include <tencentcloud/mrs/v20200910/model/MenstruationOrNotBlock.h>
#include <tencentcloud/mrs/v20200910/model/MenstrualPeriodBlock.h>


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
                class MenstrualHistoryBlock : public AbstractModel
                {
                public:
                    MenstrualHistoryBlock();
                    ~MenstrualHistoryBlock() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取末次月经
                     * @return LastMenstrualPeriod 末次月经
                     * 
                     */
                    LastMenstrualPeriodBlock GetLastMenstrualPeriod() const;

                    /**
                     * 设置末次月经
                     * @param _lastMenstrualPeriod 末次月经
                     * 
                     */
                    void SetLastMenstrualPeriod(const LastMenstrualPeriodBlock& _lastMenstrualPeriod);

                    /**
                     * 判断参数 LastMenstrualPeriod 是否已赋值
                     * @return LastMenstrualPeriod 是否已赋值
                     * 
                     */
                    bool LastMenstrualPeriodHasBeenSet() const;

                    /**
                     * 获取月经量
                     * @return MenstrualFlow 月经量
                     * 
                     */
                    MenstrualFlowBlock GetMenstrualFlow() const;

                    /**
                     * 设置月经量
                     * @param _menstrualFlow 月经量
                     * 
                     */
                    void SetMenstrualFlow(const MenstrualFlowBlock& _menstrualFlow);

                    /**
                     * 判断参数 MenstrualFlow 是否已赋值
                     * @return MenstrualFlow 是否已赋值
                     * 
                     */
                    bool MenstrualFlowHasBeenSet() const;

                    /**
                     * 获取初潮时间
                     * @return MenarcheAge 初潮时间
                     * 
                     */
                    LastMenstrualPeriodBlock GetMenarcheAge() const;

                    /**
                     * 设置初潮时间
                     * @param _menarcheAge 初潮时间
                     * 
                     */
                    void SetMenarcheAge(const LastMenstrualPeriodBlock& _menarcheAge);

                    /**
                     * 判断参数 MenarcheAge 是否已赋值
                     * @return MenarcheAge 是否已赋值
                     * 
                     */
                    bool MenarcheAgeHasBeenSet() const;

                    /**
                     * 获取是否绝经
                     * @return MenstruationOrNot 是否绝经
                     * 
                     */
                    MenstruationOrNotBlock GetMenstruationOrNot() const;

                    /**
                     * 设置是否绝经
                     * @param _menstruationOrNot 是否绝经
                     * 
                     */
                    void SetMenstruationOrNot(const MenstruationOrNotBlock& _menstruationOrNot);

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
                    LastMenstrualPeriodBlock GetMenstrualCycles() const;

                    /**
                     * 设置月经周期
                     * @param _menstrualCycles 月经周期
                     * 
                     */
                    void SetMenstrualCycles(const LastMenstrualPeriodBlock& _menstrualCycles);

                    /**
                     * 判断参数 MenstrualCycles 是否已赋值
                     * @return MenstrualCycles 是否已赋值
                     * 
                     */
                    bool MenstrualCyclesHasBeenSet() const;

                    /**
                     * 获取月经经期
                     * @return MenstrualPeriod 月经经期
                     * 
                     */
                    MenstrualPeriodBlock GetMenstrualPeriod() const;

                    /**
                     * 设置月经经期
                     * @param _menstrualPeriod 月经经期
                     * 
                     */
                    void SetMenstrualPeriod(const MenstrualPeriodBlock& _menstrualPeriod);

                    /**
                     * 判断参数 MenstrualPeriod 是否已赋值
                     * @return MenstrualPeriod 是否已赋值
                     * 
                     */
                    bool MenstrualPeriodHasBeenSet() const;

                private:

                    /**
                     * 末次月经
                     */
                    LastMenstrualPeriodBlock m_lastMenstrualPeriod;
                    bool m_lastMenstrualPeriodHasBeenSet;

                    /**
                     * 月经量
                     */
                    MenstrualFlowBlock m_menstrualFlow;
                    bool m_menstrualFlowHasBeenSet;

                    /**
                     * 初潮时间
                     */
                    LastMenstrualPeriodBlock m_menarcheAge;
                    bool m_menarcheAgeHasBeenSet;

                    /**
                     * 是否绝经
                     */
                    MenstruationOrNotBlock m_menstruationOrNot;
                    bool m_menstruationOrNotHasBeenSet;

                    /**
                     * 月经周期
                     */
                    LastMenstrualPeriodBlock m_menstrualCycles;
                    bool m_menstrualCyclesHasBeenSet;

                    /**
                     * 月经经期
                     */
                    MenstrualPeriodBlock m_menstrualPeriod;
                    bool m_menstrualPeriodHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MRS_V20200910_MODEL_MENSTRUALHISTORYBLOCK_H_
