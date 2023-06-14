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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_DESCRIBEEDGEPACKTASKSTATUSRESPONSE_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_DESCRIBEEDGEPACKTASKSTATUSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdn/v20180606/model/EdgePackTaskStatus.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            namespace Model
            {
                /**
                * DescribeEdgePackTaskStatus返回参数结构体
                */
                class DescribeEdgePackTaskStatusResponse : public AbstractModel
                {
                public:
                    DescribeEdgePackTaskStatusResponse();
                    ~DescribeEdgePackTaskStatusResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取动态打包任务状态列表
                     * @return EdgePackTaskStatusSet 动态打包任务状态列表
                     * 
                     */
                    std::vector<EdgePackTaskStatus> GetEdgePackTaskStatusSet() const;

                    /**
                     * 判断参数 EdgePackTaskStatusSet 是否已赋值
                     * @return EdgePackTaskStatusSet 是否已赋值
                     * 
                     */
                    bool EdgePackTaskStatusSetHasBeenSet() const;

                    /**
                     * 获取总数，用于分页查询
                     * @return TotalCount 总数，用于分页查询
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * 动态打包任务状态列表
                     */
                    std::vector<EdgePackTaskStatus> m_edgePackTaskStatusSet;
                    bool m_edgePackTaskStatusSetHasBeenSet;

                    /**
                     * 总数，用于分页查询
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_DESCRIBEEDGEPACKTASKSTATUSRESPONSE_H_
