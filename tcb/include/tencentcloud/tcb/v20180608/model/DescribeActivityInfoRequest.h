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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_DESCRIBEACTIVITYINFOREQUEST_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_DESCRIBEACTIVITYINFOREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * DescribeActivityInfo请求参数结构体
                */
                class DescribeActivityInfoRequest : public AbstractModel
                {
                public:
                    DescribeActivityInfoRequest();
                    ~DescribeActivityInfoRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取活动id列表
                     * @return ActivityIdList 活动id列表
                     */
                    std::vector<int64_t> GetActivityIdList() const;

                    /**
                     * 设置活动id列表
                     * @param ActivityIdList 活动id列表
                     */
                    void SetActivityIdList(const std::vector<int64_t>& _activityIdList);

                    /**
                     * 判断参数 ActivityIdList 是否已赋值
                     * @return ActivityIdList 是否已赋值
                     */
                    bool ActivityIdListHasBeenSet() const;

                private:

                    /**
                     * 活动id列表
                     */
                    std::vector<int64_t> m_activityIdList;
                    bool m_activityIdListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_DESCRIBEACTIVITYINFOREQUEST_H_
