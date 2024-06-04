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

#ifndef TENCENTCLOUD_YINSUDA_V20220527_MODEL_SETAUDIOPARAMCOMMANDINPUT_H_
#define TENCENTCLOUD_YINSUDA_V20220527_MODEL_SETAUDIOPARAMCOMMANDINPUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Yinsuda
    {
        namespace V20220527
        {
            namespace Model
            {
                /**
                * 音频参数信息
                */
                class SetAudioParamCommandInput : public AbstractModel
                {
                public:
                    SetAudioParamCommandInput();
                    ~SetAudioParamCommandInput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取音频类型，取值有：
<li>Original：原唱</li>
<li>Accompaniment：伴奏</li>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Type 音频类型，取值有：
<li>Original：原唱</li>
<li>Accompaniment：伴奏</li>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置音频类型，取值有：
<li>Original：原唱</li>
<li>Accompaniment：伴奏</li>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _type 音频类型，取值有：
<li>Original：原唱</li>
<li>Accompaniment：伴奏</li>
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

                private:

                    /**
                     * 音频类型，取值有：
<li>Original：原唱</li>
<li>Accompaniment：伴奏</li>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_YINSUDA_V20220527_MODEL_SETAUDIOPARAMCOMMANDINPUT_H_
