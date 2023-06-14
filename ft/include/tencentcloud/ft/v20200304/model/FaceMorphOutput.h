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

#ifndef TENCENTCLOUD_FT_V20200304_MODEL_FACEMORPHOUTPUT_H_
#define TENCENTCLOUD_FT_V20200304_MODEL_FACEMORPHOUTPUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ft
    {
        namespace V20200304
        {
            namespace Model
            {
                /**
                * 人像渐变返回结果
                */
                class FaceMorphOutput : public AbstractModel
                {
                public:
                    FaceMorphOutput();
                    ~FaceMorphOutput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取人像渐变输出的url
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MorphUrl 人像渐变输出的url
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMorphUrl() const;

                    /**
                     * 设置人像渐变输出的url
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _morphUrl 人像渐变输出的url
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMorphUrl(const std::string& _morphUrl);

                    /**
                     * 判断参数 MorphUrl 是否已赋值
                     * @return MorphUrl 是否已赋值
                     * 
                     */
                    bool MorphUrlHasBeenSet() const;

                    /**
                     * 获取人像渐变输出的结果MD5，用于校验
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MorphMd5 人像渐变输出的结果MD5，用于校验
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMorphMd5() const;

                    /**
                     * 设置人像渐变输出的结果MD5，用于校验
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _morphMd5 人像渐变输出的结果MD5，用于校验
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMorphMd5(const std::string& _morphMd5);

                    /**
                     * 判断参数 MorphMd5 是否已赋值
                     * @return MorphMd5 是否已赋值
                     * 
                     */
                    bool MorphMd5HasBeenSet() const;

                    /**
                     * 获取人像渐变输出的结果封面图base64字符串
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CoverImage 人像渐变输出的结果封面图base64字符串
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCoverImage() const;

                    /**
                     * 设置人像渐变输出的结果封面图base64字符串
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _coverImage 人像渐变输出的结果封面图base64字符串
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCoverImage(const std::string& _coverImage);

                    /**
                     * 判断参数 CoverImage 是否已赋值
                     * @return CoverImage 是否已赋值
                     * 
                     */
                    bool CoverImageHasBeenSet() const;

                private:

                    /**
                     * 人像渐变输出的url
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_morphUrl;
                    bool m_morphUrlHasBeenSet;

                    /**
                     * 人像渐变输出的结果MD5，用于校验
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_morphMd5;
                    bool m_morphMd5HasBeenSet;

                    /**
                     * 人像渐变输出的结果封面图base64字符串
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_coverImage;
                    bool m_coverImageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FT_V20200304_MODEL_FACEMORPHOUTPUT_H_
