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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_AIRECOGNITIONTASKFACERESULTITEM_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_AIRECOGNITIONTASKFACERESULTITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/AiRecognitionTaskFaceSegmentItem.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * 人脸识别结果
                */
                class AiRecognitionTaskFaceResultItem : public AbstractModel
                {
                public:
                    AiRecognitionTaskFaceResultItem();
                    ~AiRecognitionTaskFaceResultItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取人物唯一标识 ID。
                     * @return Id 人物唯一标识 ID。
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置人物唯一标识 ID。
                     * @param _id 人物唯一标识 ID。
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取人物库类型，表示识别出的人物来自哪个人物库：
<li>Default：默认人物库；</li>
<li>UserDefine：用户自定义人物库。</li>
                     * @return Type 人物库类型，表示识别出的人物来自哪个人物库：
<li>Default：默认人物库；</li>
<li>UserDefine：用户自定义人物库。</li>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置人物库类型，表示识别出的人物来自哪个人物库：
<li>Default：默认人物库；</li>
<li>UserDefine：用户自定义人物库。</li>
                     * @param _type 人物库类型，表示识别出的人物来自哪个人物库：
<li>Default：默认人物库；</li>
<li>UserDefine：用户自定义人物库。</li>
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取人物名称。
                     * @return Name 人物名称。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置人物名称。
                     * @param _name 人物名称。
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取人物出现的片段结果集。
                     * @return SegmentSet 人物出现的片段结果集。
                     * 
                     */
                    std::vector<AiRecognitionTaskFaceSegmentItem> GetSegmentSet() const;

                    /**
                     * 设置人物出现的片段结果集。
                     * @param _segmentSet 人物出现的片段结果集。
                     * 
                     */
                    void SetSegmentSet(const std::vector<AiRecognitionTaskFaceSegmentItem>& _segmentSet);

                    /**
                     * 判断参数 SegmentSet 是否已赋值
                     * @return SegmentSet 是否已赋值
                     * 
                     */
                    bool SegmentSetHasBeenSet() const;

                    /**
                     * 获取人物性别：
<li>Male：男性；</li>
<li>Female：女性。</li>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Gender 人物性别：
<li>Male：男性；</li>
<li>Female：女性。</li>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetGender() const;

                    /**
                     * 设置人物性别：
<li>Male：男性；</li>
<li>Female：女性。</li>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _gender 人物性别：
<li>Male：男性；</li>
<li>Female：女性。</li>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetGender(const std::string& _gender);

                    /**
                     * 判断参数 Gender 是否已赋值
                     * @return Gender 是否已赋值
                     * 
                     */
                    bool GenderHasBeenSet() const;

                    /**
                     * 获取人物出生日期。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Birthday 人物出生日期。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBirthday() const;

                    /**
                     * 设置人物出生日期。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _birthday 人物出生日期。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBirthday(const std::string& _birthday);

                    /**
                     * 判断参数 Birthday 是否已赋值
                     * @return Birthday 是否已赋值
                     * 
                     */
                    bool BirthdayHasBeenSet() const;

                    /**
                     * 获取人物职业或者职务。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Profession 人物职业或者职务。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetProfession() const;

                    /**
                     * 设置人物职业或者职务。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _profession 人物职业或者职务。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetProfession(const std::string& _profession);

                    /**
                     * 判断参数 Profession 是否已赋值
                     * @return Profession 是否已赋值
                     * 
                     */
                    bool ProfessionHasBeenSet() const;

                    /**
                     * 获取人物毕业院校。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SchoolOfGraduation 人物毕业院校。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSchoolOfGraduation() const;

                    /**
                     * 设置人物毕业院校。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _schoolOfGraduation 人物毕业院校。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSchoolOfGraduation(const std::string& _schoolOfGraduation);

                    /**
                     * 判断参数 SchoolOfGraduation 是否已赋值
                     * @return SchoolOfGraduation 是否已赋值
                     * 
                     */
                    bool SchoolOfGraduationHasBeenSet() const;

                    /**
                     * 获取人物简介。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Abstract 人物简介。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAbstract() const;

                    /**
                     * 设置人物简介。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _abstract 人物简介。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAbstract(const std::string& _abstract);

                    /**
                     * 判断参数 Abstract 是否已赋值
                     * @return Abstract 是否已赋值
                     * 
                     */
                    bool AbstractHasBeenSet() const;

                    /**
                     * 获取人物出生地或者籍贯。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PlaceOfBirth 人物出生地或者籍贯。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPlaceOfBirth() const;

                    /**
                     * 设置人物出生地或者籍贯。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _placeOfBirth 人物出生地或者籍贯。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPlaceOfBirth(const std::string& _placeOfBirth);

                    /**
                     * 判断参数 PlaceOfBirth 是否已赋值
                     * @return PlaceOfBirth 是否已赋值
                     * 
                     */
                    bool PlaceOfBirthHasBeenSet() const;

                    /**
                     * 获取人物类型：
<li>Politician：官员；</li>
<li>Artist：艺人。</li>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PersonType 人物类型：
<li>Politician：官员；</li>
<li>Artist：艺人。</li>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPersonType() const;

                    /**
                     * 设置人物类型：
<li>Politician：官员；</li>
<li>Artist：艺人。</li>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _personType 人物类型：
<li>Politician：官员；</li>
<li>Artist：艺人。</li>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPersonType(const std::string& _personType);

                    /**
                     * 判断参数 PersonType 是否已赋值
                     * @return PersonType 是否已赋值
                     * 
                     */
                    bool PersonTypeHasBeenSet() const;

                    /**
                     * 获取敏感度标注：
<li>Normal：正常；</li>
<li>Sensitive：敏感。</li>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Remark 敏感度标注：
<li>Normal：正常；</li>
<li>Sensitive：敏感。</li>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置敏感度标注：
<li>Normal：正常；</li>
<li>Sensitive：敏感。</li>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _remark 敏感度标注：
<li>Normal：正常；</li>
<li>Sensitive：敏感。</li>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取截图链接
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Url 截图链接
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置截图链接
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _url 截图链接
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUrl(const std::string& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     * 
                     */
                    bool UrlHasBeenSet() const;

                private:

                    /**
                     * 人物唯一标识 ID。
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 人物库类型，表示识别出的人物来自哪个人物库：
<li>Default：默认人物库；</li>
<li>UserDefine：用户自定义人物库。</li>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 人物名称。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 人物出现的片段结果集。
                     */
                    std::vector<AiRecognitionTaskFaceSegmentItem> m_segmentSet;
                    bool m_segmentSetHasBeenSet;

                    /**
                     * 人物性别：
<li>Male：男性；</li>
<li>Female：女性。</li>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_gender;
                    bool m_genderHasBeenSet;

                    /**
                     * 人物出生日期。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_birthday;
                    bool m_birthdayHasBeenSet;

                    /**
                     * 人物职业或者职务。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_profession;
                    bool m_professionHasBeenSet;

                    /**
                     * 人物毕业院校。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_schoolOfGraduation;
                    bool m_schoolOfGraduationHasBeenSet;

                    /**
                     * 人物简介。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_abstract;
                    bool m_abstractHasBeenSet;

                    /**
                     * 人物出生地或者籍贯。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_placeOfBirth;
                    bool m_placeOfBirthHasBeenSet;

                    /**
                     * 人物类型：
<li>Politician：官员；</li>
<li>Artist：艺人。</li>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_personType;
                    bool m_personTypeHasBeenSet;

                    /**
                     * 敏感度标注：
<li>Normal：正常；</li>
<li>Sensitive：敏感。</li>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * 截图链接
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_AIRECOGNITIONTASKFACERESULTITEM_H_
