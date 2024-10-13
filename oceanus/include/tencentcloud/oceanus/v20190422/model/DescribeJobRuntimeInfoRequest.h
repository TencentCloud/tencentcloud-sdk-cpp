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

#ifndef TENCENTCLOUD_OCEANUS_V20190422_MODEL_DESCRIBEJOBRUNTIMEINFOREQUEST_H_
#define TENCENTCLOUD_OCEANUS_V20190422_MODEL_DESCRIBEJOBRUNTIMEINFOREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Oceanus
    {
        namespace V20190422
        {
            namespace Model
            {
                /**
                * DescribeJobRuntimeInfo请求参数结构体
                */
                class DescribeJobRuntimeInfoRequest : public AbstractModel
                {
                public:
                    DescribeJobRuntimeInfoRequest();
                    ~DescribeJobRuntimeInfoRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取作业ID
                     * @return JobId 作业ID
                     * 
                     */
                    std::string GetJobId() const;

                    /**
                     * 设置作业ID
                     * @param _jobId 作业ID
                     * 
                     */
                    void SetJobId(const std::string& _jobId);

                    /**
                     * 判断参数 JobId 是否已赋值
                     * @return JobId 是否已赋值
                     * 
                     */
                    bool JobIdHasBeenSet() const;

                    /**
                     * 获取工作空间ID
                     * @return WorkSpaceId 工作空间ID
                     * 
                     */
                    std::string GetWorkSpaceId() const;

                    /**
                     * 设置工作空间ID
                     * @param _workSpaceId 工作空间ID
                     * 
                     */
                    void SetWorkSpaceId(const std::string& _workSpaceId);

                    /**
                     * 判断参数 WorkSpaceId 是否已赋值
                     * @return WorkSpaceId 是否已赋值
                     * 
                     */
                    bool WorkSpaceIdHasBeenSet() const;

                    /**
                     * 获取作业运行信息 key
                     * @return IncludeInfo 作业运行信息 key
                     * 
                     */
                    std::vector<std::string> GetIncludeInfo() const;

                    /**
                     * 设置作业运行信息 key
                     * @param _includeInfo 作业运行信息 key
                     * 
                     */
                    void SetIncludeInfo(const std::vector<std::string>& _includeInfo);

                    /**
                     * 判断参数 IncludeInfo 是否已赋值
                     * @return IncludeInfo 是否已赋值
                     * 
                     */
                    bool IncludeInfoHasBeenSet() const;

                private:

                    /**
                     * 作业ID
                     */
                    std::string m_jobId;
                    bool m_jobIdHasBeenSet;

                    /**
                     * 工作空间ID
                     */
                    std::string m_workSpaceId;
                    bool m_workSpaceIdHasBeenSet;

                    /**
                     * 作业运行信息 key
                     */
                    std::vector<std::string> m_includeInfo;
                    bool m_includeInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCEANUS_V20190422_MODEL_DESCRIBEJOBRUNTIMEINFOREQUEST_H_
