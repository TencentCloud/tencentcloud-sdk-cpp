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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_SHARPENHANCEINFO_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_SHARPENHANCEINFO_H_

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
                * 细节增强控制
                */
                class SharpEnhanceInfo : public AbstractModel
                {
                public:
                    SharpEnhanceInfo();
                    ~SharpEnhanceInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取细节增强控制开关，可选值：
<li>ON：开启细节增强；</li>
<li>OFF：关闭细节增强。</li>
                     * @return Switch 细节增强控制开关，可选值：
<li>ON：开启细节增强；</li>
<li>OFF：关闭细节增强。</li>
                     * 
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置细节增强控制开关，可选值：
<li>ON：开启细节增强；</li>
<li>OFF：关闭细节增强。</li>
                     * @param _switch 细节增强控制开关，可选值：
<li>ON：开启细节增强；</li>
<li>OFF：关闭细节增强。</li>
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
                     * 获取细节增强强度，仅当细节增强控制开关为 ON 时有效，取值范围：0.0~1.0。
默认：0.0。
                     * @return Intensity 细节增强强度，仅当细节增强控制开关为 ON 时有效，取值范围：0.0~1.0。
默认：0.0。
                     * 
                     */
                    double GetIntensity() const;

                    /**
                     * 设置细节增强强度，仅当细节增强控制开关为 ON 时有效，取值范围：0.0~1.0。
默认：0.0。
                     * @param _intensity 细节增强强度，仅当细节增强控制开关为 ON 时有效，取值范围：0.0~1.0。
默认：0.0。
                     * 
                     */
                    void SetIntensity(const double& _intensity);

                    /**
                     * 判断参数 Intensity 是否已赋值
                     * @return Intensity 是否已赋值
                     * 
                     */
                    bool IntensityHasBeenSet() const;

                private:

                    /**
                     * 细节增强控制开关，可选值：
<li>ON：开启细节增强；</li>
<li>OFF：关闭细节增强。</li>
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * 细节增强强度，仅当细节增强控制开关为 ON 时有效，取值范围：0.0~1.0。
默认：0.0。
                     */
                    double m_intensity;
                    bool m_intensityHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_SHARPENHANCEINFO_H_
