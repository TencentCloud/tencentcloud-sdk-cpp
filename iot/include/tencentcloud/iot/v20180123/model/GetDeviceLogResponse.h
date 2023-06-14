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

#ifndef TENCENTCLOUD_IOT_V20180123_MODEL_GETDEVICELOGRESPONSE_H_
#define TENCENTCLOUD_IOT_V20180123_MODEL_GETDEVICELOGRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iot/v20180123/model/DeviceLogEntry.h>


namespace TencentCloud
{
    namespace Iot
    {
        namespace V20180123
        {
            namespace Model
            {
                /**
                * GetDeviceLog返回参数结构体
                */
                class GetDeviceLogResponse : public AbstractModel
                {
                public:
                    GetDeviceLogResponse();
                    ~GetDeviceLogResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取设备日志
                     * @return DeviceLog 设备日志
                     * 
                     */
                    std::vector<DeviceLogEntry> GetDeviceLog() const;

                    /**
                     * 判断参数 DeviceLog 是否已赋值
                     * @return DeviceLog 是否已赋值
                     * 
                     */
                    bool DeviceLogHasBeenSet() const;

                    /**
                     * 获取查询游标
                     * @return ScrollId 查询游标
                     * 
                     */
                    std::string GetScrollId() const;

                    /**
                     * 判断参数 ScrollId 是否已赋值
                     * @return ScrollId 是否已赋值
                     * 
                     */
                    bool ScrollIdHasBeenSet() const;

                    /**
                     * 获取游标超时
                     * @return ScrollTimeout 游标超时
                     * 
                     */
                    uint64_t GetScrollTimeout() const;

                    /**
                     * 判断参数 ScrollTimeout 是否已赋值
                     * @return ScrollTimeout 是否已赋值
                     * 
                     */
                    bool ScrollTimeoutHasBeenSet() const;

                private:

                    /**
                     * 设备日志
                     */
                    std::vector<DeviceLogEntry> m_deviceLog;
                    bool m_deviceLogHasBeenSet;

                    /**
                     * 查询游标
                     */
                    std::string m_scrollId;
                    bool m_scrollIdHasBeenSet;

                    /**
                     * 游标超时
                     */
                    uint64_t m_scrollTimeout;
                    bool m_scrollTimeoutHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOT_V20180123_MODEL_GETDEVICELOGRESPONSE_H_
