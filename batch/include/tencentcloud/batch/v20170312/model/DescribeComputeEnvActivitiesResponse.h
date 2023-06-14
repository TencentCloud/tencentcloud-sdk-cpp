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

#ifndef TENCENTCLOUD_BATCH_V20170312_MODEL_DESCRIBECOMPUTEENVACTIVITIESRESPONSE_H_
#define TENCENTCLOUD_BATCH_V20170312_MODEL_DESCRIBECOMPUTEENVACTIVITIESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/batch/v20170312/model/Activity.h>


namespace TencentCloud
{
    namespace Batch
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DescribeComputeEnvActivities返回参数结构体
                */
                class DescribeComputeEnvActivitiesResponse : public AbstractModel
                {
                public:
                    DescribeComputeEnvActivitiesResponse();
                    ~DescribeComputeEnvActivitiesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取计算环境中的活动列表
                     * @return ActivitySet 计算环境中的活动列表
                     * 
                     */
                    std::vector<Activity> GetActivitySet() const;

                    /**
                     * 判断参数 ActivitySet 是否已赋值
                     * @return ActivitySet 是否已赋值
                     * 
                     */
                    bool ActivitySetHasBeenSet() const;

                    /**
                     * 获取活动数量
                     * @return TotalCount 活动数量
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * 计算环境中的活动列表
                     */
                    std::vector<Activity> m_activitySet;
                    bool m_activitySetHasBeenSet;

                    /**
                     * 活动数量
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BATCH_V20170312_MODEL_DESCRIBECOMPUTEENVACTIVITIESRESPONSE_H_
