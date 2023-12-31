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

#ifndef TENCENTCLOUD_TMS_V20201229_MODEL_MODELRESULT_H_
#define TENCENTCLOUD_TMS_V20201229_MODEL_MODELRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tms/v20201229/model/Positions.h>


namespace TencentCloud
{
    namespace Tms
    {
        namespace V20201229
        {
            namespace Model
            {
                /**
                * 模型检测结果
                */
                class ModelResult : public AbstractModel
                {
                public:
                    ModelResult();
                    ~ModelResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取模型检测出的违规内容
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Content 模型检测出的违规内容
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetContent() const;

                    /**
                     * 设置模型检测出的违规内容
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _content 模型检测出的违规内容
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetContent(const std::string& _content);

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     * 
                     */
                    bool ContentHasBeenSet() const;

                    /**
                     * 获取模型检测出的违规内容的位置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Positions 模型检测出的违规内容的位置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<Positions> GetPositions() const;

                    /**
                     * 设置模型检测出的违规内容的位置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _positions 模型检测出的违规内容的位置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPositions(const std::vector<Positions>& _positions);

                    /**
                     * 判断参数 Positions 是否已赋值
                     * @return Positions 是否已赋值
                     * 
                     */
                    bool PositionsHasBeenSet() const;

                private:

                    /**
                     * 模型检测出的违规内容
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * 模型检测出的违规内容的位置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Positions> m_positions;
                    bool m_positionsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TMS_V20201229_MODEL_MODELRESULT_H_
