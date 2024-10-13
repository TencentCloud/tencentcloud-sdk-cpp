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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBEAPIDETAILREQUEST_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBEAPIDETAILREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * DescribeApiDetail请求参数结构体
                */
                class DescribeApiDetailRequest : public AbstractModel
                {
                public:
                    DescribeApiDetailRequest();
                    ~DescribeApiDetailRequest() = default;
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
                     * 获取Api名称
                     * @return ApiName Api名称
                     * 
                     */
                    std::string GetApiName() const;

                    /**
                     * 设置Api名称
                     * @param _apiName Api名称
                     * 
                     */
                    void SetApiName(const std::string& _apiName);

                    /**
                     * 判断参数 ApiName 是否已赋值
                     * @return ApiName 是否已赋值
                     * 
                     */
                    bool ApiNameHasBeenSet() const;

                    /**
                     * 获取请求方法
                     * @return Method 请求方法
                     * 
                     */
                    std::string GetMethod() const;

                    /**
                     * 设置请求方法
                     * @param _method 请求方法
                     * 
                     */
                    void SetMethod(const std::string& _method);

                    /**
                     * 判断参数 Method 是否已赋值
                     * @return Method 是否已赋值
                     * 
                     */
                    bool MethodHasBeenSet() const;

                    /**
                     * 获取是否仅查询敏感的，1表示查询，0表示不查询
                     * @return IsSensitive 是否仅查询敏感的，1表示查询，0表示不查询
                     * 
                     */
                    int64_t GetIsSensitive() const;

                    /**
                     * 设置是否仅查询敏感的，1表示查询，0表示不查询
                     * @param _isSensitive 是否仅查询敏感的，1表示查询，0表示不查询
                     * 
                     */
                    void SetIsSensitive(const int64_t& _isSensitive);

                    /**
                     * 判断参数 IsSensitive 是否已赋值
                     * @return IsSensitive 是否已赋值
                     * 
                     */
                    bool IsSensitiveHasBeenSet() const;

                    /**
                     * 获取是否仅查询泛化的，1表示查询，0表示不查询
                     * @return IsPan 是否仅查询泛化的，1表示查询，0表示不查询
                     * 
                     */
                    int64_t GetIsPan() const;

                    /**
                     * 设置是否仅查询泛化的，1表示查询，0表示不查询
                     * @param _isPan 是否仅查询泛化的，1表示查询，0表示不查询
                     * 
                     */
                    void SetIsPan(const int64_t& _isPan);

                    /**
                     * 判断参数 IsPan 是否已赋值
                     * @return IsPan 是否已赋值
                     * 
                     */
                    bool IsPanHasBeenSet() const;

                private:

                    /**
                     * 域名
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * Api名称
                     */
                    std::string m_apiName;
                    bool m_apiNameHasBeenSet;

                    /**
                     * 请求方法
                     */
                    std::string m_method;
                    bool m_methodHasBeenSet;

                    /**
                     * 是否仅查询敏感的，1表示查询，0表示不查询
                     */
                    int64_t m_isSensitive;
                    bool m_isSensitiveHasBeenSet;

                    /**
                     * 是否仅查询泛化的，1表示查询，0表示不查询
                     */
                    int64_t m_isPan;
                    bool m_isPanHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBEAPIDETAILREQUEST_H_
