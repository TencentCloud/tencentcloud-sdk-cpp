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

#ifndef TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_RAWINFO_H_
#define TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_RAWINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Weilingwith
    {
        namespace V20230427
        {
            namespace Model
            {
                /**
                * 视频流Raw协议信息
                */
                class RawInfo : public AbstractModel
                {
                public:
                    RawInfo();
                    ~RawInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取加密向量（如果视频网关选择流为非加密传输这个参数可忽略）
                     * @return SM4Vector 加密向量（如果视频网关选择流为非加密传输这个参数可忽略）
                     * 
                     */
                    std::string GetSM4Vector() const;

                    /**
                     * 设置加密向量（如果视频网关选择流为非加密传输这个参数可忽略）
                     * @param _sM4Vector 加密向量（如果视频网关选择流为非加密传输这个参数可忽略）
                     * 
                     */
                    void SetSM4Vector(const std::string& _sM4Vector);

                    /**
                     * 判断参数 SM4Vector 是否已赋值
                     * @return SM4Vector 是否已赋值
                     * 
                     */
                    bool SM4VectorHasBeenSet() const;

                    /**
                     * 获取专线ip (非专线接入可忽略)
                     * @return NATIP 专线ip (非专线接入可忽略)
                     * 
                     */
                    std::string GetNATIP() const;

                    /**
                     * 设置专线ip (非专线接入可忽略)
                     * @param _nATIP 专线ip (非专线接入可忽略)
                     * 
                     */
                    void SetNATIP(const std::string& _nATIP);

                    /**
                     * 判断参数 NATIP 是否已赋值
                     * @return NATIP 是否已赋值
                     * 
                     */
                    bool NATIPHasBeenSet() const;

                    /**
                     * 获取客户端握手鉴权参数
                     * @return StreamToken 客户端握手鉴权参数
                     * 
                     */
                    std::string GetStreamToken() const;

                    /**
                     * 设置客户端握手鉴权参数
                     * @param _streamToken 客户端握手鉴权参数
                     * 
                     */
                    void SetStreamToken(const std::string& _streamToken);

                    /**
                     * 判断参数 StreamToken 是否已赋值
                     * @return StreamToken 是否已赋值
                     * 
                     */
                    bool StreamTokenHasBeenSet() const;

                    /**
                     * 获取拉流端口
                     * @return Port 拉流端口
                     * 
                     */
                    int64_t GetPort() const;

                    /**
                     * 设置拉流端口
                     * @param _port 拉流端口
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
                     * 获取视频流加密key,目前为AES128加密KEY（如果视频网关选择流为非加密传输这个参数可忽略）
                     * @return StreamEnKey 视频流加密key,目前为AES128加密KEY（如果视频网关选择流为非加密传输这个参数可忽略）
                     * 
                     */
                    std::string GetStreamEnKey() const;

                    /**
                     * 设置视频流加密key,目前为AES128加密KEY（如果视频网关选择流为非加密传输这个参数可忽略）
                     * @param _streamEnKey 视频流加密key,目前为AES128加密KEY（如果视频网关选择流为非加密传输这个参数可忽略）
                     * 
                     */
                    void SetStreamEnKey(const std::string& _streamEnKey);

                    /**
                     * 判断参数 StreamEnKey 是否已赋值
                     * @return StreamEnKey 是否已赋值
                     * 
                     */
                    bool StreamEnKeyHasBeenSet() const;

                    /**
                     * 获取拉流公网地址（非公网接入时，这个地址是内网地址）
                     * @return IP 拉流公网地址（非公网接入时，这个地址是内网地址）
                     * 
                     */
                    std::string GetIP() const;

                    /**
                     * 设置拉流公网地址（非公网接入时，这个地址是内网地址）
                     * @param _iP 拉流公网地址（非公网接入时，这个地址是内网地址）
                     * 
                     */
                    void SetIP(const std::string& _iP);

                    /**
                     * 判断参数 IP 是否已赋值
                     * @return IP 是否已赋值
                     * 
                     */
                    bool IPHasBeenSet() const;

                    /**
                     * 获取拉流内网地址
                     * @return InnerIP 拉流内网地址
                     * 
                     */
                    std::string GetInnerIP() const;

                    /**
                     * 设置拉流内网地址
                     * @param _innerIP 拉流内网地址
                     * 
                     */
                    void SetInnerIP(const std::string& _innerIP);

                    /**
                     * 判断参数 InnerIP 是否已赋值
                     * @return InnerIP 是否已赋值
                     * 
                     */
                    bool InnerIPHasBeenSet() const;

                private:

                    /**
                     * 加密向量（如果视频网关选择流为非加密传输这个参数可忽略）
                     */
                    std::string m_sM4Vector;
                    bool m_sM4VectorHasBeenSet;

                    /**
                     * 专线ip (非专线接入可忽略)
                     */
                    std::string m_nATIP;
                    bool m_nATIPHasBeenSet;

                    /**
                     * 客户端握手鉴权参数
                     */
                    std::string m_streamToken;
                    bool m_streamTokenHasBeenSet;

                    /**
                     * 拉流端口
                     */
                    int64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * 视频流加密key,目前为AES128加密KEY（如果视频网关选择流为非加密传输这个参数可忽略）
                     */
                    std::string m_streamEnKey;
                    bool m_streamEnKeyHasBeenSet;

                    /**
                     * 拉流公网地址（非公网接入时，这个地址是内网地址）
                     */
                    std::string m_iP;
                    bool m_iPHasBeenSet;

                    /**
                     * 拉流内网地址
                     */
                    std::string m_innerIP;
                    bool m_innerIPHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_RAWINFO_H_
