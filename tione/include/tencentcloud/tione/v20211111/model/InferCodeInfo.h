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

#ifndef TENCENTCLOUD_TIONE_V20211111_MODEL_INFERCODEINFO_H_
#define TENCENTCLOUD_TIONE_V20211111_MODEL_INFERCODEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tione/v20211111/model/CosPathInfo.h>


namespace TencentCloud
{
    namespace Tione
    {
        namespace V20211111
        {
            namespace Model
            {
                /**
                * 推理代码的信息
                */
                class InferCodeInfo : public AbstractModel
                {
                public:
                    InferCodeInfo();
                    ~InferCodeInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取推理代码所在的cos详情
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CosPathInfo 推理代码所在的cos详情
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    CosPathInfo GetCosPathInfo() const;

                    /**
                     * 设置推理代码所在的cos详情
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cosPathInfo 推理代码所在的cos详情
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCosPathInfo(const CosPathInfo& _cosPathInfo);

                    /**
                     * 判断参数 CosPathInfo 是否已赋值
                     * @return CosPathInfo 是否已赋值
                     * 
                     */
                    bool CosPathInfoHasBeenSet() const;

                private:

                    /**
                     * 推理代码所在的cos详情
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    CosPathInfo m_cosPathInfo;
                    bool m_cosPathInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_INFERCODEINFO_H_
