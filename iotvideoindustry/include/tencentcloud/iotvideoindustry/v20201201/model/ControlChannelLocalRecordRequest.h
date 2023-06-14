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

#ifndef TENCENTCLOUD_IOTVIDEOINDUSTRY_V20201201_MODEL_CONTROLCHANNELLOCALRECORDREQUEST_H_
#define TENCENTCLOUD_IOTVIDEOINDUSTRY_V20201201_MODEL_CONTROLCHANNELLOCALRECORDREQUEST_H_

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
                * ControlChannelLocalRecord请求参数结构体
                */
                class ControlChannelLocalRecordRequest : public AbstractModel
                {
                public:
                    ControlChannelLocalRecordRequest();
                    ~ControlChannelLocalRecordRequest() = default;
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

                    /**
                     * 获取流Id，流的唯一标识
                     * @return StreamId 流Id，流的唯一标识
                     * 
                     */
                    std::string GetStreamId() const;

                    /**
                     * 设置流Id，流的唯一标识
                     * @param _streamId 流Id，流的唯一标识
                     * 
                     */
                    void SetStreamId(const std::string& _streamId);

                    /**
                     * 判断参数 StreamId 是否已赋值
                     * @return StreamId 是否已赋值
                     * 
                     */
                    bool StreamIdHasBeenSet() const;

                    /**
                     * 获取控制参数，转义的json字符串

目前支持的command：
"Command": "{"Action":"PAUSE"}" 暂停
"Command": "{"Action":"PLAY"}" 暂停恢复
"Command": "{"Action":"PLAY","Offset":"15"}" 基于文件起始时间点的位置偏移，单位秒
                     * @return Command 控制参数，转义的json字符串

目前支持的command：
"Command": "{"Action":"PAUSE"}" 暂停
"Command": "{"Action":"PLAY"}" 暂停恢复
"Command": "{"Action":"PLAY","Offset":"15"}" 基于文件起始时间点的位置偏移，单位秒
                     * 
                     */
                    std::string GetCommand() const;

                    /**
                     * 设置控制参数，转义的json字符串

目前支持的command：
"Command": "{"Action":"PAUSE"}" 暂停
"Command": "{"Action":"PLAY"}" 暂停恢复
"Command": "{"Action":"PLAY","Offset":"15"}" 基于文件起始时间点的位置偏移，单位秒
                     * @param _command 控制参数，转义的json字符串

目前支持的command：
"Command": "{"Action":"PAUSE"}" 暂停
"Command": "{"Action":"PLAY"}" 暂停恢复
"Command": "{"Action":"PLAY","Offset":"15"}" 基于文件起始时间点的位置偏移，单位秒
                     * 
                     */
                    void SetCommand(const std::string& _command);

                    /**
                     * 判断参数 Command 是否已赋值
                     * @return Command 是否已赋值
                     * 
                     */
                    bool CommandHasBeenSet() const;

                private:

                    /**
                     * 设备唯一标识
                     */
                    std::string m_deviceId;
                    bool m_deviceIdHasBeenSet;

                    /**
                     * 通道唯一标识
                     */
                    std::string m_channelId;
                    bool m_channelIdHasBeenSet;

                    /**
                     * 流Id，流的唯一标识
                     */
                    std::string m_streamId;
                    bool m_streamIdHasBeenSet;

                    /**
                     * 控制参数，转义的json字符串

目前支持的command：
"Command": "{"Action":"PAUSE"}" 暂停
"Command": "{"Action":"PLAY"}" 暂停恢复
"Command": "{"Action":"PLAY","Offset":"15"}" 基于文件起始时间点的位置偏移，单位秒
                     */
                    std::string m_command;
                    bool m_commandHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTVIDEOINDUSTRY_V20201201_MODEL_CONTROLCHANNELLOCALRECORDREQUEST_H_
