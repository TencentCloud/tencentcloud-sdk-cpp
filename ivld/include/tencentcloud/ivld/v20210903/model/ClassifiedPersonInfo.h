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

#ifndef TENCENTCLOUD_IVLD_V20210903_MODEL_CLASSIFIEDPERSONINFO_H_
#define TENCENTCLOUD_IVLD_V20210903_MODEL_CLASSIFIEDPERSONINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ivld/v20210903/model/PersonInfo.h>


namespace TencentCloud
{
    namespace Ivld
    {
        namespace V20210903
        {
            namespace Model
            {
                /**
                * 已分类的人物信息
                */
                class ClassifiedPersonInfo : public AbstractModel
                {
                public:
                    ClassifiedPersonInfo();
                    ~ClassifiedPersonInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取人物分类名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClassifyName 人物分类名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetClassifyName() const;

                    /**
                     * 设置人物分类名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _classifyName 人物分类名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetClassifyName(const std::string& _classifyName);

                    /**
                     * 判断参数 ClassifyName 是否已赋值
                     * @return ClassifyName 是否已赋值
                     * 
                     */
                    bool ClassifyNameHasBeenSet() const;

                    /**
                     * 获取符合特定分类的人物信息数组
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PersonInfoSet 符合特定分类的人物信息数组
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<PersonInfo> GetPersonInfoSet() const;

                    /**
                     * 设置符合特定分类的人物信息数组
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _personInfoSet 符合特定分类的人物信息数组
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPersonInfoSet(const std::vector<PersonInfo>& _personInfoSet);

                    /**
                     * 判断参数 PersonInfoSet 是否已赋值
                     * @return PersonInfoSet 是否已赋值
                     * 
                     */
                    bool PersonInfoSetHasBeenSet() const;

                private:

                    /**
                     * 人物分类名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_classifyName;
                    bool m_classifyNameHasBeenSet;

                    /**
                     * 符合特定分类的人物信息数组
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<PersonInfo> m_personInfoSet;
                    bool m_personInfoSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IVLD_V20210903_MODEL_CLASSIFIEDPERSONINFO_H_
