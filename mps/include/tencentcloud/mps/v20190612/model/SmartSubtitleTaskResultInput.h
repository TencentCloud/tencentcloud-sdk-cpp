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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_SMARTSUBTITLETASKRESULTINPUT_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_SMARTSUBTITLETASKRESULTINPUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/RawSmartSubtitleParameter.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * 智能字幕翻译的输入。
                */
                class SmartSubtitleTaskResultInput : public AbstractModel
                {
                public:
                    SmartSubtitleTaskResultInput();
                    ~SmartSubtitleTaskResultInput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>智能字幕模板 ID。</p>
                     * @return Definition <p>智能字幕模板 ID。</p>
                     * 
                     */
                    int64_t GetDefinition() const;

                    /**
                     * 设置<p>智能字幕模板 ID。</p>
                     * @param _definition <p>智能字幕模板 ID。</p>
                     * 
                     */
                    void SetDefinition(const int64_t& _definition);

                    /**
                     * 判断参数 Definition 是否已赋值
                     * @return Definition 是否已赋值
                     * 
                     */
                    bool DefinitionHasBeenSet() const;

                    /**
                     * 获取<p>智能字幕自定义参数，当 Definition 填 0 时有效。<br>该参数用于高度定制场景，建议您优先使用 Definition 指定智能字幕参数。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RawParameter <p>智能字幕自定义参数，当 Definition 填 0 时有效。<br>该参数用于高度定制场景，建议您优先使用 Definition 指定智能字幕参数。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    RawSmartSubtitleParameter GetRawParameter() const;

                    /**
                     * 设置<p>智能字幕自定义参数，当 Definition 填 0 时有效。<br>该参数用于高度定制场景，建议您优先使用 Definition 指定智能字幕参数。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _rawParameter <p>智能字幕自定义参数，当 Definition 填 0 时有效。<br>该参数用于高度定制场景，建议您优先使用 Definition 指定智能字幕参数。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRawParameter(const RawSmartSubtitleParameter& _rawParameter);

                    /**
                     * 判断参数 RawParameter 是否已赋值
                     * @return RawParameter 是否已赋值
                     * 
                     */
                    bool RawParameterHasBeenSet() const;

                    /**
                     * 获取<p>扩展参数。</p>
                     * @return UserExtPara <p>扩展参数。</p>
                     * 
                     */
                    std::string GetUserExtPara() const;

                    /**
                     * 设置<p>扩展参数。</p>
                     * @param _userExtPara <p>扩展参数。</p>
                     * 
                     */
                    void SetUserExtPara(const std::string& _userExtPara);

                    /**
                     * 判断参数 UserExtPara 是否已赋值
                     * @return UserExtPara 是否已赋值
                     * 
                     */
                    bool UserExtParaHasBeenSet() const;

                private:

                    /**
                     * <p>智能字幕模板 ID。</p>
                     */
                    int64_t m_definition;
                    bool m_definitionHasBeenSet;

                    /**
                     * <p>智能字幕自定义参数，当 Definition 填 0 时有效。<br>该参数用于高度定制场景，建议您优先使用 Definition 指定智能字幕参数。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    RawSmartSubtitleParameter m_rawParameter;
                    bool m_rawParameterHasBeenSet;

                    /**
                     * <p>扩展参数。</p>
                     */
                    std::string m_userExtPara;
                    bool m_userExtParaHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_SMARTSUBTITLETASKRESULTINPUT_H_
