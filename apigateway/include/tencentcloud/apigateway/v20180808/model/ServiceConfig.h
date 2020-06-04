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

#ifndef TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_SERVICECONFIG_H_
#define TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_SERVICECONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Apigateway
    {
        namespace V20180808
        {
            namespace Model
            {
                /**
                * ServiceConfig
                */
                class ServiceConfig : public AbstractModel
                {
                public:
                    ServiceConfig();
                    ~ServiceConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取后端类型。启用vpc时生效，目前支持的类型为clb。
                     * @return Product 后端类型。启用vpc时生效，目前支持的类型为clb。
                     */
                    std::string GetProduct() const;

                    /**
                     * 设置后端类型。启用vpc时生效，目前支持的类型为clb。
                     * @param Product 后端类型。启用vpc时生效，目前支持的类型为clb。
                     */
                    void SetProduct(const std::string& _product);

                    /**
                     * 判断参数 Product 是否已赋值
                     * @return Product 是否已赋值
                     */
                    bool ProductHasBeenSet() const;

                    /**
                     * 获取vpc 的唯一ID。
                     * @return UniqVpcId vpc 的唯一ID。
                     */
                    std::string GetUniqVpcId() const;

                    /**
                     * 设置vpc 的唯一ID。
                     * @param UniqVpcId vpc 的唯一ID。
                     */
                    void SetUniqVpcId(const std::string& _uniqVpcId);

                    /**
                     * 判断参数 UniqVpcId 是否已赋值
                     * @return UniqVpcId 是否已赋值
                     */
                    bool UniqVpcIdHasBeenSet() const;

                    /**
                     * 获取API 的后端服务url。如果ServiceType是HTTP，则此参数必传。
                     * @return Url API 的后端服务url。如果ServiceType是HTTP，则此参数必传。
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置API 的后端服务url。如果ServiceType是HTTP，则此参数必传。
                     * @param Url API 的后端服务url。如果ServiceType是HTTP，则此参数必传。
                     */
                    void SetUrl(const std::string& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     */
                    bool UrlHasBeenSet() const;

                    /**
                     * 获取API 的后端服务路径，如 /path。如果 ServiceType 是 HTTP，则此参数必传。前后端路径可不同。
                     * @return Path API 的后端服务路径，如 /path。如果 ServiceType 是 HTTP，则此参数必传。前后端路径可不同。
                     */
                    std::string GetPath() const;

                    /**
                     * 设置API 的后端服务路径，如 /path。如果 ServiceType 是 HTTP，则此参数必传。前后端路径可不同。
                     * @param Path API 的后端服务路径，如 /path。如果 ServiceType 是 HTTP，则此参数必传。前后端路径可不同。
                     */
                    void SetPath(const std::string& _path);

                    /**
                     * 判断参数 Path 是否已赋值
                     * @return Path 是否已赋值
                     */
                    bool PathHasBeenSet() const;

                    /**
                     * 获取API的后端服务请求方法，如 GET。如果 ServiceType 是 HTTP，则此参数必传。前后端方法可不同。
                     * @return Method API的后端服务请求方法，如 GET。如果 ServiceType 是 HTTP，则此参数必传。前后端方法可不同。
                     */
                    std::string GetMethod() const;

                    /**
                     * 设置API的后端服务请求方法，如 GET。如果 ServiceType 是 HTTP，则此参数必传。前后端方法可不同。
                     * @param Method API的后端服务请求方法，如 GET。如果 ServiceType 是 HTTP，则此参数必传。前后端方法可不同。
                     */
                    void SetMethod(const std::string& _method);

                    /**
                     * 判断参数 Method 是否已赋值
                     * @return Method 是否已赋值
                     */
                    bool MethodHasBeenSet() const;

                private:

                    /**
                     * 后端类型。启用vpc时生效，目前支持的类型为clb。
                     */
                    std::string m_product;
                    bool m_productHasBeenSet;

                    /**
                     * vpc 的唯一ID。
                     */
                    std::string m_uniqVpcId;
                    bool m_uniqVpcIdHasBeenSet;

                    /**
                     * API 的后端服务url。如果ServiceType是HTTP，则此参数必传。
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * API 的后端服务路径，如 /path。如果 ServiceType 是 HTTP，则此参数必传。前后端路径可不同。
                     */
                    std::string m_path;
                    bool m_pathHasBeenSet;

                    /**
                     * API的后端服务请求方法，如 GET。如果 ServiceType 是 HTTP，则此参数必传。前后端方法可不同。
                     */
                    std::string m_method;
                    bool m_methodHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_SERVICECONFIG_H_
