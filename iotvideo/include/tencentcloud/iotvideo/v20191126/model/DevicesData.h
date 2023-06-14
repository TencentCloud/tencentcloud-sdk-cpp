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

#ifndef TENCENTCLOUD_IOTVIDEO_V20191126_MODEL_DEVICESDATA_H_
#define TENCENTCLOUD_IOTVIDEO_V20191126_MODEL_DEVICESDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotvideo
    {
        namespace V20191126
        {
            namespace Model
            {
                /**
                * 设备列表元素所包含的设备基本信息
                */
                class DevicesData : public AbstractModel
                {
                public:
                    DevicesData();
                    ~DevicesData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取设备TID
                     * @return Tid 设备TID
                     * 
                     */
                    std::string GetTid() const;

                    /**
                     * 设置设备TID
                     * @param _tid 设备TID
                     * 
                     */
                    void SetTid(const std::string& _tid);

                    /**
                     * 判断参数 Tid 是否已赋值
                     * @return Tid 是否已赋值
                     * 
                     */
                    bool TidHasBeenSet() const;

                    /**
                     * 获取设备名称
                     * @return DeviceName 设备名称
                     * 
                     */
                    std::string GetDeviceName() const;

                    /**
                     * 设置设备名称
                     * @param _deviceName 设备名称
                     * 
                     */
                    void SetDeviceName(const std::string& _deviceName);

                    /**
                     * 判断参数 DeviceName 是否已赋值
                     * @return DeviceName 是否已赋值
                     * 
                     */
                    bool DeviceNameHasBeenSet() const;

                    /**
                     * 获取激活时间 0代表未激活
                     * @return ActiveTime 激活时间 0代表未激活
                     * 
                     */
                    uint64_t GetActiveTime() const;

                    /**
                     * 设置激活时间 0代表未激活
                     * @param _activeTime 激活时间 0代表未激活
                     * 
                     */
                    void SetActiveTime(const uint64_t& _activeTime);

                    /**
                     * 判断参数 ActiveTime 是否已赋值
                     * @return ActiveTime 是否已赋值
                     * 
                     */
                    bool ActiveTimeHasBeenSet() const;

                    /**
                     * 获取设备是否被禁用
                     * @return Disabled 设备是否被禁用
                     * 
                     */
                    bool GetDisabled() const;

                    /**
                     * 设置设备是否被禁用
                     * @param _disabled 设备是否被禁用
                     * 
                     */
                    void SetDisabled(const bool& _disabled);

                    /**
                     * 判断参数 Disabled 是否已赋值
                     * @return Disabled 是否已赋值
                     * 
                     */
                    bool DisabledHasBeenSet() const;

                    /**
                     * 获取设备推流状态
                     * @return StreamStatus 设备推流状态
                     * 
                     */
                    bool GetStreamStatus() const;

                    /**
                     * 设置设备推流状态
                     * @param _streamStatus 设备推流状态
                     * 
                     */
                    void SetStreamStatus(const bool& _streamStatus);

                    /**
                     * 判断参数 StreamStatus 是否已赋值
                     * @return StreamStatus 是否已赋值
                     * 
                     */
                    bool StreamStatusHasBeenSet() const;

                    /**
                     * 获取固件版本
                     * @return OtaVersion 固件版本
                     * 
                     */
                    std::string GetOtaVersion() const;

                    /**
                     * 设置固件版本
                     * @param _otaVersion 固件版本
                     * 
                     */
                    void SetOtaVersion(const std::string& _otaVersion);

                    /**
                     * 判断参数 OtaVersion 是否已赋值
                     * @return OtaVersion 是否已赋值
                     * 
                     */
                    bool OtaVersionHasBeenSet() const;

                    /**
                     * 获取设备在线状态
                     * @return Online 设备在线状态
                     * 
                     */
                    uint64_t GetOnline() const;

                    /**
                     * 设置设备在线状态
                     * @param _online 设备在线状态
                     * 
                     */
                    void SetOnline(const uint64_t& _online);

                    /**
                     * 判断参数 Online 是否已赋值
                     * @return Online 是否已赋值
                     * 
                     */
                    bool OnlineHasBeenSet() const;

                    /**
                     * 获取设备最后上线时间（mqtt连接成功时间），UNIX时间戳，单位秒
                     * @return LastOnlineTime 设备最后上线时间（mqtt连接成功时间），UNIX时间戳，单位秒
                     * 
                     */
                    uint64_t GetLastOnlineTime() const;

                    /**
                     * 设置设备最后上线时间（mqtt连接成功时间），UNIX时间戳，单位秒
                     * @param _lastOnlineTime 设备最后上线时间（mqtt连接成功时间），UNIX时间戳，单位秒
                     * 
                     */
                    void SetLastOnlineTime(const uint64_t& _lastOnlineTime);

                    /**
                     * 判断参数 LastOnlineTime 是否已赋值
                     * @return LastOnlineTime 是否已赋值
                     * 
                     */
                    bool LastOnlineTimeHasBeenSet() const;

                    /**
                     * 获取物模型json数据
                     * @return IotModel 物模型json数据
                     * 
                     */
                    std::string GetIotModel() const;

                    /**
                     * 设置物模型json数据
                     * @param _iotModel 物模型json数据
                     * 
                     */
                    void SetIotModel(const std::string& _iotModel);

                    /**
                     * 判断参数 IotModel 是否已赋值
                     * @return IotModel 是否已赋值
                     * 
                     */
                    bool IotModelHasBeenSet() const;

                    /**
                     * 获取设备固件最新更新时间，UNIX时间戳，单位秒
                     * @return LastUpdateTime 设备固件最新更新时间，UNIX时间戳，单位秒
                     * 
                     */
                    uint64_t GetLastUpdateTime() const;

                    /**
                     * 设置设备固件最新更新时间，UNIX时间戳，单位秒
                     * @param _lastUpdateTime 设备固件最新更新时间，UNIX时间戳，单位秒
                     * 
                     */
                    void SetLastUpdateTime(const uint64_t& _lastUpdateTime);

                    /**
                     * 判断参数 LastUpdateTime 是否已赋值
                     * @return LastUpdateTime 是否已赋值
                     * 
                     */
                    bool LastUpdateTimeHasBeenSet() const;

                private:

                    /**
                     * 设备TID
                     */
                    std::string m_tid;
                    bool m_tidHasBeenSet;

                    /**
                     * 设备名称
                     */
                    std::string m_deviceName;
                    bool m_deviceNameHasBeenSet;

                    /**
                     * 激活时间 0代表未激活
                     */
                    uint64_t m_activeTime;
                    bool m_activeTimeHasBeenSet;

                    /**
                     * 设备是否被禁用
                     */
                    bool m_disabled;
                    bool m_disabledHasBeenSet;

                    /**
                     * 设备推流状态
                     */
                    bool m_streamStatus;
                    bool m_streamStatusHasBeenSet;

                    /**
                     * 固件版本
                     */
                    std::string m_otaVersion;
                    bool m_otaVersionHasBeenSet;

                    /**
                     * 设备在线状态
                     */
                    uint64_t m_online;
                    bool m_onlineHasBeenSet;

                    /**
                     * 设备最后上线时间（mqtt连接成功时间），UNIX时间戳，单位秒
                     */
                    uint64_t m_lastOnlineTime;
                    bool m_lastOnlineTimeHasBeenSet;

                    /**
                     * 物模型json数据
                     */
                    std::string m_iotModel;
                    bool m_iotModelHasBeenSet;

                    /**
                     * 设备固件最新更新时间，UNIX时间戳，单位秒
                     */
                    uint64_t m_lastUpdateTime;
                    bool m_lastUpdateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTVIDEO_V20191126_MODEL_DEVICESDATA_H_
