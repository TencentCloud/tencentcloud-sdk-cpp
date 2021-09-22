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

#ifndef TENCENTCLOUD_RCE_V20201103_MODEL_OUTPUTDESCRIBERISKMODELVALUE_H_
#define TENCENTCLOUD_RCE_V20201103_MODEL_OUTPUTDESCRIBERISKMODELVALUE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Rce
    {
        namespace V20201103
        {
            namespace Model
            {
                /**
                * 风控建模服务出参对应值
                */
                class OutputDescribeRiskModelValue : public AbstractModel
                {
                public:
                    OutputDescribeRiskModelValue();
                    ~OutputDescribeRiskModelValue() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取模型分数值
                     * @return ApplyScore 模型分数值
                     */
                    double GetApplyScore() const;

                    /**
                     * 设置模型分数值
                     * @param ApplyScore 模型分数值
                     */
                    void SetApplyScore(const double& _applyScore);

                    /**
                     * 判断参数 ApplyScore 是否已赋值
                     * @return ApplyScore 是否已赋值
                     */
                    bool ApplyScoreHasBeenSet() const;

                private:

                    /**
                     * 模型分数值
                     */
                    double m_applyScore;
                    bool m_applyScoreHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RCE_V20201103_MODEL_OUTPUTDESCRIBERISKMODELVALUE_H_
