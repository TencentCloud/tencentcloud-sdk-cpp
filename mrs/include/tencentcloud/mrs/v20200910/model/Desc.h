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

#ifndef TENCENTCLOUD_MRS_V20200910_MODEL_DESC_H_
#define TENCENTCLOUD_MRS_V20200910_MODEL_DESC_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mrs/v20200910/model/Organ.h>
#include <tencentcloud/mrs/v20200910/model/TuberInfo.h>


namespace TencentCloud
{
    namespace Mrs
    {
        namespace V20200910
        {
            namespace Model
            {
                /**
                * 描述
                */
                class Desc : public AbstractModel
                {
                public:
                    Desc();
                    ~Desc() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Text 描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetText() const;

                    /**
                     * 设置描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Text 描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetText(const std::string& _text);

                    /**
                     * 判断参数 Text 是否已赋值
                     * @return Text 是否已赋值
                     */
                    bool TextHasBeenSet() const;

                    /**
                     * 获取器官
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Organ 器官
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Organ> GetOrgan() const;

                    /**
                     * 设置器官
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Organ 器官
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetOrgan(const std::vector<Organ>& _organ);

                    /**
                     * 判断参数 Organ 是否已赋值
                     * @return Organ 是否已赋值
                     */
                    bool OrganHasBeenSet() const;

                    /**
                     * 获取结节
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Tuber 结节
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<TuberInfo> GetTuber() const;

                    /**
                     * 设置结节
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Tuber 结节
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetTuber(const std::vector<TuberInfo>& _tuber);

                    /**
                     * 判断参数 Tuber 是否已赋值
                     * @return Tuber 是否已赋值
                     */
                    bool TuberHasBeenSet() const;

                private:

                    /**
                     * 描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_text;
                    bool m_textHasBeenSet;

                    /**
                     * 器官
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Organ> m_organ;
                    bool m_organHasBeenSet;

                    /**
                     * 结节
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<TuberInfo> m_tuber;
                    bool m_tuberHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MRS_V20200910_MODEL_DESC_H_
