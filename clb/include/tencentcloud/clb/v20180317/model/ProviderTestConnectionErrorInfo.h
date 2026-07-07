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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_PROVIDERTESTCONNECTIONERRORINFO_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_PROVIDERTESTCONNECTIONERRORINFO_H_

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
                * BYOK健康检查错误信息
                */
                class ProviderTestConnectionErrorInfo : public AbstractModel
                {
                public:
                    ProviderTestConnectionErrorInfo();
                    ~ProviderTestConnectionErrorInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>上游模型侧返回的HTTP状态码</p>
                     * @return HttpCode <p>上游模型侧返回的HTTP状态码</p>
                     * 
                     */
                    uint64_t GetHttpCode() const;

                    /**
                     * 设置<p>上游模型侧返回的HTTP状态码</p>
                     * @param _httpCode <p>上游模型侧返回的HTTP状态码</p>
                     * 
                     */
                    void SetHttpCode(const uint64_t& _httpCode);

                    /**
                     * 判断参数 HttpCode 是否已赋值
                     * @return HttpCode 是否已赋值
                     * 
                     */
                    bool HttpCodeHasBeenSet() const;

                    /**
                     * 获取<p>错误状态码</p>
                     * @return ErrorStatus <p>错误状态码</p>
                     * 
                     */
                    std::string GetErrorStatus() const;

                    /**
                     * 设置<p>错误状态码</p>
                     * @param _errorStatus <p>错误状态码</p>
                     * 
                     */
                    void SetErrorStatus(const std::string& _errorStatus);

                    /**
                     * 判断参数 ErrorStatus 是否已赋值
                     * @return ErrorStatus 是否已赋值
                     * 
                     */
                    bool ErrorStatusHasBeenSet() const;

                    /**
                     * 获取<p>探测请求错误信息</p>
                     * @return OriginalMessage <p>探测请求错误信息</p>
                     * 
                     */
                    std::string GetOriginalMessage() const;

                    /**
                     * 设置<p>探测请求错误信息</p>
                     * @param _originalMessage <p>探测请求错误信息</p>
                     * 
                     */
                    void SetOriginalMessage(const std::string& _originalMessage);

                    /**
                     * 判断参数 OriginalMessage 是否已赋值
                     * @return OriginalMessage 是否已赋值
                     * 
                     */
                    bool OriginalMessageHasBeenSet() const;

                private:

                    /**
                     * <p>上游模型侧返回的HTTP状态码</p>
                     */
                    uint64_t m_httpCode;
                    bool m_httpCodeHasBeenSet;

                    /**
                     * <p>错误状态码</p>
                     */
                    std::string m_errorStatus;
                    bool m_errorStatusHasBeenSet;

                    /**
                     * <p>探测请求错误信息</p>
                     */
                    std::string m_originalMessage;
                    bool m_originalMessageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_PROVIDERTESTCONNECTIONERRORINFO_H_
