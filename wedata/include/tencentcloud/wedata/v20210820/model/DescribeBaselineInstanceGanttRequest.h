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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEBASELINEINSTANCEGANTTREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEBASELINEINSTANCEGANTTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * DescribeBaselineInstanceGantt请求参数结构体
                */
                class DescribeBaselineInstanceGanttRequest : public AbstractModel
                {
                public:
                    DescribeBaselineInstanceGanttRequest();
                    ~DescribeBaselineInstanceGanttRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取基线实例id
                     * @return BaselineInstanceId 基线实例id
                     * 
                     */
                    int64_t GetBaselineInstanceId() const;

                    /**
                     * 设置基线实例id
                     * @param _baselineInstanceId 基线实例id
                     * 
                     */
                    void SetBaselineInstanceId(const int64_t& _baselineInstanceId);

                    /**
                     * 判断参数 BaselineInstanceId 是否已赋值
                     * @return BaselineInstanceId 是否已赋值
                     * 
                     */
                    bool BaselineInstanceIdHasBeenSet() const;

                    /**
                     * 获取项目id
                     * @return ProjectId 项目id
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置项目id
                     * @param _projectId 项目id
                     * 
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取保障任务id
                     * @return PromiseTaskId 保障任务id
                     * 
                     */
                    std::string GetPromiseTaskId() const;

                    /**
                     * 设置保障任务id
                     * @param _promiseTaskId 保障任务id
                     * 
                     */
                    void SetPromiseTaskId(const std::string& _promiseTaskId);

                    /**
                     * 判断参数 PromiseTaskId 是否已赋值
                     * @return PromiseTaskId 是否已赋值
                     * 
                     */
                    bool PromiseTaskIdHasBeenSet() const;

                private:

                    /**
                     * 基线实例id
                     */
                    int64_t m_baselineInstanceId;
                    bool m_baselineInstanceIdHasBeenSet;

                    /**
                     * 项目id
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 保障任务id
                     */
                    std::string m_promiseTaskId;
                    bool m_promiseTaskIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEBASELINEINSTANCEGANTTREQUEST_H_
