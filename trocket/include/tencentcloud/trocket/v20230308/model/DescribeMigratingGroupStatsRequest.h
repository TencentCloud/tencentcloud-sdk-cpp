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

#ifndef TENCENTCLOUD_TROCKET_V20230308_MODEL_DESCRIBEMIGRATINGGROUPSTATSREQUEST_H_
#define TENCENTCLOUD_TROCKET_V20230308_MODEL_DESCRIBEMIGRATINGGROUPSTATSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Trocket
    {
        namespace V20230308
        {
            namespace Model
            {
                /**
                * DescribeMigratingGroupStats请求参数结构体
                */
                class DescribeMigratingGroupStatsRequest : public AbstractModel
                {
                public:
                    DescribeMigratingGroupStatsRequest();
                    ~DescribeMigratingGroupStatsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取迁移任务ID
                     * @return TaskId 迁移任务ID
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置迁移任务ID
                     * @param _taskId 迁移任务ID
                     * 
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取消费组名称
                     * @return GroupName 消费组名称
                     * 
                     */
                    std::string GetGroupName() const;

                    /**
                     * 设置消费组名称
                     * @param _groupName 消费组名称
                     * 
                     */
                    void SetGroupName(const std::string& _groupName);

                    /**
                     * 判断参数 GroupName 是否已赋值
                     * @return GroupName 是否已赋值
                     * 
                     */
                    bool GroupNameHasBeenSet() const;

                    /**
                     * 获取命名空间
                     * @return Namespace 命名空间
                     * 
                     */
                    std::string GetNamespace() const;

                    /**
                     * 设置命名空间
                     * @param _namespace 命名空间
                     * 
                     */
                    void SetNamespace(const std::string& _namespace);

                    /**
                     * 判断参数 Namespace 是否已赋值
                     * @return Namespace 是否已赋值
                     * 
                     */
                    bool NamespaceHasBeenSet() const;

                private:

                    /**
                     * 迁移任务ID
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 消费组名称
                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                    /**
                     * 命名空间
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TROCKET_V20230308_MODEL_DESCRIBEMIGRATINGGROUPSTATSREQUEST_H_
