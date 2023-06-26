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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_MODIFYDOMAINCONFIGREQUEST_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_MODIFYDOMAINCONFIGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            namespace Model
            {
                /**
                * ModifyDomainConfig请求参数结构体
                */
                class ModifyDomainConfigRequest : public AbstractModel
                {
                public:
                    ModifyDomainConfigRequest();
                    ~ModifyDomainConfigRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取域名
                     * @return Domain 域名
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置域名
                     * @param _domain 域名
                     * 
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取配置路径
                     * @return Route 配置路径
                     * 
                     */
                    std::string GetRoute() const;

                    /**
                     * 设置配置路径
                     * @param _route 配置路径
                     * 
                     */
                    void SetRoute(const std::string& _route);

                    /**
                     * 判断参数 Route 是否已赋值
                     * @return Route 是否已赋值
                     * 
                     */
                    bool RouteHasBeenSet() const;

                    /**
                     * 获取配置路径值，使用 json 进行序列化，其中固定 update 作为 key
                     * @return Value 配置路径值，使用 json 进行序列化，其中固定 update 作为 key
                     * 
                     */
                    std::string GetValue() const;

                    /**
                     * 设置配置路径值，使用 json 进行序列化，其中固定 update 作为 key
                     * @param _value 配置路径值，使用 json 进行序列化，其中固定 update 作为 key
                     * 
                     */
                    void SetValue(const std::string& _value);

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     * 
                     */
                    bool ValueHasBeenSet() const;

                private:

                    /**
                     * 域名
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * 配置路径
                     */
                    std::string m_route;
                    bool m_routeHasBeenSet;

                    /**
                     * 配置路径值，使用 json 进行序列化，其中固定 update 作为 key
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_MODIFYDOMAINCONFIGREQUEST_H_
