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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_COLORENHANCEINFO_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_COLORENHANCEINFO_H_

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
                * 色彩增强控制参数
                */
                class ColorEnhanceInfo : public AbstractModel
                {
                public:
                    ColorEnhanceInfo();
                    ~ColorEnhanceInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取色彩增强控制开关，可选值：
<li>ON：开启综合增强；</li>
<li>OFF：关闭综合增强。</li>
                     * @return Switch 色彩增强控制开关，可选值：
<li>ON：开启综合增强；</li>
<li>OFF：关闭综合增强。</li>
                     * 
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置色彩增强控制开关，可选值：
<li>ON：开启综合增强；</li>
<li>OFF：关闭综合增强。</li>
                     * @param _switch 色彩增强控制开关，可选值：
<li>ON：开启综合增强；</li>
<li>OFF：关闭综合增强。</li>
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
                     * 获取色彩增强类型，仅当色彩增强控制开关为 ON 时有效，可选值：
<li>weak：轻色彩增强；</li>
<li>normal：正常色彩增强；</li>
<li>strong：强色彩增强。</li>
默认值：weak。
                     * @return Type 色彩增强类型，仅当色彩增强控制开关为 ON 时有效，可选值：
<li>weak：轻色彩增强；</li>
<li>normal：正常色彩增强；</li>
<li>strong：强色彩增强。</li>
默认值：weak。
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置色彩增强类型，仅当色彩增强控制开关为 ON 时有效，可选值：
<li>weak：轻色彩增强；</li>
<li>normal：正常色彩增强；</li>
<li>strong：强色彩增强。</li>
默认值：weak。
                     * @param _type 色彩增强类型，仅当色彩增强控制开关为 ON 时有效，可选值：
<li>weak：轻色彩增强；</li>
<li>normal：正常色彩增强；</li>
<li>strong：强色彩增强。</li>
默认值：weak。
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
                     * 色彩增强控制开关，可选值：
<li>ON：开启综合增强；</li>
<li>OFF：关闭综合增强。</li>
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * 色彩增强类型，仅当色彩增强控制开关为 ON 时有效，可选值：
<li>weak：轻色彩增强；</li>
<li>normal：正常色彩增强；</li>
<li>strong：强色彩增强。</li>
默认值：weak。
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_COLORENHANCEINFO_H_
