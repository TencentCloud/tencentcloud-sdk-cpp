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

#ifndef TENCENTCLOUD_MRS_V20200910_MODEL_CHECK_H_
#define TENCENTCLOUD_MRS_V20200910_MODEL_CHECK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mrs/v20200910/model/Desc.h>
#include <tencentcloud/mrs/v20200910/model/Summary.h>


namespace TencentCloud
{
    namespace Mrs
    {
        namespace V20200910
        {
            namespace Model
            {
                /**
                * 检查报告单
                */
                class Check : public AbstractModel
                {
                public:
                    Check();
                    ~Check() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Desc 描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    Desc GetDesc() const;

                    /**
                     * 设置描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _desc 描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDesc(const Desc& _desc);

                    /**
                     * 判断参数 Desc 是否已赋值
                     * @return Desc 是否已赋值
                     * 
                     */
                    bool DescHasBeenSet() const;

                    /**
                     * 获取结论
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Summary 结论
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    Summary GetSummary() const;

                    /**
                     * 设置结论
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _summary 结论
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSummary(const Summary& _summary);

                    /**
                     * 判断参数 Summary 是否已赋值
                     * @return Summary 是否已赋值
                     * 
                     */
                    bool SummaryHasBeenSet() const;

                private:

                    /**
                     * 描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Desc m_desc;
                    bool m_descHasBeenSet;

                    /**
                     * 结论
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Summary m_summary;
                    bool m_summaryHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MRS_V20200910_MODEL_CHECK_H_
