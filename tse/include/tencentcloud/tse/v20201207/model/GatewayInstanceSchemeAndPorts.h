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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_GATEWAYINSTANCESCHEMEANDPORTS_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_GATEWAYINSTANCESCHEMEANDPORTS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tse
    {
        namespace V20201207
        {
            namespace Model
            {
                /**
                * 网关实例协议端口列表
                */
                class GatewayInstanceSchemeAndPorts : public AbstractModel
                {
                public:
                    GatewayInstanceSchemeAndPorts();
                    ~GatewayInstanceSchemeAndPorts() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取端口协议，可选HTTP、HTTPS、TCP和UDP
                     * @return Scheme 端口协议，可选HTTP、HTTPS、TCP和UDP
                     * 
                     */
                    std::string GetScheme() const;

                    /**
                     * 设置端口协议，可选HTTP、HTTPS、TCP和UDP
                     * @param _scheme 端口协议，可选HTTP、HTTPS、TCP和UDP
                     * 
                     */
                    void SetScheme(const std::string& _scheme);

                    /**
                     * 判断参数 Scheme 是否已赋值
                     * @return Scheme 是否已赋值
                     * 
                     */
                    bool SchemeHasBeenSet() const;

                    /**
                     * 获取端口列表
                     * @return PortList 端口列表
                     * 
                     */
                    std::vector<uint64_t> GetPortList() const;

                    /**
                     * 设置端口列表
                     * @param _portList 端口列表
                     * 
                     */
                    void SetPortList(const std::vector<uint64_t>& _portList);

                    /**
                     * 判断参数 PortList 是否已赋值
                     * @return PortList 是否已赋值
                     * 
                     */
                    bool PortListHasBeenSet() const;

                private:

                    /**
                     * 端口协议，可选HTTP、HTTPS、TCP和UDP
                     */
                    std::string m_scheme;
                    bool m_schemeHasBeenSet;

                    /**
                     * 端口列表
                     */
                    std::vector<uint64_t> m_portList;
                    bool m_portListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_GATEWAYINSTANCESCHEMEANDPORTS_H_
