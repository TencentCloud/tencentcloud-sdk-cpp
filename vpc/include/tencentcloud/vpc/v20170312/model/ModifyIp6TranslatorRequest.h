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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_MODIFYIP6TRANSLATORREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_MODIFYIP6TRANSLATORREQUEST_H_

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
                * ModifyIp6Translator请求参数结构体
                */
                class ModifyIp6TranslatorRequest : public AbstractModel
                {
                public:
                    ModifyIp6TranslatorRequest();
                    ~ModifyIp6TranslatorRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取IPV6转换实例唯一ID，形如ip6-xxxxxxxxx
                     * @return Ip6TranslatorId IPV6转换实例唯一ID，形如ip6-xxxxxxxxx
                     * 
                     */
                    std::string GetIp6TranslatorId() const;

                    /**
                     * 设置IPV6转换实例唯一ID，形如ip6-xxxxxxxxx
                     * @param _ip6TranslatorId IPV6转换实例唯一ID，形如ip6-xxxxxxxxx
                     * 
                     */
                    void SetIp6TranslatorId(const std::string& _ip6TranslatorId);

                    /**
                     * 判断参数 Ip6TranslatorId 是否已赋值
                     * @return Ip6TranslatorId 是否已赋值
                     * 
                     */
                    bool Ip6TranslatorIdHasBeenSet() const;

                    /**
                     * 获取IPV6转换实例修改名称
                     * @return Ip6TranslatorName IPV6转换实例修改名称
                     * 
                     */
                    std::string GetIp6TranslatorName() const;

                    /**
                     * 设置IPV6转换实例修改名称
                     * @param _ip6TranslatorName IPV6转换实例修改名称
                     * 
                     */
                    void SetIp6TranslatorName(const std::string& _ip6TranslatorName);

                    /**
                     * 判断参数 Ip6TranslatorName 是否已赋值
                     * @return Ip6TranslatorName 是否已赋值
                     * 
                     */
                    bool Ip6TranslatorNameHasBeenSet() const;

                private:

                    /**
                     * IPV6转换实例唯一ID，形如ip6-xxxxxxxxx
                     */
                    std::string m_ip6TranslatorId;
                    bool m_ip6TranslatorIdHasBeenSet;

                    /**
                     * IPV6转换实例修改名称
                     */
                    std::string m_ip6TranslatorName;
                    bool m_ip6TranslatorNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_MODIFYIP6TRANSLATORREQUEST_H_
