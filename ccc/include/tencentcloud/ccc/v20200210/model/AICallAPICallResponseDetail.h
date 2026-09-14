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

#ifndef TENCENTCLOUD_CCC_V20200210_MODEL_AICALLAPICALLRESPONSEDETAIL_H_
#define TENCENTCLOUD_CCC_V20200210_MODEL_AICALLAPICALLRESPONSEDETAIL_H_

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
                * 接口调用的响应详情
                */
                class AICallAPICallResponseDetail : public AbstractModel
                {
                public:
                    AICallAPICallResponseDetail();
                    ~AICallAPICallResponseDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>HTTP 状态码。</p>
                     * @return StatusCode <p>HTTP 状态码。</p>
                     * 
                     */
                    int64_t GetStatusCode() const;

                    /**
                     * 设置<p>HTTP 状态码。</p>
                     * @param _statusCode <p>HTTP 状态码。</p>
                     * 
                     */
                    void SetStatusCode(const int64_t& _statusCode);

                    /**
                     * 判断参数 StatusCode 是否已赋值
                     * @return StatusCode 是否已赋值
                     * 
                     */
                    bool StatusCodeHasBeenSet() const;

                    /**
                     * 获取<p>响应头，json 序列化后的字符串，键升序排列。敏感值已脱敏，无响应头时为空字符串。</p>
                     * @return Headers <p>响应头，json 序列化后的字符串，键升序排列。敏感值已脱敏，无响应头时为空字符串。</p>
                     * 
                     */
                    std::string GetHeaders() const;

                    /**
                     * 设置<p>响应头，json 序列化后的字符串，键升序排列。敏感值已脱敏，无响应头时为空字符串。</p>
                     * @param _headers <p>响应头，json 序列化后的字符串，键升序排列。敏感值已脱敏，无响应头时为空字符串。</p>
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
                     * 获取<p>响应体，超长时被截断，是否截断见 Truncated。</p>
                     * @return Body <p>响应体，超长时被截断，是否截断见 Truncated。</p>
                     * 
                     */
                    std::string GetBody() const;

                    /**
                     * 设置<p>响应体，超长时被截断，是否截断见 Truncated。</p>
                     * @param _body <p>响应体，超长时被截断，是否截断见 Truncated。</p>
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
                     * 获取<p>响应体 Body 是否被截断。</p>
                     * @return Truncated <p>响应体 Body 是否被截断。</p>
                     * 
                     */
                    bool GetTruncated() const;

                    /**
                     * 设置<p>响应体 Body 是否被截断。</p>
                     * @param _truncated <p>响应体 Body 是否被截断。</p>
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
                     * <p>HTTP 状态码。</p>
                     */
                    int64_t m_statusCode;
                    bool m_statusCodeHasBeenSet;

                    /**
                     * <p>响应头，json 序列化后的字符串，键升序排列。敏感值已脱敏，无响应头时为空字符串。</p>
                     */
                    std::string m_headers;
                    bool m_headersHasBeenSet;

                    /**
                     * <p>响应体，超长时被截断，是否截断见 Truncated。</p>
                     */
                    std::string m_body;
                    bool m_bodyHasBeenSet;

                    /**
                     * <p>响应体 Body 是否被截断。</p>
                     */
                    bool m_truncated;
                    bool m_truncatedHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CCC_V20200210_MODEL_AICALLAPICALLRESPONSEDETAIL_H_
