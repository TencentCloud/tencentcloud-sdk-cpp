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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_AUDIOBEAUTIFYINFO_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_AUDIOBEAUTIFYINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * 音频美化配置。
                */
                class AudioBeautifyInfo : public AbstractModel
                {
                public:
                    AudioBeautifyInfo();
                    ~AudioBeautifyInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取音频美化控制开关，可选值：
<li>ON：开启音频美化；</li>
<li>OFF：关闭音频美化。</li>
                     * @return Switch 音频美化控制开关，可选值：
<li>ON：开启音频美化；</li>
<li>OFF：关闭音频美化。</li>
                     * 
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置音频美化控制开关，可选值：
<li>ON：开启音频美化；</li>
<li>OFF：关闭音频美化。</li>
                     * @param _switch 音频美化控制开关，可选值：
<li>ON：开启音频美化；</li>
<li>OFF：关闭音频美化。</li>
                     * 
                     */
                    void SetSwitch(const std::string& _switch);

                    /**
                     * 判断参数 Switch 是否已赋值
                     * @return Switch 是否已赋值
                     * 
                     */
                    bool SwitchHasBeenSet() const;

                    /**
                     * 获取类型，可多选，可选值：
<li>declick：杂音去除</li>
<li>deesser：齿音压制</li>
默认值：declick。
                     * @return Types 类型，可多选，可选值：
<li>declick：杂音去除</li>
<li>deesser：齿音压制</li>
默认值：declick。
                     * 
                     */
                    std::vector<std::string> GetTypes() const;

                    /**
                     * 设置类型，可多选，可选值：
<li>declick：杂音去除</li>
<li>deesser：齿音压制</li>
默认值：declick。
                     * @param _types 类型，可多选，可选值：
<li>declick：杂音去除</li>
<li>deesser：齿音压制</li>
默认值：declick。
                     * 
                     */
                    void SetTypes(const std::vector<std::string>& _types);

                    /**
                     * 判断参数 Types 是否已赋值
                     * @return Types 是否已赋值
                     * 
                     */
                    bool TypesHasBeenSet() const;

                private:

                    /**
                     * 音频美化控制开关，可选值：
<li>ON：开启音频美化；</li>
<li>OFF：关闭音频美化。</li>
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * 类型，可多选，可选值：
<li>declick：杂音去除</li>
<li>deesser：齿音压制</li>
默认值：declick。
                     */
                    std::vector<std::string> m_types;
                    bool m_typesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_AUDIOBEAUTIFYINFO_H_
