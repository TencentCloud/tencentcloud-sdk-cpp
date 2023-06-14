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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYFLEXSERVICEPROVIDERACCOUNTBALANCEREQUEST_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYFLEXSERVICEPROVIDERACCOUNTBALANCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cpdp
    {
        namespace V20190820
        {
            namespace Model
            {
                /**
                * QueryFlexServiceProviderAccountBalance请求参数结构体
                */
                class QueryFlexServiceProviderAccountBalanceRequest : public AbstractModel
                {
                public:
                    QueryFlexServiceProviderAccountBalanceRequest();
                    ~QueryFlexServiceProviderAccountBalanceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取服务商ID
                     * @return ServiceProviderId 服务商ID
                     * 
                     */
                    std::string GetServiceProviderId() const;

                    /**
                     * 设置服务商ID
                     * @param _serviceProviderId 服务商ID
                     * 
                     */
                    void SetServiceProviderId(const std::string& _serviceProviderId);

                    /**
                     * 判断参数 ServiceProviderId 是否已赋值
                     * @return ServiceProviderId 是否已赋值
                     * 
                     */
                    bool ServiceProviderIdHasBeenSet() const;

                    /**
                     * 获取环境类型
__release__:生产环境
__sandbox__:沙箱环境
__test__:测试环境
缺省默认为生产环境
                     * @return Environment 环境类型
__release__:生产环境
__sandbox__:沙箱环境
__test__:测试环境
缺省默认为生产环境
                     * 
                     */
                    std::string GetEnvironment() const;

                    /**
                     * 设置环境类型
__release__:生产环境
__sandbox__:沙箱环境
__test__:测试环境
缺省默认为生产环境
                     * @param _environment 环境类型
__release__:生产环境
__sandbox__:沙箱环境
__test__:测试环境
缺省默认为生产环境
                     * 
                     */
                    void SetEnvironment(const std::string& _environment);

                    /**
                     * 判断参数 Environment 是否已赋值
                     * @return Environment 是否已赋值
                     * 
                     */
                    bool EnvironmentHasBeenSet() const;

                private:

                    /**
                     * 服务商ID
                     */
                    std::string m_serviceProviderId;
                    bool m_serviceProviderIdHasBeenSet;

                    /**
                     * 环境类型
__release__:生产环境
__sandbox__:沙箱环境
__test__:测试环境
缺省默认为生产环境
                     */
                    std::string m_environment;
                    bool m_environmentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYFLEXSERVICEPROVIDERACCOUNTBALANCEREQUEST_H_
