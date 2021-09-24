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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBEEXTERNALCLUSTERSPECRESPONSE_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBEEXTERNALCLUSTERSPECRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * DescribeExternalClusterSpec返回参数结构体
                */
                class DescribeExternalClusterSpecResponse : public AbstractModel
                {
                public:
                    DescribeExternalClusterSpecResponse();
                    ~DescribeExternalClusterSpecResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取导入第三方集群YAML定义
                     * @return Spec 导入第三方集群YAML定义
                     */
                    std::string GetSpec() const;

                    /**
                     * 判断参数 Spec 是否已赋值
                     * @return Spec 是否已赋值
                     */
                    bool SpecHasBeenSet() const;

                    /**
                     * 获取agent.yaml文件过期时间字符串，时区UTC
                     * @return Expiration agent.yaml文件过期时间字符串，时区UTC
                     */
                    std::string GetExpiration() const;

                    /**
                     * 判断参数 Expiration 是否已赋值
                     * @return Expiration 是否已赋值
                     */
                    bool ExpirationHasBeenSet() const;

                private:

                    /**
                     * 导入第三方集群YAML定义
                     */
                    std::string m_spec;
                    bool m_specHasBeenSet;

                    /**
                     * agent.yaml文件过期时间字符串，时区UTC
                     */
                    std::string m_expiration;
                    bool m_expirationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBEEXTERNALCLUSTERSPECRESPONSE_H_
