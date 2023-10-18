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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_IMPORTROCKETMQTOPICSREQUEST_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_IMPORTROCKETMQTOPICSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tdmq/v20200217/model/RocketMQTopicConfig.h>


namespace TencentCloud
{
    namespace Tdmq
    {
        namespace V20200217
        {
            namespace Model
            {
                /**
                * ImportRocketMQTopics请求参数结构体
                */
                class ImportRocketMQTopicsRequest : public AbstractModel
                {
                public:
                    ImportRocketMQTopicsRequest();
                    ~ImportRocketMQTopicsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取导入topic
                     * @return Topics 导入topic
                     * 
                     */
                    std::vector<RocketMQTopicConfig> GetTopics() const;

                    /**
                     * 设置导入topic
                     * @param _topics 导入topic
                     * 
                     */
                    void SetTopics(const std::vector<RocketMQTopicConfig>& _topics);

                    /**
                     * 判断参数 Topics 是否已赋值
                     * @return Topics 是否已赋值
                     * 
                     */
                    bool TopicsHasBeenSet() const;

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

                private:

                    /**
                     * 导入topic
                     */
                    std::vector<RocketMQTopicConfig> m_topics;
                    bool m_topicsHasBeenSet;

                    /**
                     * 任务ID
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_IMPORTROCKETMQTOPICSREQUEST_H_
