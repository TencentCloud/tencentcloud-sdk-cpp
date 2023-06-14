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

#ifndef TENCENTCLOUD_TRRO_V20220325_MODEL_DESCRIBEPROJECTLISTRESPONSE_H_
#define TENCENTCLOUD_TRRO_V20220325_MODEL_DESCRIBEPROJECTLISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/trro/v20220325/model/ProjectInfo.h>


namespace TencentCloud
{
    namespace Trro
    {
        namespace V20220325
        {
            namespace Model
            {
                /**
                * DescribeProjectList返回参数结构体
                */
                class DescribeProjectListResponse : public AbstractModel
                {
                public:
                    DescribeProjectListResponse();
                    ~DescribeProjectListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取项目信息数组
                     * @return Projects 项目信息数组
                     * 
                     */
                    std::vector<ProjectInfo> GetProjects() const;

                    /**
                     * 判断参数 Projects 是否已赋值
                     * @return Projects 是否已赋值
                     * 
                     */
                    bool ProjectsHasBeenSet() const;

                    /**
                     * 获取项目总数
                     * @return Total 项目总数
                     * 
                     */
                    int64_t GetTotal() const;

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                    /**
                     * 获取本次返回的项目数
                     * @return Num 本次返回的项目数
                     * 
                     */
                    int64_t GetNum() const;

                    /**
                     * 判断参数 Num 是否已赋值
                     * @return Num 是否已赋值
                     * 
                     */
                    bool NumHasBeenSet() const;

                private:

                    /**
                     * 项目信息数组
                     */
                    std::vector<ProjectInfo> m_projects;
                    bool m_projectsHasBeenSet;

                    /**
                     * 项目总数
                     */
                    int64_t m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * 本次返回的项目数
                     */
                    int64_t m_num;
                    bool m_numHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRRO_V20220325_MODEL_DESCRIBEPROJECTLISTRESPONSE_H_
