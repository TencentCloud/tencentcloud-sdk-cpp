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

#ifndef TENCENTCLOUD_CCC_V20200210_MODEL_HTTPCALLBACKCONFIG_H_
#define TENCENTCLOUD_CCC_V20200210_MODEL_HTTPCALLBACKCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ccc/v20200210/model/HeaderParams.h>
#include <tencentcloud/ccc/v20200210/model/HttpParams.h>
#include <tencentcloud/ccc/v20200210/model/ReturnKey.h>
#include <tencentcloud/ccc/v20200210/model/BasicAuth.h>
#include <tencentcloud/ccc/v20200210/model/BearerAuth.h>
#include <tencentcloud/ccc/v20200210/model/OauthConfig.h>


namespace TencentCloud
{
    namespace Ccc
    {
        namespace V20200210
        {
            namespace Model
            {
                /**
                * http 回调包体参数
                */
                class HttpCallbackConfig : public AbstractModel
                {
                public:
                    HttpCallbackConfig();
                    ~HttpCallbackConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>http 标准 url</p>
                     * @return Url <p>http 标准 url</p>
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置<p>http 标准 url</p>
                     * @param _url <p>http 标准 url</p>
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
                     * 获取<p>http header 参数</p>
                     * @return HeaderParams <p>http header 参数</p>
                     * 
                     */
                    std::vector<HeaderParams> GetHeaderParams() const;

                    /**
                     * 设置<p>http header 参数</p>
                     * @param _headerParams <p>http header 参数</p>
                     * 
                     */
                    void SetHeaderParams(const std::vector<HeaderParams>& _headerParams);

                    /**
                     * 判断参数 HeaderParams 是否已赋值
                     * @return HeaderParams 是否已赋值
                     * 
                     */
                    bool HeaderParamsHasBeenSet() const;

                    /**
                     * 获取<p>http 请求包参数</p>
                     * @return Params <p>http 请求包参数</p>
                     * 
                     */
                    std::vector<HttpParams> GetParams() const;

                    /**
                     * 设置<p>http 请求包参数</p>
                     * @param _params <p>http 请求包参数</p>
                     * 
                     */
                    void SetParams(const std::vector<HttpParams>& _params);

                    /**
                     * 判断参数 Params 是否已赋值
                     * @return Params 是否已赋值
                     * 
                     */
                    bool ParamsHasBeenSet() const;

                    /**
                     * 获取<p>对端输出值，由对端 url 返回的 json 包里包含该字段就行</p>
                     * @return Returns <p>对端输出值，由对端 url 返回的 json 包里包含该字段就行</p>
                     * 
                     */
                    std::vector<ReturnKey> GetReturns() const;

                    /**
                     * 设置<p>对端输出值，由对端 url 返回的 json 包里包含该字段就行</p>
                     * @param _returns <p>对端输出值，由对端 url 返回的 json 包里包含该字段就行</p>
                     * 
                     */
                    void SetReturns(const std::vector<ReturnKey>& _returns);

                    /**
                     * 判断参数 Returns 是否已赋值
                     * @return Returns 是否已赋值
                     * 
                     */
                    bool ReturnsHasBeenSet() const;

                    /**
                     * 获取<p>是否异步</p>
                     * @return Async <p>是否异步</p>
                     * 
                     */
                    bool GetAsync() const;

                    /**
                     * 设置<p>是否异步</p>
                     * @param _async <p>是否异步</p>
                     * 
                     */
                    void SetAsync(const bool& _async);

                    /**
                     * 判断参数 Async 是否已赋值
                     * @return Async 是否已赋值
                     * 
                     */
                    bool AsyncHasBeenSet() const;

                    /**
                     * 获取<p>是否鉴权</p><p>枚举值：</p><ul><li>0： 不开启鉴权</li><li>1： 启用鉴权</li></ul>
                     * @return AuthType <p>是否鉴权</p><p>枚举值：</p><ul><li>0： 不开启鉴权</li><li>1： 启用鉴权</li></ul>
                     * 
                     */
                    uint64_t GetAuthType() const;

                    /**
                     * 设置<p>是否鉴权</p><p>枚举值：</p><ul><li>0： 不开启鉴权</li><li>1： 启用鉴权</li></ul>
                     * @param _authType <p>是否鉴权</p><p>枚举值：</p><ul><li>0： 不开启鉴权</li><li>1： 启用鉴权</li></ul>
                     * 
                     */
                    void SetAuthType(const uint64_t& _authType);

                    /**
                     * 判断参数 AuthType 是否已赋值
                     * @return AuthType 是否已赋值
                     * 
                     */
                    bool AuthTypeHasBeenSet() const;

                    /**
                     * 获取<p>basic token 鉴权</p>
                     * @return BasicAuth <p>basic token 鉴权</p>
                     * 
                     */
                    BasicAuth GetBasicAuth() const;

                    /**
                     * 设置<p>basic token 鉴权</p>
                     * @param _basicAuth <p>basic token 鉴权</p>
                     * 
                     */
                    void SetBasicAuth(const BasicAuth& _basicAuth);

                    /**
                     * 判断参数 BasicAuth 是否已赋值
                     * @return BasicAuth 是否已赋值
                     * 
                     */
                    bool BasicAuthHasBeenSet() const;

                    /**
                     * 获取<p>bearer token 鉴权</p>
                     * @return BearerAuth <p>bearer token 鉴权</p>
                     * 
                     */
                    BearerAuth GetBearerAuth() const;

                    /**
                     * 设置<p>bearer token 鉴权</p>
                     * @param _bearerAuth <p>bearer token 鉴权</p>
                     * 
                     */
                    void SetBearerAuth(const BearerAuth& _bearerAuth);

                    /**
                     * 判断参数 BearerAuth 是否已赋值
                     * @return BearerAuth 是否已赋值
                     * 
                     */
                    bool BearerAuthHasBeenSet() const;

                    /**
                     * 获取<p>自定义鉴权</p>
                     * @return CustomAuth <p>自定义鉴权</p>
                     * 
                     */
                    HttpParams GetCustomAuth() const;

                    /**
                     * 设置<p>自定义鉴权</p>
                     * @param _customAuth <p>自定义鉴权</p>
                     * 
                     */
                    void SetCustomAuth(const HttpParams& _customAuth);

                    /**
                     * 判断参数 CustomAuth 是否已赋值
                     * @return CustomAuth 是否已赋值
                     * 
                     */
                    bool CustomAuthHasBeenSet() const;

                    /**
                     * 获取<p>oauth2 鉴权</p>
                     * @return Oauth2Auth <p>oauth2 鉴权</p>
                     * 
                     */
                    OauthConfig GetOauth2Auth() const;

                    /**
                     * 设置<p>oauth2 鉴权</p>
                     * @param _oauth2Auth <p>oauth2 鉴权</p>
                     * 
                     */
                    void SetOauth2Auth(const OauthConfig& _oauth2Auth);

                    /**
                     * 判断参数 Oauth2Auth 是否已赋值
                     * @return Oauth2Auth 是否已赋值
                     * 
                     */
                    bool Oauth2AuthHasBeenSet() const;

                private:

                    /**
                     * <p>http 标准 url</p>
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * <p>http header 参数</p>
                     */
                    std::vector<HeaderParams> m_headerParams;
                    bool m_headerParamsHasBeenSet;

                    /**
                     * <p>http 请求包参数</p>
                     */
                    std::vector<HttpParams> m_params;
                    bool m_paramsHasBeenSet;

                    /**
                     * <p>对端输出值，由对端 url 返回的 json 包里包含该字段就行</p>
                     */
                    std::vector<ReturnKey> m_returns;
                    bool m_returnsHasBeenSet;

                    /**
                     * <p>是否异步</p>
                     */
                    bool m_async;
                    bool m_asyncHasBeenSet;

                    /**
                     * <p>是否鉴权</p><p>枚举值：</p><ul><li>0： 不开启鉴权</li><li>1： 启用鉴权</li></ul>
                     */
                    uint64_t m_authType;
                    bool m_authTypeHasBeenSet;

                    /**
                     * <p>basic token 鉴权</p>
                     */
                    BasicAuth m_basicAuth;
                    bool m_basicAuthHasBeenSet;

                    /**
                     * <p>bearer token 鉴权</p>
                     */
                    BearerAuth m_bearerAuth;
                    bool m_bearerAuthHasBeenSet;

                    /**
                     * <p>自定义鉴权</p>
                     */
                    HttpParams m_customAuth;
                    bool m_customAuthHasBeenSet;

                    /**
                     * <p>oauth2 鉴权</p>
                     */
                    OauthConfig m_oauth2Auth;
                    bool m_oauth2AuthHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CCC_V20200210_MODEL_HTTPCALLBACKCONFIG_H_
