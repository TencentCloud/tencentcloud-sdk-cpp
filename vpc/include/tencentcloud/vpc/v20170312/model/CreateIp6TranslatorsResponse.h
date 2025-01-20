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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_CREATEIP6TRANSLATORSRESPONSE_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_CREATEIP6TRANSLATORSRESPONSE_H_

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
                * CreateIp6Translators返回参数结构体
                */
                class CreateIp6TranslatorsResponse : public AbstractModel
                {
                public:
                    CreateIp6TranslatorsResponse();
                    ~CreateIp6TranslatorsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取转换实例的唯一ID数组，形如"ip6-xxxxxxxx"
                     * @return Ip6TranslatorSet 转换实例的唯一ID数组，形如"ip6-xxxxxxxx"
                     * 
                     */
                    std::vector<std::string> GetIp6TranslatorSet() const;

                    /**
                     * 判断参数 Ip6TranslatorSet 是否已赋值
                     * @return Ip6TranslatorSet 是否已赋值
                     * 
                     */
                    bool Ip6TranslatorSetHasBeenSet() const;

                private:

                    /**
                     * 转换实例的唯一ID数组，形如"ip6-xxxxxxxx"
                     */
                    std::vector<std::string> m_ip6TranslatorSet;
                    bool m_ip6TranslatorSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_CREATEIP6TRANSLATORSRESPONSE_H_
