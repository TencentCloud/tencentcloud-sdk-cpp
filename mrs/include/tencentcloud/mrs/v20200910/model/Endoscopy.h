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

#ifndef TENCENTCLOUD_MRS_V20200910_MODEL_ENDOSCOPY_H_
#define TENCENTCLOUD_MRS_V20200910_MODEL_ENDOSCOPY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mrs/v20200910/model/BiopsyPart.h>
#include <tencentcloud/mrs/v20200910/model/EndoscopyDesc.h>
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
                * 内窥镜报告
                */
                class Endoscopy : public AbstractModel
                {
                public:
                    Endoscopy();
                    ~Endoscopy() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取活检部位
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BiopsyPart 活检部位
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    BiopsyPart GetBiopsyPart() const;

                    /**
                     * 设置活检部位
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _biopsyPart 活检部位
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBiopsyPart(const BiopsyPart& _biopsyPart);

                    /**
                     * 判断参数 BiopsyPart 是否已赋值
                     * @return BiopsyPart 是否已赋值
                     * 
                     */
                    bool BiopsyPartHasBeenSet() const;

                    /**
                     * 获取可见描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Desc 可见描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    EndoscopyDesc GetDesc() const;

                    /**
                     * 设置可见描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _desc 可见描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDesc(const EndoscopyDesc& _desc);

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

                    /**
                     * 获取数据在原PDF文件中的第几页
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Page 数据在原PDF文件中的第几页
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetPage() const;

                    /**
                     * 设置数据在原PDF文件中的第几页
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _page 数据在原PDF文件中的第几页
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPage(const int64_t& _page);

                    /**
                     * 判断参数 Page 是否已赋值
                     * @return Page 是否已赋值
                     * 
                     */
                    bool PageHasBeenSet() const;

                private:

                    /**
                     * 活检部位
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    BiopsyPart m_biopsyPart;
                    bool m_biopsyPartHasBeenSet;

                    /**
                     * 可见描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    EndoscopyDesc m_desc;
                    bool m_descHasBeenSet;

                    /**
                     * 结论
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Summary m_summary;
                    bool m_summaryHasBeenSet;

                    /**
                     * 数据在原PDF文件中的第几页
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_page;
                    bool m_pageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MRS_V20200910_MODEL_ENDOSCOPY_H_
