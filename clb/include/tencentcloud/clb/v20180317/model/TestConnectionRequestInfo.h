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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_TESTCONNECTIONREQUESTINFO_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_TESTCONNECTIONREQUESTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * BYOK健康检查请求
                */
                class TestConnectionRequestInfo : public AbstractModel
                {
                public:
                    TestConnectionRequestInfo();
                    ~TestConnectionRequestInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>请求URL</p>
                     * @return RequestUrl <p>请求URL</p>
                     * 
                     */
                    std::string GetRequestUrl() const;

                    /**
                     * 设置<p>请求URL</p>
                     * @param _requestUrl <p>请求URL</p>
                     * 
                     */
                    void SetRequestUrl(const std::string& _requestUrl);

                    /**
                     * 判断参数 RequestUrl 是否已赋值
                     * @return RequestUrl 是否已赋值
                     * 
                     */
                    bool RequestUrlHasBeenSet() const;

                    /**
                     * 获取<p>请求体</p>
                     * @return RequestBody <p>请求体</p>
                     * 
                     */
                    std::string GetRequestBody() const;

                    /**
                     * 设置<p>请求体</p>
                     * @param _requestBody <p>请求体</p>
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
                     * 获取<p>请求头</p>
                     * @return RequestHeaders <p>请求头</p>
                     * 
                     */
                    std::string GetRequestHeaders() const;

                    /**
                     * 设置<p>请求头</p>
                     * @param _requestHeaders <p>请求头</p>
                     * 
                     */
                    void SetRequestHeaders(const std::string& _requestHeaders);

                    /**
                     * 判断参数 RequestHeaders 是否已赋值
                     * @return RequestHeaders 是否已赋值
                     * 
                     */
                    bool RequestHeadersHasBeenSet() const;

                private:

                    /**
                     * <p>请求URL</p>
                     */
                    std::string m_requestUrl;
                    bool m_requestUrlHasBeenSet;

                    /**
                     * <p>请求体</p>
                     */
                    std::string m_requestBody;
                    bool m_requestBodyHasBeenSet;

                    /**
                     * <p>请求头</p>
                     */
                    std::string m_requestHeaders;
                    bool m_requestHeadersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_TESTCONNECTIONREQUESTINFO_H_
