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

#ifndef TENCENTCLOUD_DSGC_V20190723_MODEL_SUGGESTRISKLEVELMATRIX_H_
#define TENCENTCLOUD_DSGC_V20190723_MODEL_SUGGESTRISKLEVELMATRIX_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dsgc/v20190723/model/SuggestRiskLevelMatrixItem.h>


namespace TencentCloud
{
    namespace Dsgc
    {
        namespace V20190723
        {
            namespace Model
            {
                /**
                * 生成的建议的风险等级矩阵
                */
                class SuggestRiskLevelMatrix : public AbstractModel
                {
                public:
                    SuggestRiskLevelMatrix();
                    ~SuggestRiskLevelMatrix() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取矩阵
                     * @return RiskLevelMatrix 矩阵
                     * 
                     */
                    std::vector<SuggestRiskLevelMatrixItem> GetRiskLevelMatrix() const;

                    /**
                     * 设置矩阵
                     * @param _riskLevelMatrix 矩阵
                     * 
                     */
                    void SetRiskLevelMatrix(const std::vector<SuggestRiskLevelMatrixItem>& _riskLevelMatrix);

                    /**
                     * 判断参数 RiskLevelMatrix 是否已赋值
                     * @return RiskLevelMatrix 是否已赋值
                     * 
                     */
                    bool RiskLevelMatrixHasBeenSet() const;

                private:

                    /**
                     * 矩阵
                     */
                    std::vector<SuggestRiskLevelMatrixItem> m_riskLevelMatrix;
                    bool m_riskLevelMatrixHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DSGC_V20190723_MODEL_SUGGESTRISKLEVELMATRIX_H_
