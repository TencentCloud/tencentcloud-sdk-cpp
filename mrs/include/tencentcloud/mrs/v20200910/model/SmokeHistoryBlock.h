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

#ifndef TENCENTCLOUD_MRS_V20200910_MODEL_SMOKEHISTORYBLOCK_H_
#define TENCENTCLOUD_MRS_V20200910_MODEL_SMOKEHISTORYBLOCK_H_

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
                * 吸烟史
                */
                class SmokeHistoryBlock : public AbstractModel
                {
                public:
                    SmokeHistoryBlock();
                    ~SmokeHistoryBlock() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取名称
                     * @return Name 名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置名称
                     * @param _name 名称
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
                     * 获取原文
                     * @return Src 原文
                     * 
                     */
                    std::string GetSrc() const;

                    /**
                     * 设置原文
                     * @param _src 原文
                     * 
                     */
                    void SetSrc(const std::string& _src);

                    /**
                     * 判断参数 Src 是否已赋值
                     * @return Src 是否已赋值
                     * 
                     */
                    bool SrcHasBeenSet() const;

                    /**
                     * 获取时间单位
                     * @return TimeUnit 时间单位
                     * 
                     */
                    std::string GetTimeUnit() const;

                    /**
                     * 设置时间单位
                     * @param _timeUnit 时间单位
                     * 
                     */
                    void SetTimeUnit(const std::string& _timeUnit);

                    /**
                     * 判断参数 TimeUnit 是否已赋值
                     * @return TimeUnit 是否已赋值
                     * 
                     */
                    bool TimeUnitHasBeenSet() const;

                    /**
                     * 获取时间归一化
                     * @return TimeNorm 时间归一化
                     * 
                     */
                    std::string GetTimeNorm() const;

                    /**
                     * 设置时间归一化
                     * @param _timeNorm 时间归一化
                     * 
                     */
                    void SetTimeNorm(const std::string& _timeNorm);

                    /**
                     * 判断参数 TimeNorm 是否已赋值
                     * @return TimeNorm 是否已赋值
                     * 
                     */
                    bool TimeNormHasBeenSet() const;

                    /**
                     * 获取吸烟量
                     * @return Amount 吸烟量
                     * 
                     */
                    std::string GetAmount() const;

                    /**
                     * 设置吸烟量
                     * @param _amount 吸烟量
                     * 
                     */
                    void SetAmount(const std::string& _amount);

                    /**
                     * 判断参数 Amount 是否已赋值
                     * @return Amount 是否已赋值
                     * 
                     */
                    bool AmountHasBeenSet() const;

                    /**
                     * 获取戒烟状态
                     * @return QuitState 戒烟状态
                     * 
                     */
                    bool GetQuitState() const;

                    /**
                     * 设置戒烟状态
                     * @param _quitState 戒烟状态
                     * 
                     */
                    void SetQuitState(const bool& _quitState);

                    /**
                     * 判断参数 QuitState 是否已赋值
                     * @return QuitState 是否已赋值
                     * 
                     */
                    bool QuitStateHasBeenSet() const;

                    /**
                     * 获取是否吸烟
                     * @return State 是否吸烟
                     * 
                     */
                    bool GetState() const;

                    /**
                     * 设置是否吸烟
                     * @param _state 是否吸烟
                     * 
                     */
                    void SetState(const bool& _state);

                    /**
                     * 判断参数 State 是否已赋值
                     * @return State 是否已赋值
                     * 
                     */
                    bool StateHasBeenSet() const;

                    /**
                     * 获取对外输出值
                     * @return Value 对外输出值
                     * 
                     */
                    std::string GetValue() const;

                    /**
                     * 设置对外输出值
                     * @param _value 对外输出值
                     * 
                     */
                    void SetValue(const std::string& _value);

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     * 
                     */
                    bool ValueHasBeenSet() const;

                private:

                    /**
                     * 名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 原文
                     */
                    std::string m_src;
                    bool m_srcHasBeenSet;

                    /**
                     * 时间单位
                     */
                    std::string m_timeUnit;
                    bool m_timeUnitHasBeenSet;

                    /**
                     * 时间归一化
                     */
                    std::string m_timeNorm;
                    bool m_timeNormHasBeenSet;

                    /**
                     * 吸烟量
                     */
                    std::string m_amount;
                    bool m_amountHasBeenSet;

                    /**
                     * 戒烟状态
                     */
                    bool m_quitState;
                    bool m_quitStateHasBeenSet;

                    /**
                     * 是否吸烟
                     */
                    bool m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * 对外输出值
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MRS_V20200910_MODEL_SMOKEHISTORYBLOCK_H_
