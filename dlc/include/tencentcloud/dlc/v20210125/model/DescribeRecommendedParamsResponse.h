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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBERECOMMENDEDPARAMSRESPONSE_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBERECOMMENDEDPARAMSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/RecommendedAdvancedParams.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * DescribeRecommendedParams返回参数结构体
                */
                class DescribeRecommendedParamsResponse : public AbstractModel
                {
                public:
                    DescribeRecommendedParamsResponse();
                    ~DescribeRecommendedParamsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>推荐来源: builtin | matched | default</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Source <p>推荐来源: builtin | matched | default</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSource() const;

                    /**
                     * 判断参数 Source 是否已赋值
                     * @return Source 是否已赋值
                     * 
                     */
                    bool SourceHasBeenSet() const;

                    /**
                     * 获取<p>推荐的高级参数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AdvancedParams <p>推荐的高级参数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    RecommendedAdvancedParams GetAdvancedParams() const;

                    /**
                     * 判断参数 AdvancedParams 是否已赋值
                     * @return AdvancedParams 是否已赋值
                     * 
                     */
                    bool AdvancedParamsHasBeenSet() const;

                private:

                    /**
                     * <p>推荐来源: builtin | matched | default</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_source;
                    bool m_sourceHasBeenSet;

                    /**
                     * <p>推荐的高级参数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    RecommendedAdvancedParams m_advancedParams;
                    bool m_advancedParamsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBERECOMMENDEDPARAMSRESPONSE_H_
