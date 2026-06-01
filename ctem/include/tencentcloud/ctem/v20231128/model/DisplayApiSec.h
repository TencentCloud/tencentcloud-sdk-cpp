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

#ifndef TENCENTCLOUD_CTEM_V20231128_MODEL_DISPLAYAPISEC_H_
#define TENCENTCLOUD_CTEM_V20231128_MODEL_DISPLAYAPISEC_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ctem/v20231128/model/DisplayToolCommon.h>


namespace TencentCloud
{
    namespace Ctem
    {
        namespace V20231128
        {
            namespace Model
            {
                /**
                * API安全详情
                */
                class DisplayApiSec : public AbstractModel
                {
                public:
                    DisplayApiSec();
                    ~DisplayApiSec() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>主键ID</p>
                     * @return Id <p>主键ID</p>
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置<p>主键ID</p>
                     * @param _id <p>主键ID</p>
                     * 
                     */
                    void SetId(const int64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取<p>公共字段</p>
                     * @return DisplayToolCommon <p>公共字段</p>
                     * 
                     */
                    DisplayToolCommon GetDisplayToolCommon() const;

                    /**
                     * 设置<p>公共字段</p>
                     * @param _displayToolCommon <p>公共字段</p>
                     * 
                     */
                    void SetDisplayToolCommon(const DisplayToolCommon& _displayToolCommon);

                    /**
                     * 判断参数 DisplayToolCommon 是否已赋值
                     * @return DisplayToolCommon 是否已赋值
                     * 
                     */
                    bool DisplayToolCommonHasBeenSet() const;

                    /**
                     * 获取<p>Url</p>
                     * @return Url <p>Url</p>
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置<p>Url</p>
                     * @param _url <p>Url</p>
                     * 
                     */
                    void SetUrl(const std::string& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     * 
                     */
                    bool UrlHasBeenSet() const;

                    /**
                     * 获取<p>Host地址</p>
                     * @return Host <p>Host地址</p>
                     * 
                     */
                    std::string GetHost() const;

                    /**
                     * 设置<p>Host地址</p>
                     * @param _host <p>Host地址</p>
                     * 
                     */
                    void SetHost(const std::string& _host);

                    /**
                     * 判断参数 Host 是否已赋值
                     * @return Host 是否已赋值
                     * 
                     */
                    bool HostHasBeenSet() const;

                    /**
                     * 获取<p>Path路径</p>
                     * @return Path <p>Path路径</p>
                     * 
                     */
                    std::string GetPath() const;

                    /**
                     * 设置<p>Path路径</p>
                     * @param _path <p>Path路径</p>
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
                     * 获取<p>方法：POST、GET、DELETE等</p>
                     * @return Method <p>方法：POST、GET、DELETE等</p>
                     * 
                     */
                    std::string GetMethod() const;

                    /**
                     * 设置<p>方法：POST、GET、DELETE等</p>
                     * @param _method <p>方法：POST、GET、DELETE等</p>
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
                     * 获取<p>修复状态：unrepaired:未修复，repaired:已修复, ignore:已忽略,checking:复测中</p>
                     * @return Status <p>修复状态：unrepaired:未修复，repaired:已修复, ignore:已忽略,checking:复测中</p>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>修复状态：unrepaired:未修复，repaired:已修复, ignore:已忽略,checking:复测中</p>
                     * @param _status <p>修复状态：unrepaired:未修复，repaired:已修复, ignore:已忽略,checking:复测中</p>
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>状态码</p>
                     * @return Code <p>状态码</p>
                     * 
                     */
                    int64_t GetCode() const;

                    /**
                     * 设置<p>状态码</p>
                     * @param _code <p>状态码</p>
                     * 
                     */
                    void SetCode(const int64_t& _code);

                    /**
                     * 判断参数 Code 是否已赋值
                     * @return Code 是否已赋值
                     * 
                     */
                    bool CodeHasBeenSet() const;

                    /**
                     * 获取<p>请求体</p>
                     * @return Request <p>请求体</p>
                     * 
                     */
                    std::string GetRequest() const;

                    /**
                     * 设置<p>请求体</p>
                     * @param _request <p>请求体</p>
                     * 
                     */
                    void SetRequest(const std::string& _request);

                    /**
                     * 判断参数 Request 是否已赋值
                     * @return Request 是否已赋值
                     * 
                     */
                    bool RequestHasBeenSet() const;

                    /**
                     * 获取<p>响应体</p>
                     * @return Response <p>响应体</p>
                     * 
                     */
                    std::string GetResponse() const;

                    /**
                     * 设置<p>响应体</p>
                     * @param _response <p>响应体</p>
                     * 
                     */
                    void SetResponse(const std::string& _response);

                    /**
                     * 判断参数 Response 是否已赋值
                     * @return Response 是否已赋值
                     * 
                     */
                    bool ResponseHasBeenSet() const;

                    /**
                     * 获取<p>是否风险API</p>
                     * @return IsRiskAPI <p>是否风险API</p>
                     * 
                     */
                    bool GetIsRiskAPI() const;

                    /**
                     * 设置<p>是否风险API</p>
                     * @param _isRiskAPI <p>是否风险API</p>
                     * 
                     */
                    void SetIsRiskAPI(const bool& _isRiskAPI);

                    /**
                     * 判断参数 IsRiskAPI 是否已赋值
                     * @return IsRiskAPI 是否已赋值
                     * 
                     */
                    bool IsRiskAPIHasBeenSet() const;

                    /**
                     * 获取<p>聚合视角下该组真实子项总数；非聚合视角为 0</p>
                     * @return AggregationCount <p>聚合视角下该组真实子项总数；非聚合视角为 0</p>
                     * 
                     */
                    int64_t GetAggregationCount() const;

                    /**
                     * 设置<p>聚合视角下该组真实子项总数；非聚合视角为 0</p>
                     * @param _aggregationCount <p>聚合视角下该组真实子项总数；非聚合视角为 0</p>
                     * 
                     */
                    void SetAggregationCount(const int64_t& _aggregationCount);

                    /**
                     * 判断参数 AggregationCount 是否已赋值
                     * @return AggregationCount 是否已赋值
                     * 
                     */
                    bool AggregationCountHasBeenSet() const;

                private:

                    /**
                     * <p>主键ID</p>
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * <p>公共字段</p>
                     */
                    DisplayToolCommon m_displayToolCommon;
                    bool m_displayToolCommonHasBeenSet;

                    /**
                     * <p>Url</p>
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * <p>Host地址</p>
                     */
                    std::string m_host;
                    bool m_hostHasBeenSet;

                    /**
                     * <p>Path路径</p>
                     */
                    std::string m_path;
                    bool m_pathHasBeenSet;

                    /**
                     * <p>方法：POST、GET、DELETE等</p>
                     */
                    std::string m_method;
                    bool m_methodHasBeenSet;

                    /**
                     * <p>修复状态：unrepaired:未修复，repaired:已修复, ignore:已忽略,checking:复测中</p>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>状态码</p>
                     */
                    int64_t m_code;
                    bool m_codeHasBeenSet;

                    /**
                     * <p>请求体</p>
                     */
                    std::string m_request;
                    bool m_requestHasBeenSet;

                    /**
                     * <p>响应体</p>
                     */
                    std::string m_response;
                    bool m_responseHasBeenSet;

                    /**
                     * <p>是否风险API</p>
                     */
                    bool m_isRiskAPI;
                    bool m_isRiskAPIHasBeenSet;

                    /**
                     * <p>聚合视角下该组真实子项总数；非聚合视角为 0</p>
                     */
                    int64_t m_aggregationCount;
                    bool m_aggregationCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CTEM_V20231128_MODEL_DISPLAYAPISEC_H_
