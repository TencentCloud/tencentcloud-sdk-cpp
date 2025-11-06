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

#ifndef TENCENTCLOUD_ES_V20180416_MODEL_IPTRACECONFIG_H_
#define TENCENTCLOUD_ES_V20180416_MODEL_IPTRACECONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Es
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * IP溯源配置
                */
                class IpTraceConfig : public AbstractModel
                {
                public:
                    IpTraceConfig();
                    ~IpTraceConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取请求溯源开关
                     * @return EnableRequest 请求溯源开关
                     * 
                     */
                    bool GetEnableRequest() const;

                    /**
                     * 设置请求溯源开关
                     * @param _enableRequest 请求溯源开关
                     * 
                     */
                    void SetEnableRequest(const bool& _enableRequest);

                    /**
                     * 判断参数 EnableRequest 是否已赋值
                     * @return EnableRequest 是否已赋值
                     * 
                     */
                    bool EnableRequestHasBeenSet() const;

                    /**
                     * 获取返回溯源开关
                     * @return EnableResponse 返回溯源开关
                     * 
                     */
                    bool GetEnableResponse() const;

                    /**
                     * 设置返回溯源开关
                     * @param _enableResponse 返回溯源开关
                     * 
                     */
                    void SetEnableResponse(const bool& _enableResponse);

                    /**
                     * 判断参数 EnableResponse 是否已赋值
                     * @return EnableResponse 是否已赋值
                     * 
                     */
                    bool EnableResponseHasBeenSet() const;

                    /**
                     * 获取请求消息体溯源开关
                     * @return EnableRequestBody 请求消息体溯源开关
                     * 
                     */
                    bool GetEnableRequestBody() const;

                    /**
                     * 设置请求消息体溯源开关
                     * @param _enableRequestBody 请求消息体溯源开关
                     * 
                     */
                    void SetEnableRequestBody(const bool& _enableRequestBody);

                    /**
                     * 判断参数 EnableRequestBody 是否已赋值
                     * @return EnableRequestBody 是否已赋值
                     * 
                     */
                    bool EnableRequestBodyHasBeenSet() const;

                    /**
                     * 获取返回消息体溯源开关
                     * @return EnableResponseBody 返回消息体溯源开关
                     * 
                     */
                    bool GetEnableResponseBody() const;

                    /**
                     * 设置返回消息体溯源开关
                     * @param _enableResponseBody 返回消息体溯源开关
                     * 
                     */
                    void SetEnableResponseBody(const bool& _enableResponseBody);

                    /**
                     * 判断参数 EnableResponseBody 是否已赋值
                     * @return EnableResponseBody 是否已赋值
                     * 
                     */
                    bool EnableResponseBodyHasBeenSet() const;

                    /**
                     * 获取排除IP
                     * @return RemoteIpInclude 排除IP
                     * 
                     */
                    std::vector<std::string> GetRemoteIpInclude() const;

                    /**
                     * 设置排除IP
                     * @param _remoteIpInclude 排除IP
                     * 
                     */
                    void SetRemoteIpInclude(const std::vector<std::string>& _remoteIpInclude);

                    /**
                     * 判断参数 RemoteIpInclude 是否已赋值
                     * @return RemoteIpInclude 是否已赋值
                     * 
                     */
                    bool RemoteIpIncludeHasBeenSet() const;

                    /**
                     * 获取包含IP
                     * @return RemoteIpExclude 包含IP
                     * 
                     */
                    std::vector<std::string> GetRemoteIpExclude() const;

                    /**
                     * 设置包含IP
                     * @param _remoteIpExclude 包含IP
                     * 
                     */
                    void SetRemoteIpExclude(const std::vector<std::string>& _remoteIpExclude);

                    /**
                     * 判断参数 RemoteIpExclude 是否已赋值
                     * @return RemoteIpExclude 是否已赋值
                     * 
                     */
                    bool RemoteIpExcludeHasBeenSet() const;

                    /**
                     * 获取排除uri
                     * @return UriInclude 排除uri
                     * 
                     */
                    std::vector<std::string> GetUriInclude() const;

                    /**
                     * 设置排除uri
                     * @param _uriInclude 排除uri
                     * 
                     */
                    void SetUriInclude(const std::vector<std::string>& _uriInclude);

                    /**
                     * 判断参数 UriInclude 是否已赋值
                     * @return UriInclude 是否已赋值
                     * 
                     */
                    bool UriIncludeHasBeenSet() const;

                    /**
                     * 获取包含uri
                     * @return UriExclude 包含uri
                     * 
                     */
                    std::vector<std::string> GetUriExclude() const;

                    /**
                     * 设置包含uri
                     * @param _uriExclude 包含uri
                     * 
                     */
                    void SetUriExclude(const std::vector<std::string>& _uriExclude);

                    /**
                     * 判断参数 UriExclude 是否已赋值
                     * @return UriExclude 是否已赋值
                     * 
                     */
                    bool UriExcludeHasBeenSet() const;

                private:

                    /**
                     * 请求溯源开关
                     */
                    bool m_enableRequest;
                    bool m_enableRequestHasBeenSet;

                    /**
                     * 返回溯源开关
                     */
                    bool m_enableResponse;
                    bool m_enableResponseHasBeenSet;

                    /**
                     * 请求消息体溯源开关
                     */
                    bool m_enableRequestBody;
                    bool m_enableRequestBodyHasBeenSet;

                    /**
                     * 返回消息体溯源开关
                     */
                    bool m_enableResponseBody;
                    bool m_enableResponseBodyHasBeenSet;

                    /**
                     * 排除IP
                     */
                    std::vector<std::string> m_remoteIpInclude;
                    bool m_remoteIpIncludeHasBeenSet;

                    /**
                     * 包含IP
                     */
                    std::vector<std::string> m_remoteIpExclude;
                    bool m_remoteIpExcludeHasBeenSet;

                    /**
                     * 排除uri
                     */
                    std::vector<std::string> m_uriInclude;
                    bool m_uriIncludeHasBeenSet;

                    /**
                     * 包含uri
                     */
                    std::vector<std::string> m_uriExclude;
                    bool m_uriExcludeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20180416_MODEL_IPTRACECONFIG_H_
