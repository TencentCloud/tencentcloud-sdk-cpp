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

#ifndef TENCENTCLOUD_MONITOR_V20230616_MODEL_DESCRIBEEXTMETRICREQUEST_H_
#define TENCENTCLOUD_MONITOR_V20230616_MODEL_DESCRIBEEXTMETRICREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20230616
        {
            namespace Model
            {
                /**
                * DescribeExtMetric请求参数结构体
                */
                class DescribeExtMetricRequest : public AbstractModel
                {
                public:
                    DescribeExtMetricRequest();
                    ~DescribeExtMetricRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取对外命名空间
                     * @return ExtNamespace 对外命名空间
                     * 
                     */
                    std::string GetExtNamespace() const;

                    /**
                     * 设置对外命名空间
                     * @param _extNamespace 对外命名空间
                     * 
                     */
                    void SetExtNamespace(const std::string& _extNamespace);

                    /**
                     * 判断参数 ExtNamespace 是否已赋值
                     * @return ExtNamespace 是否已赋值
                     * 
                     */
                    bool ExtNamespaceHasBeenSet() const;

                private:

                    /**
                     * 对外命名空间
                     */
                    std::string m_extNamespace;
                    bool m_extNamespaceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20230616_MODEL_DESCRIBEEXTMETRICREQUEST_H_
