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

#ifndef TENCENTCLOUD_IOTVIDEOINDUSTRY_V20201201_MODEL_CREATESCENEREQUEST_H_
#define TENCENTCLOUD_IOTVIDEOINDUSTRY_V20201201_MODEL_CREATESCENEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iotvideoindustry/v20201201/model/DeviceItem.h>
#include <tencentcloud/iotvideoindustry/v20201201/model/ChannelItem.h>


namespace TencentCloud
{
    namespace Iotvideoindustry
    {
        namespace V20201201
        {
            namespace Model
            {
                /**
                * CreateScene请求参数结构体
                */
                class CreateSceneRequest : public AbstractModel
                {
                public:
                    CreateSceneRequest();
                    ~CreateSceneRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取场景名称
                     * @return SceneName 场景名称
                     * 
                     */
                    std::string GetSceneName() const;

                    /**
                     * 设置场景名称
                     * @param _sceneName 场景名称
                     * 
                     */
                    void SetSceneName(const std::string& _sceneName);

                    /**
                     * 判断参数 SceneName 是否已赋值
                     * @return SceneName 是否已赋值
                     * 
                     */
                    bool SceneNameHasBeenSet() const;

                    /**
                     * 获取场景触发规则
                     * @return SceneTrigger 场景触发规则
                     * 
                     */
                    std::string GetSceneTrigger() const;

                    /**
                     * 设置场景触发规则
                     * @param _sceneTrigger 场景触发规则
                     * 
                     */
                    void SetSceneTrigger(const std::string& _sceneTrigger);

                    /**
                     * 判断参数 SceneTrigger 是否已赋值
                     * @return SceneTrigger 是否已赋值
                     * 
                     */
                    bool SceneTriggerHasBeenSet() const;

                    /**
                     * 获取录制时长 (秒)
                     * @return RecordDuration 录制时长 (秒)
                     * 
                     */
                    int64_t GetRecordDuration() const;

                    /**
                     * 设置录制时长 (秒)
                     * @param _recordDuration 录制时长 (秒)
                     * 
                     */
                    void SetRecordDuration(const int64_t& _recordDuration);

                    /**
                     * 判断参数 RecordDuration 是否已赋值
                     * @return RecordDuration 是否已赋值
                     * 
                     */
                    bool RecordDurationHasBeenSet() const;

                    /**
                     * 获取录像存储时长(天)
                     * @return StoreDuration 录像存储时长(天)
                     * 
                     */
                    int64_t GetStoreDuration() const;

                    /**
                     * 设置录像存储时长(天)
                     * @param _storeDuration 录像存储时长(天)
                     * 
                     */
                    void SetStoreDuration(const int64_t& _storeDuration);

                    /**
                     * 判断参数 StoreDuration 是否已赋值
                     * @return StoreDuration 是否已赋值
                     * 
                     */
                    bool StoreDurationHasBeenSet() const;

                    /**
                     * 获取设备列表(不推荐使用)
                     * @return Devices 设备列表(不推荐使用)
                     * 
                     */
                    std::vector<DeviceItem> GetDevices() const;

                    /**
                     * 设置设备列表(不推荐使用)
                     * @param _devices 设备列表(不推荐使用)
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
                     * 获取通道列表
                     * @return Channels 通道列表
                     * 
                     */
                    std::vector<ChannelItem> GetChannels() const;

                    /**
                     * 设置通道列表
                     * @param _channels 通道列表
                     * 
                     */
                    void SetChannels(const std::vector<ChannelItem>& _channels);

                    /**
                     * 判断参数 Channels 是否已赋值
                     * @return Channels 是否已赋值
                     * 
                     */
                    bool ChannelsHasBeenSet() const;

                private:

                    /**
                     * 场景名称
                     */
                    std::string m_sceneName;
                    bool m_sceneNameHasBeenSet;

                    /**
                     * 场景触发规则
                     */
                    std::string m_sceneTrigger;
                    bool m_sceneTriggerHasBeenSet;

                    /**
                     * 录制时长 (秒)
                     */
                    int64_t m_recordDuration;
                    bool m_recordDurationHasBeenSet;

                    /**
                     * 录像存储时长(天)
                     */
                    int64_t m_storeDuration;
                    bool m_storeDurationHasBeenSet;

                    /**
                     * 设备列表(不推荐使用)
                     */
                    std::vector<DeviceItem> m_devices;
                    bool m_devicesHasBeenSet;

                    /**
                     * 通道列表
                     */
                    std::vector<ChannelItem> m_channels;
                    bool m_channelsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTVIDEOINDUSTRY_V20201201_MODEL_CREATESCENEREQUEST_H_
