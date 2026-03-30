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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_DESCRIBEKONGCORSRESULT_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_DESCRIBEKONGCORSRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tse
    {
        namespace V20201207
        {
            namespace Model
            {
                /**
                * 查询跨域配置出参
                */
                class DescribeKongCORSResult : public AbstractModel
                {
                public:
                    DescribeKongCORSResult();
                    ~DescribeKongCORSResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取资源类型
                     * @return SourceType 资源类型
                     * 
                     */
                    std::string GetSourceType() const;

                    /**
                     * 设置资源类型
                     * @param _sourceType 资源类型
                     * 
                     */
                    void SetSourceType(const std::string& _sourceType);

                    /**
                     * 判断参数 SourceType 是否已赋值
                     * @return SourceType 是否已赋值
                     * 
                     */
                    bool SourceTypeHasBeenSet() const;

                    /**
                     * 获取资源id
                     * @return SourceId 资源id
                     * 
                     */
                    std::string GetSourceId() const;

                    /**
                     * 设置资源id
                     * @param _sourceId 资源id
                     * 
                     */
                    void SetSourceId(const std::string& _sourceId);

                    /**
                     * 判断参数 SourceId 是否已赋值
                     * @return SourceId 是否已赋值
                     * 
                     */
                    bool SourceIdHasBeenSet() const;

                    /**
                     * 获取是否启用
                     * @return Enabled 是否启用
                     * 
                     */
                    bool GetEnabled() const;

                    /**
                     * 设置是否启用
                     * @param _enabled 是否启用
                     * 
                     */
                    void SetEnabled(const bool& _enabled);

                    /**
                     * 判断参数 Enabled 是否已赋值
                     * @return Enabled 是否已赋值
                     * 
                     */
                    bool EnabledHasBeenSet() const;

                    /**
                     * 获取跨域 Origins
                     * @return Origins 跨域 Origins
                     * 
                     */
                    std::vector<std::string> GetOrigins() const;

                    /**
                     * 设置跨域 Origins
                     * @param _origins 跨域 Origins
                     * 
                     */
                    void SetOrigins(const std::vector<std::string>& _origins);

                    /**
                     * 判断参数 Origins 是否已赋值
                     * @return Origins 是否已赋值
                     * 
                     */
                    bool OriginsHasBeenSet() const;

                    /**
                     * 获取跨域 Headers
                     * @return Headers 跨域 Headers
                     * 
                     */
                    std::vector<std::string> GetHeaders() const;

                    /**
                     * 设置跨域 Headers
                     * @param _headers 跨域 Headers
                     * 
                     */
                    void SetHeaders(const std::vector<std::string>& _headers);

                    /**
                     * 判断参数 Headers 是否已赋值
                     * @return Headers 是否已赋值
                     * 
                     */
                    bool HeadersHasBeenSet() const;

                    /**
                     * 获取跨域 Methods
                     * @return Methods 跨域 Methods
                     * 
                     */
                    std::vector<std::string> GetMethods() const;

                    /**
                     * 设置跨域 Methods
                     * @param _methods 跨域 Methods
                     * 
                     */
                    void SetMethods(const std::vector<std::string>& _methods);

                    /**
                     * 判断参数 Methods 是否已赋值
                     * @return Methods 是否已赋值
                     * 
                     */
                    bool MethodsHasBeenSet() const;

                    /**
                     * 获取跨域 ExposedHeaders
                     * @return ExposedHeaders 跨域 ExposedHeaders
                     * 
                     */
                    std::vector<std::string> GetExposedHeaders() const;

                    /**
                     * 设置跨域 ExposedHeaders
                     * @param _exposedHeaders 跨域 ExposedHeaders
                     * 
                     */
                    void SetExposedHeaders(const std::vector<std::string>& _exposedHeaders);

                    /**
                     * 判断参数 ExposedHeaders 是否已赋值
                     * @return ExposedHeaders 是否已赋值
                     * 
                     */
                    bool ExposedHeadersHasBeenSet() const;

                    /**
                     * 获取跨域OPTIONS请求缓存时间
                     * @return MaxAge 跨域OPTIONS请求缓存时间
                     * 
                     */
                    int64_t GetMaxAge() const;

                    /**
                     * 设置跨域OPTIONS请求缓存时间
                     * @param _maxAge 跨域OPTIONS请求缓存时间
                     * 
                     */
                    void SetMaxAge(const int64_t& _maxAge);

                    /**
                     * 判断参数 MaxAge 是否已赋值
                     * @return MaxAge 是否已赋值
                     * 
                     */
                    bool MaxAgeHasBeenSet() const;

                    /**
                     * 获取跨域请求是否允许携带身份信息
                     * @return Credentials 跨域请求是否允许携带身份信息
                     * 
                     */
                    bool GetCredentials() const;

                    /**
                     * 设置跨域请求是否允许携带身份信息
                     * @param _credentials 跨域请求是否允许携带身份信息
                     * 
                     */
                    void SetCredentials(const bool& _credentials);

                    /**
                     * 判断参数 Credentials 是否已赋值
                     * @return Credentials 是否已赋值
                     * 
                     */
                    bool CredentialsHasBeenSet() const;

                    /**
                     * 获取跨域请求是否透传后端
                     * @return PreFlightContinue 跨域请求是否透传后端
                     * 
                     */
                    bool GetPreFlightContinue() const;

                    /**
                     * 设置跨域请求是否透传后端
                     * @param _preFlightContinue 跨域请求是否透传后端
                     * 
                     */
                    void SetPreFlightContinue(const bool& _preFlightContinue);

                    /**
                     * 判断参数 PreFlightContinue 是否已赋值
                     * @return PreFlightContinue 是否已赋值
                     * 
                     */
                    bool PreFlightContinueHasBeenSet() const;

                private:

                    /**
                     * 资源类型
                     */
                    std::string m_sourceType;
                    bool m_sourceTypeHasBeenSet;

                    /**
                     * 资源id
                     */
                    std::string m_sourceId;
                    bool m_sourceIdHasBeenSet;

                    /**
                     * 是否启用
                     */
                    bool m_enabled;
                    bool m_enabledHasBeenSet;

                    /**
                     * 跨域 Origins
                     */
                    std::vector<std::string> m_origins;
                    bool m_originsHasBeenSet;

                    /**
                     * 跨域 Headers
                     */
                    std::vector<std::string> m_headers;
                    bool m_headersHasBeenSet;

                    /**
                     * 跨域 Methods
                     */
                    std::vector<std::string> m_methods;
                    bool m_methodsHasBeenSet;

                    /**
                     * 跨域 ExposedHeaders
                     */
                    std::vector<std::string> m_exposedHeaders;
                    bool m_exposedHeadersHasBeenSet;

                    /**
                     * 跨域OPTIONS请求缓存时间
                     */
                    int64_t m_maxAge;
                    bool m_maxAgeHasBeenSet;

                    /**
                     * 跨域请求是否允许携带身份信息
                     */
                    bool m_credentials;
                    bool m_credentialsHasBeenSet;

                    /**
                     * 跨域请求是否透传后端
                     */
                    bool m_preFlightContinue;
                    bool m_preFlightContinueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_DESCRIBEKONGCORSRESULT_H_
