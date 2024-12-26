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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_UEBACUSTOMRULE_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_UEBACUSTOMRULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/UebaEventContent.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * 用户行为分析  自定义策略结构体
                */
                class UebaCustomRule : public AbstractModel
                {
                public:
                    UebaCustomRule();
                    ~UebaCustomRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取策略名称
                     * @return RuleName 策略名称
                     * 
                     */
                    std::string GetRuleName() const;

                    /**
                     * 设置策略名称
                     * @param _ruleName 策略名称
                     * 
                     */
                    void SetRuleName(const std::string& _ruleName);

                    /**
                     * 判断参数 RuleName 是否已赋值
                     * @return RuleName 是否已赋值
                     * 
                     */
                    bool RuleNameHasBeenSet() const;

                    /**
                     * 获取1: 云账号
2: 自定义用户
                     * @return UserType 1: 云账号
2: 自定义用户
                     * 
                     */
                    int64_t GetUserType() const;

                    /**
                     * 设置1: 云账号
2: 自定义用户
                     * @param _userType 1: 云账号
2: 自定义用户
                     * 
                     */
                    void SetUserType(const int64_t& _userType);

                    /**
                     * 判断参数 UserType 是否已赋值
                     * @return UserType 是否已赋值
                     * 
                     */
                    bool UserTypeHasBeenSet() const;

                    /**
                     * 获取发生时间
1：10分钟
2：1小时
3：一天
4：一周
5：一个月
                     * @return TimeInterval 发生时间
1：10分钟
2：1小时
3：一天
4：一周
5：一个月
                     * 
                     */
                    int64_t GetTimeInterval() const;

                    /**
                     * 设置发生时间
1：10分钟
2：1小时
3：一天
4：一周
5：一个月
                     * @param _timeInterval 发生时间
1：10分钟
2：1小时
3：一天
4：一周
5：一个月
                     * 
                     */
                    void SetTimeInterval(const int64_t& _timeInterval);

                    /**
                     * 判断参数 TimeInterval 是否已赋值
                     * @return TimeInterval 是否已赋值
                     * 
                     */
                    bool TimeIntervalHasBeenSet() const;

                    /**
                     * 获取发生事件
                     * @return EventContent 发生事件
                     * 
                     */
                    UebaEventContent GetEventContent() const;

                    /**
                     * 设置发生事件
                     * @param _eventContent 发生事件
                     * 
                     */
                    void SetEventContent(const UebaEventContent& _eventContent);

                    /**
                     * 判断参数 EventContent 是否已赋值
                     * @return EventContent 是否已赋值
                     * 
                     */
                    bool EventContentHasBeenSet() const;

                    /**
                     * 获取告警名称
                     * @return AlertName 告警名称
                     * 
                     */
                    std::string GetAlertName() const;

                    /**
                     * 设置告警名称
                     * @param _alertName 告警名称
                     * 
                     */
                    void SetAlertName(const std::string& _alertName);

                    /**
                     * 判断参数 AlertName 是否已赋值
                     * @return AlertName 是否已赋值
                     * 
                     */
                    bool AlertNameHasBeenSet() const;

                    /**
                     * 获取告警类型
0:  提示
1:  低危
2:  中危
3:  高危
4:  严重
                     * @return AlterLevel 告警类型
0:  提示
1:  低危
2:  中危
3:  高危
4:  严重
                     * 
                     */
                    int64_t GetAlterLevel() const;

                    /**
                     * 设置告警类型
0:  提示
1:  低危
2:  中危
3:  高危
4:  严重
                     * @param _alterLevel 告警类型
0:  提示
1:  低危
2:  中危
3:  高危
4:  严重
                     * 
                     */
                    void SetAlterLevel(const int64_t& _alterLevel);

                    /**
                     * 判断参数 AlterLevel 是否已赋值
                     * @return AlterLevel 是否已赋值
                     * 
                     */
                    bool AlterLevelHasBeenSet() const;

                    /**
                     * 获取操作者
                     * @return Operator 操作者
                     * 
                     */
                    std::vector<std::string> GetOperator() const;

                    /**
                     * 设置操作者
                     * @param _operator 操作者
                     * 
                     */
                    void SetOperator(const std::vector<std::string>& _operator);

                    /**
                     * 判断参数 Operator 是否已赋值
                     * @return Operator 是否已赋值
                     * 
                     */
                    bool OperatorHasBeenSet() const;

                    /**
                     * 获取操作对象
                     * @return OperateObject 操作对象
                     * 
                     */
                    std::vector<std::string> GetOperateObject() const;

                    /**
                     * 设置操作对象
                     * @param _operateObject 操作对象
                     * 
                     */
                    void SetOperateObject(const std::vector<std::string>& _operateObject);

                    /**
                     * 判断参数 OperateObject 是否已赋值
                     * @return OperateObject 是否已赋值
                     * 
                     */
                    bool OperateObjectHasBeenSet() const;

                    /**
                     * 获取操作方式
                     * @return OperateMethod 操作方式
                     * 
                     */
                    std::vector<std::string> GetOperateMethod() const;

                    /**
                     * 设置操作方式
                     * @param _operateMethod 操作方式
                     * 
                     */
                    void SetOperateMethod(const std::vector<std::string>& _operateMethod);

                    /**
                     * 判断参数 OperateMethod 是否已赋值
                     * @return OperateMethod 是否已赋值
                     * 
                     */
                    bool OperateMethodHasBeenSet() const;

                    /**
                     * 获取日志类型
                     * @return LogType 日志类型
                     * 
                     */
                    std::string GetLogType() const;

                    /**
                     * 设置日志类型
                     * @param _logType 日志类型
                     * 
                     */
                    void SetLogType(const std::string& _logType);

                    /**
                     * 判断参数 LogType 是否已赋值
                     * @return LogType 是否已赋值
                     * 
                     */
                    bool LogTypeHasBeenSet() const;

                    /**
                     * 获取日志中文名
                     * @return LogTypeStr 日志中文名
                     * 
                     */
                    std::string GetLogTypeStr() const;

                    /**
                     * 设置日志中文名
                     * @param _logTypeStr 日志中文名
                     * 
                     */
                    void SetLogTypeStr(const std::string& _logTypeStr);

                    /**
                     * 判断参数 LogTypeStr 是否已赋值
                     * @return LogTypeStr 是否已赋值
                     * 
                     */
                    bool LogTypeStrHasBeenSet() const;

                private:

                    /**
                     * 策略名称
                     */
                    std::string m_ruleName;
                    bool m_ruleNameHasBeenSet;

                    /**
                     * 1: 云账号
2: 自定义用户
                     */
                    int64_t m_userType;
                    bool m_userTypeHasBeenSet;

                    /**
                     * 发生时间
1：10分钟
2：1小时
3：一天
4：一周
5：一个月
                     */
                    int64_t m_timeInterval;
                    bool m_timeIntervalHasBeenSet;

                    /**
                     * 发生事件
                     */
                    UebaEventContent m_eventContent;
                    bool m_eventContentHasBeenSet;

                    /**
                     * 告警名称
                     */
                    std::string m_alertName;
                    bool m_alertNameHasBeenSet;

                    /**
                     * 告警类型
0:  提示
1:  低危
2:  中危
3:  高危
4:  严重
                     */
                    int64_t m_alterLevel;
                    bool m_alterLevelHasBeenSet;

                    /**
                     * 操作者
                     */
                    std::vector<std::string> m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * 操作对象
                     */
                    std::vector<std::string> m_operateObject;
                    bool m_operateObjectHasBeenSet;

                    /**
                     * 操作方式
                     */
                    std::vector<std::string> m_operateMethod;
                    bool m_operateMethodHasBeenSet;

                    /**
                     * 日志类型
                     */
                    std::string m_logType;
                    bool m_logTypeHasBeenSet;

                    /**
                     * 日志中文名
                     */
                    std::string m_logTypeStr;
                    bool m_logTypeStrHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_UEBACUSTOMRULE_H_
