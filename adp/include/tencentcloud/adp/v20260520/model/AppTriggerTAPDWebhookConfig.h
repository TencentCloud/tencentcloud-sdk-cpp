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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_APPTRIGGERTAPDWEBHOOKCONFIG_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_APPTRIGGERTAPDWEBHOOKCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * TAPD Webhook 来源配置。
                */
                class AppTriggerTAPDWebhookConfig : public AbstractModel
                {
                public:
                    AppTriggerTAPDWebhookConfig();
                    ~AppTriggerTAPDWebhookConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取监听的 TAPD 事件标识，原值传递，1 至 20 个，如 story::create、bug::update。
                     * @return EventList 监听的 TAPD 事件标识，原值传递，1 至 20 个，如 story::create、bug::update。
                     * 
                     */
                    std::vector<std::string> GetEventList() const;

                    /**
                     * 设置监听的 TAPD 事件标识，原值传递，1 至 20 个，如 story::create、bug::update。
                     * @param _eventList 监听的 TAPD 事件标识，原值传递，1 至 20 个，如 story::create、bug::update。
                     * 
                     */
                    void SetEventList(const std::vector<std::string>& _eventList);

                    /**
                     * 判断参数 EventList 是否已赋值
                     * @return EventList 是否已赋值
                     * 
                     */
                    bool EventListHasBeenSet() const;

                    /**
                     * 获取TAPD 项目 ID，不能为空。
                     * @return ProjectId TAPD 项目 ID，不能为空。
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置TAPD 项目 ID，不能为空。
                     * @param _projectId TAPD 项目 ID，不能为空。
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
                     * 监听的 TAPD 事件标识，原值传递，1 至 20 个，如 story::create、bug::update。
                     */
                    std::vector<std::string> m_eventList;
                    bool m_eventListHasBeenSet;

                    /**
                     * TAPD 项目 ID，不能为空。
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_APPTRIGGERTAPDWEBHOOKCONFIG_H_
