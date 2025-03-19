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

#ifndef TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_LINKRULEINFO_H_
#define TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_LINKRULEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/weilingwith/v20230427/model/Event.h>
#include <tencentcloud/weilingwith/v20230427/model/Action.h>


namespace TencentCloud
{
    namespace Weilingwith
    {
        namespace V20230427
        {
            namespace Model
            {
                /**
                * 联动规则信息
                */
                class LinkRuleInfo : public AbstractModel
                {
                public:
                    LinkRuleInfo();
                    ~LinkRuleInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取联动id
                     * @return Id 联动id
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置联动id
                     * @param _id 联动id
                     * 
                     */
                    void SetId(const int64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取联动名称
                     * @return Name 联动名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置联动名称
                     * @param _name 联动名称
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
                     * 获取事件列表
                     * @return EventSet 事件列表
                     * 
                     */
                    std::vector<Event> GetEventSet() const;

                    /**
                     * 设置事件列表
                     * @param _eventSet 事件列表
                     * 
                     */
                    void SetEventSet(const std::vector<Event>& _eventSet);

                    /**
                     * 判断参数 EventSet 是否已赋值
                     * @return EventSet 是否已赋值
                     * 
                     */
                    bool EventSetHasBeenSet() const;

                    /**
                     * 获取动作列表
                     * @return ActionSet 动作列表
                     * 
                     */
                    std::vector<Action> GetActionSet() const;

                    /**
                     * 设置动作列表
                     * @param _actionSet 动作列表
                     * 
                     */
                    void SetActionSet(const std::vector<Action>& _actionSet);

                    /**
                     * 判断参数 ActionSet 是否已赋值
                     * @return ActionSet 是否已赋值
                     * 
                     */
                    bool ActionSetHasBeenSet() const;

                    /**
                     * 获取状态：0开，-1关
                     * @return Status 状态：0开，-1关
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置状态：0开，-1关
                     * @param _status 状态：0开，-1关
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取起始时间
                     * @return BeginDate 起始时间
                     * 
                     */
                    std::string GetBeginDate() const;

                    /**
                     * 设置起始时间
                     * @param _beginDate 起始时间
                     * 
                     */
                    void SetBeginDate(const std::string& _beginDate);

                    /**
                     * 判断参数 BeginDate 是否已赋值
                     * @return BeginDate 是否已赋值
                     * 
                     */
                    bool BeginDateHasBeenSet() const;

                    /**
                     * 获取结束时间
                     * @return EndDate 结束时间
                     * 
                     */
                    std::string GetEndDate() const;

                    /**
                     * 设置结束时间
                     * @param _endDate 结束时间
                     * 
                     */
                    void SetEndDate(const std::string& _endDate);

                    /**
                     * 判断参数 EndDate 是否已赋值
                     * @return EndDate 是否已赋值
                     * 
                     */
                    bool EndDateHasBeenSet() const;

                    /**
                     * 获取有效周期内容,有效字段为x-json后的字段
                     * @return ValidPeriod 有效周期内容,有效字段为x-json后的字段
                     * 
                     */
                    std::string GetValidPeriod() const;

                    /**
                     * 设置有效周期内容,有效字段为x-json后的字段
                     * @param _validPeriod 有效周期内容,有效字段为x-json后的字段
                     * 
                     */
                    void SetValidPeriod(const std::string& _validPeriod);

                    /**
                     * 判断参数 ValidPeriod 是否已赋值
                     * @return ValidPeriod 是否已赋值
                     * 
                     */
                    bool ValidPeriodHasBeenSet() const;

                private:

                    /**
                     * 联动id
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 联动名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 事件列表
                     */
                    std::vector<Event> m_eventSet;
                    bool m_eventSetHasBeenSet;

                    /**
                     * 动作列表
                     */
                    std::vector<Action> m_actionSet;
                    bool m_actionSetHasBeenSet;

                    /**
                     * 状态：0开，-1关
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 起始时间
                     */
                    std::string m_beginDate;
                    bool m_beginDateHasBeenSet;

                    /**
                     * 结束时间
                     */
                    std::string m_endDate;
                    bool m_endDateHasBeenSet;

                    /**
                     * 有效周期内容,有效字段为x-json后的字段
                     */
                    std::string m_validPeriod;
                    bool m_validPeriodHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_LINKRULEINFO_H_
