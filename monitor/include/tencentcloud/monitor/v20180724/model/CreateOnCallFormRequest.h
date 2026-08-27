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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_CREATEONCALLFORMREQUEST_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_CREATEONCALLFORMREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * CreateOnCallForm请求参数结构体
                */
                class CreateOnCallFormRequest : public AbstractModel
                {
                public:
                    CreateOnCallFormRequest();
                    ~CreateOnCallFormRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>固定值，为&quot;monitor&quot;</p>
                     * @return Module <p>固定值，为&quot;monitor&quot;</p>
                     * 
                     */
                    std::string GetModule() const;

                    /**
                     * 设置<p>固定值，为&quot;monitor&quot;</p>
                     * @param _module <p>固定值，为&quot;monitor&quot;</p>
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
                     * 获取<p>值班表名称</p>
                     * @return OnCallFormName <p>值班表名称</p>
                     * 
                     */
                    std::string GetOnCallFormName() const;

                    /**
                     * 设置<p>值班表名称</p>
                     * @param _onCallFormName <p>值班表名称</p>
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
                     * 获取<p>值班人员id组</p>
                     * @return StaffInfos <p>值班人员id组</p>
                     * 
                     */
                    std::vector<StaffInfo> GetStaffInfos() const;

                    /**
                     * 设置<p>值班人员id组</p>
                     * @param _staffInfos <p>值班人员id组</p>
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
                     * 获取<p>轮转类型</p>
                     * @return RotationType <p>轮转类型</p>
                     * 
                     */
                    std::string GetRotationType() const;

                    /**
                     * 设置<p>轮转类型</p>
                     * @param _rotationType <p>轮转类型</p>
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
                     * 获取<p>换班时间</p>
                     * @return ShiftTime <p>换班时间</p>
                     * 
                     */
                    std::string GetShiftTime() const;

                    /**
                     * 设置<p>换班时间</p>
                     * @param _shiftTime <p>换班时间</p>
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
                     * 获取<p>有效期开始时间，单位s</p>
                     * @return EffectiveStartTime <p>有效期开始时间，单位s</p>
                     * 
                     */
                    int64_t GetEffectiveStartTime() const;

                    /**
                     * 设置<p>有效期开始时间，单位s</p>
                     * @param _effectiveStartTime <p>有效期开始时间，单位s</p>
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
                     * 获取<p>有效期结束时间，单位s</p>
                     * @return EffectiveEndTime <p>有效期结束时间，单位s</p>
                     * 
                     */
                    int64_t GetEffectiveEndTime() const;

                    /**
                     * 设置<p>有效期结束时间，单位s</p>
                     * @param _effectiveEndTime <p>有效期结束时间，单位s</p>
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
                     * 获取<p>时区(-12 - 12)</p>
                     * @return TimeZone <p>时区(-12 - 12)</p>
                     * 
                     */
                    double GetTimeZone() const;

                    /**
                     * 设置<p>时区(-12 - 12)</p>
                     * @param _timeZone <p>时区(-12 - 12)</p>
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
                     * 获取<p>值班表描述</p>
                     * @return OnCallFormDesc <p>值班表描述</p>
                     * 
                     */
                    std::string GetOnCallFormDesc() const;

                    /**
                     * 设置<p>值班表描述</p>
                     * @param _onCallFormDesc <p>值班表描述</p>
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
                     * 获取<p>轮班信息</p>
                     * @return CoverStaffInfos <p>轮班信息</p>
                     * 
                     */
                    std::vector<CoverStaffInfo> GetCoverStaffInfos() const;

                    /**
                     * 设置<p>轮班信息</p>
                     * @param _coverStaffInfos <p>轮班信息</p>
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
                     * 获取<p>模板绑定的标签</p>
                     * @return Tags <p>模板绑定的标签</p>
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置<p>模板绑定的标签</p>
                     * @param _tags <p>模板绑定的标签</p>
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
                     * <p>固定值，为&quot;monitor&quot;</p>
                     */
                    std::string m_module;
                    bool m_moduleHasBeenSet;

                    /**
                     * <p>值班表名称</p>
                     */
                    std::string m_onCallFormName;
                    bool m_onCallFormNameHasBeenSet;

                    /**
                     * <p>值班人员id组</p>
                     */
                    std::vector<StaffInfo> m_staffInfos;
                    bool m_staffInfosHasBeenSet;

                    /**
                     * <p>轮转类型</p>
                     */
                    std::string m_rotationType;
                    bool m_rotationTypeHasBeenSet;

                    /**
                     * <p>换班时间</p>
                     */
                    std::string m_shiftTime;
                    bool m_shiftTimeHasBeenSet;

                    /**
                     * <p>有效期开始时间，单位s</p>
                     */
                    int64_t m_effectiveStartTime;
                    bool m_effectiveStartTimeHasBeenSet;

                    /**
                     * <p>有效期结束时间，单位s</p>
                     */
                    int64_t m_effectiveEndTime;
                    bool m_effectiveEndTimeHasBeenSet;

                    /**
                     * <p>时区(-12 - 12)</p>
                     */
                    double m_timeZone;
                    bool m_timeZoneHasBeenSet;

                    /**
                     * <p>值班表描述</p>
                     */
                    std::string m_onCallFormDesc;
                    bool m_onCallFormDescHasBeenSet;

                    /**
                     * <p>轮班信息</p>
                     */
                    std::vector<CoverStaffInfo> m_coverStaffInfos;
                    bool m_coverStaffInfosHasBeenSet;

                    /**
                     * <p>模板绑定的标签</p>
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_CREATEONCALLFORMREQUEST_H_
