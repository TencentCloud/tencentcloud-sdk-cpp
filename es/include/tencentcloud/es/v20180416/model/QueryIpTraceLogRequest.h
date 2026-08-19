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

#ifndef TENCENTCLOUD_ES_V20180416_MODEL_QUERYIPTRACELOGREQUEST_H_
#define TENCENTCLOUD_ES_V20180416_MODEL_QUERYIPTRACELOGREQUEST_H_

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
                * QueryIpTraceLog请求参数结构体
                */
                class QueryIpTraceLogRequest : public AbstractModel
                {
                public:
                    QueryIpTraceLogRequest();
                    ~QueryIpTraceLogRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>ES集群ID</p>
                     * @return InstanceId <p>ES集群ID</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>ES集群ID</p>
                     * @param _instanceId <p>ES集群ID</p>
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
                     * 获取<p>开始时间</p>
                     * @return StartTime <p>开始时间</p>
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置<p>开始时间</p>
                     * @param _startTime <p>开始时间</p>
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
                     * 获取<p>结束时间</p>
                     * @return EndTime <p>结束时间</p>
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置<p>结束时间</p>
                     * @param _endTime <p>结束时间</p>
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
                     * 获取<p>起始偏移量</p>
                     * @return Offset <p>起始偏移量</p>
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置<p>起始偏移量</p>
                     * @param _offset <p>起始偏移量</p>
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
                     * 获取<p>数据条数</p>
                     * @return Limit <p>数据条数</p>
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置<p>数据条数</p>
                     * @param _limit <p>数据条数</p>
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
                     * 获取<p>访问IP</p>
                     * @return RemoteIp <p>访问IP</p>
                     * 
                     */
                    std::vector<std::string> GetRemoteIp() const;

                    /**
                     * 设置<p>访问IP</p>
                     * @param _remoteIp <p>访问IP</p>
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
                     * 获取<p>Request/Response 请求/返回, 非必填</p>
                     * @return TraceType <p>Request/Response 请求/返回, 非必填</p>
                     * 
                     */
                    std::vector<std::string> GetTraceType() const;

                    /**
                     * 设置<p>Request/Response 请求/返回, 非必填</p>
                     * @param _traceType <p>Request/Response 请求/返回, 非必填</p>
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
                     * 获取<p>Public/Private 公网访问/内网访问, 非必填</p>
                     * @return NetType <p>Public/Private 公网访问/内网访问, 非必填</p>
                     * 
                     */
                    std::vector<std::string> GetNetType() const;

                    /**
                     * 设置<p>Public/Private 公网访问/内网访问, 非必填</p>
                     * @param _netType <p>Public/Private 公网访问/内网访问, 非必填</p>
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
                     * 获取<p>POST/GET/PUT/DELETE/HEAD/OPTIONS/PATCH/CONNECT/TRACE/CONNECT等, 非必填</p>
                     * @return ReqTypeOrRspStatus <p>POST/GET/PUT/DELETE/HEAD/OPTIONS/PATCH/CONNECT/TRACE/CONNECT等, 非必填</p>
                     * 
                     */
                    std::vector<std::string> GetReqTypeOrRspStatus() const;

                    /**
                     * 设置<p>POST/GET/PUT/DELETE/HEAD/OPTIONS/PATCH/CONNECT/TRACE/CONNECT等, 非必填</p>
                     * @param _reqTypeOrRspStatus <p>POST/GET/PUT/DELETE/HEAD/OPTIONS/PATCH/CONNECT/TRACE/CONNECT等, 非必填</p>
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
                     * 获取<p>关键字模糊查询，支持Lucene Query String</p>
                     * @return SearchKey <p>关键字模糊查询，支持Lucene Query String</p>
                     * 
                     */
                    std::string GetSearchKey() const;

                    /**
                     * 设置<p>关键字模糊查询，支持Lucene Query String</p>
                     * @param _searchKey <p>关键字模糊查询，支持Lucene Query String</p>
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
                     * 获取<p>Uri搜索</p>
                     * @return Uri <p>Uri搜索</p>
                     * 
                     */
                    std::string GetUri() const;

                    /**
                     * 设置<p>Uri搜索</p>
                     * @param _uri <p>Uri搜索</p>
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
                     * 获取<p>集群节点IP</p>
                     * @return NodeIp <p>集群节点IP</p>
                     * 
                     */
                    std::vector<std::string> GetNodeIp() const;

                    /**
                     * 设置<p>集群节点IP</p>
                     * @param _nodeIp <p>集群节点IP</p>
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
                     * <p>ES集群ID</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>开始时间</p>
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>结束时间</p>
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <p>起始偏移量</p>
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>数据条数</p>
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>访问IP</p>
                     */
                    std::vector<std::string> m_remoteIp;
                    bool m_remoteIpHasBeenSet;

                    /**
                     * <p>Request/Response 请求/返回, 非必填</p>
                     */
                    std::vector<std::string> m_traceType;
                    bool m_traceTypeHasBeenSet;

                    /**
                     * <p>Public/Private 公网访问/内网访问, 非必填</p>
                     */
                    std::vector<std::string> m_netType;
                    bool m_netTypeHasBeenSet;

                    /**
                     * <p>POST/GET/PUT/DELETE/HEAD/OPTIONS/PATCH/CONNECT/TRACE/CONNECT等, 非必填</p>
                     */
                    std::vector<std::string> m_reqTypeOrRspStatus;
                    bool m_reqTypeOrRspStatusHasBeenSet;

                    /**
                     * <p>关键字模糊查询，支持Lucene Query String</p>
                     */
                    std::string m_searchKey;
                    bool m_searchKeyHasBeenSet;

                    /**
                     * <p>Uri搜索</p>
                     */
                    std::string m_uri;
                    bool m_uriHasBeenSet;

                    /**
                     * <p>集群节点IP</p>
                     */
                    std::vector<std::string> m_nodeIp;
                    bool m_nodeIpHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20180416_MODEL_QUERYIPTRACELOGREQUEST_H_
