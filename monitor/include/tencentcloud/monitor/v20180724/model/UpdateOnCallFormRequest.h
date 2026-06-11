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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_UPDATEONCALLFORMREQUEST_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_UPDATEONCALLFORMREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/monitor/v20180724/model/StaffInfo.h>
#include <tencentcloud/monitor/v20180724/model/CoverStaffInfo.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * UpdateOnCallForm请求参数结构体
                */
                class UpdateOnCallFormRequest : public AbstractModel
                {
                public:
                    UpdateOnCallFormRequest();
                    ~UpdateOnCallFormRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取固定值，为"monitor"
                     * @return Module 固定值，为"monitor"
                     * 
                     */
                    std::string GetModule() const;

                    /**
                     * 设置固定值，为"monitor"
                     * @param _module 固定值，为"monitor"
                     * 
                     */
                    void SetModule(const std::string& _module);

                    /**
                     * 判断参数 Module 是否已赋值
                     * @return Module 是否已赋值
                     * 
                     */
                    bool ModuleHasBeenSet() const;

                    /**
                     * 获取值班表id
                     * @return OnCallFormID 值班表id
                     * 
                     */
                    std::string GetOnCallFormID() const;

                    /**
                     * 设置值班表id
                     * @param _onCallFormID 值班表id
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
                     * 获取值班表名称
                     * @return OnCallFormName 值班表名称
                     * 
                     */
                    std::string GetOnCallFormName() const;

                    /**
                     * 设置值班表名称
                     * @param _onCallFormName 值班表名称
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
                     * 获取值班人员id组
                     * @return StaffInfos 值班人员id组
                     * 
                     */
                    std::vector<StaffInfo> GetStaffInfos() const;

                    /**
                     * 设置值班人员id组
                     * @param _staffInfos 值班人员id组
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
                     * 获取轮转类型
                     * @return RotationType 轮转类型
                     * 
                     */
                    std::string GetRotationType() const;

                    /**
                     * 设置轮转类型
                     * @param _rotationType 轮转类型
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
                     * @return ShiftTime 换班时间
                     * 
                     */
                    std::string GetShiftTime() const;

                    /**
                     * 设置换班时间
                     * @param _shiftTime 换班时间
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
                     * 获取有效期开始时间，单位s
                     * @return EffectiveStartTime 有效期开始时间，单位s
                     * 
                     */
                    int64_t GetEffectiveStartTime() const;

                    /**
                     * 设置有效期开始时间，单位s
                     * @param _effectiveStartTime 有效期开始时间，单位s
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
                     * 获取有效期结束时间，单位s
                     * @return EffectiveEndTime 有效期结束时间，单位s
                     * 
                     */
                    int64_t GetEffectiveEndTime() const;

                    /**
                     * 设置有效期结束时间，单位s
                     * @param _effectiveEndTime 有效期结束时间，单位s
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
                     * 获取时区(-12 - 12)
                     * @return TimeZone 时区(-12 - 12)
                     * 
                     */
                    double GetTimeZone() const;

                    /**
                     * 设置时区(-12 - 12)
                     * @param _timeZone 时区(-12 - 12)
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
                     * 获取值班表描述
                     * @return OnCallFormDesc 值班表描述
                     * 
                     */
                    std::string GetOnCallFormDesc() const;

                    /**
                     * 设置值班表描述
                     * @param _onCallFormDesc 值班表描述
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
                     * 获取轮班信息
                     * @return CoverStaffInfos 轮班信息
                     * 
                     */
                    std::vector<CoverStaffInfo> GetCoverStaffInfos() const;

                    /**
                     * 设置轮班信息
                     * @param _coverStaffInfos 轮班信息
                     * 
                     */
                    void SetCoverStaffInfos(const std::vector<CoverStaffInfo>& _coverStaffInfos);

                    /**
                     * 判断参数 CoverStaffInfos 是否已赋值
                     * @return CoverStaffInfos 是否已赋值
                     * 
                     */
                    bool CoverStaffInfosHasBeenSet() const;

                private:

                    /**
                     * 固定值，为"monitor"
                     */
                    std::string m_module;
                    bool m_moduleHasBeenSet;

                    /**
                     * 值班表id
                     */
                    std::string m_onCallFormID;
                    bool m_onCallFormIDHasBeenSet;

                    /**
                     * 值班表名称
                     */
                    std::string m_onCallFormName;
                    bool m_onCallFormNameHasBeenSet;

                    /**
                     * 值班人员id组
                     */
                    std::vector<StaffInfo> m_staffInfos;
                    bool m_staffInfosHasBeenSet;

                    /**
                     * 轮转类型
                     */
                    std::string m_rotationType;
                    bool m_rotationTypeHasBeenSet;

                    /**
                     * 换班时间
                     */
                    std::string m_shiftTime;
                    bool m_shiftTimeHasBeenSet;

                    /**
                     * 有效期开始时间，单位s
                     */
                    int64_t m_effectiveStartTime;
                    bool m_effectiveStartTimeHasBeenSet;

                    /**
                     * 有效期结束时间，单位s
                     */
                    int64_t m_effectiveEndTime;
                    bool m_effectiveEndTimeHasBeenSet;

                    /**
                     * 时区(-12 - 12)
                     */
                    double m_timeZone;
                    bool m_timeZoneHasBeenSet;

                    /**
                     * 值班表描述
                     */
                    std::string m_onCallFormDesc;
                    bool m_onCallFormDescHasBeenSet;

                    /**
                     * 轮班信息
                     */
                    std::vector<CoverStaffInfo> m_coverStaffInfos;
                    bool m_coverStaffInfosHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_UPDATEONCALLFORMREQUEST_H_
