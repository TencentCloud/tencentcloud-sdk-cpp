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

#ifndef TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBEPROJECTSRESPONSE_H_
#define TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBEPROJECTSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/rum/v20210622/model/RumProject.h>


namespace TencentCloud
{
    namespace Rum
    {
        namespace V20210622
        {
            namespace Model
            {
                /**
                * DescribeProjects返回参数结构体
                */
                class DescribeProjectsResponse : public AbstractModel
                {
                public:
                    DescribeProjectsResponse();
                    ~DescribeProjectsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取列表总数
                     * @return TotalCount 列表总数
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
                     * 获取项目列表
                     * @return ProjectSet 项目列表
                     * 
                     */
                    std::vector<RumProject> GetProjectSet() const;

                    /**
                     * 判断参数 ProjectSet 是否已赋值
                     * @return ProjectSet 是否已赋值
                     * 
                     */
                    bool ProjectSetHasBeenSet() const;

                private:

                    /**
                     * 列表总数
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 项目列表
                     */
                    std::vector<RumProject> m_projectSet;
                    bool m_projectSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBEPROJECTSRESPONSE_H_
