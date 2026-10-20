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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBEAFTERPAYINSTANCESRESPONSE_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBEAFTERPAYINSTANCESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/waf/v20180125/model/AfterPayInstanceInfo.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * DescribeAfterPayInstances返回参数结构体
                */
                class DescribeAfterPayInstancesResponse : public AbstractModel
                {
                public:
                    DescribeAfterPayInstancesResponse();
                    ~DescribeAfterPayInstancesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取总数
                     * @return Total 总数
                     * 
                     */
                    uint64_t GetTotal() const;

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                    /**
                     * 获取后付费实例列表（结构与 DescribeInstances 的 InstanceInfo 一致，全量返回实例字段含各类套餐包信息，额外填充 LLMTokenUsage）
                     * @return Instances 后付费实例列表（结构与 DescribeInstances 的 InstanceInfo 一致，全量返回实例字段含各类套餐包信息，额外填充 LLMTokenUsage）
                     * 
                     */
                    std::vector<AfterPayInstanceInfo> GetInstances() const;

                    /**
                     * 判断参数 Instances 是否已赋值
                     * @return Instances 是否已赋值
                     * 
                     */
                    bool InstancesHasBeenSet() const;

                private:

                    /**
                     * 总数
                     */
                    uint64_t m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * 后付费实例列表（结构与 DescribeInstances 的 InstanceInfo 一致，全量返回实例字段含各类套餐包信息，额外填充 LLMTokenUsage）
                     */
                    std::vector<AfterPayInstanceInfo> m_instances;
                    bool m_instancesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBEAFTERPAYINSTANCESRESPONSE_H_
