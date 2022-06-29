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

#ifndef TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBEPROJECTLIMITSRESPONSE_H_
#define TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBEPROJECTLIMITSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/rum/v20210622/model/ProjectLimit.h>


namespace TencentCloud
{
    namespace Rum
    {
        namespace V20210622
        {
            namespace Model
            {
                /**
                * DescribeProjectLimits返回参数结构体
                */
                class DescribeProjectLimitsResponse : public AbstractModel
                {
                public:
                    DescribeProjectLimitsResponse();
                    ~DescribeProjectLimitsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取上报率数组列表
                     * @return ProjectLimitSet 上报率数组列表
                     */
                    std::vector<ProjectLimit> GetProjectLimitSet() const;

                    /**
                     * 判断参数 ProjectLimitSet 是否已赋值
                     * @return ProjectLimitSet 是否已赋值
                     */
                    bool ProjectLimitSetHasBeenSet() const;

                private:

                    /**
                     * 上报率数组列表
                     */
                    std::vector<ProjectLimit> m_projectLimitSet;
                    bool m_projectLimitSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBEPROJECTLIMITSRESPONSE_H_
