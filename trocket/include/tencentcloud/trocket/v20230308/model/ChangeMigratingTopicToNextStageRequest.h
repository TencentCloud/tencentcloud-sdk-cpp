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

#ifndef TENCENTCLOUD_TROCKET_V20230308_MODEL_CHANGEMIGRATINGTOPICTONEXTSTAGEREQUEST_H_
#define TENCENTCLOUD_TROCKET_V20230308_MODEL_CHANGEMIGRATINGTOPICTONEXTSTAGEREQUEST_H_

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
                * ChangeMigratingTopicToNextStage请求参数结构体
                */
                class ChangeMigratingTopicToNextStageRequest : public AbstractModel
                {
                public:
                    ChangeMigratingTopicToNextStageRequest();
                    ~ChangeMigratingTopicToNextStageRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取任务ID
                     * @return TaskId 任务ID
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置任务ID
                     * @param _taskId 任务ID
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
                     * 获取主题名称列表
                     * @return TopicNameList 主题名称列表
                     * 
                     */
                    std::vector<std::string> GetTopicNameList() const;

                    /**
                     * 设置主题名称列表
                     * @param _topicNameList 主题名称列表
                     * 
                     */
                    void SetTopicNameList(const std::vector<std::string>& _topicNameList);

                    /**
                     * 判断参数 TopicNameList 是否已赋值
                     * @return TopicNameList 是否已赋值
                     * 
                     */
                    bool TopicNameListHasBeenSet() const;

                    /**
                     * 获取命名空间列表，仅4.x集群有效，与TopicNameList一一对应
                     * @return NamespaceList 命名空间列表，仅4.x集群有效，与TopicNameList一一对应
                     * 
                     */
                    std::vector<std::string> GetNamespaceList() const;

                    /**
                     * 设置命名空间列表，仅4.x集群有效，与TopicNameList一一对应
                     * @param _namespaceList 命名空间列表，仅4.x集群有效，与TopicNameList一一对应
                     * 
                     */
                    void SetNamespaceList(const std::vector<std::string>& _namespaceList);

                    /**
                     * 判断参数 NamespaceList 是否已赋值
                     * @return NamespaceList 是否已赋值
                     * 
                     */
                    bool NamespaceListHasBeenSet() const;

                private:

                    /**
                     * 任务ID
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 主题名称列表
                     */
                    std::vector<std::string> m_topicNameList;
                    bool m_topicNameListHasBeenSet;

                    /**
                     * 命名空间列表，仅4.x集群有效，与TopicNameList一一对应
                     */
                    std::vector<std::string> m_namespaceList;
                    bool m_namespaceListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TROCKET_V20230308_MODEL_CHANGEMIGRATINGTOPICTONEXTSTAGEREQUEST_H_
