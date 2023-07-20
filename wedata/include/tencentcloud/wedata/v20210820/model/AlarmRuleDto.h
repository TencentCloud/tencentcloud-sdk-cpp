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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_ALARMRULEDTO_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_ALARMRULEDTO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * 告警规则
                */
                class AlarmRuleDto : public AbstractModel
                {
                public:
                    AlarmRuleDto();
                    ~AlarmRuleDto() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取告警规则id
                     * @return AlarmRuleId 告警规则id
                     * 
                     */
                    std::string GetAlarmRuleId() const;

                    /**
                     * 设置告警规则id
                     * @param _alarmRuleId 告警规则id
                     * 
                     */
                    void SetAlarmRuleId(const std::string& _alarmRuleId);

                    /**
                     * 判断参数 AlarmRuleId 是否已赋值
                     * @return AlarmRuleId 是否已赋值
                     * 
                     */
                    bool AlarmRuleIdHasBeenSet() const;

                    /**
                     * 获取重要;
紧急;
普通
                     * @return AlarmLevelType 重要;
紧急;
普通
                     * 
                     */
                    std::string GetAlarmLevelType() const;

                    /**
                     * 设置重要;
紧急;
普通
                     * @param _alarmLevelType 重要;
紧急;
普通
                     * 
                     */
                    void SetAlarmLevelType(const std::string& _alarmLevelType);

                    /**
                     * 判断参数 AlarmLevelType 是否已赋值
                     * @return AlarmLevelType 是否已赋值
                     * 
                     */
                    bool AlarmLevelTypeHasBeenSet() const;

                private:

                    /**
                     * 告警规则id
                     */
                    std::string m_alarmRuleId;
                    bool m_alarmRuleIdHasBeenSet;

                    /**
                     * 重要;
紧急;
普通
                     */
                    std::string m_alarmLevelType;
                    bool m_alarmLevelTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_ALARMRULEDTO_H_
