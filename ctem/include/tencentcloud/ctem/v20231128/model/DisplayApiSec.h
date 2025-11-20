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
                     * 获取主键ID
                     * @return Id 主键ID
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置主键ID
                     * @param _id 主键ID
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
                     * 获取公共字段
                     * @return DisplayToolCommon 公共字段
                     * 
                     */
                    DisplayToolCommon GetDisplayToolCommon() const;

                    /**
                     * 设置公共字段
                     * @param _displayToolCommon 公共字段
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
                     * 获取Url
                     * @return Url Url
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置Url
                     * @param _url Url
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
                     * 获取Host地址
                     * @return Host Host地址
                     * 
                     */
                    std::string GetHost() const;

                    /**
                     * 设置Host地址
                     * @param _host Host地址
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
                     * 获取Path路径
                     * @return Path Path路径
                     * 
                     */
                    std::string GetPath() const;

                    /**
                     * 设置Path路径
                     * @param _path Path路径
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
                     * 获取方法：POST、GET、DELETE等
                     * @return Method 方法：POST、GET、DELETE等
                     * 
                     */
                    std::string GetMethod() const;

                    /**
                     * 设置方法：POST、GET、DELETE等
                     * @param _method 方法：POST、GET、DELETE等
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
                     * 获取修复状态：unrepaired:未修复，repaired:已修复, ignore:已忽略,checking:复测中
                     * @return Status 修复状态：unrepaired:未修复，repaired:已修复, ignore:已忽略,checking:复测中
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置修复状态：unrepaired:未修复，repaired:已修复, ignore:已忽略,checking:复测中
                     * @param _status 修复状态：unrepaired:未修复，repaired:已修复, ignore:已忽略,checking:复测中
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
                     * 获取状态码
                     * @return Code 状态码
                     * 
                     */
                    int64_t GetCode() const;

                    /**
                     * 设置状态码
                     * @param _code 状态码
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
                     * 获取请求体
                     * @return Request 请求体
                     * 
                     */
                    std::string GetRequest() const;

                    /**
                     * 设置请求体
                     * @param _request 请求体
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
                     * 获取响应体
                     * @return Response 响应体
                     * 
                     */
                    std::string GetResponse() const;

                    /**
                     * 设置响应体
                     * @param _response 响应体
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
                     * 获取是否风险API
                     * @return IsRiskAPI 是否风险API
                     * 
                     */
                    bool GetIsRiskAPI() const;

                    /**
                     * 设置是否风险API
                     * @param _isRiskAPI 是否风险API
                     * 
                     */
                    void SetIsRiskAPI(const bool& _isRiskAPI);

                    /**
                     * 判断参数 IsRiskAPI 是否已赋值
                     * @return IsRiskAPI 是否已赋值
                     * 
                     */
                    bool IsRiskAPIHasBeenSet() const;

                private:

                    /**
                     * 主键ID
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 公共字段
                     */
                    DisplayToolCommon m_displayToolCommon;
                    bool m_displayToolCommonHasBeenSet;

                    /**
                     * Url
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * Host地址
                     */
                    std::string m_host;
                    bool m_hostHasBeenSet;

                    /**
                     * Path路径
                     */
                    std::string m_path;
                    bool m_pathHasBeenSet;

                    /**
                     * 方法：POST、GET、DELETE等
                     */
                    std::string m_method;
                    bool m_methodHasBeenSet;

                    /**
                     * 修复状态：unrepaired:未修复，repaired:已修复, ignore:已忽略,checking:复测中
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 状态码
                     */
                    int64_t m_code;
                    bool m_codeHasBeenSet;

                    /**
                     * 请求体
                     */
                    std::string m_request;
                    bool m_requestHasBeenSet;

                    /**
                     * 响应体
                     */
                    std::string m_response;
                    bool m_responseHasBeenSet;

                    /**
                     * 是否风险API
                     */
                    bool m_isRiskAPI;
                    bool m_isRiskAPIHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CTEM_V20231128_MODEL_DISPLAYAPISEC_H_
