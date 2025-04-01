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

#ifndef TENCENTCLOUD_DBBRAIN_V20210527_MODEL_HEALTHSTATUS_H_
#define TENCENTCLOUD_DBBRAIN_V20210527_MODEL_HEALTHSTATUS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dbbrain/v20210527/model/ScoreDetail.h>


namespace TencentCloud
{
    namespace Dbbrain
    {
        namespace V20210527
        {
            namespace Model
            {
                /**
                * 实例健康详情。
                */
                class HealthStatus : public AbstractModel
                {
                public:
                    HealthStatus();
                    ~HealthStatus() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取健康分数，满分100。
                     * @return HealthScore 健康分数，满分100。
                     * 
                     */
                    int64_t GetHealthScore() const;

                    /**
                     * 设置健康分数，满分100。
                     * @param _healthScore 健康分数，满分100。
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
                     * 获取健康等级，取值包括："HEALTH" - 健康；"SUB_HEALTH" - 亚健康；"RISK"- 危险；"HIGH_RISK" - 高危。
                     * @return HealthLevel 健康等级，取值包括："HEALTH" - 健康；"SUB_HEALTH" - 亚健康；"RISK"- 危险；"HIGH_RISK" - 高危。
                     * 
                     */
                    std::string GetHealthLevel() const;

                    /**
                     * 设置健康等级，取值包括："HEALTH" - 健康；"SUB_HEALTH" - 亚健康；"RISK"- 危险；"HIGH_RISK" - 高危。
                     * @param _healthLevel 健康等级，取值包括："HEALTH" - 健康；"SUB_HEALTH" - 亚健康；"RISK"- 危险；"HIGH_RISK" - 高危。
                     * 
                     */
                    void SetHealthLevel(const std::string& _healthLevel);

                    /**
                     * 判断参数 HealthLevel 是否已赋值
                     * @return HealthLevel 是否已赋值
                     * 
                     */
                    bool HealthLevelHasBeenSet() const;

                    /**
                     * 获取总扣分分数。
                     * @return ScoreLost 总扣分分数。
                     * 
                     */
                    int64_t GetScoreLost() const;

                    /**
                     * 设置总扣分分数。
                     * @param _scoreLost 总扣分分数。
                     * 
                     */
                    void SetScoreLost(const int64_t& _scoreLost);

                    /**
                     * 判断参数 ScoreLost 是否已赋值
                     * @return ScoreLost 是否已赋值
                     * 
                     */
                    bool ScoreLostHasBeenSet() const;

                    /**
                     * 获取扣分详情。
                     * @return ScoreDetails 扣分详情。
                     * 
                     */
                    std::vector<ScoreDetail> GetScoreDetails() const;

                    /**
                     * 设置扣分详情。
                     * @param _scoreDetails 扣分详情。
                     * 
                     */
                    void SetScoreDetails(const std::vector<ScoreDetail>& _scoreDetails);

                    /**
                     * 判断参数 ScoreDetails 是否已赋值
                     * @return ScoreDetails 是否已赋值
                     * 
                     */
                    bool ScoreDetailsHasBeenSet() const;

                    /**
                     * 获取健康等级版本，默认为"V1"
                     * @return HealthLevelVersion 健康等级版本，默认为"V1"
                     * 
                     */
                    std::string GetHealthLevelVersion() const;

                    /**
                     * 设置健康等级版本，默认为"V1"
                     * @param _healthLevelVersion 健康等级版本，默认为"V1"
                     * 
                     */
                    void SetHealthLevelVersion(const std::string& _healthLevelVersion);

                    /**
                     * 判断参数 HealthLevelVersion 是否已赋值
                     * @return HealthLevelVersion 是否已赋值
                     * 
                     */
                    bool HealthLevelVersionHasBeenSet() const;

                private:

                    /**
                     * 健康分数，满分100。
                     */
                    int64_t m_healthScore;
                    bool m_healthScoreHasBeenSet;

                    /**
                     * 健康等级，取值包括："HEALTH" - 健康；"SUB_HEALTH" - 亚健康；"RISK"- 危险；"HIGH_RISK" - 高危。
                     */
                    std::string m_healthLevel;
                    bool m_healthLevelHasBeenSet;

                    /**
                     * 总扣分分数。
                     */
                    int64_t m_scoreLost;
                    bool m_scoreLostHasBeenSet;

                    /**
                     * 扣分详情。
                     */
                    std::vector<ScoreDetail> m_scoreDetails;
                    bool m_scoreDetailsHasBeenSet;

                    /**
                     * 健康等级版本，默认为"V1"
                     */
                    std::string m_healthLevelVersion;
                    bool m_healthLevelVersionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBBRAIN_V20210527_MODEL_HEALTHSTATUS_H_
