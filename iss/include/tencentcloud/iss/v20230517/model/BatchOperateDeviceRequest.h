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

#ifndef TENCENTCLOUD_ISS_V20230517_MODEL_BATCHOPERATEDEVICEREQUEST_H_
#define TENCENTCLOUD_ISS_V20230517_MODEL_BATCHOPERATEDEVICEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iss
    {
        namespace V20230517
        {
            namespace Model
            {
                /**
                * BatchOperateDevice请求参数结构体
                */
                class BatchOperateDeviceRequest : public AbstractModel
                {
                public:
                    BatchOperateDeviceRequest();
                    ~BatchOperateDeviceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>设备 ID 数组（从获取设备列表接口ListDevices中获取）</p><p>取值参考：<a href="https://cloud.tencent.com/document/api/1344/95871">ListDevices</a></p>
                     * @return DeviceIds <p>设备 ID 数组（从获取设备列表接口ListDevices中获取）</p><p>取值参考：<a href="https://cloud.tencent.com/document/api/1344/95871">ListDevices</a></p>
                     * 
                     */
                    std::vector<std::string> GetDeviceIds() const;

                    /**
                     * 设置<p>设备 ID 数组（从获取设备列表接口ListDevices中获取）</p><p>取值参考：<a href="https://cloud.tencent.com/document/api/1344/95871">ListDevices</a></p>
                     * @param _deviceIds <p>设备 ID 数组（从获取设备列表接口ListDevices中获取）</p><p>取值参考：<a href="https://cloud.tencent.com/document/api/1344/95871">ListDevices</a></p>
                     * 
                     */
                    void SetDeviceIds(const std::vector<std::string>& _deviceIds);

                    /**
                     * 判断参数 DeviceIds 是否已赋值
                     * @return DeviceIds 是否已赋值
                     * 
                     */
                    bool DeviceIdsHasBeenSet() const;

                    /**
                     * 获取<p>操作命令</p><p>枚举值：</p><ul><li>enable： 启用</li><li>disable： 禁用</li><li>delete： 删除</li><li>sync： 同步设备通道</li></ul>
                     * @return Cmd <p>操作命令</p><p>枚举值：</p><ul><li>enable： 启用</li><li>disable： 禁用</li><li>delete： 删除</li><li>sync： 同步设备通道</li></ul>
                     * 
                     */
                    std::string GetCmd() const;

                    /**
                     * 设置<p>操作命令</p><p>枚举值：</p><ul><li>enable： 启用</li><li>disable： 禁用</li><li>delete： 删除</li><li>sync： 同步设备通道</li></ul>
                     * @param _cmd <p>操作命令</p><p>枚举值：</p><ul><li>enable： 启用</li><li>disable： 禁用</li><li>delete： 删除</li><li>sync： 同步设备通道</li></ul>
                     * 
                     */
                    void SetCmd(const std::string& _cmd);

                    /**
                     * 判断参数 Cmd 是否已赋值
                     * @return Cmd 是否已赋值
                     * 
                     */
                    bool CmdHasBeenSet() const;

                private:

                    /**
                     * <p>设备 ID 数组（从获取设备列表接口ListDevices中获取）</p><p>取值参考：<a href="https://cloud.tencent.com/document/api/1344/95871">ListDevices</a></p>
                     */
                    std::vector<std::string> m_deviceIds;
                    bool m_deviceIdsHasBeenSet;

                    /**
                     * <p>操作命令</p><p>枚举值：</p><ul><li>enable： 启用</li><li>disable： 禁用</li><li>delete： 删除</li><li>sync： 同步设备通道</li></ul>
                     */
                    std::string m_cmd;
                    bool m_cmdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ISS_V20230517_MODEL_BATCHOPERATEDEVICEREQUEST_H_
