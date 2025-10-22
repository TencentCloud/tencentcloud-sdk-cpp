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

#ifndef TENCENTCLOUD_ES_V20180416_MODEL_EXPORTIPTRACELOGREQUEST_H_
#define TENCENTCLOUD_ES_V20180416_MODEL_EXPORTIPTRACELOGREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * ExportIpTraceLog请求参数结构体
                */
                class ExportIpTraceLogRequest : public AbstractModel
                {
                public:
                    ExportIpTraceLogRequest();
                    ~ExportIpTraceLogRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取ES集群ID
                     * @return InstanceId ES集群ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置ES集群ID
                     * @param _instanceId ES集群ID
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取开始时间
                     * @return StartTime 开始时间
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置开始时间
                     * @param _startTime 开始时间
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取结束时间
                     * @return EndTime 结束时间
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置结束时间
                     * @param _endTime 结束时间
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取起始偏移量
                     * @return Offset 起始偏移量
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置起始偏移量
                     * @param _offset 起始偏移量
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取数据条数
                     * @return Limit 数据条数
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置数据条数
                     * @param _limit 数据条数
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取访问IP
                     * @return RemoteIp 访问IP
                     * 
                     */
                    std::vector<std::string> GetRemoteIp() const;

                    /**
                     * 设置访问IP
                     * @param _remoteIp 访问IP
                     * 
                     */
                    void SetRemoteIp(const std::vector<std::string>& _remoteIp);

                    /**
                     * 判断参数 RemoteIp 是否已赋值
                     * @return RemoteIp 是否已赋值
                     * 
                     */
                    bool RemoteIpHasBeenSet() const;

                    /**
                     * 获取Request/Response 请求/返回, 非必填
                     * @return TraceType Request/Response 请求/返回, 非必填
                     * 
                     */
                    std::vector<std::string> GetTraceType() const;

                    /**
                     * 设置Request/Response 请求/返回, 非必填
                     * @param _traceType Request/Response 请求/返回, 非必填
                     * 
                     */
                    void SetTraceType(const std::vector<std::string>& _traceType);

                    /**
                     * 判断参数 TraceType 是否已赋值
                     * @return TraceType 是否已赋值
                     * 
                     */
                    bool TraceTypeHasBeenSet() const;

                    /**
                     * 获取Public/Private 公网访问/内网访问, 非必填
                     * @return NetType Public/Private 公网访问/内网访问, 非必填
                     * 
                     */
                    std::vector<std::string> GetNetType() const;

                    /**
                     * 设置Public/Private 公网访问/内网访问, 非必填
                     * @param _netType Public/Private 公网访问/内网访问, 非必填
                     * 
                     */
                    void SetNetType(const std::vector<std::string>& _netType);

                    /**
                     * 判断参数 NetType 是否已赋值
                     * @return NetType 是否已赋值
                     * 
                     */
                    bool NetTypeHasBeenSet() const;

                    /**
                     * 获取POST/GET/PUT/DELETE/HEAD/OPTIONS/PATCH/CONNECT/TRACE/CONNECT等, 非必填
                     * @return ReqTypeOrRspStatus POST/GET/PUT/DELETE/HEAD/OPTIONS/PATCH/CONNECT/TRACE/CONNECT等, 非必填
                     * 
                     */
                    std::vector<std::string> GetReqTypeOrRspStatus() const;

                    /**
                     * 设置POST/GET/PUT/DELETE/HEAD/OPTIONS/PATCH/CONNECT/TRACE/CONNECT等, 非必填
                     * @param _reqTypeOrRspStatus POST/GET/PUT/DELETE/HEAD/OPTIONS/PATCH/CONNECT/TRACE/CONNECT等, 非必填
                     * 
                     */
                    void SetReqTypeOrRspStatus(const std::vector<std::string>& _reqTypeOrRspStatus);

                    /**
                     * 判断参数 ReqTypeOrRspStatus 是否已赋值
                     * @return ReqTypeOrRspStatus 是否已赋值
                     * 
                     */
                    bool ReqTypeOrRspStatusHasBeenSet() const;

                    /**
                     * 获取关键字模糊查询，支持Lucene Query String
                     * @return SearchKey 关键字模糊查询，支持Lucene Query String
                     * 
                     */
                    std::string GetSearchKey() const;

                    /**
                     * 设置关键字模糊查询，支持Lucene Query String
                     * @param _searchKey 关键字模糊查询，支持Lucene Query String
                     * 
                     */
                    void SetSearchKey(const std::string& _searchKey);

                    /**
                     * 判断参数 SearchKey 是否已赋值
                     * @return SearchKey 是否已赋值
                     * 
                     */
                    bool SearchKeyHasBeenSet() const;

                    /**
                     * 获取uri搜索
                     * @return Uri uri搜索
                     * 
                     */
                    std::string GetUri() const;

                    /**
                     * 设置uri搜索
                     * @param _uri uri搜索
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
                     * 获取集群节点IP
                     * @return NodeIp 集群节点IP
                     * 
                     */
                    std::vector<std::string> GetNodeIp() const;

                    /**
                     * 设置集群节点IP
                     * @param _nodeIp 集群节点IP
                     * 
                     */
                    void SetNodeIp(const std::vector<std::string>& _nodeIp);

                    /**
                     * 判断参数 NodeIp 是否已赋值
                     * @return NodeIp 是否已赋值
                     * 
                     */
                    bool NodeIpHasBeenSet() const;

                private:

                    /**
                     * ES集群ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 开始时间
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 结束时间
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 起始偏移量
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 数据条数
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 访问IP
                     */
                    std::vector<std::string> m_remoteIp;
                    bool m_remoteIpHasBeenSet;

                    /**
                     * Request/Response 请求/返回, 非必填
                     */
                    std::vector<std::string> m_traceType;
                    bool m_traceTypeHasBeenSet;

                    /**
                     * Public/Private 公网访问/内网访问, 非必填
                     */
                    std::vector<std::string> m_netType;
                    bool m_netTypeHasBeenSet;

                    /**
                     * POST/GET/PUT/DELETE/HEAD/OPTIONS/PATCH/CONNECT/TRACE/CONNECT等, 非必填
                     */
                    std::vector<std::string> m_reqTypeOrRspStatus;
                    bool m_reqTypeOrRspStatusHasBeenSet;

                    /**
                     * 关键字模糊查询，支持Lucene Query String
                     */
                    std::string m_searchKey;
                    bool m_searchKeyHasBeenSet;

                    /**
                     * uri搜索
                     */
                    std::string m_uri;
                    bool m_uriHasBeenSet;

                    /**
                     * 集群节点IP
                     */
                    std::vector<std::string> m_nodeIp;
                    bool m_nodeIpHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20180416_MODEL_EXPORTIPTRACELOGREQUEST_H_
