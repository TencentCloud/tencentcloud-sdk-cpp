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

#ifndef TENCENTCLOUD_ES_V20180416_MODEL_IPTRACELOGENTRY_H_
#define TENCENTCLOUD_ES_V20180416_MODEL_IPTRACELOGENTRY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Es
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * IP溯源日志
                */
                class IpTraceLogEntry : public AbstractModel
                {
                public:
                    IpTraceLogEntry();
                    ~IpTraceLogEntry() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取时间
                     * @return Timestamp 时间
                     * 
                     */
                    std::string GetTimestamp() const;

                    /**
                     * 设置时间
                     * @param _timestamp 时间
                     * 
                     */
                    void SetTimestamp(const std::string& _timestamp);

                    /**
                     * 判断参数 Timestamp 是否已赋值
                     * @return Timestamp 是否已赋值
                     * 
                     */
                    bool TimestampHasBeenSet() const;

                    /**
                     * 获取访问IP
                     * @return RemoteIp 访问IP
                     * 
                     */
                    std::string GetRemoteIp() const;

                    /**
                     * 设置访问IP
                     * @param _remoteIp 访问IP
                     * 
                     */
                    void SetRemoteIp(const std::string& _remoteIp);

                    /**
                     * 判断参数 RemoteIp 是否已赋值
                     * @return RemoteIp 是否已赋值
                     * 
                     */
                    bool RemoteIpHasBeenSet() const;

                    /**
                     * 获取溯源类型rsp/req
                     * @return TraceType 溯源类型rsp/req
                     * 
                     */
                    std::string GetTraceType() const;

                    /**
                     * 设置溯源类型rsp/req
                     * @param _traceType 溯源类型rsp/req
                     * 
                     */
                    void SetTraceType(const std::string& _traceType);

                    /**
                     * 判断参数 TraceType 是否已赋值
                     * @return TraceType 是否已赋值
                     * 
                     */
                    bool TraceTypeHasBeenSet() const;

                    /**
                     * 获取访问网络类型，公网/私网
                     * @return NetType 访问网络类型，公网/私网
                     * 
                     */
                    std::string GetNetType() const;

                    /**
                     * 设置访问网络类型，公网/私网
                     * @param _netType 访问网络类型，公网/私网
                     * 
                     */
                    void SetNetType(const std::string& _netType);

                    /**
                     * 判断参数 NetType 是否已赋值
                     * @return NetType 是否已赋值
                     * 
                     */
                    bool NetTypeHasBeenSet() const;

                    /**
                     * 获取原始消息
                     * @return Message 原始消息
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置原始消息
                     * @param _message 原始消息
                     * 
                     */
                    void SetMessage(const std::string& _message);

                    /**
                     * 判断参数 Message 是否已赋值
                     * @return Message 是否已赋值
                     * 
                     */
                    bool MessageHasBeenSet() const;

                    /**
                     * 获取访问uri
                     * @return Uri 访问uri
                     * 
                     */
                    std::string GetUri() const;

                    /**
                     * 设置访问uri
                     * @param _uri 访问uri
                     * 
                     */
                    void SetUri(const std::string& _uri);

                    /**
                     * 判断参数 Uri 是否已赋值
                     * @return Uri 是否已赋值
                     * 
                     */
                    bool UriHasBeenSet() const;

                    /**
                     * 获取公网IP
                     * @return PublicIp 公网IP
                     * 
                     */
                    std::string GetPublicIp() const;

                    /**
                     * 设置公网IP
                     * @param _publicIp 公网IP
                     * 
                     */
                    void SetPublicIp(const std::string& _publicIp);

                    /**
                     * 判断参数 PublicIp 是否已赋值
                     * @return PublicIp 是否已赋值
                     * 
                     */
                    bool PublicIpHasBeenSet() const;

                    /**
                     * 获取请求类型或返回状态
                     * @return ReqTypeOrRspStatus 请求类型或返回状态
                     * 
                     */
                    std::string GetReqTypeOrRspStatus() const;

                    /**
                     * 设置请求类型或返回状态
                     * @param _reqTypeOrRspStatus 请求类型或返回状态
                     * 
                     */
                    void SetReqTypeOrRspStatus(const std::string& _reqTypeOrRspStatus);

                    /**
                     * 判断参数 ReqTypeOrRspStatus 是否已赋值
                     * @return ReqTypeOrRspStatus 是否已赋值
                     * 
                     */
                    bool ReqTypeOrRspStatusHasBeenSet() const;

                    /**
                     * 获取集群节点IP
                     * @return NodeIp 集群节点IP
                     * 
                     */
                    std::string GetNodeIp() const;

                    /**
                     * 设置集群节点IP
                     * @param _nodeIp 集群节点IP
                     * 
                     */
                    void SetNodeIp(const std::string& _nodeIp);

                    /**
                     * 判断参数 NodeIp 是否已赋值
                     * @return NodeIp 是否已赋值
                     * 
                     */
                    bool NodeIpHasBeenSet() const;

                private:

                    /**
                     * 时间
                     */
                    std::string m_timestamp;
                    bool m_timestampHasBeenSet;

                    /**
                     * 访问IP
                     */
                    std::string m_remoteIp;
                    bool m_remoteIpHasBeenSet;

                    /**
                     * 溯源类型rsp/req
                     */
                    std::string m_traceType;
                    bool m_traceTypeHasBeenSet;

                    /**
                     * 访问网络类型，公网/私网
                     */
                    std::string m_netType;
                    bool m_netTypeHasBeenSet;

                    /**
                     * 原始消息
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                    /**
                     * 访问uri
                     */
                    std::string m_uri;
                    bool m_uriHasBeenSet;

                    /**
                     * 公网IP
                     */
                    std::string m_publicIp;
                    bool m_publicIpHasBeenSet;

                    /**
                     * 请求类型或返回状态
                     */
                    std::string m_reqTypeOrRspStatus;
                    bool m_reqTypeOrRspStatusHasBeenSet;

                    /**
                     * 集群节点IP
                     */
                    std::string m_nodeIp;
                    bool m_nodeIpHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20180416_MODEL_IPTRACELOGENTRY_H_
