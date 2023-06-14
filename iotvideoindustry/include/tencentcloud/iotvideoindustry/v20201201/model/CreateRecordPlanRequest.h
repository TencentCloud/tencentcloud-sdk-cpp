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

#ifndef TENCENTCLOUD_IOTVIDEOINDUSTRY_V20201201_MODEL_CREATERECORDPLANREQUEST_H_
#define TENCENTCLOUD_IOTVIDEOINDUSTRY_V20201201_MODEL_CREATERECORDPLANREQUEST_H_

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
                * CreateRecordPlan请求参数结构体
                */
                class CreateRecordPlanRequest : public AbstractModel
                {
                public:
                    CreateRecordPlanRequest();
                    ~CreateRecordPlanRequest() = default;
                    std::string ToJsonString() const;


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
                     * 获取触发录制的事件类别 1:全部
                     * @return EventId 触发录制的事件类别 1:全部
                     * 
                     */
                    int64_t GetEventId() const;

                    /**
                     * 设置触发录制的事件类别 1:全部
                     * @param _eventId 触发录制的事件类别 1:全部
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
                     * 获取该录制计划绑定的设备列表
                     * @return Devices 该录制计划绑定的设备列表
                     * 
                     */
                    std::vector<DeviceItem> GetDevices() const;

                    /**
                     * 设置该录制计划绑定的设备列表
                     * @param _devices 该录制计划绑定的设备列表
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
                     * 获取存储周期
                     * @return RecordStorageTime 存储周期
                     * 
                     */
                    int64_t GetRecordStorageTime() const;

                    /**
                     * 设置存储周期
                     * @param _recordStorageTime 存储周期
                     * 
                     */
                    void SetRecordStorageTime(const int64_t& _recordStorageTime);

                    /**
                     * 判断参数 RecordStorageTime 是否已赋值
                     * @return RecordStorageTime 是否已赋值
                     * 
                     */
                    bool RecordStorageTimeHasBeenSet() const;

                private:

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
                     * 触发录制的事件类别 1:全部
                     */
                    int64_t m_eventId;
                    bool m_eventIdHasBeenSet;

                    /**
                     * 该录制计划绑定的设备列表
                     */
                    std::vector<DeviceItem> m_devices;
                    bool m_devicesHasBeenSet;

                    /**
                     * 存储周期
                     */
                    int64_t m_recordStorageTime;
                    bool m_recordStorageTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTVIDEOINDUSTRY_V20201201_MODEL_CREATERECORDPLANREQUEST_H_
