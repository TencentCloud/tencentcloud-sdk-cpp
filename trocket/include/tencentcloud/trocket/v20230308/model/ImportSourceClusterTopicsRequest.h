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

#ifndef TENCENTCLOUD_TROCKET_V20230308_MODEL_IMPORTSOURCECLUSTERTOPICSREQUEST_H_
#define TENCENTCLOUD_TROCKET_V20230308_MODEL_IMPORTSOURCECLUSTERTOPICSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/trocket/v20230308/model/SourceClusterTopicConfig.h>


namespace TencentCloud
{
    namespace Trocket
    {
        namespace V20230308
        {
            namespace Model
            {
                /**
                * ImportSourceClusterTopics请求参数结构体
                */
                class ImportSourceClusterTopicsRequest : public AbstractModel
                {
                public:
                    ImportSourceClusterTopicsRequest();
                    ~ImportSourceClusterTopicsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取任务ID，可在[DescribeSmoothMigrationTaskList](https://cloud.tencent.com/document/api/1493/119997)接口返回的[SmoothMigrationTaskItem](https://cloud.tencent.com/document/api/1493/96031#SmoothMigrationTaskItem)或控制台中获得。

                     * @return TaskId 任务ID，可在[DescribeSmoothMigrationTaskList](https://cloud.tencent.com/document/api/1493/119997)接口返回的[SmoothMigrationTaskItem](https://cloud.tencent.com/document/api/1493/96031#SmoothMigrationTaskItem)或控制台中获得。

                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置任务ID，可在[DescribeSmoothMigrationTaskList](https://cloud.tencent.com/document/api/1493/119997)接口返回的[SmoothMigrationTaskItem](https://cloud.tencent.com/document/api/1493/96031#SmoothMigrationTaskItem)或控制台中获得。

                     * @param _taskId 任务ID，可在[DescribeSmoothMigrationTaskList](https://cloud.tencent.com/document/api/1493/119997)接口返回的[SmoothMigrationTaskItem](https://cloud.tencent.com/document/api/1493/96031#SmoothMigrationTaskItem)或控制台中获得。

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
                     * 获取待导入的主题列表
                     * @return TopicList 待导入的主题列表
                     * 
                     */
                    std::vector<SourceClusterTopicConfig> GetTopicList() const;

                    /**
                     * 设置待导入的主题列表
                     * @param _topicList 待导入的主题列表
                     * 
                     */
                    void SetTopicList(const std::vector<SourceClusterTopicConfig>& _topicList);

                    /**
                     * 判断参数 TopicList 是否已赋值
                     * @return TopicList 是否已赋值
                     * 
                     */
                    bool TopicListHasBeenSet() const;

                private:

                    /**
                     * 任务ID，可在[DescribeSmoothMigrationTaskList](https://cloud.tencent.com/document/api/1493/119997)接口返回的[SmoothMigrationTaskItem](https://cloud.tencent.com/document/api/1493/96031#SmoothMigrationTaskItem)或控制台中获得。

                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 待导入的主题列表
                     */
                    std::vector<SourceClusterTopicConfig> m_topicList;
                    bool m_topicListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TROCKET_V20230308_MODEL_IMPORTSOURCECLUSTERTOPICSREQUEST_H_
