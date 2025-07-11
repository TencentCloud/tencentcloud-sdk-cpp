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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_DELETEIP6TRANSLATORSREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_DELETEIP6TRANSLATORSREQUEST_H_

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
                * DeleteIp6Translators请求参数结构体
                */
                class DeleteIp6TranslatorsRequest : public AbstractModel
                {
                public:
                    DeleteIp6TranslatorsRequest();
                    ~DeleteIp6TranslatorsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取待释放的IPV6转换实例的唯一ID，形如‘ip6-xxxxxxxx’
                     * @return Ip6TranslatorIds 待释放的IPV6转换实例的唯一ID，形如‘ip6-xxxxxxxx’
                     * 
                     */
                    std::vector<std::string> GetIp6TranslatorIds() const;

                    /**
                     * 设置待释放的IPV6转换实例的唯一ID，形如‘ip6-xxxxxxxx’
                     * @param _ip6TranslatorIds 待释放的IPV6转换实例的唯一ID，形如‘ip6-xxxxxxxx’
                     * 
                     */
                    void SetIp6TranslatorIds(const std::vector<std::string>& _ip6TranslatorIds);

                    /**
                     * 判断参数 Ip6TranslatorIds 是否已赋值
                     * @return Ip6TranslatorIds 是否已赋值
                     * 
                     */
                    bool Ip6TranslatorIdsHasBeenSet() const;

                private:

                    /**
                     * 待释放的IPV6转换实例的唯一ID，形如‘ip6-xxxxxxxx’
                     */
                    std::vector<std::string> m_ip6TranslatorIds;
                    bool m_ip6TranslatorIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_DELETEIP6TRANSLATORSREQUEST_H_
