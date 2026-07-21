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

#ifndef TENCENTCLOUD_GA2_V20250115_MODEL_MODIFYACCESSLOGSTATUSREQUEST_H_
#define TENCENTCLOUD_GA2_V20250115_MODEL_MODIFYACCESSLOGSTATUSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ga2
    {
        namespace V20250115
        {
            namespace Model
            {
                /**
                * ModifyAccessLogStatus请求参数结构体
                */
                class ModifyAccessLogStatusRequest : public AbstractModel
                {
                public:
                    ModifyAccessLogStatusRequest();
                    ~ModifyAccessLogStatusRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>日志唯一Id</p>
                     * @return LogPushTaskId <p>日志唯一Id</p>
                     * 
                     */
                    std::string GetLogPushTaskId() const;

                    /**
                     * 设置<p>日志唯一Id</p>
                     * @param _logPushTaskId <p>日志唯一Id</p>
                     * 
                     */
                    void SetLogPushTaskId(const std::string& _logPushTaskId);

                    /**
                     * 判断参数 LogPushTaskId 是否已赋值
                     * @return LogPushTaskId 是否已赋值
                     * 
                     */
                    bool LogPushTaskIdHasBeenSet() const;

                    /**
                     * 获取<p>状态（启动START， 停止STOP）</p><p>枚举值：</p><ul><li>START： 启动</li><li>STOP： 停止</li></ul>
                     * @return Status <p>状态（启动START， 停止STOP）</p><p>枚举值：</p><ul><li>START： 启动</li><li>STOP： 停止</li></ul>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>状态（启动START， 停止STOP）</p><p>枚举值：</p><ul><li>START： 启动</li><li>STOP： 停止</li></ul>
                     * @param _status <p>状态（启动START， 停止STOP）</p><p>枚举值：</p><ul><li>START： 启动</li><li>STOP： 停止</li></ul>
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
                     * 获取<p>GA实例唯一Id</p>
                     * @return GlobalAcceleratorId <p>GA实例唯一Id</p>
                     * 
                     */
                    std::string GetGlobalAcceleratorId() const;

                    /**
                     * 设置<p>GA实例唯一Id</p>
                     * @param _globalAcceleratorId <p>GA实例唯一Id</p>
                     * 
                     */
                    void SetGlobalAcceleratorId(const std::string& _globalAcceleratorId);

                    /**
                     * 判断参数 GlobalAcceleratorId 是否已赋值
                     * @return GlobalAcceleratorId 是否已赋值
                     * 
                     */
                    bool GlobalAcceleratorIdHasBeenSet() const;

                private:

                    /**
                     * <p>日志唯一Id</p>
                     */
                    std::string m_logPushTaskId;
                    bool m_logPushTaskIdHasBeenSet;

                    /**
                     * <p>状态（启动START， 停止STOP）</p><p>枚举值：</p><ul><li>START： 启动</li><li>STOP： 停止</li></ul>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>GA实例唯一Id</p>
                     */
                    std::string m_globalAcceleratorId;
                    bool m_globalAcceleratorIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GA2_V20250115_MODEL_MODIFYACCESSLOGSTATUSREQUEST_H_
