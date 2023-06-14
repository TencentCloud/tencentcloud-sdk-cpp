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

#ifndef TENCENTCLOUD_DRM_V20181115_MODEL_DRMOUTPUTPARA_H_
#define TENCENTCLOUD_DRM_V20181115_MODEL_DRMOUTPUTPARA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Drm
    {
        namespace V20181115
        {
            namespace Model
            {
                /**
                * Drm加密对象输出参数
                */
                class DrmOutputPara : public AbstractModel
                {
                public:
                    DrmOutputPara();
                    ~DrmOutputPara() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取内容类型。例:video，audio，mpd，m3u8
                     * @return Type 内容类型。例:video，audio，mpd，m3u8
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置内容类型。例:video，audio，mpd，m3u8
                     * @param _type 内容类型。例:video，audio，mpd，m3u8
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
                     * 获取语言,例: en, zh-cn
                     * @return Language 语言,例: en, zh-cn
                     * 
                     */
                    std::string GetLanguage() const;

                    /**
                     * 设置语言,例: en, zh-cn
                     * @param _language 语言,例: en, zh-cn
                     * 
                     */
                    void SetLanguage(const std::string& _language);

                    /**
                     * 判断参数 Language 是否已赋值
                     * @return Language 是否已赋值
                     * 
                     */
                    bool LanguageHasBeenSet() const;

                private:

                    /**
                     * 内容类型。例:video，audio，mpd，m3u8
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 语言,例: en, zh-cn
                     */
                    std::string m_language;
                    bool m_languageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DRM_V20181115_MODEL_DRMOUTPUTPARA_H_
