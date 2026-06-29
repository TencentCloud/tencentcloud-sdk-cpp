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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_PROMETHEUSDYNAMICAPIRESPONSEHTTP_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_PROMETHEUSDYNAMICAPIRESPONSEHTTP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * Prometheus 内部动态 api 代理响应
                */
                class PrometheusDynamicAPIResponseHTTP : public AbstractModel
                {
                public:
                    PrometheusDynamicAPIResponseHTTP();
                    ~PrometheusDynamicAPIResponseHTTP() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>HTTP 状态码</p>
                     * @return StatusCode <p>HTTP 状态码</p>
                     * 
                     */
                    int64_t GetStatusCode() const;

                    /**
                     * 设置<p>HTTP 状态码</p>
                     * @param _statusCode <p>HTTP 状态码</p>
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
                     * 获取<p>HTTP 响应体</p>
                     * @return ResponseBody <p>HTTP 响应体</p>
                     * 
                     */
                    std::string GetResponseBody() const;

                    /**
                     * 设置<p>HTTP 响应体</p>
                     * @param _responseBody <p>HTTP 响应体</p>
                     * 
                     */
                    void SetResponseBody(const std::string& _responseBody);

                    /**
                     * 判断参数 ResponseBody 是否已赋值
                     * @return ResponseBody 是否已赋值
                     * 
                     */
                    bool ResponseBodyHasBeenSet() const;

                private:

                    /**
                     * <p>HTTP 状态码</p>
                     */
                    int64_t m_statusCode;
                    bool m_statusCodeHasBeenSet;

                    /**
                     * <p>HTTP 响应体</p>
                     */
                    std::string m_responseBody;
                    bool m_responseBodyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_PROMETHEUSDYNAMICAPIRESPONSEHTTP_H_
