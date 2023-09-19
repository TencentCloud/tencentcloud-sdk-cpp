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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_AIREVIEWPORNTASKINPUT_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_AIREVIEWPORNTASKINPUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * 内容审核鉴黄任务输入参数类型
                */
                class AiReviewPornTaskInput : public AbstractModel
                {
                public:
                    AiReviewPornTaskInput();
                    ~AiReviewPornTaskInput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取鉴黄模板 ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Definition 鉴黄模板 ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetDefinition() const;

                    /**
                     * 设置鉴黄模板 ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _definition 鉴黄模板 ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDefinition(const uint64_t& _definition);

                    /**
                     * 判断参数 Definition 是否已赋值
                     * @return Definition 是否已赋值
                     * 
                     */
                    bool DefinitionHasBeenSet() const;

                private:

                    /**
                     * 鉴黄模板 ID。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_definition;
                    bool m_definitionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_AIREVIEWPORNTASKINPUT_H_
