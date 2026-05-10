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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_DELETERECORDINGRULEYAMLTASKREQUEST_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_DELETERECORDINGRULEYAMLTASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * DeleteRecordingRuleYamlTask请求参数结构体
                */
                class DeleteRecordingRuleYamlTaskRequest : public AbstractModel
                {
                public:
                    DeleteRecordingRuleYamlTaskRequest();
                    ~DeleteRecordingRuleYamlTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>任务ID</p>
                     * @return YamlId <p>任务ID</p>
                     * 
                     */
                    std::string GetYamlId() const;

                    /**
                     * 设置<p>任务ID</p>
                     * @param _yamlId <p>任务ID</p>
                     * 
                     */
                    void SetYamlId(const std::string& _yamlId);

                    /**
                     * 判断参数 YamlId 是否已赋值
                     * @return YamlId 是否已赋值
                     * 
                     */
                    bool YamlIdHasBeenSet() const;

                    /**
                     * 获取<p>源指标主题id</p>
                     * @return TopicId <p>源指标主题id</p>
                     * 
                     */
                    std::string GetTopicId() const;

                    /**
                     * 设置<p>源指标主题id</p>
                     * @param _topicId <p>源指标主题id</p>
                     * 
                     */
                    void SetTopicId(const std::string& _topicId);

                    /**
                     * 判断参数 TopicId 是否已赋值
                     * @return TopicId 是否已赋值
                     * 
                     */
                    bool TopicIdHasBeenSet() const;

                private:

                    /**
                     * <p>任务ID</p>
                     */
                    std::string m_yamlId;
                    bool m_yamlIdHasBeenSet;

                    /**
                     * <p>源指标主题id</p>
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_DELETERECORDINGRULEYAMLTASKREQUEST_H_
