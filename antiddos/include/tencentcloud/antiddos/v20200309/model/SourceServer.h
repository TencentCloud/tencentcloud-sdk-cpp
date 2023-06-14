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

#ifndef TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_SOURCESERVER_H_
#define TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_SOURCESERVER_H_

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
                * 源站信息
                */
                class SourceServer : public AbstractModel
                {
                public:
                    SourceServer();
                    ~SourceServer() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取源站的地址（IP或者域名）
                     * @return RealServer 源站的地址（IP或者域名）
                     * 
                     */
                    std::string GetRealServer() const;

                    /**
                     * 设置源站的地址（IP或者域名）
                     * @param _realServer 源站的地址（IP或者域名）
                     * 
                     */
                    void SetRealServer(const std::string& _realServer);

                    /**
                     * 判断参数 RealServer 是否已赋值
                     * @return RealServer 是否已赋值
                     * 
                     */
                    bool RealServerHasBeenSet() const;

                    /**
                     * 获取源站的地址类型，取值[
1(域名地址)
2(IP地址)
]
                     * @return RsType 源站的地址类型，取值[
1(域名地址)
2(IP地址)
]
                     * 
                     */
                    int64_t GetRsType() const;

                    /**
                     * 设置源站的地址类型，取值[
1(域名地址)
2(IP地址)
]
                     * @param _rsType 源站的地址类型，取值[
1(域名地址)
2(IP地址)
]
                     * 
                     */
                    void SetRsType(const int64_t& _rsType);

                    /**
                     * 判断参数 RsType 是否已赋值
                     * @return RsType 是否已赋值
                     * 
                     */
                    bool RsTypeHasBeenSet() const;

                    /**
                     * 获取源站的回源权重，取值1~100
                     * @return Weight 源站的回源权重，取值1~100
                     * 
                     */
                    int64_t GetWeight() const;

                    /**
                     * 设置源站的回源权重，取值1~100
                     * @param _weight 源站的回源权重，取值1~100
                     * 
                     */
                    void SetWeight(const int64_t& _weight);

                    /**
                     * 判断参数 Weight 是否已赋值
                     * @return Weight 是否已赋值
                     * 
                     */
                    bool WeightHasBeenSet() const;

                    /**
                     * 获取端口号：0~65535
                     * @return Port 端口号：0~65535
                     * 
                     */
                    int64_t GetPort() const;

                    /**
                     * 设置端口号：0~65535
                     * @param _port 端口号：0~65535
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
                     * 源站的地址（IP或者域名）
                     */
                    std::string m_realServer;
                    bool m_realServerHasBeenSet;

                    /**
                     * 源站的地址类型，取值[
1(域名地址)
2(IP地址)
]
                     */
                    int64_t m_rsType;
                    bool m_rsTypeHasBeenSet;

                    /**
                     * 源站的回源权重，取值1~100
                     */
                    int64_t m_weight;
                    bool m_weightHasBeenSet;

                    /**
                     * 端口号：0~65535
                     */
                    int64_t m_port;
                    bool m_portHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_SOURCESERVER_H_
