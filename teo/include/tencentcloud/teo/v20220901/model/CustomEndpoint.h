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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_CUSTOMENDPOINT_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_CUSTOMENDPOINT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/Header.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * 实时日志投递到自定义 HTTP(S) 接口的配置信息。
                */
                class CustomEndpoint : public AbstractModel
                {
                public:
                    CustomEndpoint();
                    ~CustomEndpoint() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取实时日志投递的自定义 HTTP 接口地址，暂仅支持 HTTP/HTTPS 协议。
                     * @return Url 实时日志投递的自定义 HTTP 接口地址，暂仅支持 HTTP/HTTPS 协议。
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置实时日志投递的自定义 HTTP 接口地址，暂仅支持 HTTP/HTTPS 协议。
                     * @param _url 实时日志投递的自定义 HTTP 接口地址，暂仅支持 HTTP/HTTPS 协议。
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
                     * 获取填写自定义的 SecretId 用于生成加密签名，如果源站需要鉴权此参数必填。
                     * @return AccessId 填写自定义的 SecretId 用于生成加密签名，如果源站需要鉴权此参数必填。
                     * 
                     */
                    std::string GetAccessId() const;

                    /**
                     * 设置填写自定义的 SecretId 用于生成加密签名，如果源站需要鉴权此参数必填。
                     * @param _accessId 填写自定义的 SecretId 用于生成加密签名，如果源站需要鉴权此参数必填。
                     * 
                     */
                    void SetAccessId(const std::string& _accessId);

                    /**
                     * 判断参数 AccessId 是否已赋值
                     * @return AccessId 是否已赋值
                     * 
                     */
                    bool AccessIdHasBeenSet() const;

                    /**
                     * 获取填写自定义的 SecretKey 用于生成加密签名，如果源站需要鉴权此参数必填。
                     * @return AccessKey 填写自定义的 SecretKey 用于生成加密签名，如果源站需要鉴权此参数必填。
                     * 
                     */
                    std::string GetAccessKey() const;

                    /**
                     * 设置填写自定义的 SecretKey 用于生成加密签名，如果源站需要鉴权此参数必填。
                     * @param _accessKey 填写自定义的 SecretKey 用于生成加密签名，如果源站需要鉴权此参数必填。
                     * 
                     */
                    void SetAccessKey(const std::string& _accessKey);

                    /**
                     * 判断参数 AccessKey 是否已赋值
                     * @return AccessKey 是否已赋值
                     * 
                     */
                    bool AccessKeyHasBeenSet() const;

                    /**
                     * 获取数据压缩类型，取值有: <li> gzip：使用 gzip 方式压缩。</li>不填表示不启用压缩。
                     * @return CompressType 数据压缩类型，取值有: <li> gzip：使用 gzip 方式压缩。</li>不填表示不启用压缩。
                     * 
                     */
                    std::string GetCompressType() const;

                    /**
                     * 设置数据压缩类型，取值有: <li> gzip：使用 gzip 方式压缩。</li>不填表示不启用压缩。
                     * @param _compressType 数据压缩类型，取值有: <li> gzip：使用 gzip 方式压缩。</li>不填表示不启用压缩。
                     * 
                     */
                    void SetCompressType(const std::string& _compressType);

                    /**
                     * 判断参数 CompressType 是否已赋值
                     * @return CompressType 是否已赋值
                     * 
                     */
                    bool CompressTypeHasBeenSet() const;

                    /**
                     * 获取POST 请求投递日志时，使用的应用层协议类型，取值有： 
<li>http：HTTP 协议；</li>
<li>https：HTTPS 协议。</li>如果不填默认根据填写的 URL 地址解析出协议类型。	
                     * @return Protocol POST 请求投递日志时，使用的应用层协议类型，取值有： 
<li>http：HTTP 协议；</li>
<li>https：HTTPS 协议。</li>如果不填默认根据填写的 URL 地址解析出协议类型。	
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置POST 请求投递日志时，使用的应用层协议类型，取值有： 
<li>http：HTTP 协议；</li>
<li>https：HTTPS 协议。</li>如果不填默认根据填写的 URL 地址解析出协议类型。	
                     * @param _protocol POST 请求投递日志时，使用的应用层协议类型，取值有： 
<li>http：HTTP 协议；</li>
<li>https：HTTPS 协议。</li>如果不填默认根据填写的 URL 地址解析出协议类型。	
                     * 
                     */
                    void SetProtocol(const std::string& _protocol);

                    /**
                     * 判断参数 Protocol 是否已赋值
                     * @return Protocol 是否已赋值
                     * 
                     */
                    bool ProtocolHasBeenSet() const;

                    /**
                     * 获取投递日志时携带的自定义请求头。若您填写的头部名称为 Content-Type 等 EdgeOne 日志推送默认携带的头部，那么您填写的头部值将覆盖默认值。头部值引用单个变量${batchSize}，以获取每次 POST 请求中包含的日志条数。
                     * @return Headers 投递日志时携带的自定义请求头。若您填写的头部名称为 Content-Type 等 EdgeOne 日志推送默认携带的头部，那么您填写的头部值将覆盖默认值。头部值引用单个变量${batchSize}，以获取每次 POST 请求中包含的日志条数。
                     * 
                     */
                    std::vector<Header> GetHeaders() const;

                    /**
                     * 设置投递日志时携带的自定义请求头。若您填写的头部名称为 Content-Type 等 EdgeOne 日志推送默认携带的头部，那么您填写的头部值将覆盖默认值。头部值引用单个变量${batchSize}，以获取每次 POST 请求中包含的日志条数。
                     * @param _headers 投递日志时携带的自定义请求头。若您填写的头部名称为 Content-Type 等 EdgeOne 日志推送默认携带的头部，那么您填写的头部值将覆盖默认值。头部值引用单个变量${batchSize}，以获取每次 POST 请求中包含的日志条数。
                     * 
                     */
                    void SetHeaders(const std::vector<Header>& _headers);

                    /**
                     * 判断参数 Headers 是否已赋值
                     * @return Headers 是否已赋值
                     * 
                     */
                    bool HeadersHasBeenSet() const;

                private:

                    /**
                     * 实时日志投递的自定义 HTTP 接口地址，暂仅支持 HTTP/HTTPS 协议。
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * 填写自定义的 SecretId 用于生成加密签名，如果源站需要鉴权此参数必填。
                     */
                    std::string m_accessId;
                    bool m_accessIdHasBeenSet;

                    /**
                     * 填写自定义的 SecretKey 用于生成加密签名，如果源站需要鉴权此参数必填。
                     */
                    std::string m_accessKey;
                    bool m_accessKeyHasBeenSet;

                    /**
                     * 数据压缩类型，取值有: <li> gzip：使用 gzip 方式压缩。</li>不填表示不启用压缩。
                     */
                    std::string m_compressType;
                    bool m_compressTypeHasBeenSet;

                    /**
                     * POST 请求投递日志时，使用的应用层协议类型，取值有： 
<li>http：HTTP 协议；</li>
<li>https：HTTPS 协议。</li>如果不填默认根据填写的 URL 地址解析出协议类型。	
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * 投递日志时携带的自定义请求头。若您填写的头部名称为 Content-Type 等 EdgeOne 日志推送默认携带的头部，那么您填写的头部值将覆盖默认值。头部值引用单个变量${batchSize}，以获取每次 POST 请求中包含的日志条数。
                     */
                    std::vector<Header> m_headers;
                    bool m_headersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_CUSTOMENDPOINT_H_
