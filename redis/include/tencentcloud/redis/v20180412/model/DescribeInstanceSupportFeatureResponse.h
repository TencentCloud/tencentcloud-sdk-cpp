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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBEINSTANCESUPPORTFEATURERESPONSE_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBEINSTANCESUPPORTFEATURERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Redis
    {
        namespace V20180412
        {
            namespace Model
            {
                /**
                * DescribeInstanceSupportFeature返回参数结构体
                */
                class DescribeInstanceSupportFeatureResponse : public AbstractModel
                {
                public:
                    DescribeInstanceSupportFeatureResponse();
                    ~DescribeInstanceSupportFeatureResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取是否支持
                     * @return Support 是否支持
                     * 
                     */
                    bool GetSupport() const;

                    /**
                     * 判断参数 Support 是否已赋值
                     * @return Support 是否已赋值
                     * 
                     */
                    bool SupportHasBeenSet() const;

                private:

                    /**
                     * 是否支持
                     */
                    bool m_support;
                    bool m_supportHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBEINSTANCESUPPORTFEATURERESPONSE_H_
