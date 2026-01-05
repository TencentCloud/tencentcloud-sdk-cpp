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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_DELETEQUALITYRULEGROUPREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_DELETEQUALITYRULEGROUPREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20250806
        {
            namespace Model
            {
                /**
                * DeleteQualityRuleGroup请求参数结构体
                */
                class DeleteQualityRuleGroupRequest : public AbstractModel
                {
                public:
                    DeleteQualityRuleGroupRequest();
                    ~DeleteQualityRuleGroupRequest() = default;
                    std::string ToJsonString() const;


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

                    /**
                     * 获取监控任务id
                     * @return RuleGroupIdList 监控任务id
                     * 
                     */
                    std::vector<uint64_t> GetRuleGroupIdList() const;

                    /**
                     * 设置监控任务id
                     * @param _ruleGroupIdList 监控任务id
                     * 
                     */
                    void SetRuleGroupIdList(const std::vector<uint64_t>& _ruleGroupIdList);

                    /**
                     * 判断参数 RuleGroupIdList 是否已赋值
                     * @return RuleGroupIdList 是否已赋值
                     * 
                     */
                    bool RuleGroupIdListHasBeenSet() const;

                private:

                    /**
                     * 项目Id
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 监控任务id
                     */
                    std::vector<uint64_t> m_ruleGroupIdList;
                    bool m_ruleGroupIdListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_DELETEQUALITYRULEGROUPREQUEST_H_
