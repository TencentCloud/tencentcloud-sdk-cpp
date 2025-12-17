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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_DESCRIBETARGETGROUPINSTANCESTATUSRESPONSE_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_DESCRIBETARGETGROUPINSTANCESTATUSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/clb/v20180317/model/TargetGroupInstanceStatus.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * DescribeTargetGroupInstanceStatus返回参数结构体
                */
                class DescribeTargetGroupInstanceStatusResponse : public AbstractModel
                {
                public:
                    DescribeTargetGroupInstanceStatusResponse();
                    ~DescribeTargetGroupInstanceStatusResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取健康检查后端rs状态列表
                     * @return TargetGroupInstanceSet 健康检查后端rs状态列表
                     * 
                     */
                    std::vector<TargetGroupInstanceStatus> GetTargetGroupInstanceSet() const;

                    /**
                     * 判断参数 TargetGroupInstanceSet 是否已赋值
                     * @return TargetGroupInstanceSet 是否已赋值
                     * 
                     */
                    bool TargetGroupInstanceSetHasBeenSet() const;

                private:

                    /**
                     * 健康检查后端rs状态列表
                     */
                    std::vector<TargetGroupInstanceStatus> m_targetGroupInstanceSet;
                    bool m_targetGroupInstanceSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_DESCRIBETARGETGROUPINSTANCESTATUSRESPONSE_H_
