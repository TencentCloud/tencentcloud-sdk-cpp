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

#ifndef TENCENTCLOUD_OMICS_V20221128_MODEL_DESCRIBERUNGROUPSRESPONSE_H_
#define TENCENTCLOUD_OMICS_V20221128_MODEL_DESCRIBERUNGROUPSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/omics/v20221128/model/RunGroup.h>


namespace TencentCloud
{
    namespace Omics
    {
        namespace V20221128
        {
            namespace Model
            {
                /**
                * DescribeRunGroups返回参数结构体
                */
                class DescribeRunGroupsResponse : public AbstractModel
                {
                public:
                    DescribeRunGroupsResponse();
                    ~DescribeRunGroupsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取符合条件的数量。
                     * @return TotalCount 符合条件的数量。
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
                     * 获取任务批次列表。
                     * @return RunGroups 任务批次列表。
                     * 
                     */
                    std::vector<RunGroup> GetRunGroups() const;

                    /**
                     * 判断参数 RunGroups 是否已赋值
                     * @return RunGroups 是否已赋值
                     * 
                     */
                    bool RunGroupsHasBeenSet() const;

                private:

                    /**
                     * 符合条件的数量。
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 任务批次列表。
                     */
                    std::vector<RunGroup> m_runGroups;
                    bool m_runGroupsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OMICS_V20221128_MODEL_DESCRIBERUNGROUPSRESPONSE_H_
