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

#ifndef TENCENTCLOUD_AS_V20180419_MODEL_DESCRIBEREFRESHACTIVITIESRESPONSE_H_
#define TENCENTCLOUD_AS_V20180419_MODEL_DESCRIBEREFRESHACTIVITIESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/as/v20180419/model/RefreshActivity.h>


namespace TencentCloud
{
    namespace As
    {
        namespace V20180419
        {
            namespace Model
            {
                /**
                * DescribeRefreshActivities返回参数结构体
                */
                class DescribeRefreshActivitiesResponse : public AbstractModel
                {
                public:
                    DescribeRefreshActivitiesResponse();
                    ~DescribeRefreshActivitiesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取符合条件的刷新活动数量。
                     * @return TotalCount 符合条件的刷新活动数量。
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取符合条件的刷新活动信息集合。
                     * @return RefreshActivitySet 符合条件的刷新活动信息集合。
                     * 
                     */
                    std::vector<RefreshActivity> GetRefreshActivitySet() const;

                    /**
                     * 判断参数 RefreshActivitySet 是否已赋值
                     * @return RefreshActivitySet 是否已赋值
                     * 
                     */
                    bool RefreshActivitySetHasBeenSet() const;

                private:

                    /**
                     * 符合条件的刷新活动数量。
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 符合条件的刷新活动信息集合。
                     */
                    std::vector<RefreshActivity> m_refreshActivitySet;
                    bool m_refreshActivitySetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AS_V20180419_MODEL_DESCRIBEREFRESHACTIVITIESRESPONSE_H_
