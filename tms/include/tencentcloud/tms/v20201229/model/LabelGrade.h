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

#ifndef TENCENTCLOUD_TMS_V20201229_MODEL_LABELGRADE_H_
#define TENCENTCLOUD_TMS_V20201229_MODEL_LABELGRADE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tms
    {
        namespace V20201229
        {
            namespace Model
            {
                /**
                * 内容审核多级标签结构
                */
                class LabelGrade : public AbstractModel
                {
                public:
                    LabelGrade();
                    ~LabelGrade() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取内容审核结果客户定制标签码
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Code 内容审核结果客户定制标签码
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCode() const;

                    /**
                     * 设置内容审核结果客户定制标签码
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _code 内容审核结果客户定制标签码
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCode(const std::string& _code);

                    /**
                     * 判断参数 Code 是否已赋值
                     * @return Code 是否已赋值
                     * 
                     */
                    bool CodeHasBeenSet() const;

                    /**
                     * 获取内容审核结果客户定制一级标签
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Grade1 内容审核结果客户定制一级标签
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetGrade1() const;

                    /**
                     * 设置内容审核结果客户定制一级标签
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _grade1 内容审核结果客户定制一级标签
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetGrade1(const std::string& _grade1);

                    /**
                     * 判断参数 Grade1 是否已赋值
                     * @return Grade1 是否已赋值
                     * 
                     */
                    bool Grade1HasBeenSet() const;

                    /**
                     * 获取内容审核结果客户定制二级标签
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Grade2 内容审核结果客户定制二级标签
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetGrade2() const;

                    /**
                     * 设置内容审核结果客户定制二级标签
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _grade2 内容审核结果客户定制二级标签
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetGrade2(const std::string& _grade2);

                    /**
                     * 判断参数 Grade2 是否已赋值
                     * @return Grade2 是否已赋值
                     * 
                     */
                    bool Grade2HasBeenSet() const;

                    /**
                     * 获取内容审核结果客户定制三级标签
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Grade3 内容审核结果客户定制三级标签
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetGrade3() const;

                    /**
                     * 设置内容审核结果客户定制三级标签
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _grade3 内容审核结果客户定制三级标签
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetGrade3(const std::string& _grade3);

                    /**
                     * 判断参数 Grade3 是否已赋值
                     * @return Grade3 是否已赋值
                     * 
                     */
                    bool Grade3HasBeenSet() const;

                private:

                    /**
                     * 内容审核结果客户定制标签码
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_code;
                    bool m_codeHasBeenSet;

                    /**
                     * 内容审核结果客户定制一级标签
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_grade1;
                    bool m_grade1HasBeenSet;

                    /**
                     * 内容审核结果客户定制二级标签
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_grade2;
                    bool m_grade2HasBeenSet;

                    /**
                     * 内容审核结果客户定制三级标签
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_grade3;
                    bool m_grade3HasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TMS_V20201229_MODEL_LABELGRADE_H_
