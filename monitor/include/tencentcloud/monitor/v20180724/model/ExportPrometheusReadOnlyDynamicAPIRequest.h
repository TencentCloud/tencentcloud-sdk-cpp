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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_EXPORTPROMETHEUSREADONLYDYNAMICAPIREQUEST_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_EXPORTPROMETHEUSREADONLYDYNAMICAPIREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/monitor/v20180724/model/PrometheusStringKeyValuePair.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * ExportPrometheusReadOnlyDynamicAPI请求参数结构体
                */
                class ExportPrometheusReadOnlyDynamicAPIRequest : public AbstractModel
                {
                public:
                    ExportPrometheusReadOnlyDynamicAPIRequest();
                    ~ExportPrometheusReadOnlyDynamicAPIRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Prometheus 实例 ID
                     * @return InstanceId Prometheus 实例 ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Prometheus 实例 ID
                     * @param _instanceId Prometheus 实例 ID
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
                     * 获取HTTP 方法名 GET/POST/PUT/DELETE 等
                     * @return Method HTTP 方法名 GET/POST/PUT/DELETE 等
                     * 
                     */
                    std::string GetMethod() const;

                    /**
                     * 设置HTTP 方法名 GET/POST/PUT/DELETE 等
                     * @param _method HTTP 方法名 GET/POST/PUT/DELETE 等
                     * 
                     */
                    void SetMethod(const std::string& _method);

                    /**
                     * 判断参数 Method 是否已赋值
                     * @return Method 是否已赋值
                     * 
                     */
                    bool MethodHasBeenSet() const;

                    /**
                     * 获取HTTP 路径（包括 query string）
                     * @return Path HTTP 路径（包括 query string）
                     * 
                     */
                    std::string GetPath() const;

                    /**
                     * 设置HTTP 路径（包括 query string）
                     * @param _path HTTP 路径（包括 query string）
                     * 
                     */
                    void SetPath(const std::string& _path);

                    /**
                     * 判断参数 Path 是否已赋值
                     * @return Path 是否已赋值
                     * 
                     */
                    bool PathHasBeenSet() const;

                    /**
                     * 获取HTTP 请求体，任何数据
                     * @return RequestBody HTTP 请求体，任何数据
                     * 
                     */
                    std::string GetRequestBody() const;

                    /**
                     * 设置HTTP 请求体，任何数据
                     * @param _requestBody HTTP 请求体，任何数据
                     * 
                     */
                    void SetRequestBody(const std::string& _requestBody);

                    /**
                     * 判断参数 RequestBody 是否已赋值
                     * @return RequestBody 是否已赋值
                     * 
                     */
                    bool RequestBodyHasBeenSet() const;

                    /**
                     * 获取HTTP 请求头
                     * @return Headers HTTP 请求头
                     * 
                     */
                    std::vector<PrometheusStringKeyValuePair> GetHeaders() const;

                    /**
                     * 设置HTTP 请求头
                     * @param _headers HTTP 请求头
                     * 
                     */
                    void SetHeaders(const std::vector<PrometheusStringKeyValuePair>& _headers);

                    /**
                     * 判断参数 Headers 是否已赋值
                     * @return Headers 是否已赋值
                     * 
                     */
                    bool HeadersHasBeenSet() const;

                    /**
                     * 获取是否请求自监控数据。自监控仅支持 /api/v1/query 与 /api/v1/query_range 接口。
                     * @return SelfMonitor 是否请求自监控数据。自监控仅支持 /api/v1/query 与 /api/v1/query_range 接口。
                     * 
                     */
                    bool GetSelfMonitor() const;

                    /**
                     * 设置是否请求自监控数据。自监控仅支持 /api/v1/query 与 /api/v1/query_range 接口。
                     * @param _selfMonitor 是否请求自监控数据。自监控仅支持 /api/v1/query 与 /api/v1/query_range 接口。
                     * 
                     */
                    void SetSelfMonitor(const bool& _selfMonitor);

                    /**
                     * 判断参数 SelfMonitor 是否已赋值
                     * @return SelfMonitor 是否已赋值
                     * 
                     */
                    bool SelfMonitorHasBeenSet() const;

                private:

                    /**
                     * Prometheus 实例 ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * HTTP 方法名 GET/POST/PUT/DELETE 等
                     */
                    std::string m_method;
                    bool m_methodHasBeenSet;

                    /**
                     * HTTP 路径（包括 query string）
                     */
                    std::string m_path;
                    bool m_pathHasBeenSet;

                    /**
                     * HTTP 请求体，任何数据
                     */
                    std::string m_requestBody;
                    bool m_requestBodyHasBeenSet;

                    /**
                     * HTTP 请求头
                     */
                    std::vector<PrometheusStringKeyValuePair> m_headers;
                    bool m_headersHasBeenSet;

                    /**
                     * 是否请求自监控数据。自监控仅支持 /api/v1/query 与 /api/v1/query_range 接口。
                     */
                    bool m_selfMonitor;
                    bool m_selfMonitorHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_EXPORTPROMETHEUSREADONLYDYNAMICAPIREQUEST_H_
