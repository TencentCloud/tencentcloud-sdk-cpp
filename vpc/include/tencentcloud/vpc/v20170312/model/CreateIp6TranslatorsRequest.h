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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_CREATEIP6TRANSLATORSREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_CREATEIP6TRANSLATORSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * CreateIp6Translators请求参数结构体
                */
                class CreateIp6TranslatorsRequest : public AbstractModel
                {
                public:
                    CreateIp6TranslatorsRequest();
                    ~CreateIp6TranslatorsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取转换实例名称
                     * @return Ip6TranslatorName 转换实例名称
                     * 
                     */
                    std::string GetIp6TranslatorName() const;

                    /**
                     * 设置转换实例名称
                     * @param _ip6TranslatorName 转换实例名称
                     * 
                     */
                    void SetIp6TranslatorName(const std::string& _ip6TranslatorName);

                    /**
                     * 判断参数 Ip6TranslatorName 是否已赋值
                     * @return Ip6TranslatorName 是否已赋值
                     * 
                     */
                    bool Ip6TranslatorNameHasBeenSet() const;

                    /**
                     * 获取创建转换实例数量，默认是1个
                     * @return Ip6TranslatorCount 创建转换实例数量，默认是1个
                     * 
                     */
                    int64_t GetIp6TranslatorCount() const;

                    /**
                     * 设置创建转换实例数量，默认是1个
                     * @param _ip6TranslatorCount 创建转换实例数量，默认是1个
                     * 
                     */
                    void SetIp6TranslatorCount(const int64_t& _ip6TranslatorCount);

                    /**
                     * 判断参数 Ip6TranslatorCount 是否已赋值
                     * @return Ip6TranslatorCount 是否已赋值
                     * 
                     */
                    bool Ip6TranslatorCountHasBeenSet() const;

                    /**
                     * 获取转换实例运营商属性，可取"CMCC","CTCC","CUCC","BGP"
                     * @return Ip6InternetServiceProvider 转换实例运营商属性，可取"CMCC","CTCC","CUCC","BGP"
                     * 
                     */
                    std::string GetIp6InternetServiceProvider() const;

                    /**
                     * 设置转换实例运营商属性，可取"CMCC","CTCC","CUCC","BGP"
                     * @param _ip6InternetServiceProvider 转换实例运营商属性，可取"CMCC","CTCC","CUCC","BGP"
                     * 
                     */
                    void SetIp6InternetServiceProvider(const std::string& _ip6InternetServiceProvider);

                    /**
                     * 判断参数 Ip6InternetServiceProvider 是否已赋值
                     * @return Ip6InternetServiceProvider 是否已赋值
                     * 
                     */
                    bool Ip6InternetServiceProviderHasBeenSet() const;

                private:

                    /**
                     * 转换实例名称
                     */
                    std::string m_ip6TranslatorName;
                    bool m_ip6TranslatorNameHasBeenSet;

                    /**
                     * 创建转换实例数量，默认是1个
                     */
                    int64_t m_ip6TranslatorCount;
                    bool m_ip6TranslatorCountHasBeenSet;

                    /**
                     * 转换实例运营商属性，可取"CMCC","CTCC","CUCC","BGP"
                     */
                    std::string m_ip6InternetServiceProvider;
                    bool m_ip6InternetServiceProviderHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_CREATEIP6TRANSLATORSREQUEST_H_
