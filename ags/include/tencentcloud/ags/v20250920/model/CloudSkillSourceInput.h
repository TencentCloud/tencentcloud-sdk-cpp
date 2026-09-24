/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_AGS_V20250920_MODEL_CLOUDSKILLSOURCEINPUT_H_
#define TENCENTCLOUD_AGS_V20250920_MODEL_CLOUDSKILLSOURCEINPUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ags
    {
        namespace V20250920
        {
            namespace Model
            {
                /**
                * AGENT_SKILLS 内容来源。Type 判别 MANUAL 与 TAR_PACKAGE 两种模式。
                */
                class CloudSkillSourceInput : public AbstractModel
                {
                public:
                    CloudSkillSourceInput();
                    ~CloudSkillSourceInput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>来源类型。MANUAL：直接提交 SKILL.md 文本；TAR_PACKAGE：由服务端签发 COS PUT 预签名 URL，客户端上传后由服务端异步校验。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Type <p>来源类型。MANUAL：直接提交 SKILL.md 文本；TAR_PACKAGE：由服务端签发 COS PUT 预签名 URL，客户端上传后由服务端异步校验。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>来源类型。MANUAL：直接提交 SKILL.md 文本；TAR_PACKAGE：由服务端签发 COS PUT 预签名 URL，客户端上传后由服务端异步校验。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _type <p>来源类型。MANUAL：直接提交 SKILL.md 文本；TAR_PACKAGE：由服务端签发 COS PUT 预签名 URL，客户端上传后由服务端异步校验。</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>SKILL.md 原文；Type=MANUAL 时必填非空；Type=TAR_PACKAGE 时不得提供。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SkillMd <p>SKILL.md 原文；Type=MANUAL 时必填非空；Type=TAR_PACKAGE 时不得提供。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSkillMd() const;

                    /**
                     * 设置<p>SKILL.md 原文；Type=MANUAL 时必填非空；Type=TAR_PACKAGE 时不得提供。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _skillMd <p>SKILL.md 原文；Type=MANUAL 时必填非空；Type=TAR_PACKAGE 时不得提供。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSkillMd(const std::string& _skillMd);

                    /**
                     * 判断参数 SkillMd 是否已赋值
                     * @return SkillMd 是否已赋值
                     * 
                     */
                    bool SkillMdHasBeenSet() const;

                private:

                    /**
                     * <p>来源类型。MANUAL：直接提交 SKILL.md 文本；TAR_PACKAGE：由服务端签发 COS PUT 预签名 URL，客户端上传后由服务端异步校验。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>SKILL.md 原文；Type=MANUAL 时必填非空；Type=TAR_PACKAGE 时不得提供。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_skillMd;
                    bool m_skillMdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AGS_V20250920_MODEL_CLOUDSKILLSOURCEINPUT_H_
