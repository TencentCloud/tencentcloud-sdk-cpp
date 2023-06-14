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

#ifndef TENCENTCLOUD_GAAP_V20180529_MODEL_DESCRIBEGROUPANDSTATISTICSPROXYRESPONSE_H_
#define TENCENTCLOUD_GAAP_V20180529_MODEL_DESCRIBEGROUPANDSTATISTICSPROXYRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/gaap/v20180529/model/GroupStatisticsInfo.h>


namespace TencentCloud
{
    namespace Gaap
    {
        namespace V20180529
        {
            namespace Model
            {
                /**
                * DescribeGroupAndStatisticsProxy返回参数结构体
                */
                class DescribeGroupAndStatisticsProxyResponse : public AbstractModel
                {
                public:
                    DescribeGroupAndStatisticsProxyResponse();
                    ~DescribeGroupAndStatisticsProxyResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取可以统计的通道组信息
                     * @return GroupSet 可以统计的通道组信息
                     * 
                     */
                    std::vector<GroupStatisticsInfo> GetGroupSet() const;

                    /**
                     * 判断参数 GroupSet 是否已赋值
                     * @return GroupSet 是否已赋值
                     * 
                     */
                    bool GroupSetHasBeenSet() const;

                    /**
                     * 获取通道组数量
                     * @return TotalCount 通道组数量
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
                     * 可以统计的通道组信息
                     */
                    std::vector<GroupStatisticsInfo> m_groupSet;
                    bool m_groupSetHasBeenSet;

                    /**
                     * 通道组数量
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GAAP_V20180529_MODEL_DESCRIBEGROUPANDSTATISTICSPROXYRESPONSE_H_
