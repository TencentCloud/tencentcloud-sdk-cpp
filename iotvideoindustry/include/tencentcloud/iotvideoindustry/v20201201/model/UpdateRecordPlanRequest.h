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

#ifndef TENCENTCLOUD_IOTVIDEOINDUSTRY_V20201201_MODEL_UPDATERECORDPLANREQUEST_H_
#define TENCENTCLOUD_IOTVIDEOINDUSTRY_V20201201_MODEL_UPDATERECORDPLANREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iotvideoindustry/v20201201/model/DeviceItem.h>


namespace TencentCloud
{
    namespace Iotvideoindustry
    {
        namespace V20201201
        {
            namespace Model
            {
                /**
                * UpdateRecordPlan请求参数结构体
                */
                class UpdateRecordPlanRequest : public AbstractModel
                {
                public:
                    UpdateRecordPlanRequest();
                    ~UpdateRecordPlanRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取录制计划ID
                     * @return PlanId 录制计划ID
                     * 
                     */
                    std::string GetPlanId() const;

                    /**
                     * 设置录制计划ID
                     * @param _planId 录制计划ID
                     * 
                     */
                    void SetPlanId(const std::string& _planId);

                    /**
                     * 判断参数 PlanId 是否已赋值
                     * @return PlanId 是否已赋值
                     * 
                     */
                    bool PlanIdHasBeenSet() const;

                    /**
                     * 获取计划名称
                     * @return Name 计划名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置计划名称
                     * @param _name 计划名称
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
                     * 获取时间模板ID
                     * @return TimeTemplateId 时间模板ID
                     * 
                     */
                    std::string GetTimeTemplateId() const;

                    /**
                     * 设置时间模板ID
                     * @param _timeTemplateId 时间模板ID
                     * 
                     */
                    void SetTimeTemplateId(const std::string& _timeTemplateId);

                    /**
                     * 判断参数 TimeTemplateId 是否已赋值
                     * @return TimeTemplateId 是否已赋值
                     * 
                     */
                    bool TimeTemplateIdHasBeenSet() const;

                    /**
                     * 获取触发录制的事件 1：全部
                     * @return EventId 触发录制的事件 1：全部
                     * 
                     */
                    int64_t GetEventId() const;

                    /**
                     * 设置触发录制的事件 1：全部
                     * @param _eventId 触发录制的事件 1：全部
                     * 
                     */
                    void SetEventId(const int64_t& _eventId);

                    /**
                     * 判断参数 EventId 是否已赋值
                     * @return EventId 是否已赋值
                     * 
                     */
                    bool EventIdHasBeenSet() const;

                    /**
                     * 获取录制设备列表
                     * @return Devices 录制设备列表
                     * 
                     */
                    std::vector<DeviceItem> GetDevices() const;

                    /**
                     * 设置录制设备列表
                     * @param _devices 录制设备列表
                     * 
                     */
                    void SetDevices(const std::vector<DeviceItem>& _devices);

                    /**
                     * 判断参数 Devices 是否已赋值
                     * @return Devices 是否已赋值
                     * 
                     */
                    bool DevicesHasBeenSet() const;

                    /**
                     * 获取是否更新绑定此录制计划的设备列表
0 - 不更新
1 - 更新，如果Devices参数为空则清空设备列表，Devices不为空则全量更新设备列表
                     * @return IsModifyDevices 是否更新绑定此录制计划的设备列表
0 - 不更新
1 - 更新，如果Devices参数为空则清空设备列表，Devices不为空则全量更新设备列表
                     * 
                     */
                    int64_t GetIsModifyDevices() const;

                    /**
                     * 设置是否更新绑定此录制计划的设备列表
0 - 不更新
1 - 更新，如果Devices参数为空则清空设备列表，Devices不为空则全量更新设备列表
                     * @param _isModifyDevices 是否更新绑定此录制计划的设备列表
0 - 不更新
1 - 更新，如果Devices参数为空则清空设备列表，Devices不为空则全量更新设备列表
                     * 
                     */
                    void SetIsModifyDevices(const int64_t& _isModifyDevices);

                    /**
                     * 判断参数 IsModifyDevices 是否已赋值
                     * @return IsModifyDevices 是否已赋值
                     * 
                     */
                    bool IsModifyDevicesHasBeenSet() const;

                private:

                    /**
                     * 录制计划ID
                     */
                    std::string m_planId;
                    bool m_planIdHasBeenSet;

                    /**
                     * 计划名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 时间模板ID
                     */
                    std::string m_timeTemplateId;
                    bool m_timeTemplateIdHasBeenSet;

                    /**
                     * 触发录制的事件 1：全部
                     */
                    int64_t m_eventId;
                    bool m_eventIdHasBeenSet;

                    /**
                     * 录制设备列表
                     */
                    std::vector<DeviceItem> m_devices;
                    bool m_devicesHasBeenSet;

                    /**
                     * 是否更新绑定此录制计划的设备列表
0 - 不更新
1 - 更新，如果Devices参数为空则清空设备列表，Devices不为空则全量更新设备列表
                     */
                    int64_t m_isModifyDevices;
                    bool m_isModifyDevicesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTVIDEOINDUSTRY_V20201201_MODEL_UPDATERECORDPLANREQUEST_H_
