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

#ifndef TENCENTCLOUD_APIS_V20240801_MODEL_TOKENLENGTHROUTEDTO_H_
#define TENCENTCLOUD_APIS_V20240801_MODEL_TOKENLENGTHROUTEDTO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/apis/v20240801/model/TargetModelDTO.h>


namespace TencentCloud
{
    namespace Apis
    {
        namespace V20240801
        {
            namespace Model
            {
                /**
                * token长度路由参数
                */
                class TokenLengthRouteDTO : public AbstractModel
                {
                public:
                    TokenLengthRouteDTO();
                    ~TokenLengthRouteDTO() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Token 区间下限</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MinTokens <p>Token 区间下限</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetMinTokens() const;

                    /**
                     * 设置<p>Token 区间下限</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _minTokens <p>Token 区间下限</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMinTokens(const int64_t& _minTokens);

                    /**
                     * 判断参数 MinTokens 是否已赋值
                     * @return MinTokens 是否已赋值
                     * 
                     */
                    bool MinTokensHasBeenSet() const;

                    /**
                     * 获取<p>Token 区间上限</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MaxTokens <p>Token 区间上限</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetMaxTokens() const;

                    /**
                     * 设置<p>Token 区间上限</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _maxTokens <p>Token 区间上限</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMaxTokens(const int64_t& _maxTokens);

                    /**
                     * 判断参数 MaxTokens 是否已赋值
                     * @return MaxTokens 是否已赋值
                     * 
                     */
                    bool MaxTokensHasBeenSet() const;

                    /**
                     * 获取<p>模型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TargetModels <p>模型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<TargetModelDTO> GetTargetModels() const;

                    /**
                     * 设置<p>模型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _targetModels <p>模型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTargetModels(const std::vector<TargetModelDTO>& _targetModels);

                    /**
                     * 判断参数 TargetModels 是否已赋值
                     * @return TargetModels 是否已赋值
                     * 
                     */
                    bool TargetModelsHasBeenSet() const;

                private:

                    /**
                     * <p>Token 区间下限</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_minTokens;
                    bool m_minTokensHasBeenSet;

                    /**
                     * <p>Token 区间上限</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_maxTokens;
                    bool m_maxTokensHasBeenSet;

                    /**
                     * <p>模型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<TargetModelDTO> m_targetModels;
                    bool m_targetModelsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APIS_V20240801_MODEL_TOKENLENGTHROUTEDTO_H_
