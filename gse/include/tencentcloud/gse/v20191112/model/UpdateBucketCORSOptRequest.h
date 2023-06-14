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

#ifndef TENCENTCLOUD_GSE_V20191112_MODEL_UPDATEBUCKETCORSOPTREQUEST_H_
#define TENCENTCLOUD_GSE_V20191112_MODEL_UPDATEBUCKETCORSOPTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Gse
    {
        namespace V20191112
        {
            namespace Model
            {
                /**
                * UpdateBucketCORSOpt请求参数结构体
                */
                class UpdateBucketCORSOptRequest : public AbstractModel
                {
                public:
                    UpdateBucketCORSOptRequest();
                    ~UpdateBucketCORSOptRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取允许的访问来源;具体参见 [cos文档](https://cloud.tencent.com/document/product/436/8279)
                     * @return AllowedOrigins 允许的访问来源;具体参见 [cos文档](https://cloud.tencent.com/document/product/436/8279)
                     * 
                     */
                    std::vector<std::string> GetAllowedOrigins() const;

                    /**
                     * 设置允许的访问来源;具体参见 [cos文档](https://cloud.tencent.com/document/product/436/8279)
                     * @param _allowedOrigins 允许的访问来源;具体参见 [cos文档](https://cloud.tencent.com/document/product/436/8279)
                     * 
                     */
                    void SetAllowedOrigins(const std::vector<std::string>& _allowedOrigins);

                    /**
                     * 判断参数 AllowedOrigins 是否已赋值
                     * @return AllowedOrigins 是否已赋值
                     * 
                     */
                    bool AllowedOriginsHasBeenSet() const;

                    /**
                     * 获取允许的 HTTP 操作方法;可以配置多个:PUT、GET、POST、HEAD。[cos文档](https://cloud.tencent.com/document/product/436/8279)
                     * @return AllowedMethods 允许的 HTTP 操作方法;可以配置多个:PUT、GET、POST、HEAD。[cos文档](https://cloud.tencent.com/document/product/436/8279)
                     * 
                     */
                    std::vector<std::string> GetAllowedMethods() const;

                    /**
                     * 设置允许的 HTTP 操作方法;可以配置多个:PUT、GET、POST、HEAD。[cos文档](https://cloud.tencent.com/document/product/436/8279)
                     * @param _allowedMethods 允许的 HTTP 操作方法;可以配置多个:PUT、GET、POST、HEAD。[cos文档](https://cloud.tencent.com/document/product/436/8279)
                     * 
                     */
                    void SetAllowedMethods(const std::vector<std::string>& _allowedMethods);

                    /**
                     * 判断参数 AllowedMethods 是否已赋值
                     * @return AllowedMethods 是否已赋值
                     * 
                     */
                    bool AllowedMethodsHasBeenSet() const;

                    /**
                     * 获取用于指定允许浏览器发送 CORS 请求时携带的自定义 HTTP 请求头部;可以配置*，代表允许所有头部，为了避免遗漏，推荐配置为*。[cos文档](https://cloud.tencent.com/document/product/436/8279)
                     * @return AllowedHeaders 用于指定允许浏览器发送 CORS 请求时携带的自定义 HTTP 请求头部;可以配置*，代表允许所有头部，为了避免遗漏，推荐配置为*。[cos文档](https://cloud.tencent.com/document/product/436/8279)
                     * 
                     */
                    std::vector<std::string> GetAllowedHeaders() const;

                    /**
                     * 设置用于指定允许浏览器发送 CORS 请求时携带的自定义 HTTP 请求头部;可以配置*，代表允许所有头部，为了避免遗漏，推荐配置为*。[cos文档](https://cloud.tencent.com/document/product/436/8279)
                     * @param _allowedHeaders 用于指定允许浏览器发送 CORS 请求时携带的自定义 HTTP 请求头部;可以配置*，代表允许所有头部，为了避免遗漏，推荐配置为*。[cos文档](https://cloud.tencent.com/document/product/436/8279)
                     * 
                     */
                    void SetAllowedHeaders(const std::vector<std::string>& _allowedHeaders);

                    /**
                     * 判断参数 AllowedHeaders 是否已赋值
                     * @return AllowedHeaders 是否已赋值
                     * 
                     */
                    bool AllowedHeadersHasBeenSet() const;

                    /**
                     * 获取跨域资源共享配置的有效时间，单位为秒。[cos文档](https://cloud.tencent.com/document/product/436/8279)
                     * @return MaxAgeSeconds 跨域资源共享配置的有效时间，单位为秒。[cos文档](https://cloud.tencent.com/document/product/436/8279)
                     * 
                     */
                    int64_t GetMaxAgeSeconds() const;

                    /**
                     * 设置跨域资源共享配置的有效时间，单位为秒。[cos文档](https://cloud.tencent.com/document/product/436/8279)
                     * @param _maxAgeSeconds 跨域资源共享配置的有效时间，单位为秒。[cos文档](https://cloud.tencent.com/document/product/436/8279)
                     * 
                     */
                    void SetMaxAgeSeconds(const int64_t& _maxAgeSeconds);

                    /**
                     * 判断参数 MaxAgeSeconds 是否已赋值
                     * @return MaxAgeSeconds 是否已赋值
                     * 
                     */
                    bool MaxAgeSecondsHasBeenSet() const;

                    /**
                     * 获取允许浏览器获取的 CORS 请求响应中的头部，不区分大小写；默认情况下浏览器只能访问简单响应头部：Cache-Control、Content-Type、Expires、Last-Modified，如果需要访问其他响应头部，需要添加 ExposeHeader 配置。[cos文档](https://cloud.tencent.com/document/product/436/8279)
                     * @return ExposeHeaders 允许浏览器获取的 CORS 请求响应中的头部，不区分大小写；默认情况下浏览器只能访问简单响应头部：Cache-Control、Content-Type、Expires、Last-Modified，如果需要访问其他响应头部，需要添加 ExposeHeader 配置。[cos文档](https://cloud.tencent.com/document/product/436/8279)
                     * 
                     */
                    std::vector<std::string> GetExposeHeaders() const;

                    /**
                     * 设置允许浏览器获取的 CORS 请求响应中的头部，不区分大小写；默认情况下浏览器只能访问简单响应头部：Cache-Control、Content-Type、Expires、Last-Modified，如果需要访问其他响应头部，需要添加 ExposeHeader 配置。[cos文档](https://cloud.tencent.com/document/product/436/8279)
                     * @param _exposeHeaders 允许浏览器获取的 CORS 请求响应中的头部，不区分大小写；默认情况下浏览器只能访问简单响应头部：Cache-Control、Content-Type、Expires、Last-Modified，如果需要访问其他响应头部，需要添加 ExposeHeader 配置。[cos文档](https://cloud.tencent.com/document/product/436/8279)
                     * 
                     */
                    void SetExposeHeaders(const std::vector<std::string>& _exposeHeaders);

                    /**
                     * 判断参数 ExposeHeaders 是否已赋值
                     * @return ExposeHeaders 是否已赋值
                     * 
                     */
                    bool ExposeHeadersHasBeenSet() const;

                private:

                    /**
                     * 允许的访问来源;具体参见 [cos文档](https://cloud.tencent.com/document/product/436/8279)
                     */
                    std::vector<std::string> m_allowedOrigins;
                    bool m_allowedOriginsHasBeenSet;

                    /**
                     * 允许的 HTTP 操作方法;可以配置多个:PUT、GET、POST、HEAD。[cos文档](https://cloud.tencent.com/document/product/436/8279)
                     */
                    std::vector<std::string> m_allowedMethods;
                    bool m_allowedMethodsHasBeenSet;

                    /**
                     * 用于指定允许浏览器发送 CORS 请求时携带的自定义 HTTP 请求头部;可以配置*，代表允许所有头部，为了避免遗漏，推荐配置为*。[cos文档](https://cloud.tencent.com/document/product/436/8279)
                     */
                    std::vector<std::string> m_allowedHeaders;
                    bool m_allowedHeadersHasBeenSet;

                    /**
                     * 跨域资源共享配置的有效时间，单位为秒。[cos文档](https://cloud.tencent.com/document/product/436/8279)
                     */
                    int64_t m_maxAgeSeconds;
                    bool m_maxAgeSecondsHasBeenSet;

                    /**
                     * 允许浏览器获取的 CORS 请求响应中的头部，不区分大小写；默认情况下浏览器只能访问简单响应头部：Cache-Control、Content-Type、Expires、Last-Modified，如果需要访问其他响应头部，需要添加 ExposeHeader 配置。[cos文档](https://cloud.tencent.com/document/product/436/8279)
                     */
                    std::vector<std::string> m_exposeHeaders;
                    bool m_exposeHeadersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GSE_V20191112_MODEL_UPDATEBUCKETCORSOPTREQUEST_H_
