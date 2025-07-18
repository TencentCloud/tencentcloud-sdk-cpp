/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_BATCHMODIFYOPSOWNERSREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_BATCHMODIFYOPSOWNERSREQUEST_H_

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
                * BatchModifyOpsOwners请求参数结构体
                */
                class BatchModifyOpsOwnersRequest : public AbstractModel
                {
                public:
                    BatchModifyOpsOwnersRequest();
                    ~BatchModifyOpsOwnersRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取需要更新责任人的TaskId数组
                     * @return TaskIdList 需要更新责任人的TaskId数组
                     * 
                     */
                    std::vector<std::string> GetTaskIdList() const;

                    /**
                     * 设置需要更新责任人的TaskId数组
                     * @param _taskIdList 需要更新责任人的TaskId数组
                     * 
                     */
                    void SetTaskIdList(const std::vector<std::string>& _taskIdList);

                    /**
                     * 判断参数 TaskIdList 是否已赋值
                     * @return TaskIdList 是否已赋值
                     * 
                     */
                    bool TaskIdListHasBeenSet() const;

                    /**
                     * 获取需要更新的责任人userId信息，多个责任人用;连接
                     * @return Owners 需要更新的责任人userId信息，多个责任人用;连接
                     * 
                     */
                    std::string GetOwners() const;

                    /**
                     * 设置需要更新的责任人userId信息，多个责任人用;连接
                     * @param _owners 需要更新的责任人userId信息，多个责任人用;连接
                     * 
                     */
                    void SetOwners(const std::string& _owners);

                    /**
                     * 判断参数 Owners 是否已赋值
                     * @return Owners 是否已赋值
                     * 
                     */
                    bool OwnersHasBeenSet() const;

                    /**
                     * 获取项目Id
                     * @return ProjectId 项目Id
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置项目Id
                     * @param _projectId 项目Id
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
                     * 需要更新责任人的TaskId数组
                     */
                    std::vector<std::string> m_taskIdList;
                    bool m_taskIdListHasBeenSet;

                    /**
                     * 需要更新的责任人userId信息，多个责任人用;连接
                     */
                    std::string m_owners;
                    bool m_ownersHasBeenSet;

                    /**
                     * 项目Id
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_BATCHMODIFYOPSOWNERSREQUEST_H_
