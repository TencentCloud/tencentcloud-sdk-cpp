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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBEIP6TRANSLATORSRESPONSE_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBEIP6TRANSLATORSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vpc/v20170312/model/Ip6Translator.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DescribeIp6Translators返回参数结构体
                */
                class DescribeIp6TranslatorsResponse : public AbstractModel
                {
                public:
                    DescribeIp6TranslatorsResponse();
                    ~DescribeIp6TranslatorsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取符合过滤条件的IPV6转换实例数量。
                     * @return TotalCount 符合过滤条件的IPV6转换实例数量。
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取符合过滤条件的IPV6转换实例详细信息
                     * @return Ip6TranslatorSet 符合过滤条件的IPV6转换实例详细信息
                     * 
                     */
                    std::vector<Ip6Translator> GetIp6TranslatorSet() const;

                    /**
                     * 判断参数 Ip6TranslatorSet 是否已赋值
                     * @return Ip6TranslatorSet 是否已赋值
                     * 
                     */
                    bool Ip6TranslatorSetHasBeenSet() const;

                private:

                    /**
                     * 符合过滤条件的IPV6转换实例数量。
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 符合过滤条件的IPV6转换实例详细信息
                     */
                    std::vector<Ip6Translator> m_ip6TranslatorSet;
                    bool m_ip6TranslatorSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBEIP6TRANSLATORSRESPONSE_H_
