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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_CREATEOUTPUTSRTSETTINGSDESTINATIONS_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_CREATEOUTPUTSRTSETTINGSDESTINATIONS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * 创建媒体传输流的输出SRT的目标地址。
                */
                class CreateOutputSRTSettingsDestinations : public AbstractModel
                {
                public:
                    CreateOutputSRTSettingsDestinations();
                    ~CreateOutputSRTSettingsDestinations() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取输出的IP或域名。
                     * @return Ip 输出的IP或域名。
                     * 
                     */
                    std::string GetIp() const;

                    /**
                     * 设置输出的IP或域名。
                     * @param _ip 输出的IP或域名。
                     * 
                     */
                    void SetIp(const std::string& _ip);

                    /**
                     * 判断参数 Ip 是否已赋值
                     * @return Ip 是否已赋值
                     * 
                     */
                    bool IpHasBeenSet() const;

                    /**
                     * 获取输出的端口。
                     * @return Port 输出的端口。
                     * 
                     */
                    int64_t GetPort() const;

                    /**
                     * 设置输出的端口。
                     * @param _port 输出的端口。
                     * 
                     */
                    void SetPort(const int64_t& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     * 
                     */
                    bool PortHasBeenSet() const;

                private:

                    /**
                     * 输出的IP或域名。
                     */
                    std::string m_ip;
                    bool m_ipHasBeenSet;

                    /**
                     * 输出的端口。
                     */
                    int64_t m_port;
                    bool m_portHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_CREATEOUTPUTSRTSETTINGSDESTINATIONS_H_
