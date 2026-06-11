/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_ONCALLFORM_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_ONCALLFORM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/monitor/v20180724/model/Tag.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * 排班信息
                */
                class OnCallForm : public AbstractModel
                {
                public:
                    OnCallForm();
                    ~OnCallForm() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取排班id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OnCallFormID 排班id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOnCallFormID() const;

                    /**
                     * 设置排班id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _onCallFormID 排班id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOnCallFormID(const std::string& _onCallFormID);

                    /**
                     * 判断参数 OnCallFormID 是否已赋值
                     * @return OnCallFormID 是否已赋值
                     * 
                     */
                    bool OnCallFormIDHasBeenSet() const;

                    /**
                     * 获取排班名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OnCallFormName 排班名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOnCallFormName() const;

                    /**
                     * 设置排班名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _onCallFormName 排班名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOnCallFormName(const std::string& _onCallFormName);

                    /**
                     * 判断参数 OnCallFormName 是否已赋值
                     * @return OnCallFormName 是否已赋值
                     * 
                     */
                    bool OnCallFormNameHasBeenSet() const;

                    /**
                     * 获取排班描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OnCallFormDesc 排班描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOnCallFormDesc() const;

                    /**
                     * 设置排班描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _onCallFormDesc 排班描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOnCallFormDesc(const std::string& _onCallFormDesc);

                    /**
                     * 判断参数 OnCallFormDesc 是否已赋值
                     * @return OnCallFormDesc 是否已赋值
                     * 
                     */
                    bool OnCallFormDescHasBeenSet() const;

                    /**
                     * 获取轮值类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RotationType 轮值类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRotationType() const;

                    /**
                     * 设置轮值类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _rotationType 轮值类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRotationType(const std::string& _rotationType);

                    /**
                     * 判断参数 RotationType 是否已赋值
                     * @return RotationType 是否已赋值
                     * 
                     */
                    bool RotationTypeHasBeenSet() const;

                    /**
                     * 获取换班时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ShiftTime 换班时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetShiftTime() const;

                    /**
                     * 设置换班时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _shiftTime 换班时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetShiftTime(const std::string& _shiftTime);

                    /**
                     * 判断参数 ShiftTime 是否已赋值
                     * @return ShiftTime 是否已赋值
                     * 
                     */
                    bool ShiftTimeHasBeenSet() const;

                    /**
                     * 获取有效期开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EffectiveStartTime 有效期开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetEffectiveStartTime() const;

                    /**
                     * 设置有效期开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _effectiveStartTime 有效期开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEffectiveStartTime(const int64_t& _effectiveStartTime);

                    /**
                     * 判断参数 EffectiveStartTime 是否已赋值
                     * @return EffectiveStartTime 是否已赋值
                     * 
                     */
                    bool EffectiveStartTimeHasBeenSet() const;

                    /**
                     * 获取有效期结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EffectiveEndTime 有效期结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetEffectiveEndTime() const;

                    /**
                     * 设置有效期结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _effectiveEndTime 有效期结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEffectiveEndTime(const int64_t& _effectiveEndTime);

                    /**
                     * 判断参数 EffectiveEndTime 是否已赋值
                     * @return EffectiveEndTime 是否已赋值
                     * 
                     */
                    bool EffectiveEndTimeHasBeenSet() const;

                    /**
                     * 获取时区
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TimeZone 时区
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetTimeZone() const;

                    /**
                     * 设置时区
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _timeZone 时区
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTimeZone(const double& _timeZone);

                    /**
                     * 判断参数 TimeZone 是否已赋值
                     * @return TimeZone 是否已赋值
                     * 
                     */
                    bool TimeZoneHasBeenSet() const;

                    /**
                     * 获取当前值班人员
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CurrOnCallStaffs 当前值班人员
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetCurrOnCallStaffs() const;

                    /**
                     * 设置当前值班人员
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _currOnCallStaffs 当前值班人员
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCurrOnCallStaffs(const std::vector<std::string>& _currOnCallStaffs);

                    /**
                     * 判断参数 CurrOnCallStaffs 是否已赋值
                     * @return CurrOnCallStaffs 是否已赋值
                     * 
                     */
                    bool CurrOnCallStaffsHasBeenSet() const;

                    /**
                     * 获取模板绑定的标签
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Tags 模板绑定的标签
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置模板绑定的标签
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tags 模板绑定的标签
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                private:

                    /**
                     * 排班id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_onCallFormID;
                    bool m_onCallFormIDHasBeenSet;

                    /**
                     * 排班名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_onCallFormName;
                    bool m_onCallFormNameHasBeenSet;

                    /**
                     * 排班描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_onCallFormDesc;
                    bool m_onCallFormDescHasBeenSet;

                    /**
                     * 轮值类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_rotationType;
                    bool m_rotationTypeHasBeenSet;

                    /**
                     * 换班时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_shiftTime;
                    bool m_shiftTimeHasBeenSet;

                    /**
                     * 有效期开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_effectiveStartTime;
                    bool m_effectiveStartTimeHasBeenSet;

                    /**
                     * 有效期结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_effectiveEndTime;
                    bool m_effectiveEndTimeHasBeenSet;

                    /**
                     * 时区
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_timeZone;
                    bool m_timeZoneHasBeenSet;

                    /**
                     * 当前值班人员
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_currOnCallStaffs;
                    bool m_currOnCallStaffsHasBeenSet;

                    /**
                     * 模板绑定的标签
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_ONCALLFORM_H_
