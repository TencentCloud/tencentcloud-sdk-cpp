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

#ifndef TENCENTCLOUD_IOTVIDEOINDUSTRY_V20201201_MODEL_SERVERCONFIGURATION_H_
#define TENCENTCLOUD_IOTVIDEOINDUSTRY_V20201201_MODEL_SERVERCONFIGURATION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * SIIP服务器相关配置项
                */
                class ServerConfiguration : public AbstractModel
                {
                public:
                    ServerConfiguration();
                    ~ServerConfiguration() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取SIP服务器地址
                     * @return Host SIP服务器地址
                     * 
                     */
                    std::string GetHost() const;

                    /**
                     * 设置SIP服务器地址
                     * @param _host SIP服务器地址
                     * 
                     */
                    void SetHost(const std::string& _host);

                    /**
                     * 判断参数 Host 是否已赋值
                     * @return Host 是否已赋值
                     * 
                     */
                    bool HostHasBeenSet() const;

                    /**
                     * 获取SIP服务器端口
                     * @return Port SIP服务器端口
                     * 
                     */
                    uint64_t GetPort() const;

                    /**
                     * 设置SIP服务器端口
                     * @param _port SIP服务器端口
                     * 
                     */
                    void SetPort(const uint64_t& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     * 
                     */
                    bool PortHasBeenSet() const;

                    /**
                     * 获取SIP服务器编码
                     * @return Serial SIP服务器编码
                     * 
                     */
                    std::string GetSerial() const;

                    /**
                     * 设置SIP服务器编码
                     * @param _serial SIP服务器编码
                     * 
                     */
                    void SetSerial(const std::string& _serial);

                    /**
                     * 判断参数 Serial 是否已赋值
                     * @return Serial 是否已赋值
                     * 
                     */
                    bool SerialHasBeenSet() const;

                    /**
                     * 获取SIP服务器域
                     * @return Realm SIP服务器域
                     * 
                     */
                    std::string GetRealm() const;

                    /**
                     * 设置SIP服务器域
                     * @param _realm SIP服务器域
                     * 
                     */
                    void SetRealm(const std::string& _realm);

                    /**
                     * 判断参数 Realm 是否已赋值
                     * @return Realm 是否已赋值
                     * 
                     */
                    bool RealmHasBeenSet() const;

                private:

                    /**
                     * SIP服务器地址
                     */
                    std::string m_host;
                    bool m_hostHasBeenSet;

                    /**
                     * SIP服务器端口
                     */
                    uint64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * SIP服务器编码
                     */
                    std::string m_serial;
                    bool m_serialHasBeenSet;

                    /**
                     * SIP服务器域
                     */
                    std::string m_realm;
                    bool m_realmHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTVIDEOINDUSTRY_V20201201_MODEL_SERVERCONFIGURATION_H_
