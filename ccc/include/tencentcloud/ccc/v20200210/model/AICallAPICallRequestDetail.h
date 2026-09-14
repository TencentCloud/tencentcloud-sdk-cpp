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

#ifndef TENCENTCLOUD_CCC_V20200210_MODEL_AICALLAPICALLREQUESTDETAIL_H_
#define TENCENTCLOUD_CCC_V20200210_MODEL_AICALLAPICALLREQUESTDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ccc
    {
        namespace V20200210
        {
            namespace Model
            {
                /**
                * 接口调用的请求详情
                */
                class AICallAPICallRequestDetail : public AbstractModel
                {
                public:
                    AICallAPICallRequestDetail();
                    ~AICallAPICallRequestDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>HTTP 请求方法，如 GET、POST。</p>
                     * @return Method <p>HTTP 请求方法，如 GET、POST。</p>
                     * 
                     */
                    std::string GetMethod() const;

                    /**
                     * 设置<p>HTTP 请求方法，如 GET、POST。</p>
                     * @param _method <p>HTTP 请求方法，如 GET、POST。</p>
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
                     * 获取<p>请求地址。</p>
                     * @return URL <p>请求地址。</p>
                     * 
                     */
                    std::string GetURL() const;

                    /**
                     * 设置<p>请求地址。</p>
                     * @param _uRL <p>请求地址。</p>
                     * 
                     */
                    void SetURL(const std::string& _uRL);

                    /**
                     * 判断参数 URL 是否已赋值
                     * @return URL 是否已赋值
                     * 
                     */
                    bool URLHasBeenSet() const;

                    /**
                     * 获取<p>请求参数（节点配置的入参与 URL query），json 序列化后的字符串，键升序排列。敏感值已脱敏，无参数时为空字符串。</p>
                     * @return Params <p>请求参数（节点配置的入参与 URL query），json 序列化后的字符串，键升序排列。敏感值已脱敏，无参数时为空字符串。</p>
                     * 
                     */
                    std::string GetParams() const;

                    /**
                     * 设置<p>请求参数（节点配置的入参与 URL query），json 序列化后的字符串，键升序排列。敏感值已脱敏，无参数时为空字符串。</p>
                     * @param _params <p>请求参数（节点配置的入参与 URL query），json 序列化后的字符串，键升序排列。敏感值已脱敏，无参数时为空字符串。</p>
                     * 
                     */
                    void SetParams(const std::string& _params);

                    /**
                     * 判断参数 Params 是否已赋值
                     * @return Params 是否已赋值
                     * 
                     */
                    bool ParamsHasBeenSet() const;

                    /**
                     * 获取<p>请求头，json 序列化后的字符串，键升序排列。敏感值已脱敏，无请求头时为空字符串。</p>
                     * @return Headers <p>请求头，json 序列化后的字符串，键升序排列。敏感值已脱敏，无请求头时为空字符串。</p>
                     * 
                     */
                    std::string GetHeaders() const;

                    /**
                     * 设置<p>请求头，json 序列化后的字符串，键升序排列。敏感值已脱敏，无请求头时为空字符串。</p>
                     * @param _headers <p>请求头，json 序列化后的字符串，键升序排列。敏感值已脱敏，无请求头时为空字符串。</p>
                     * 
                     */
                    void SetHeaders(const std::string& _headers);

                    /**
                     * 判断参数 Headers 是否已赋值
                     * @return Headers 是否已赋值
                     * 
                     */
                    bool HeadersHasBeenSet() const;

                    /**
                     * 获取<p>请求体，超长时被截断，是否截断见 Truncated。</p>
                     * @return Body <p>请求体，超长时被截断，是否截断见 Truncated。</p>
                     * 
                     */
                    std::string GetBody() const;

                    /**
                     * 设置<p>请求体，超长时被截断，是否截断见 Truncated。</p>
                     * @param _body <p>请求体，超长时被截断，是否截断见 Truncated。</p>
                     * 
                     */
                    void SetBody(const std::string& _body);

                    /**
                     * 判断参数 Body 是否已赋值
                     * @return Body 是否已赋值
                     * 
                     */
                    bool BodyHasBeenSet() const;

                    /**
                     * 获取<p>请求体 Body 是否被截断。</p>
                     * @return Truncated <p>请求体 Body 是否被截断。</p>
                     * 
                     */
                    bool GetTruncated() const;

                    /**
                     * 设置<p>请求体 Body 是否被截断。</p>
                     * @param _truncated <p>请求体 Body 是否被截断。</p>
                     * 
                     */
                    void SetTruncated(const bool& _truncated);

                    /**
                     * 判断参数 Truncated 是否已赋值
                     * @return Truncated 是否已赋值
                     * 
                     */
                    bool TruncatedHasBeenSet() const;

                private:

                    /**
                     * <p>HTTP 请求方法，如 GET、POST。</p>
                     */
                    std::string m_method;
                    bool m_methodHasBeenSet;

                    /**
                     * <p>请求地址。</p>
                     */
                    std::string m_uRL;
                    bool m_uRLHasBeenSet;

                    /**
                     * <p>请求参数（节点配置的入参与 URL query），json 序列化后的字符串，键升序排列。敏感值已脱敏，无参数时为空字符串。</p>
                     */
                    std::string m_params;
                    bool m_paramsHasBeenSet;

                    /**
                     * <p>请求头，json 序列化后的字符串，键升序排列。敏感值已脱敏，无请求头时为空字符串。</p>
                     */
                    std::string m_headers;
                    bool m_headersHasBeenSet;

                    /**
                     * <p>请求体，超长时被截断，是否截断见 Truncated。</p>
                     */
                    std::string m_body;
                    bool m_bodyHasBeenSet;

                    /**
                     * <p>请求体 Body 是否被截断。</p>
                     */
                    bool m_truncated;
                    bool m_truncatedHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CCC_V20200210_MODEL_AICALLAPICALLREQUESTDETAIL_H_
