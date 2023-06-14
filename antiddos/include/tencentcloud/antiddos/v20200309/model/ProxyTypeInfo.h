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

#ifndef TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_PROXYTYPEINFO_H_
#define TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_PROXYTYPEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Antiddos
    {
        namespace V20200309
        {
            namespace Model
            {
                /**
                * 转发类型
                */
                class ProxyTypeInfo : public AbstractModel
                {
                public:
                    ProxyTypeInfo();
                    ~ProxyTypeInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取转发监听端口列表，端口取值1~65535
                     * @return ProxyPorts 转发监听端口列表，端口取值1~65535
                     * 
                     */
                    std::vector<int64_t> GetProxyPorts() const;

                    /**
                     * 设置转发监听端口列表，端口取值1~65535
                     * @param _proxyPorts 转发监听端口列表，端口取值1~65535
                     * 
                     */
                    void SetProxyPorts(const std::vector<int64_t>& _proxyPorts);

                    /**
                     * 判断参数 ProxyPorts 是否已赋值
                     * @return ProxyPorts 是否已赋值
                     * 
                     */
                    bool ProxyPortsHasBeenSet() const;

                    /**
                     * 获取转发协议，取值[
http(HTTP协议)
https(HTTPS协议)
]
                     * @return ProxyType 转发协议，取值[
http(HTTP协议)
https(HTTPS协议)
]
                     * 
                     */
                    std::string GetProxyType() const;

                    /**
                     * 设置转发协议，取值[
http(HTTP协议)
https(HTTPS协议)
]
                     * @param _proxyType 转发协议，取值[
http(HTTP协议)
https(HTTPS协议)
]
                     * 
                     */
                    void SetProxyType(const std::string& _proxyType);

                    /**
                     * 判断参数 ProxyType 是否已赋值
                     * @return ProxyType 是否已赋值
                     * 
                     */
                    bool ProxyTypeHasBeenSet() const;

                private:

                    /**
                     * 转发监听端口列表，端口取值1~65535
                     */
                    std::vector<int64_t> m_proxyPorts;
                    bool m_proxyPortsHasBeenSet;

                    /**
                     * 转发协议，取值[
http(HTTP协议)
https(HTTPS协议)
]
                     */
                    std::string m_proxyType;
                    bool m_proxyTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_PROXYTYPEINFO_H_
