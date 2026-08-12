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

#ifndef TENCENTCLOUD_RCE_V20260130_MODEL_ASSESSRISKRSP_H_
#define TENCENTCLOUD_RCE_V20260130_MODEL_ASSESSRISKRSP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/rce/v20260130/model/Decision.h>
#include <tencentcloud/rce/v20260130/model/Score.h>
#include <tencentcloud/rce/v20260130/model/Cust.h>


namespace TencentCloud
{
    namespace Rce
    {
        namespace V20260130
        {
            namespace Model
            {
                /**
                * 事件风险评估返回结果
                */
                class AssessRiskRsp : public AbstractModel
                {
                public:
                    AssessRiskRsp();
                    ~AssessRiskRsp() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>决策信息</p>
                     * @return Decision <p>决策信息</p>
                     * 
                     */
                    Decision GetDecision() const;

                    /**
                     * 设置<p>决策信息</p>
                     * @param _decision <p>决策信息</p>
                     * 
                     */
                    void SetDecision(const Decision& _decision);

                    /**
                     * 判断参数 Decision 是否已赋值
                     * @return Decision 是否已赋值
                     * 
                     */
                    bool DecisionHasBeenSet() const;

                    /**
                     * 获取<p>风险分，根据您开启的产品服务计算的评分结果</p>
                     * @return Score <p>风险分，根据您开启的产品服务计算的评分结果</p>
                     * 
                     */
                    Score GetScore() const;

                    /**
                     * 设置<p>风险分，根据您开启的产品服务计算的评分结果</p>
                     * @param _score <p>风险分，根据您开启的产品服务计算的评分结果</p>
                     * 
                     */
                    void SetScore(const Score& _score);

                    /**
                     * 判断参数 Score 是否已赋值
                     * @return Score 是否已赋值
                     * 
                     */
                    bool ScoreHasBeenSet() const;

                    /**
                     * 获取<p>扩展信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExtraInfo <p>扩展信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<Cust> GetExtraInfo() const;

                    /**
                     * 设置<p>扩展信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _extraInfo <p>扩展信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExtraInfo(const std::vector<Cust>& _extraInfo);

                    /**
                     * 判断参数 ExtraInfo 是否已赋值
                     * @return ExtraInfo 是否已赋值
                     * 
                     */
                    bool ExtraInfoHasBeenSet() const;

                private:

                    /**
                     * <p>决策信息</p>
                     */
                    Decision m_decision;
                    bool m_decisionHasBeenSet;

                    /**
                     * <p>风险分，根据您开启的产品服务计算的评分结果</p>
                     */
                    Score m_score;
                    bool m_scoreHasBeenSet;

                    /**
                     * <p>扩展信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Cust> m_extraInfo;
                    bool m_extraInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RCE_V20260130_MODEL_ASSESSRISKRSP_H_
