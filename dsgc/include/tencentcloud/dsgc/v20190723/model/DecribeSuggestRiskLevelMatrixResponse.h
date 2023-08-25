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

#ifndef TENCENTCLOUD_DSGC_V20190723_MODEL_DECRIBESUGGESTRISKLEVELMATRIXRESPONSE_H_
#define TENCENTCLOUD_DSGC_V20190723_MODEL_DECRIBESUGGESTRISKLEVELMATRIXRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dsgc/v20190723/model/SuggestRiskLevelMatrix.h>


namespace TencentCloud
{
    namespace Dsgc
    {
        namespace V20190723
        {
            namespace Model
            {
                /**
                * DecribeSuggestRiskLevelMatrix返回参数结构体
                */
                class DecribeSuggestRiskLevelMatrixResponse : public AbstractModel
                {
                public:
                    DecribeSuggestRiskLevelMatrixResponse();
                    ~DecribeSuggestRiskLevelMatrixResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取矩阵
                     * @return SuggestRiskLevelMatrix 矩阵
                     * 
                     */
                    std::vector<SuggestRiskLevelMatrix> GetSuggestRiskLevelMatrix() const;

                    /**
                     * 判断参数 SuggestRiskLevelMatrix 是否已赋值
                     * @return SuggestRiskLevelMatrix 是否已赋值
                     * 
                     */
                    bool SuggestRiskLevelMatrixHasBeenSet() const;

                private:

                    /**
                     * 矩阵
                     */
                    std::vector<SuggestRiskLevelMatrix> m_suggestRiskLevelMatrix;
                    bool m_suggestRiskLevelMatrixHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DSGC_V20190723_MODEL_DECRIBESUGGESTRISKLEVELMATRIXRESPONSE_H_
