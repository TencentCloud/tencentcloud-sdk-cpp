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

#ifndef TENCENTCLOUD_AME_V20190916_MODEL_SETAUDIOPARAMCOMMANDINPUT_H_
#define TENCENTCLOUD_AME_V20190916_MODEL_SETAUDIOPARAMCOMMANDINPUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ame
    {
        namespace V20190916
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
                     * 获取规格，取值有：
<li>audio/mi：低规格</li>
<li>audio/lo：中规格</li>
<li>audio/hi：高规格</li>
                     * @return Definition 规格，取值有：
<li>audio/mi：低规格</li>
<li>audio/lo：中规格</li>
<li>audio/hi：高规格</li>
                     * 
                     */
                    std::string GetDefinition() const;

                    /**
                     * 设置规格，取值有：
<li>audio/mi：低规格</li>
<li>audio/lo：中规格</li>
<li>audio/hi：高规格</li>
                     * @param _definition 规格，取值有：
<li>audio/mi：低规格</li>
<li>audio/lo：中规格</li>
<li>audio/hi：高规格</li>
                     * 
                     */
                    void SetDefinition(const std::string& _definition);

                    /**
                     * 判断参数 Definition 是否已赋值
                     * @return Definition 是否已赋值
                     * 
                     */
                    bool DefinitionHasBeenSet() const;

                    /**
                     * 获取音频类型，取值有：
<li>Original：原唱</li>
<li>Accompaniment：伴奏</li>
                     * @return Type 音频类型，取值有：
<li>Original：原唱</li>
<li>Accompaniment：伴奏</li>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置音频类型，取值有：
<li>Original：原唱</li>
<li>Accompaniment：伴奏</li>
                     * @param _type 音频类型，取值有：
<li>Original：原唱</li>
<li>Accompaniment：伴奏</li>
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
                     * 规格，取值有：
<li>audio/mi：低规格</li>
<li>audio/lo：中规格</li>
<li>audio/hi：高规格</li>
                     */
                    std::string m_definition;
                    bool m_definitionHasBeenSet;

                    /**
                     * 音频类型，取值有：
<li>Original：原唱</li>
<li>Accompaniment：伴奏</li>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AME_V20190916_MODEL_SETAUDIOPARAMCOMMANDINPUT_H_
