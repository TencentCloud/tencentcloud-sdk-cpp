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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_APPTRIGGERGONGFENGWEBHOOKCONFIG_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_APPTRIGGERGONGFENGWEBHOOKCONFIG_H_

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
                * 工蜂 Webhook 来源配置。
                */
                class AppTriggerGongfengWebhookConfig : public AbstractModel
                {
                public:
                    AppTriggerGongfengWebhookConfig();
                    ~AppTriggerGongfengWebhookConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取监听的工蜂事件标识，原值传递，1 至 20 个，如 push、merge_request。
                     * @return EventList 监听的工蜂事件标识，原值传递，1 至 20 个，如 push、merge_request。
                     * 
                     */
                    std::vector<std::string> GetEventList() const;

                    /**
                     * 设置监听的工蜂事件标识，原值传递，1 至 20 个，如 push、merge_request。
                     * @param _eventList 监听的工蜂事件标识，原值传递，1 至 20 个，如 push、merge_request。
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
                     * 获取工蜂项目 ID 或项目路径，不能为空。
                     * @return ProjectId 工蜂项目 ID 或项目路径，不能为空。
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置工蜂项目 ID 或项目路径，不能为空。
                     * @param _projectId 工蜂项目 ID 或项目路径，不能为空。
                     * 
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取分支规则列表，最多 20 个；空表示全部分支。
                     * @return BranchRuleList 分支规则列表，最多 20 个；空表示全部分支。
                     * 
                     */
                    std::vector<std::string> GetBranchRuleList() const;

                    /**
                     * 设置分支规则列表，最多 20 个；空表示全部分支。
                     * @param _branchRuleList 分支规则列表，最多 20 个；空表示全部分支。
                     * 
                     */
                    void SetBranchRuleList(const std::vector<std::string>& _branchRuleList);

                    /**
                     * 判断参数 BranchRuleList 是否已赋值
                     * @return BranchRuleList 是否已赋值
                     * 
                     */
                    bool BranchRuleListHasBeenSet() const;

                    /**
                     * 获取合并请求动作标识，最多 20 个；监听 merge_request 时必填，如 open、merge。
                     * @return MRActionList 合并请求动作标识，最多 20 个；监听 merge_request 时必填，如 open、merge。
                     * 
                     */
                    std::vector<std::string> GetMRActionList() const;

                    /**
                     * 设置合并请求动作标识，最多 20 个；监听 merge_request 时必填，如 open、merge。
                     * @param _mRActionList 合并请求动作标识，最多 20 个；监听 merge_request 时必填，如 open、merge。
                     * 
                     */
                    void SetMRActionList(const std::vector<std::string>& _mRActionList);

                    /**
                     * 判断参数 MRActionList 是否已赋值
                     * @return MRActionList 是否已赋值
                     * 
                     */
                    bool MRActionListHasBeenSet() const;

                private:

                    /**
                     * 监听的工蜂事件标识，原值传递，1 至 20 个，如 push、merge_request。
                     */
                    std::vector<std::string> m_eventList;
                    bool m_eventListHasBeenSet;

                    /**
                     * 工蜂项目 ID 或项目路径，不能为空。
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 分支规则列表，最多 20 个；空表示全部分支。
                     */
                    std::vector<std::string> m_branchRuleList;
                    bool m_branchRuleListHasBeenSet;

                    /**
                     * 合并请求动作标识，最多 20 个；监听 merge_request 时必填，如 open、merge。
                     */
                    std::vector<std::string> m_mRActionList;
                    bool m_mRActionListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_APPTRIGGERGONGFENGWEBHOOKCONFIG_H_
