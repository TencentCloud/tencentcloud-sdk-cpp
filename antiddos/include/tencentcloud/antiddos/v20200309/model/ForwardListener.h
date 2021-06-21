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

#ifndef TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_FORWARDLISTENER_H_
#define TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_FORWARDLISTENER_H_

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
                * 转发监听器
                */
                class ForwardListener : public AbstractModel
                {
                public:
                    ForwardListener();
                    ~ForwardListener() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取转发监听端口，取值1~65535
                     * @return FrontendPort 转发监听端口，取值1~65535
                     */
                    int64_t GetFrontendPort() const;

                    /**
                     * 设置转发监听端口，取值1~65535
                     * @param FrontendPort 转发监听端口，取值1~65535
                     */
                    void SetFrontendPort(const int64_t& _frontendPort);

                    /**
                     * 判断参数 FrontendPort 是否已赋值
                     * @return FrontendPort 是否已赋值
                     */
                    bool FrontendPortHasBeenSet() const;

                    /**
                     * 获取转发协议，取值[
TCP
UDP
]
                     * @return ForwardProtocol 转发协议，取值[
TCP
UDP
]
                     */
                    std::string GetForwardProtocol() const;

                    /**
                     * 设置转发协议，取值[
TCP
UDP
]
                     * @param ForwardProtocol 转发协议，取值[
TCP
UDP
]
                     */
                    void SetForwardProtocol(const std::string& _forwardProtocol);

                    /**
                     * 判断参数 ForwardProtocol 是否已赋值
                     * @return ForwardProtocol 是否已赋值
                     */
                    bool ForwardProtocolHasBeenSet() const;

                private:

                    /**
                     * 转发监听端口，取值1~65535
                     */
                    int64_t m_frontendPort;
                    bool m_frontendPortHasBeenSet;

                    /**
                     * 转发协议，取值[
TCP
UDP
]
                     */
                    std::string m_forwardProtocol;
                    bool m_forwardProtocolHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_FORWARDLISTENER_H_
