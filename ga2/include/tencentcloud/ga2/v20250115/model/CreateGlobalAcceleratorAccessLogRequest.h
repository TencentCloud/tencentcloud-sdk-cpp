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

#ifndef TENCENTCLOUD_GA2_V20250115_MODEL_CREATEGLOBALACCELERATORACCESSLOGREQUEST_H_
#define TENCENTCLOUD_GA2_V20250115_MODEL_CREATEGLOBALACCELERATORACCESSLOGREQUEST_H_

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
                * CreateGlobalAcceleratorAccessLog请求参数结构体
                */
                class CreateGlobalAcceleratorAccessLogRequest : public AbstractModel
                {
                public:
                    CreateGlobalAcceleratorAccessLogRequest();
                    ~CreateGlobalAcceleratorAccessLogRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>GA示例唯一Id</p>
                     * @return GlobalAcceleratorId <p>GA示例唯一Id</p>
                     * 
                     */
                    std::string GetGlobalAcceleratorId() const;

                    /**
                     * 设置<p>GA示例唯一Id</p>
                     * @param _globalAcceleratorId <p>GA示例唯一Id</p>
                     * 
                     */
                    void SetGlobalAcceleratorId(const std::string& _globalAcceleratorId);

                    /**
                     * 判断参数 GlobalAcceleratorId 是否已赋值
                     * @return GlobalAcceleratorId 是否已赋值
                     * 
                     */
                    bool GlobalAcceleratorIdHasBeenSet() const;

                    /**
                     * 获取<p>监听器Id</p>
                     * @return ListenerId <p>监听器Id</p>
                     * 
                     */
                    std::string GetListenerId() const;

                    /**
                     * 设置<p>监听器Id</p>
                     * @param _listenerId <p>监听器Id</p>
                     * 
                     */
                    void SetListenerId(const std::string& _listenerId);

                    /**
                     * 判断参数 ListenerId 是否已赋值
                     * @return ListenerId 是否已赋值
                     * 
                     */
                    bool ListenerIdHasBeenSet() const;

                    /**
                     * 获取<p>终端节点组Id</p>
                     * @return EndpointGroupId <p>终端节点组Id</p>
                     * 
                     */
                    std::string GetEndpointGroupId() const;

                    /**
                     * 设置<p>终端节点组Id</p>
                     * @param _endpointGroupId <p>终端节点组Id</p>
                     * 
                     */
                    void SetEndpointGroupId(const std::string& _endpointGroupId);

                    /**
                     * 判断参数 EndpointGroupId 是否已赋值
                     * @return EndpointGroupId 是否已赋值
                     * 
                     */
                    bool EndpointGroupIdHasBeenSet() const;

                    /**
                     * 获取<p>日志集所在地域</p>
                     * @return CloudRegion <p>日志集所在地域</p>
                     * 
                     */
                    std::string GetCloudRegion() const;

                    /**
                     * 设置<p>日志集所在地域</p>
                     * @param _cloudRegion <p>日志集所在地域</p>
                     * 
                     */
                    void SetCloudRegion(const std::string& _cloudRegion);

                    /**
                     * 判断参数 CloudRegion 是否已赋值
                     * @return CloudRegion 是否已赋值
                     * 
                     */
                    bool CloudRegionHasBeenSet() const;

                    /**
                     * 获取<p>日志主题Id</p>
                     * @return CloudLogId <p>日志主题Id</p>
                     * 
                     */
                    std::string GetCloudLogId() const;

                    /**
                     * 设置<p>日志主题Id</p>
                     * @param _cloudLogId <p>日志主题Id</p>
                     * 
                     */
                    void SetCloudLogId(const std::string& _cloudLogId);

                    /**
                     * 判断参数 CloudLogId 是否已赋值
                     * @return CloudLogId 是否已赋值
                     * 
                     */
                    bool CloudLogIdHasBeenSet() const;

                    /**
                     * 获取<p>日志集Id</p>
                     * @return CloudLogSetId <p>日志集Id</p>
                     * 
                     */
                    std::string GetCloudLogSetId() const;

                    /**
                     * 设置<p>日志集Id</p>
                     * @param _cloudLogSetId <p>日志集Id</p>
                     * 
                     */
                    void SetCloudLogSetId(const std::string& _cloudLogSetId);

                    /**
                     * 判断参数 CloudLogSetId 是否已赋值
                     * @return CloudLogSetId 是否已赋值
                     * 
                     */
                    bool CloudLogSetIdHasBeenSet() const;

                    /**
                     * 获取<p>指定采集字段</p><p>枚举值：</p><ul><li>session_time： 四层，会话持续时间</li><li>upstream_bytes_received： 四层、七层，从终端节点接收的字节数</li><li>upstream_bytes_sent： 四层、七层，发送给终端节点的字节数</li><li>request_method： 七层，GET/POST</li><li>scheme： 七层，http/https</li><li>request_uri： 七层，客户端原始请求的URI</li><li>uri： 七层，当前请求的URI</li><li>host： 七层，客户端访问域名（七层）</li><li>remote_user： 七层，基本认证时的用户名（未认证时为&quot;-&quot;）</li><li>http_user_agent： 七层，客户端浏览器标识</li><li>http_referer： 七层，请求来源URL（直接从地址栏访问时为&quot;-&quot;）</li><li>http_x_forwarded_for： 七层，记录客户端原始IP及经过的代理服务器IP链</li><li>content_type： 七层，content_type</li><li>body_bytes_sent： 七层，发送给客户端的http body大小，不包含header</li><li>request_time： 七层，从接收到客户端请求的第一个字节到发送完响应最后一个字节之间的总时间（单位：秒）</li><li>sent_http_content_type： 七层，响应内容类型</li><li>upstream_header_time： 七层，终端节点的响应头到达时间</li><li>upstream_response_length： 七层，终端节点返回的响应体长度</li><li>upstream_response_time： 七层，终端节点完整响应时间</li><li>upstream_status： 七层，终端节点返回的HTTP状态码</li></ul>
                     * @return FieldKeys <p>指定采集字段</p><p>枚举值：</p><ul><li>session_time： 四层，会话持续时间</li><li>upstream_bytes_received： 四层、七层，从终端节点接收的字节数</li><li>upstream_bytes_sent： 四层、七层，发送给终端节点的字节数</li><li>request_method： 七层，GET/POST</li><li>scheme： 七层，http/https</li><li>request_uri： 七层，客户端原始请求的URI</li><li>uri： 七层，当前请求的URI</li><li>host： 七层，客户端访问域名（七层）</li><li>remote_user： 七层，基本认证时的用户名（未认证时为&quot;-&quot;）</li><li>http_user_agent： 七层，客户端浏览器标识</li><li>http_referer： 七层，请求来源URL（直接从地址栏访问时为&quot;-&quot;）</li><li>http_x_forwarded_for： 七层，记录客户端原始IP及经过的代理服务器IP链</li><li>content_type： 七层，content_type</li><li>body_bytes_sent： 七层，发送给客户端的http body大小，不包含header</li><li>request_time： 七层，从接收到客户端请求的第一个字节到发送完响应最后一个字节之间的总时间（单位：秒）</li><li>sent_http_content_type： 七层，响应内容类型</li><li>upstream_header_time： 七层，终端节点的响应头到达时间</li><li>upstream_response_length： 七层，终端节点返回的响应体长度</li><li>upstream_response_time： 七层，终端节点完整响应时间</li><li>upstream_status： 七层，终端节点返回的HTTP状态码</li></ul>
                     * 
                     */
                    std::vector<std::string> GetFieldKeys() const;

                    /**
                     * 设置<p>指定采集字段</p><p>枚举值：</p><ul><li>session_time： 四层，会话持续时间</li><li>upstream_bytes_received： 四层、七层，从终端节点接收的字节数</li><li>upstream_bytes_sent： 四层、七层，发送给终端节点的字节数</li><li>request_method： 七层，GET/POST</li><li>scheme： 七层，http/https</li><li>request_uri： 七层，客户端原始请求的URI</li><li>uri： 七层，当前请求的URI</li><li>host： 七层，客户端访问域名（七层）</li><li>remote_user： 七层，基本认证时的用户名（未认证时为&quot;-&quot;）</li><li>http_user_agent： 七层，客户端浏览器标识</li><li>http_referer： 七层，请求来源URL（直接从地址栏访问时为&quot;-&quot;）</li><li>http_x_forwarded_for： 七层，记录客户端原始IP及经过的代理服务器IP链</li><li>content_type： 七层，content_type</li><li>body_bytes_sent： 七层，发送给客户端的http body大小，不包含header</li><li>request_time： 七层，从接收到客户端请求的第一个字节到发送完响应最后一个字节之间的总时间（单位：秒）</li><li>sent_http_content_type： 七层，响应内容类型</li><li>upstream_header_time： 七层，终端节点的响应头到达时间</li><li>upstream_response_length： 七层，终端节点返回的响应体长度</li><li>upstream_response_time： 七层，终端节点完整响应时间</li><li>upstream_status： 七层，终端节点返回的HTTP状态码</li></ul>
                     * @param _fieldKeys <p>指定采集字段</p><p>枚举值：</p><ul><li>session_time： 四层，会话持续时间</li><li>upstream_bytes_received： 四层、七层，从终端节点接收的字节数</li><li>upstream_bytes_sent： 四层、七层，发送给终端节点的字节数</li><li>request_method： 七层，GET/POST</li><li>scheme： 七层，http/https</li><li>request_uri： 七层，客户端原始请求的URI</li><li>uri： 七层，当前请求的URI</li><li>host： 七层，客户端访问域名（七层）</li><li>remote_user： 七层，基本认证时的用户名（未认证时为&quot;-&quot;）</li><li>http_user_agent： 七层，客户端浏览器标识</li><li>http_referer： 七层，请求来源URL（直接从地址栏访问时为&quot;-&quot;）</li><li>http_x_forwarded_for： 七层，记录客户端原始IP及经过的代理服务器IP链</li><li>content_type： 七层，content_type</li><li>body_bytes_sent： 七层，发送给客户端的http body大小，不包含header</li><li>request_time： 七层，从接收到客户端请求的第一个字节到发送完响应最后一个字节之间的总时间（单位：秒）</li><li>sent_http_content_type： 七层，响应内容类型</li><li>upstream_header_time： 七层，终端节点的响应头到达时间</li><li>upstream_response_length： 七层，终端节点返回的响应体长度</li><li>upstream_response_time： 七层，终端节点完整响应时间</li><li>upstream_status： 七层，终端节点返回的HTTP状态码</li></ul>
                     * 
                     */
                    void SetFieldKeys(const std::vector<std::string>& _fieldKeys);

                    /**
                     * 判断参数 FieldKeys 是否已赋值
                     * @return FieldKeys 是否已赋值
                     * 
                     */
                    bool FieldKeysHasBeenSet() const;

                    /**
                     * 获取<p>日志描述</p>
                     * @return FlowLogDescription <p>日志描述</p>
                     * 
                     */
                    std::string GetFlowLogDescription() const;

                    /**
                     * 设置<p>日志描述</p>
                     * @param _flowLogDescription <p>日志描述</p>
                     * 
                     */
                    void SetFlowLogDescription(const std::string& _flowLogDescription);

                    /**
                     * 判断参数 FlowLogDescription 是否已赋值
                     * @return FlowLogDescription 是否已赋值
                     * 
                     */
                    bool FlowLogDescriptionHasBeenSet() const;

                private:

                    /**
                     * <p>GA示例唯一Id</p>
                     */
                    std::string m_globalAcceleratorId;
                    bool m_globalAcceleratorIdHasBeenSet;

                    /**
                     * <p>监听器Id</p>
                     */
                    std::string m_listenerId;
                    bool m_listenerIdHasBeenSet;

                    /**
                     * <p>终端节点组Id</p>
                     */
                    std::string m_endpointGroupId;
                    bool m_endpointGroupIdHasBeenSet;

                    /**
                     * <p>日志集所在地域</p>
                     */
                    std::string m_cloudRegion;
                    bool m_cloudRegionHasBeenSet;

                    /**
                     * <p>日志主题Id</p>
                     */
                    std::string m_cloudLogId;
                    bool m_cloudLogIdHasBeenSet;

                    /**
                     * <p>日志集Id</p>
                     */
                    std::string m_cloudLogSetId;
                    bool m_cloudLogSetIdHasBeenSet;

                    /**
                     * <p>指定采集字段</p><p>枚举值：</p><ul><li>session_time： 四层，会话持续时间</li><li>upstream_bytes_received： 四层、七层，从终端节点接收的字节数</li><li>upstream_bytes_sent： 四层、七层，发送给终端节点的字节数</li><li>request_method： 七层，GET/POST</li><li>scheme： 七层，http/https</li><li>request_uri： 七层，客户端原始请求的URI</li><li>uri： 七层，当前请求的URI</li><li>host： 七层，客户端访问域名（七层）</li><li>remote_user： 七层，基本认证时的用户名（未认证时为&quot;-&quot;）</li><li>http_user_agent： 七层，客户端浏览器标识</li><li>http_referer： 七层，请求来源URL（直接从地址栏访问时为&quot;-&quot;）</li><li>http_x_forwarded_for： 七层，记录客户端原始IP及经过的代理服务器IP链</li><li>content_type： 七层，content_type</li><li>body_bytes_sent： 七层，发送给客户端的http body大小，不包含header</li><li>request_time： 七层，从接收到客户端请求的第一个字节到发送完响应最后一个字节之间的总时间（单位：秒）</li><li>sent_http_content_type： 七层，响应内容类型</li><li>upstream_header_time： 七层，终端节点的响应头到达时间</li><li>upstream_response_length： 七层，终端节点返回的响应体长度</li><li>upstream_response_time： 七层，终端节点完整响应时间</li><li>upstream_status： 七层，终端节点返回的HTTP状态码</li></ul>
                     */
                    std::vector<std::string> m_fieldKeys;
                    bool m_fieldKeysHasBeenSet;

                    /**
                     * <p>日志描述</p>
                     */
                    std::string m_flowLogDescription;
                    bool m_flowLogDescriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GA2_V20250115_MODEL_CREATEGLOBALACCELERATORACCESSLOGREQUEST_H_
