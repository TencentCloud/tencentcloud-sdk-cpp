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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_EVENTINFO_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_EVENTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Postgres
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * 参数修改事件信息
                */
                class EventInfo : public AbstractModel
                {
                public:
                    EventInfo();
                    ~EventInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取参数名
                     * @return ParamName 参数名
                     * 
                     */
                    std::string GetParamName() const;

                    /**
                     * 设置参数名
                     * @param _paramName 参数名
                     * 
                     */
                    void SetParamName(const std::string& _paramName);

                    /**
                     * 判断参数 ParamName 是否已赋值
                     * @return ParamName 是否已赋值
                     * 
                     */
                    bool ParamNameHasBeenSet() const;

                    /**
                     * 获取原参数值
                     * @return OldValue 原参数值
                     * 
                     */
                    std::string GetOldValue() const;

                    /**
                     * 设置原参数值
                     * @param _oldValue 原参数值
                     * 
                     */
                    void SetOldValue(const std::string& _oldValue);

                    /**
                     * 判断参数 OldValue 是否已赋值
                     * @return OldValue 是否已赋值
                     * 
                     */
                    bool OldValueHasBeenSet() const;

                    /**
                     * 获取本次修改期望参数值
                     * @return NewValue 本次修改期望参数值
                     * 
                     */
                    std::string GetNewValue() const;

                    /**
                     * 设置本次修改期望参数值
                     * @param _newValue 本次修改期望参数值
                     * 
                     */
                    void SetNewValue(const std::string& _newValue);

                    /**
                     * 判断参数 NewValue 是否已赋值
                     * @return NewValue 是否已赋值
                     * 
                     */
                    bool NewValueHasBeenSet() const;

                    /**
                     * 获取后台参数修改开始时间
                     * @return ModifyTime 后台参数修改开始时间
                     * 
                     */
                    std::string GetModifyTime() const;

                    /**
                     * 设置后台参数修改开始时间
                     * @param _modifyTime 后台参数修改开始时间
                     * 
                     */
                    void SetModifyTime(const std::string& _modifyTime);

                    /**
                     * 判断参数 ModifyTime 是否已赋值
                     * @return ModifyTime 是否已赋值
                     * 
                     */
                    bool ModifyTimeHasBeenSet() const;

                    /**
                     * 获取后台参数生效开始时间
                     * @return EffectiveTime 后台参数生效开始时间
                     * 
                     */
                    std::string GetEffectiveTime() const;

                    /**
                     * 设置后台参数生效开始时间
                     * @param _effectiveTime 后台参数生效开始时间
                     * 
                     */
                    void SetEffectiveTime(const std::string& _effectiveTime);

                    /**
                     * 判断参数 EffectiveTime 是否已赋值
                     * @return EffectiveTime 是否已赋值
                     * 
                     */
                    bool EffectiveTimeHasBeenSet() const;

                    /**
                     * 获取修改状态
                     * @return State 修改状态
                     * 
                     */
                    std::string GetState() const;

                    /**
                     * 设置修改状态
                     * @param _state 修改状态
                     * 
                     */
                    void SetState(const std::string& _state);

                    /**
                     * 判断参数 State 是否已赋值
                     * @return State 是否已赋值
                     * 
                     */
                    bool StateHasBeenSet() const;

                    /**
                     * 获取操作者（一般为用户sub UIN）
                     * @return Operator 操作者（一般为用户sub UIN）
                     * 
                     */
                    std::string GetOperator() const;

                    /**
                     * 设置操作者（一般为用户sub UIN）
                     * @param _operator 操作者（一般为用户sub UIN）
                     * 
                     */
                    void SetOperator(const std::string& _operator);

                    /**
                     * 判断参数 Operator 是否已赋值
                     * @return Operator 是否已赋值
                     * 
                     */
                    bool OperatorHasBeenSet() const;

                    /**
                     * 获取时间日志。
                     * @return EventLog 时间日志。
                     * 
                     */
                    std::string GetEventLog() const;

                    /**
                     * 设置时间日志。
                     * @param _eventLog 时间日志。
                     * 
                     */
                    void SetEventLog(const std::string& _eventLog);

                    /**
                     * 判断参数 EventLog 是否已赋值
                     * @return EventLog 是否已赋值
                     * 
                     */
                    bool EventLogHasBeenSet() const;

                private:

                    /**
                     * 参数名
                     */
                    std::string m_paramName;
                    bool m_paramNameHasBeenSet;

                    /**
                     * 原参数值
                     */
                    std::string m_oldValue;
                    bool m_oldValueHasBeenSet;

                    /**
                     * 本次修改期望参数值
                     */
                    std::string m_newValue;
                    bool m_newValueHasBeenSet;

                    /**
                     * 后台参数修改开始时间
                     */
                    std::string m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                    /**
                     * 后台参数生效开始时间
                     */
                    std::string m_effectiveTime;
                    bool m_effectiveTimeHasBeenSet;

                    /**
                     * 修改状态
                     */
                    std::string m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * 操作者（一般为用户sub UIN）
                     */
                    std::string m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * 时间日志。
                     */
                    std::string m_eventLog;
                    bool m_eventLogHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_EVENTINFO_H_
