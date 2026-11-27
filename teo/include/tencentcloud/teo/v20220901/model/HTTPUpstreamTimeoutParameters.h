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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_HTTPUPSTREAMTIMEOUTPARAMETERS_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_HTTPUPSTREAMTIMEOUTPARAMETERS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * 七层回源超时配置。
                */
                class HTTPUpstreamTimeoutParameters : public AbstractModel
                {
                public:
                    HTTPUpstreamTimeoutParameters();
                    ~HTTPUpstreamTimeoutParameters() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>HTTP 应答超时时间。</p><p>取值范围：[5, 600]</p><p>单位：秒</p><p>默认值：15</p><p>节点把请求发给源站后开始计时，在设定时间内没有收到源站返回的任何数据即判定超时；开始收到响应后，相邻两次收到数据的间隔超过设定值同样判定超时。节点向源站上传请求体时，相邻两次发送数据的间隔也受该值限制。该值不限制整个响应的总耗时，只要源站持续返回数据，大文件下载不会因此中断。<br>注意：该参数未设置时出参不返回。</p>
                     * @return ResponseTimeout <p>HTTP 应答超时时间。</p><p>取值范围：[5, 600]</p><p>单位：秒</p><p>默认值：15</p><p>节点把请求发给源站后开始计时，在设定时间内没有收到源站返回的任何数据即判定超时；开始收到响应后，相邻两次收到数据的间隔超过设定值同样判定超时。节点向源站上传请求体时，相邻两次发送数据的间隔也受该值限制。该值不限制整个响应的总耗时，只要源站持续返回数据，大文件下载不会因此中断。<br>注意：该参数未设置时出参不返回。</p>
                     * 
                     */
                    int64_t GetResponseTimeout() const;

                    /**
                     * 设置<p>HTTP 应答超时时间。</p><p>取值范围：[5, 600]</p><p>单位：秒</p><p>默认值：15</p><p>节点把请求发给源站后开始计时，在设定时间内没有收到源站返回的任何数据即判定超时；开始收到响应后，相邻两次收到数据的间隔超过设定值同样判定超时。节点向源站上传请求体时，相邻两次发送数据的间隔也受该值限制。该值不限制整个响应的总耗时，只要源站持续返回数据，大文件下载不会因此中断。<br>注意：该参数未设置时出参不返回。</p>
                     * @param _responseTimeout <p>HTTP 应答超时时间。</p><p>取值范围：[5, 600]</p><p>单位：秒</p><p>默认值：15</p><p>节点把请求发给源站后开始计时，在设定时间内没有收到源站返回的任何数据即判定超时；开始收到响应后，相邻两次收到数据的间隔超过设定值同样判定超时。节点向源站上传请求体时，相邻两次发送数据的间隔也受该值限制。该值不限制整个响应的总耗时，只要源站持续返回数据，大文件下载不会因此中断。<br>注意：该参数未设置时出参不返回。</p>
                     * 
                     */
                    void SetResponseTimeout(const int64_t& _responseTimeout);

                    /**
                     * 判断参数 ResponseTimeout 是否已赋值
                     * @return ResponseTimeout 是否已赋值
                     * 
                     */
                    bool ResponseTimeoutHasBeenSet() const;

                    /**
                     * 获取<p>回源 TCP 建连超时时间。</p><p>取值范围：[5, 120]</p><p>单位：秒</p><p>默认值：5</p><p>节点向源站发起 TCP 连接后，如果源站在设定时间内没有完成应答，判定本次建连超时。该值只约束 TCP 建连本身；连接建立后等待源站响应的时间由 ResponseTimeout 控制。<br>注意：该参数未设置时出参不返回。</p>
                     * @return TCPConnectTimeout <p>回源 TCP 建连超时时间。</p><p>取值范围：[5, 120]</p><p>单位：秒</p><p>默认值：5</p><p>节点向源站发起 TCP 连接后，如果源站在设定时间内没有完成应答，判定本次建连超时。该值只约束 TCP 建连本身；连接建立后等待源站响应的时间由 ResponseTimeout 控制。<br>注意：该参数未设置时出参不返回。</p>
                     * 
                     */
                    int64_t GetTCPConnectTimeout() const;

                    /**
                     * 设置<p>回源 TCP 建连超时时间。</p><p>取值范围：[5, 120]</p><p>单位：秒</p><p>默认值：5</p><p>节点向源站发起 TCP 连接后，如果源站在设定时间内没有完成应答，判定本次建连超时。该值只约束 TCP 建连本身；连接建立后等待源站响应的时间由 ResponseTimeout 控制。<br>注意：该参数未设置时出参不返回。</p>
                     * @param _tCPConnectTimeout <p>回源 TCP 建连超时时间。</p><p>取值范围：[5, 120]</p><p>单位：秒</p><p>默认值：5</p><p>节点向源站发起 TCP 连接后，如果源站在设定时间内没有完成应答，判定本次建连超时。该值只约束 TCP 建连本身；连接建立后等待源站响应的时间由 ResponseTimeout 控制。<br>注意：该参数未设置时出参不返回。</p>
                     * 
                     */
                    void SetTCPConnectTimeout(const int64_t& _tCPConnectTimeout);

                    /**
                     * 判断参数 TCPConnectTimeout 是否已赋值
                     * @return TCPConnectTimeout 是否已赋值
                     * 
                     */
                    bool TCPConnectTimeoutHasBeenSet() const;

                    /**
                     * 获取<p>回源长连接空闲超时时间。</p><p>取值范围：[5, 600]</p><p>单位：秒</p><p>回源请求完成后，节点与源站之间的连接放回连接池进入空闲状态，如果在设定时间内没有新的回源请求复用这条连接，节点主动关闭连接。该参数只作用于直接连接源站的节点，EdgeOne 节点之间的内部连接不受影响；该参数只对 HTTP/1.x 连接生效，HTTP/2 与 HTTP/3（QUIC）连接不受影响。建议该值小于源站的长连接超时时间（例如 Nginx 的 keepalive_timeout 默认为 75 秒），否则节点可能复用一条已被源站关闭的连接，导致回源失败或重试。<br>注意：该参数未设置时出参不返回。</p>
                     * @return KeepaliveTimeout <p>回源长连接空闲超时时间。</p><p>取值范围：[5, 600]</p><p>单位：秒</p><p>回源请求完成后，节点与源站之间的连接放回连接池进入空闲状态，如果在设定时间内没有新的回源请求复用这条连接，节点主动关闭连接。该参数只作用于直接连接源站的节点，EdgeOne 节点之间的内部连接不受影响；该参数只对 HTTP/1.x 连接生效，HTTP/2 与 HTTP/3（QUIC）连接不受影响。建议该值小于源站的长连接超时时间（例如 Nginx 的 keepalive_timeout 默认为 75 秒），否则节点可能复用一条已被源站关闭的连接，导致回源失败或重试。<br>注意：该参数未设置时出参不返回。</p>
                     * 
                     */
                    int64_t GetKeepaliveTimeout() const;

                    /**
                     * 设置<p>回源长连接空闲超时时间。</p><p>取值范围：[5, 600]</p><p>单位：秒</p><p>回源请求完成后，节点与源站之间的连接放回连接池进入空闲状态，如果在设定时间内没有新的回源请求复用这条连接，节点主动关闭连接。该参数只作用于直接连接源站的节点，EdgeOne 节点之间的内部连接不受影响；该参数只对 HTTP/1.x 连接生效，HTTP/2 与 HTTP/3（QUIC）连接不受影响。建议该值小于源站的长连接超时时间（例如 Nginx 的 keepalive_timeout 默认为 75 秒），否则节点可能复用一条已被源站关闭的连接，导致回源失败或重试。<br>注意：该参数未设置时出参不返回。</p>
                     * @param _keepaliveTimeout <p>回源长连接空闲超时时间。</p><p>取值范围：[5, 600]</p><p>单位：秒</p><p>回源请求完成后，节点与源站之间的连接放回连接池进入空闲状态，如果在设定时间内没有新的回源请求复用这条连接，节点主动关闭连接。该参数只作用于直接连接源站的节点，EdgeOne 节点之间的内部连接不受影响；该参数只对 HTTP/1.x 连接生效，HTTP/2 与 HTTP/3（QUIC）连接不受影响。建议该值小于源站的长连接超时时间（例如 Nginx 的 keepalive_timeout 默认为 75 秒），否则节点可能复用一条已被源站关闭的连接，导致回源失败或重试。<br>注意：该参数未设置时出参不返回。</p>
                     * 
                     */
                    void SetKeepaliveTimeout(const int64_t& _keepaliveTimeout);

                    /**
                     * 判断参数 KeepaliveTimeout 是否已赋值
                     * @return KeepaliveTimeout 是否已赋值
                     * 
                     */
                    bool KeepaliveTimeoutHasBeenSet() const;

                private:

                    /**
                     * <p>HTTP 应答超时时间。</p><p>取值范围：[5, 600]</p><p>单位：秒</p><p>默认值：15</p><p>节点把请求发给源站后开始计时，在设定时间内没有收到源站返回的任何数据即判定超时；开始收到响应后，相邻两次收到数据的间隔超过设定值同样判定超时。节点向源站上传请求体时，相邻两次发送数据的间隔也受该值限制。该值不限制整个响应的总耗时，只要源站持续返回数据，大文件下载不会因此中断。<br>注意：该参数未设置时出参不返回。</p>
                     */
                    int64_t m_responseTimeout;
                    bool m_responseTimeoutHasBeenSet;

                    /**
                     * <p>回源 TCP 建连超时时间。</p><p>取值范围：[5, 120]</p><p>单位：秒</p><p>默认值：5</p><p>节点向源站发起 TCP 连接后，如果源站在设定时间内没有完成应答，判定本次建连超时。该值只约束 TCP 建连本身；连接建立后等待源站响应的时间由 ResponseTimeout 控制。<br>注意：该参数未设置时出参不返回。</p>
                     */
                    int64_t m_tCPConnectTimeout;
                    bool m_tCPConnectTimeoutHasBeenSet;

                    /**
                     * <p>回源长连接空闲超时时间。</p><p>取值范围：[5, 600]</p><p>单位：秒</p><p>回源请求完成后，节点与源站之间的连接放回连接池进入空闲状态，如果在设定时间内没有新的回源请求复用这条连接，节点主动关闭连接。该参数只作用于直接连接源站的节点，EdgeOne 节点之间的内部连接不受影响；该参数只对 HTTP/1.x 连接生效，HTTP/2 与 HTTP/3（QUIC）连接不受影响。建议该值小于源站的长连接超时时间（例如 Nginx 的 keepalive_timeout 默认为 75 秒），否则节点可能复用一条已被源站关闭的连接，导致回源失败或重试。<br>注意：该参数未设置时出参不返回。</p>
                     */
                    int64_t m_keepaliveTimeout;
                    bool m_keepaliveTimeoutHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_HTTPUPSTREAMTIMEOUTPARAMETERS_H_
