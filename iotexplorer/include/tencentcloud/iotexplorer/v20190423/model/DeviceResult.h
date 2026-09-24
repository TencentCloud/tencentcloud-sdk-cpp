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

#ifndef TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_DEVICERESULT_H_
#define TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_DEVICERESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotexplorer
    {
        namespace V20190423
        {
            namespace Model
            {
                /**
                * 批处理发布消息请求单台设备下发结果(仅失败情况下显示具体情况)
                */
                class DeviceResult : public AbstractModel
                {
                public:
                    DeviceResult();
                    ~DeviceResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>设备名称</p>
                     * @return DeviceName <p>设备名称</p>
                     * 
                     */
                    std::string GetDeviceName() const;

                    /**
                     * 设置<p>设备名称</p>
                     * @param _deviceName <p>设备名称</p>
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
                     * 获取<p>设备状态</p><p>枚举值：</p><ul><li>SUCCESS： 下发成功    </li><li>PENDING： 存入离线存储</li><li>OFFLINE： 设备离线</li><li>FAILED： 下发失败</li><li>TIMEOUT： 下发超时</li></ul>
                     * @return Status <p>设备状态</p><p>枚举值：</p><ul><li>SUCCESS： 下发成功    </li><li>PENDING： 存入离线存储</li><li>OFFLINE： 设备离线</li><li>FAILED： 下发失败</li><li>TIMEOUT： 下发超时</li></ul>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>设备状态</p><p>枚举值：</p><ul><li>SUCCESS： 下发成功    </li><li>PENDING： 存入离线存储</li><li>OFFLINE： 设备离线</li><li>FAILED： 下发失败</li><li>TIMEOUT： 下发超时</li></ul>
                     * @param _status <p>设备状态</p><p>枚举值：</p><ul><li>SUCCESS： 下发成功    </li><li>PENDING： 存入离线存储</li><li>OFFLINE： 设备离线</li><li>FAILED： 下发失败</li><li>TIMEOUT： 下发超时</li></ul>
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>错误码</p>
                     * @return ErrCode <p>错误码</p>
                     * 
                     */
                    int64_t GetErrCode() const;

                    /**
                     * 设置<p>错误码</p>
                     * @param _errCode <p>错误码</p>
                     * 
                     */
                    void SetErrCode(const int64_t& _errCode);

                    /**
                     * 判断参数 ErrCode 是否已赋值
                     * @return ErrCode 是否已赋值
                     * 
                     */
                    bool ErrCodeHasBeenSet() const;

                    /**
                     * 获取<p>错误信息</p>
                     * @return ErrMsg <p>错误信息</p>
                     * 
                     */
                    std::string GetErrMsg() const;

                    /**
                     * 设置<p>错误信息</p>
                     * @param _errMsg <p>错误信息</p>
                     * 
                     */
                    void SetErrMsg(const std::string& _errMsg);

                    /**
                     * 判断参数 ErrMsg 是否已赋值
                     * @return ErrMsg 是否已赋值
                     * 
                     */
                    bool ErrMsgHasBeenSet() const;

                private:

                    /**
                     * <p>设备名称</p>
                     */
                    std::string m_deviceName;
                    bool m_deviceNameHasBeenSet;

                    /**
                     * <p>设备状态</p><p>枚举值：</p><ul><li>SUCCESS： 下发成功    </li><li>PENDING： 存入离线存储</li><li>OFFLINE： 设备离线</li><li>FAILED： 下发失败</li><li>TIMEOUT： 下发超时</li></ul>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>错误码</p>
                     */
                    int64_t m_errCode;
                    bool m_errCodeHasBeenSet;

                    /**
                     * <p>错误信息</p>
                     */
                    std::string m_errMsg;
                    bool m_errMsgHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_DEVICERESULT_H_
