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

#ifndef TENCENTCLOUD_IOTVIDEO_V20191126_MODEL_CONTENTS_H_
#define TENCENTCLOUD_IOTVIDEO_V20191126_MODEL_CONTENTS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotvideo
    {
        namespace V20191126
        {
            namespace Model
            {
                /**
                * 版本发布的描述信息，需要国际化，可以为空
                */
                class Contents : public AbstractModel
                {
                public:
                    Contents();
                    ~Contents() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取英文，长度不超过300个字符
注意：此字段可能返回 null，表示取不到有效值。
                     * @return En 英文，长度不超过300个字符
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEn() const;

                    /**
                     * 设置英文，长度不超过300个字符
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _en 英文，长度不超过300个字符
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEn(const std::string& _en);

                    /**
                     * 判断参数 En 是否已赋值
                     * @return En 是否已赋值
                     * 
                     */
                    bool EnHasBeenSet() const;

                    /**
                     * 获取中文简体，长度不超过300个字符
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Cn 中文简体，长度不超过300个字符
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCn() const;

                    /**
                     * 设置中文简体，长度不超过300个字符
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cn 中文简体，长度不超过300个字符
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCn(const std::string& _cn);

                    /**
                     * 判断参数 Cn 是否已赋值
                     * @return Cn 是否已赋值
                     * 
                     */
                    bool CnHasBeenSet() const;

                    /**
                     * 获取中文繁体(Traditional Chinese)，长度不超过300个字符
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Tc 中文繁体(Traditional Chinese)，长度不超过300个字符
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTc() const;

                    /**
                     * 设置中文繁体(Traditional Chinese)，长度不超过300个字符
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tc 中文繁体(Traditional Chinese)，长度不超过300个字符
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTc(const std::string& _tc);

                    /**
                     * 判断参数 Tc 是否已赋值
                     * @return Tc 是否已赋值
                     * 
                     */
                    bool TcHasBeenSet() const;

                    /**
                     * 获取默认语言，最多不超过300个字符
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Default 默认语言，最多不超过300个字符
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDefault() const;

                    /**
                     * 设置默认语言，最多不超过300个字符
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _default 默认语言，最多不超过300个字符
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDefault(const std::string& _default);

                    /**
                     * 判断参数 Default 是否已赋值
                     * @return Default 是否已赋值
                     * 
                     */
                    bool DefaultHasBeenSet() const;

                private:

                    /**
                     * 英文，长度不超过300个字符
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_en;
                    bool m_enHasBeenSet;

                    /**
                     * 中文简体，长度不超过300个字符
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_cn;
                    bool m_cnHasBeenSet;

                    /**
                     * 中文繁体(Traditional Chinese)，长度不超过300个字符
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_tc;
                    bool m_tcHasBeenSet;

                    /**
                     * 默认语言，最多不超过300个字符
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_default;
                    bool m_defaultHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTVIDEO_V20191126_MODEL_CONTENTS_H_
