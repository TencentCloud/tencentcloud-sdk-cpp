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

#ifndef TENCENTCLOUD_TRRO_V20220325_MODEL_DESCRIBEPROJECTINFOREQUEST_H_
#define TENCENTCLOUD_TRRO_V20220325_MODEL_DESCRIBEPROJECTINFOREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Trro
    {
        namespace V20220325
        {
            namespace Model
            {
                /**
                * DescribeProjectInfo请求参数结构体
                */
                class DescribeProjectInfoRequest : public AbstractModel
                {
                public:
                    DescribeProjectInfoRequest();
                    ~DescribeProjectInfoRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取目标项目ID，必填参数
                     * @return ProjectId 目标项目ID，必填参数
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置目标项目ID，必填参数
                     * @param _projectId 目标项目ID，必填参数
                     * 
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                private:

                    /**
                     * 目标项目ID，必填参数
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRRO_V20220325_MODEL_DESCRIBEPROJECTINFOREQUEST_H_
