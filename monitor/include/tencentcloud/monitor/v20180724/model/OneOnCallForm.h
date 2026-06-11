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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_ONEONCALLFORM_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_ONEONCALLFORM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/monitor/v20180724/model/StaffInfo.h>
#include <tencentcloud/monitor/v20180724/model/CoverStaffInfo.h>
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
                * 排班详情
                */
                class OneOnCallForm : public AbstractModel
                {
                public:
                    OneOnCallForm();
                    ~OneOnCallForm() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取值班id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OnCallFormID 值班id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOnCallFormID() const;

                    /**
                     * 设置值班id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _onCallFormID 值班id
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
                     * 获取值班名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OnCallFormName 值班名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOnCallFormName() const;

                    /**
                     * 设置值班名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _onCallFormName 值班名称
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
                     * 获取值班描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OnCallFormDesc 值班描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOnCallFormDesc() const;

                    /**
                     * 设置值班描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _onCallFormDesc 值班描述
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
                     * 获取值班人员
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StaffInfos 值班人员
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<StaffInfo> GetStaffInfos() const;

                    /**
                     * 设置值班人员
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _staffInfos 值班人员
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStaffInfos(const std::vector<StaffInfo>& _staffInfos);

                    /**
                     * 判断参数 StaffInfos 是否已赋值
                     * @return StaffInfos 是否已赋值
                     * 
                     */
                    bool StaffInfosHasBeenSet() const;

                    /**
                     * 获取轮班类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RotationType 轮班类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRotationType() const;

                    /**
                     * 设置轮班类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _rotationType 轮班类型
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
                     * 获取值班有效期开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EffectiveStartTime 值班有效期开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetEffectiveStartTime() const;

                    /**
                     * 设置值班有效期开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _effectiveStartTime 值班有效期开始时间
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
                     * 获取值班有效期结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EffectiveEndTime 值班有效期结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetEffectiveEndTime() const;

                    /**
                     * 设置值班有效期结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _effectiveEndTime 值班有效期结束时间
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
                     * 获取替班信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CoverStaffInfos 替班信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<CoverStaffInfo> GetCoverStaffInfos() const;

                    /**
                     * 设置替班信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _coverStaffInfos 替班信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCoverStaffInfos(const std::vector<CoverStaffInfo>& _coverStaffInfos);

                    /**
                     * 判断参数 CoverStaffInfos 是否已赋值
                     * @return CoverStaffInfos 是否已赋值
                     * 
                     */
                    bool CoverStaffInfosHasBeenSet() const;

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
                     * 值班id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_onCallFormID;
                    bool m_onCallFormIDHasBeenSet;

                    /**
                     * 值班名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_onCallFormName;
                    bool m_onCallFormNameHasBeenSet;

                    /**
                     * 值班描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_onCallFormDesc;
                    bool m_onCallFormDescHasBeenSet;

                    /**
                     * 值班人员
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<StaffInfo> m_staffInfos;
                    bool m_staffInfosHasBeenSet;

                    /**
                     * 轮班类型
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
                     * 值班有效期开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_effectiveStartTime;
                    bool m_effectiveStartTimeHasBeenSet;

                    /**
                     * 值班有效期结束时间
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
                     * 替班信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<CoverStaffInfo> m_coverStaffInfos;
                    bool m_coverStaffInfosHasBeenSet;

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

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_ONEONCALLFORM_H_
