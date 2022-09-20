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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_SWITCHLOGTOPICTASKREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_SWITCHLOGTOPICTASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * SwitchLogTopicTask请求参数结构体
                */
                class SwitchLogTopicTaskRequest : public AbstractModel
                {
                public:
                    SwitchLogTopicTaskRequest();
                    ~SwitchLogTopicTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取推送任务的主题ID。
                     * @return TopicId 推送任务的主题ID。
                     */
                    std::string GetTopicId() const;

                    /**
                     * 设置推送任务的主题ID。
                     * @param TopicId 推送任务的主题ID。
                     */
                    void SetTopicId(const std::string& _topicId);

                    /**
                     * 判断参数 TopicId 是否已赋值
                     * @return TopicId 是否已赋值
                     */
                    bool TopicIdHasBeenSet() const;

                    /**
                     * 获取是否开启推送，可选的动作有：
<li>true：开启推送任务；</li>
<li>false：关闭推送任务。</li>
                     * @return IsOpen 是否开启推送，可选的动作有：
<li>true：开启推送任务；</li>
<li>false：关闭推送任务。</li>
                     */
                    bool GetIsOpen() const;

                    /**
                     * 设置是否开启推送，可选的动作有：
<li>true：开启推送任务；</li>
<li>false：关闭推送任务。</li>
                     * @param IsOpen 是否开启推送，可选的动作有：
<li>true：开启推送任务；</li>
<li>false：关闭推送任务。</li>
                     */
                    void SetIsOpen(const bool& _isOpen);

                    /**
                     * 判断参数 IsOpen 是否已赋值
                     * @return IsOpen 是否已赋值
                     */
                    bool IsOpenHasBeenSet() const;

                private:

                    /**
                     * 推送任务的主题ID。
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                    /**
                     * 是否开启推送，可选的动作有：
<li>true：开启推送任务；</li>
<li>false：关闭推送任务。</li>
                     */
                    bool m_isOpen;
                    bool m_isOpenHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_SWITCHLOGTOPICTASKREQUEST_H_
