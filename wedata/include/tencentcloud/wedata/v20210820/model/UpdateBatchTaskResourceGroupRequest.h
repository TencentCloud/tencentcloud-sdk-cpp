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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_UPDATEBATCHTASKRESOURCEGROUPREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_UPDATEBATCHTASKRESOURCEGROUPREQUEST_H_

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
                * UpdateBatchTaskResourceGroup请求参数结构体
                */
                class UpdateBatchTaskResourceGroupRequest : public AbstractModel
                {
                public:
                    UpdateBatchTaskResourceGroupRequest();
                    ~UpdateBatchTaskResourceGroupRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取任务id
                     * @return TaskIds 任务id
                     * 
                     */
                    std::vector<std::string> GetTaskIds() const;

                    /**
                     * 设置任务id
                     * @param _taskIds 任务id
                     * 
                     */
                    void SetTaskIds(const std::vector<std::string>& _taskIds);

                    /**
                     * 判断参数 TaskIds 是否已赋值
                     * @return TaskIds 是否已赋值
                     * 
                     */
                    bool TaskIdsHasBeenSet() const;

                    /**
                     * 获取调度资源组Id
                     * @return ResourceGroup 调度资源组Id
                     * 
                     */
                    std::string GetResourceGroup() const;

                    /**
                     * 设置调度资源组Id
                     * @param _resourceGroup 调度资源组Id
                     * 
                     */
                    void SetResourceGroup(const std::string& _resourceGroup);

                    /**
                     * 判断参数 ResourceGroup 是否已赋值
                     * @return ResourceGroup 是否已赋值
                     * 
                     */
                    bool ResourceGroupHasBeenSet() const;

                    /**
                     * 获取集成资源组Id
                     * @return EtlResourceGroup 集成资源组Id
                     * 
                     */
                    std::string GetEtlResourceGroup() const;

                    /**
                     * 设置集成资源组Id
                     * @param _etlResourceGroup 集成资源组Id
                     * 
                     */
                    void SetEtlResourceGroup(const std::string& _etlResourceGroup);

                    /**
                     * 判断参数 EtlResourceGroup 是否已赋值
                     * @return EtlResourceGroup 是否已赋值
                     * 
                     */
                    bool EtlResourceGroupHasBeenSet() const;

                    /**
                     * 获取项目ID
                     * @return ProjectId 项目ID
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置项目ID
                     * @param _projectId 项目ID
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
                     * 任务id
                     */
                    std::vector<std::string> m_taskIds;
                    bool m_taskIdsHasBeenSet;

                    /**
                     * 调度资源组Id
                     */
                    std::string m_resourceGroup;
                    bool m_resourceGroupHasBeenSet;

                    /**
                     * 集成资源组Id
                     */
                    std::string m_etlResourceGroup;
                    bool m_etlResourceGroupHasBeenSet;

                    /**
                     * 项目ID
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_UPDATEBATCHTASKRESOURCEGROUPREQUEST_H_
