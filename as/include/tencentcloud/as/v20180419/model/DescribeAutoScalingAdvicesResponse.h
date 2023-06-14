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

#ifndef TENCENTCLOUD_AS_V20180419_MODEL_DESCRIBEAUTOSCALINGADVICESRESPONSE_H_
#define TENCENTCLOUD_AS_V20180419_MODEL_DESCRIBEAUTOSCALINGADVICESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/as/v20180419/model/AutoScalingAdvice.h>


namespace TencentCloud
{
    namespace As
    {
        namespace V20180419
        {
            namespace Model
            {
                /**
                * DescribeAutoScalingAdvices返回参数结构体
                */
                class DescribeAutoScalingAdvicesResponse : public AbstractModel
                {
                public:
                    DescribeAutoScalingAdvicesResponse();
                    ~DescribeAutoScalingAdvicesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取伸缩组配置建议集合。
                     * @return AutoScalingAdviceSet 伸缩组配置建议集合。
                     * 
                     */
                    std::vector<AutoScalingAdvice> GetAutoScalingAdviceSet() const;

                    /**
                     * 判断参数 AutoScalingAdviceSet 是否已赋值
                     * @return AutoScalingAdviceSet 是否已赋值
                     * 
                     */
                    bool AutoScalingAdviceSetHasBeenSet() const;

                private:

                    /**
                     * 伸缩组配置建议集合。
                     */
                    std::vector<AutoScalingAdvice> m_autoScalingAdviceSet;
                    bool m_autoScalingAdviceSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AS_V20180419_MODEL_DESCRIBEAUTOSCALINGADVICESRESPONSE_H_
