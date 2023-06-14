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

#ifndef TENCENTCLOUD_IOTVIDEOINDUSTRY_V20201201_MODEL_CONTROLDEVICEPTZREQUEST_H_
#define TENCENTCLOUD_IOTVIDEOINDUSTRY_V20201201_MODEL_CONTROLDEVICEPTZREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotvideoindustry
    {
        namespace V20201201
        {
            namespace Model
            {
                /**
                * ControlDevicePTZ请求参数结构体
                */
                class ControlDevicePTZRequest : public AbstractModel
                {
                public:
                    ControlDevicePTZRequest();
                    ~ControlDevicePTZRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取设备唯一标识
                     * @return DeviceId 设备唯一标识
                     * 
                     */
                    std::string GetDeviceId() const;

                    /**
                     * 设置设备唯一标识
                     * @param _deviceId 设备唯一标识
                     * 
                     */
                    void SetDeviceId(const std::string& _deviceId);

                    /**
                     * 判断参数 DeviceId 是否已赋值
                     * @return DeviceId 是否已赋值
                     * 
                     */
                    bool DeviceIdHasBeenSet() const;

                    /**
                     * 获取PTZ控制命令类型：
stop - 停止当前PTZ信令
left - 向左移动
right - 向右移动
up - 向上移动
down - 向下移动
leftUp - 左上移动
leftDown - 左下移动
rightUp - 右上移动
rightDown - 右下移动
zoomOut - 镜头缩小
zoomIn - 镜头放大
irisIn - 光圈缩小
irisOut - 光圈放大
focusIn - 焦距变近
focusOut - 焦距变远
                     * @return Command PTZ控制命令类型：
stop - 停止当前PTZ信令
left - 向左移动
right - 向右移动
up - 向上移动
down - 向下移动
leftUp - 左上移动
leftDown - 左下移动
rightUp - 右上移动
rightDown - 右下移动
zoomOut - 镜头缩小
zoomIn - 镜头放大
irisIn - 光圈缩小
irisOut - 光圈放大
focusIn - 焦距变近
focusOut - 焦距变远
                     * 
                     */
                    std::string GetCommand() const;

                    /**
                     * 设置PTZ控制命令类型：
stop - 停止当前PTZ信令
left - 向左移动
right - 向右移动
up - 向上移动
down - 向下移动
leftUp - 左上移动
leftDown - 左下移动
rightUp - 右上移动
rightDown - 右下移动
zoomOut - 镜头缩小
zoomIn - 镜头放大
irisIn - 光圈缩小
irisOut - 光圈放大
focusIn - 焦距变近
focusOut - 焦距变远
                     * @param _command PTZ控制命令类型：
stop - 停止当前PTZ信令
left - 向左移动
right - 向右移动
up - 向上移动
down - 向下移动
leftUp - 左上移动
leftDown - 左下移动
rightUp - 右上移动
rightDown - 右下移动
zoomOut - 镜头缩小
zoomIn - 镜头放大
irisIn - 光圈缩小
irisOut - 光圈放大
focusIn - 焦距变近
focusOut - 焦距变远
                     * 
                     */
                    void SetCommand(const std::string& _command);

                    /**
                     * 判断参数 Command 是否已赋值
                     * @return Command 是否已赋值
                     * 
                     */
                    bool CommandHasBeenSet() const;

                    /**
                     * 获取通道唯一标识
                     * @return ChannelId 通道唯一标识
                     * 
                     */
                    std::string GetChannelId() const;

                    /**
                     * 设置通道唯一标识
                     * @param _channelId 通道唯一标识
                     * 
                     */
                    void SetChannelId(const std::string& _channelId);

                    /**
                     * 判断参数 ChannelId 是否已赋值
                     * @return ChannelId 是否已赋值
                     * 
                     */
                    bool ChannelIdHasBeenSet() const;

                private:

                    /**
                     * 设备唯一标识
                     */
                    std::string m_deviceId;
                    bool m_deviceIdHasBeenSet;

                    /**
                     * PTZ控制命令类型：
stop - 停止当前PTZ信令
left - 向左移动
right - 向右移动
up - 向上移动
down - 向下移动
leftUp - 左上移动
leftDown - 左下移动
rightUp - 右上移动
rightDown - 右下移动
zoomOut - 镜头缩小
zoomIn - 镜头放大
irisIn - 光圈缩小
irisOut - 光圈放大
focusIn - 焦距变近
focusOut - 焦距变远
                     */
                    std::string m_command;
                    bool m_commandHasBeenSet;

                    /**
                     * 通道唯一标识
                     */
                    std::string m_channelId;
                    bool m_channelIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTVIDEOINDUSTRY_V20201201_MODEL_CONTROLDEVICEPTZREQUEST_H_
