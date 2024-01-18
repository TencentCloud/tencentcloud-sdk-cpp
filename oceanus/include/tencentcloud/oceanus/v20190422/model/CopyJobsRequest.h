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

#ifndef TENCENTCLOUD_OCEANUS_V20190422_MODEL_COPYJOBSREQUEST_H_
#define TENCENTCLOUD_OCEANUS_V20190422_MODEL_COPYJOBSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/oceanus/v20190422/model/CopyJobItem.h>


namespace TencentCloud
{
    namespace Oceanus
    {
        namespace V20190422
        {
            namespace Model
            {
                /**
                * CopyJobs请求参数结构体
                */
                class CopyJobsRequest : public AbstractModel
                {
                public:
                    CopyJobsRequest();
                    ~CopyJobsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取复制明细列表
                     * @return JobItems 复制明细列表
                     * 
                     */
                    std::vector<CopyJobItem> GetJobItems() const;

                    /**
                     * 设置复制明细列表
                     * @param _jobItems 复制明细列表
                     * 
                     */
                    void SetJobItems(const std::vector<CopyJobItem>& _jobItems);

                    /**
                     * 判断参数 JobItems 是否已赋值
                     * @return JobItems 是否已赋值
                     * 
                     */
                    bool JobItemsHasBeenSet() const;

                    /**
                     * 获取工作空间 SerialId
                     * @return WorkSpaceId 工作空间 SerialId
                     * 
                     */
                    std::string GetWorkSpaceId() const;

                    /**
                     * 设置工作空间 SerialId
                     * @param _workSpaceId 工作空间 SerialId
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
                     * 获取目标工作空间 SerialId
                     * @return TargetWorkspaceId 目标工作空间 SerialId
                     * 
                     */
                    std::string GetTargetWorkspaceId() const;

                    /**
                     * 设置目标工作空间 SerialId
                     * @param _targetWorkspaceId 目标工作空间 SerialId
                     * 
                     */
                    void SetTargetWorkspaceId(const std::string& _targetWorkspaceId);

                    /**
                     * 判断参数 TargetWorkspaceId 是否已赋值
                     * @return TargetWorkspaceId 是否已赋值
                     * 
                     */
                    bool TargetWorkspaceIdHasBeenSet() const;

                private:

                    /**
                     * 复制明细列表
                     */
                    std::vector<CopyJobItem> m_jobItems;
                    bool m_jobItemsHasBeenSet;

                    /**
                     * 工作空间 SerialId
                     */
                    std::string m_workSpaceId;
                    bool m_workSpaceIdHasBeenSet;

                    /**
                     * 目标工作空间 SerialId
                     */
                    std::string m_targetWorkspaceId;
                    bool m_targetWorkspaceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCEANUS_V20190422_MODEL_COPYJOBSREQUEST_H_
