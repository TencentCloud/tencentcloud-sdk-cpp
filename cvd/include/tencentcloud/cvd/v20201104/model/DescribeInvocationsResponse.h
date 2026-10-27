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

#ifndef TENCENTCLOUD_CVD_V20201104_MODEL_DESCRIBEINVOCATIONSRESPONSE_H_
#define TENCENTCLOUD_CVD_V20201104_MODEL_DESCRIBEINVOCATIONSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cvd/v20201104/model/Invocation.h>


namespace TencentCloud
{
    namespace Cvd
    {
        namespace V20201104
        {
            namespace Model
            {
                /**
                * DescribeInvocations返回参数结构体
                */
                class DescribeInvocationsResponse : public AbstractModel
                {
                public:
                    DescribeInvocationsResponse();
                    ~DescribeInvocationsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>该实例上的任务列表。不会返回Output字段。</p>
                     * @return Invocations <p>该实例上的任务列表。不会返回Output字段。</p>
                     * 
                     */
                    std::vector<Invocation> GetInvocations() const;

                    /**
                     * 判断参数 Invocations 是否已赋值
                     * @return Invocations 是否已赋值
                     * 
                     */
                    bool InvocationsHasBeenSet() const;

                private:

                    /**
                     * <p>该实例上的任务列表。不会返回Output字段。</p>
                     */
                    std::vector<Invocation> m_invocations;
                    bool m_invocationsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVD_V20201104_MODEL_DESCRIBEINVOCATIONSRESPONSE_H_
