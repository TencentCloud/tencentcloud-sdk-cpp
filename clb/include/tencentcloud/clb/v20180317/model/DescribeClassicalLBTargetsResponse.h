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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_DESCRIBECLASSICALLBTARGETSRESPONSE_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_DESCRIBECLASSICALLBTARGETSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/clb/v20180317/model/ClassicalTarget.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * DescribeClassicalLBTargets返回参数结构体
                */
                class DescribeClassicalLBTargetsResponse : public AbstractModel
                {
                public:
                    DescribeClassicalLBTargetsResponse();
                    ~DescribeClassicalLBTargetsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取后端服务列表。
                     * @return Targets 后端服务列表。
                     * 
                     */
                    std::vector<ClassicalTarget> GetTargets() const;

                    /**
                     * 判断参数 Targets 是否已赋值
                     * @return Targets 是否已赋值
                     * 
                     */
                    bool TargetsHasBeenSet() const;

                private:

                    /**
                     * 后端服务列表。
                     */
                    std::vector<ClassicalTarget> m_targets;
                    bool m_targetsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_DESCRIBECLASSICALLBTARGETSRESPONSE_H_
