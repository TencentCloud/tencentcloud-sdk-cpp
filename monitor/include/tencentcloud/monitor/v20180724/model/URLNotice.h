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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_URLNOTICE_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_URLNOTICE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * 告警通知模板 - 回调通知详情
                */
                class URLNotice : public AbstractModel
                {
                public:
                    URLNotice();
                    ~URLNotice() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取回调 url（限长256字符）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return URL 回调 url（限长256字符）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetURL() const;

                    /**
                     * 设置回调 url（限长256字符）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _uRL 回调 url（限长256字符）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetURL(const std::string& _uRL);

                    /**
                     * 判断参数 URL 是否已赋值
                     * @return URL 是否已赋值
                     * 
                     */
                    bool URLHasBeenSet() const;

                    /**
                     * 获取是否通过验证 0=否 1=是
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsValid 是否通过验证 0=否 1=是
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetIsValid() const;

                    /**
                     * 设置是否通过验证 0=否 1=是
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isValid 是否通过验证 0=否 1=是
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIsValid(const int64_t& _isValid);

                    /**
                     * 判断参数 IsValid 是否已赋值
                     * @return IsValid 是否已赋值
                     * 
                     */
                    bool IsValidHasBeenSet() const;

                    /**
                     * 获取验证码
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ValidationCode 验证码
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetValidationCode() const;

                    /**
                     * 设置验证码
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _validationCode 验证码
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetValidationCode(const std::string& _validationCode);

                    /**
                     * 判断参数 ValidationCode 是否已赋值
                     * @return ValidationCode 是否已赋值
                     * 
                     */
                    bool ValidationCodeHasBeenSet() const;

                    /**
                     * 获取通知开始时间 一天开始的秒数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StartTime 通知开始时间 一天开始的秒数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetStartTime() const;

                    /**
                     * 设置通知开始时间 一天开始的秒数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _startTime 通知开始时间 一天开始的秒数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStartTime(const int64_t& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取通知结束时间 一天开始的秒数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EndTime 通知结束时间 一天开始的秒数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetEndTime() const;

                    /**
                     * 设置通知结束时间 一天开始的秒数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _endTime 通知结束时间 一天开始的秒数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEndTime(const int64_t& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取通知周期 1-7表示周一到周日
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Weekday 通知周期 1-7表示周一到周日
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<int64_t> GetWeekday() const;

                    /**
                     * 设置通知周期 1-7表示周一到周日
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _weekday 通知周期 1-7表示周一到周日
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetWeekday(const std::vector<int64_t>& _weekday);

                    /**
                     * 判断参数 Weekday 是否已赋值
                     * @return Weekday 是否已赋值
                     * 
                     */
                    bool WeekdayHasBeenSet() const;

                    /**
                     * 获取组名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return GroupMembers 组名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetGroupMembers() const;

                    /**
                     * 设置组名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _groupMembers 组名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetGroupMembers(const std::string& _groupMembers);

                    /**
                     * 判断参数 GroupMembers 是否已赋值
                     * @return GroupMembers 是否已赋值
                     * 
                     */
                    bool GroupMembersHasBeenSet() const;

                private:

                    /**
                     * 回调 url（限长256字符）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_uRL;
                    bool m_uRLHasBeenSet;

                    /**
                     * 是否通过验证 0=否 1=是
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_isValid;
                    bool m_isValidHasBeenSet;

                    /**
                     * 验证码
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_validationCode;
                    bool m_validationCodeHasBeenSet;

                    /**
                     * 通知开始时间 一天开始的秒数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 通知结束时间 一天开始的秒数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 通知周期 1-7表示周一到周日
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<int64_t> m_weekday;
                    bool m_weekdayHasBeenSet;

                    /**
                     * 组名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_groupMembers;
                    bool m_groupMembersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_URLNOTICE_H_
