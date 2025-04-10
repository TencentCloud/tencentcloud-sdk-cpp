/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_RATELIMITRESPONSE_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_RATELIMITRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tse/v20201207/model/KVMapping.h>


namespace TencentCloud
{
    namespace Tse
    {
        namespace V20201207
        {
            namespace Model
            {
                /**
                * 云原生网关限流插件自定义响应
                */
                class RateLimitResponse : public AbstractModel
                {
                public:
                    RateLimitResponse();
                    ~RateLimitResponse() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取自定义响应体
                     * @return Body 自定义响应体
                     * 
                     */
                    std::string GetBody() const;

                    /**
                     * 设置自定义响应体
                     * @param _body 自定义响应体
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
                     * 获取Headers
                     * @return Headers Headers
                     * 
                     */
                    std::vector<KVMapping> GetHeaders() const;

                    /**
                     * 设置Headers
                     * @param _headers Headers
                     * 
                     */
                    void SetHeaders(const std::vector<KVMapping>& _headers);

                    /**
                     * 判断参数 Headers 是否已赋值
                     * @return Headers 是否已赋值
                     * 
                     */
                    bool HeadersHasBeenSet() const;

                    /**
                     * 获取http状态码
                     * @return HttpStatus http状态码
                     * 
                     */
                    int64_t GetHttpStatus() const;

                    /**
                     * 设置http状态码
                     * @param _httpStatus http状态码
                     * 
                     */
                    void SetHttpStatus(const int64_t& _httpStatus);

                    /**
                     * 判断参数 HttpStatus 是否已赋值
                     * @return HttpStatus 是否已赋值
                     * 
                     */
                    bool HttpStatusHasBeenSet() const;

                private:

                    /**
                     * 自定义响应体
                     */
                    std::string m_body;
                    bool m_bodyHasBeenSet;

                    /**
                     * Headers
                     */
                    std::vector<KVMapping> m_headers;
                    bool m_headersHasBeenSet;

                    /**
                     * http状态码
                     */
                    int64_t m_httpStatus;
                    bool m_httpStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_RATELIMITRESPONSE_H_
