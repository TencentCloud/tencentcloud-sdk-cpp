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

#ifndef TENCENTCLOUD_TEM_V20201221_MODEL_HEALTHCHECKCONFIG_H_
#define TENCENTCLOUD_TEM_V20201221_MODEL_HEALTHCHECKCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tem
    {
        namespace V20201221
        {
            namespace Model
            {
                /**
                * 健康检查配置
                */
                class HealthCheckConfig : public AbstractModel
                {
                public:
                    HealthCheckConfig();
                    ~HealthCheckConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取支持的健康检查类型，如 HttpGet，TcpSocket，Exec
                     * @return Type 支持的健康检查类型，如 HttpGet，TcpSocket，Exec
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置支持的健康检查类型，如 HttpGet，TcpSocket，Exec
                     * @param _type 支持的健康检查类型，如 HttpGet，TcpSocket，Exec
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取仅当健康检查类型为 HttpGet 时有效，表示协议类型，如 HTTP，HTTPS
                     * @return Protocol 仅当健康检查类型为 HttpGet 时有效，表示协议类型，如 HTTP，HTTPS
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置仅当健康检查类型为 HttpGet 时有效，表示协议类型，如 HTTP，HTTPS
                     * @param _protocol 仅当健康检查类型为 HttpGet 时有效，表示协议类型，如 HTTP，HTTPS
                     * 
                     */
                    void SetProtocol(const std::string& _protocol);

                    /**
                     * 判断参数 Protocol 是否已赋值
                     * @return Protocol 是否已赋值
                     * 
                     */
                    bool ProtocolHasBeenSet() const;

                    /**
                     * 获取仅当健康检查类型为 HttpGet 时有效，表示请求路径
                     * @return Path 仅当健康检查类型为 HttpGet 时有效，表示请求路径
                     * 
                     */
                    std::string GetPath() const;

                    /**
                     * 设置仅当健康检查类型为 HttpGet 时有效，表示请求路径
                     * @param _path 仅当健康检查类型为 HttpGet 时有效，表示请求路径
                     * 
                     */
                    void SetPath(const std::string& _path);

                    /**
                     * 判断参数 Path 是否已赋值
                     * @return Path 是否已赋值
                     * 
                     */
                    bool PathHasBeenSet() const;

                    /**
                     * 获取仅当健康检查类型为 Exec 时有效，表示执行的脚本内容
                     * @return Exec 仅当健康检查类型为 Exec 时有效，表示执行的脚本内容
                     * 
                     */
                    std::string GetExec() const;

                    /**
                     * 设置仅当健康检查类型为 Exec 时有效，表示执行的脚本内容
                     * @param _exec 仅当健康检查类型为 Exec 时有效，表示执行的脚本内容
                     * 
                     */
                    void SetExec(const std::string& _exec);

                    /**
                     * 判断参数 Exec 是否已赋值
                     * @return Exec 是否已赋值
                     * 
                     */
                    bool ExecHasBeenSet() const;

                    /**
                     * 获取仅当健康检查类型为 HttpGet\TcpSocket 时有效，表示请求路径
                     * @return Port 仅当健康检查类型为 HttpGet\TcpSocket 时有效，表示请求路径
                     * 
                     */
                    int64_t GetPort() const;

                    /**
                     * 设置仅当健康检查类型为 HttpGet\TcpSocket 时有效，表示请求路径
                     * @param _port 仅当健康检查类型为 HttpGet\TcpSocket 时有效，表示请求路径
                     * 
                     */
                    void SetPort(const int64_t& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     * 
                     */
                    bool PortHasBeenSet() const;

                    /**
                     * 获取检查延迟开始时间，单位为秒，默认为 0
                     * @return InitialDelaySeconds 检查延迟开始时间，单位为秒，默认为 0
                     * 
                     */
                    int64_t GetInitialDelaySeconds() const;

                    /**
                     * 设置检查延迟开始时间，单位为秒，默认为 0
                     * @param _initialDelaySeconds 检查延迟开始时间，单位为秒，默认为 0
                     * 
                     */
                    void SetInitialDelaySeconds(const int64_t& _initialDelaySeconds);

                    /**
                     * 判断参数 InitialDelaySeconds 是否已赋值
                     * @return InitialDelaySeconds 是否已赋值
                     * 
                     */
                    bool InitialDelaySecondsHasBeenSet() const;

                    /**
                     * 获取超时时间，单位为秒，默认为 1
                     * @return TimeoutSeconds 超时时间，单位为秒，默认为 1
                     * 
                     */
                    int64_t GetTimeoutSeconds() const;

                    /**
                     * 设置超时时间，单位为秒，默认为 1
                     * @param _timeoutSeconds 超时时间，单位为秒，默认为 1
                     * 
                     */
                    void SetTimeoutSeconds(const int64_t& _timeoutSeconds);

                    /**
                     * 判断参数 TimeoutSeconds 是否已赋值
                     * @return TimeoutSeconds 是否已赋值
                     * 
                     */
                    bool TimeoutSecondsHasBeenSet() const;

                    /**
                     * 获取间隔时间，单位为秒，默认为 10
                     * @return PeriodSeconds 间隔时间，单位为秒，默认为 10
                     * 
                     */
                    int64_t GetPeriodSeconds() const;

                    /**
                     * 设置间隔时间，单位为秒，默认为 10
                     * @param _periodSeconds 间隔时间，单位为秒，默认为 10
                     * 
                     */
                    void SetPeriodSeconds(const int64_t& _periodSeconds);

                    /**
                     * 判断参数 PeriodSeconds 是否已赋值
                     * @return PeriodSeconds 是否已赋值
                     * 
                     */
                    bool PeriodSecondsHasBeenSet() const;

                private:

                    /**
                     * 支持的健康检查类型，如 HttpGet，TcpSocket，Exec
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 仅当健康检查类型为 HttpGet 时有效，表示协议类型，如 HTTP，HTTPS
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * 仅当健康检查类型为 HttpGet 时有效，表示请求路径
                     */
                    std::string m_path;
                    bool m_pathHasBeenSet;

                    /**
                     * 仅当健康检查类型为 Exec 时有效，表示执行的脚本内容
                     */
                    std::string m_exec;
                    bool m_execHasBeenSet;

                    /**
                     * 仅当健康检查类型为 HttpGet\TcpSocket 时有效，表示请求路径
                     */
                    int64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * 检查延迟开始时间，单位为秒，默认为 0
                     */
                    int64_t m_initialDelaySeconds;
                    bool m_initialDelaySecondsHasBeenSet;

                    /**
                     * 超时时间，单位为秒，默认为 1
                     */
                    int64_t m_timeoutSeconds;
                    bool m_timeoutSecondsHasBeenSet;

                    /**
                     * 间隔时间，单位为秒，默认为 10
                     */
                    int64_t m_periodSeconds;
                    bool m_periodSecondsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEM_V20201221_MODEL_HEALTHCHECKCONFIG_H_
