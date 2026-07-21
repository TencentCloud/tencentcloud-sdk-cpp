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

#ifndef TENCENTCLOUD_RCE_V20260130_MODEL_ASSESSENVIRONMENTRISKRSP_H_
#define TENCENTCLOUD_RCE_V20260130_MODEL_ASSESSENVIRONMENTRISKRSP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/rce/v20260130/model/DataScore.h>
#include <tencentcloud/rce/v20260130/model/Environment.h>


namespace TencentCloud
{
    namespace Rce
    {
        namespace V20260130
        {
            namespace Model
            {
                /**
                * 环境风险评估返回结果
                */
                class AssessEnvironmentRiskRsp : public AbstractModel
                {
                public:
                    AssessEnvironmentRiskRsp();
                    ~AssessEnvironmentRiskRsp() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>IP环境风险分信息</p>
                     * @return Score <p>IP环境风险分信息</p>
                     * 
                     */
                    DataScore GetScore() const;

                    /**
                     * 设置<p>IP环境风险分信息</p>
                     * @param _score <p>IP环境风险分信息</p>
                     * 
                     */
                    void SetScore(const DataScore& _score);

                    /**
                     * 判断参数 Score 是否已赋值
                     * @return Score 是否已赋值
                     * 
                     */
                    bool ScoreHasBeenSet() const;

                    /**
                     * 获取<p>IP环境基础信息</p>
                     * @return Environment <p>IP环境基础信息</p>
                     * 
                     */
                    Environment GetEnvironment() const;

                    /**
                     * 设置<p>IP环境基础信息</p>
                     * @param _environment <p>IP环境基础信息</p>
                     * 
                     */
                    void SetEnvironment(const Environment& _environment);

                    /**
                     * 判断参数 Environment 是否已赋值
                     * @return Environment 是否已赋值
                     * 
                     */
                    bool EnvironmentHasBeenSet() const;

                private:

                    /**
                     * <p>IP环境风险分信息</p>
                     */
                    DataScore m_score;
                    bool m_scoreHasBeenSet;

                    /**
                     * <p>IP环境基础信息</p>
                     */
                    Environment m_environment;
                    bool m_environmentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RCE_V20260130_MODEL_ASSESSENVIRONMENTRISKRSP_H_
