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

#ifndef TENCENTCLOUD_TRDP_V20220726_MODEL_EVALUATEUSERRISKRESPONSE_H_
#define TENCENTCLOUD_TRDP_V20220726_MODEL_EVALUATEUSERRISKRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/trdp/v20220726/model/EvaluationResult.h>


namespace TencentCloud
{
    namespace Trdp
    {
        namespace V20220726
        {
            namespace Model
            {
                /**
                * EvaluateUserRisk返回参数结构体
                */
                class EvaluateUserRiskResponse : public AbstractModel
                {
                public:
                    EvaluateUserRiskResponse();
                    ~EvaluateUserRiskResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取评估结果
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EvaluationResult 评估结果
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    EvaluationResult GetEvaluationResult() const;

                    /**
                     * 判断参数 EvaluationResult 是否已赋值
                     * @return EvaluationResult 是否已赋值
                     * 
                     */
                    bool EvaluationResultHasBeenSet() const;

                private:

                    /**
                     * 评估结果
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    EvaluationResult m_evaluationResult;
                    bool m_evaluationResultHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRDP_V20220726_MODEL_EVALUATEUSERRISKRESPONSE_H_
