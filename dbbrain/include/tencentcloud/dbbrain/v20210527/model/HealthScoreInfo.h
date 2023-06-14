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

#ifndef TENCENTCLOUD_DBBRAIN_V20210527_MODEL_HEALTHSCOREINFO_H_
#define TENCENTCLOUD_DBBRAIN_V20210527_MODEL_HEALTHSCOREINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dbbrain/v20210527/model/IssueTypeInfo.h>


namespace TencentCloud
{
    namespace Dbbrain
    {
        namespace V20210527
        {
            namespace Model
            {
                /**
                * 获取健康得分返回的详情。
                */
                class HealthScoreInfo : public AbstractModel
                {
                public:
                    HealthScoreInfo();
                    ~HealthScoreInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取异常详情。
                     * @return IssueTypes 异常详情。
                     * 
                     */
                    std::vector<IssueTypeInfo> GetIssueTypes() const;

                    /**
                     * 设置异常详情。
                     * @param _issueTypes 异常详情。
                     * 
                     */
                    void SetIssueTypes(const std::vector<IssueTypeInfo>& _issueTypes);

                    /**
                     * 判断参数 IssueTypes 是否已赋值
                     * @return IssueTypes 是否已赋值
                     * 
                     */
                    bool IssueTypesHasBeenSet() const;

                    /**
                     * 获取异常事件总数。
                     * @return EventsTotalCount 异常事件总数。
                     * 
                     */
                    int64_t GetEventsTotalCount() const;

                    /**
                     * 设置异常事件总数。
                     * @param _eventsTotalCount 异常事件总数。
                     * 
                     */
                    void SetEventsTotalCount(const int64_t& _eventsTotalCount);

                    /**
                     * 判断参数 EventsTotalCount 是否已赋值
                     * @return EventsTotalCount 是否已赋值
                     * 
                     */
                    bool EventsTotalCountHasBeenSet() const;

                    /**
                     * 获取健康得分。
                     * @return HealthScore 健康得分。
                     * 
                     */
                    int64_t GetHealthScore() const;

                    /**
                     * 设置健康得分。
                     * @param _healthScore 健康得分。
                     * 
                     */
                    void SetHealthScore(const int64_t& _healthScore);

                    /**
                     * 判断参数 HealthScore 是否已赋值
                     * @return HealthScore 是否已赋值
                     * 
                     */
                    bool HealthScoreHasBeenSet() const;

                    /**
                     * 获取健康等级, 如："HEALTH", "SUB_HEALTH", "RISK", "HIGH_RISK"。
                     * @return HealthLevel 健康等级, 如："HEALTH", "SUB_HEALTH", "RISK", "HIGH_RISK"。
                     * 
                     */
                    std::string GetHealthLevel() const;

                    /**
                     * 设置健康等级, 如："HEALTH", "SUB_HEALTH", "RISK", "HIGH_RISK"。
                     * @param _healthLevel 健康等级, 如："HEALTH", "SUB_HEALTH", "RISK", "HIGH_RISK"。
                     * 
                     */
                    void SetHealthLevel(const std::string& _healthLevel);

                    /**
                     * 判断参数 HealthLevel 是否已赋值
                     * @return HealthLevel 是否已赋值
                     * 
                     */
                    bool HealthLevelHasBeenSet() const;

                private:

                    /**
                     * 异常详情。
                     */
                    std::vector<IssueTypeInfo> m_issueTypes;
                    bool m_issueTypesHasBeenSet;

                    /**
                     * 异常事件总数。
                     */
                    int64_t m_eventsTotalCount;
                    bool m_eventsTotalCountHasBeenSet;

                    /**
                     * 健康得分。
                     */
                    int64_t m_healthScore;
                    bool m_healthScoreHasBeenSet;

                    /**
                     * 健康等级, 如："HEALTH", "SUB_HEALTH", "RISK", "HIGH_RISK"。
                     */
                    std::string m_healthLevel;
                    bool m_healthLevelHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBBRAIN_V20210527_MODEL_HEALTHSCOREINFO_H_
