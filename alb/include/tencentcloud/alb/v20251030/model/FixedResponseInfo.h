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

#ifndef TENCENTCLOUD_ALB_V20251030_MODEL_FIXEDRESPONSEINFO_H_
#define TENCENTCLOUD_ALB_V20251030_MODEL_FIXEDRESPONSEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Alb
    {
        namespace V20251030
        {
            namespace Model
            {
                /**
                * 固定应答信息
                */
                class FixedResponseInfo : public AbstractModel
                {
                public:
                    FixedResponseInfo();
                    ~FixedResponseInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取返回的HTTP响应码，支持 2xx、4xx、5xx。
                     * @return HttpCode 返回的HTTP响应码，支持 2xx、4xx、5xx。
                     * 
                     */
                    int64_t GetHttpCode() const;

                    /**
                     * 设置返回的HTTP响应码，支持 2xx、4xx、5xx。
                     * @param _httpCode 返回的HTTP响应码，支持 2xx、4xx、5xx。
                     * 
                     */
                    void SetHttpCode(const int64_t& _httpCode);

                    /**
                     * 判断参数 HttpCode 是否已赋值
                     * @return HttpCode 是否已赋值
                     * 
                     */
                    bool HttpCodeHasBeenSet() const;

                    /**
                     * 获取返回的固定内容。只支持 ASCII 字符，最大1KB。
                     * @return Content 返回的固定内容。只支持 ASCII 字符，最大1KB。
                     * 
                     */
                    std::string GetContent() const;

                    /**
                     * 设置返回的固定内容。只支持 ASCII 字符，最大1KB。
                     * @param _content 返回的固定内容。只支持 ASCII 字符，最大1KB。
                     * 
                     */
                    void SetContent(const std::string& _content);

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     * 
                     */
                    bool ContentHasBeenSet() const;

                    /**
                     * 获取返回固定内容的格式。
取值：text/plain、text/css、text/html、application/javascript或application/json。
                     * @return ContentType 返回固定内容的格式。
取值：text/plain、text/css、text/html、application/javascript或application/json。
                     * 
                     */
                    std::string GetContentType() const;

                    /**
                     * 设置返回固定内容的格式。
取值：text/plain、text/css、text/html、application/javascript或application/json。
                     * @param _contentType 返回固定内容的格式。
取值：text/plain、text/css、text/html、application/javascript或application/json。
                     * 
                     */
                    void SetContentType(const std::string& _contentType);

                    /**
                     * 判断参数 ContentType 是否已赋值
                     * @return ContentType 是否已赋值
                     * 
                     */
                    bool ContentTypeHasBeenSet() const;

                private:

                    /**
                     * 返回的HTTP响应码，支持 2xx、4xx、5xx。
                     */
                    int64_t m_httpCode;
                    bool m_httpCodeHasBeenSet;

                    /**
                     * 返回的固定内容。只支持 ASCII 字符，最大1KB。
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * 返回固定内容的格式。
取值：text/plain、text/css、text/html、application/javascript或application/json。
                     */
                    std::string m_contentType;
                    bool m_contentTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ALB_V20251030_MODEL_FIXEDRESPONSEINFO_H_
