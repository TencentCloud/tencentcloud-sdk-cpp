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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_LOWLIGHTENHANCEINFO_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_LOWLIGHTENHANCEINFO_H_

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
                * 低光照增强控制
                */
                class LowLightEnhanceInfo : public AbstractModel
                {
                public:
                    LowLightEnhanceInfo();
                    ~LowLightEnhanceInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取低光照增强控制开关，可选值：
<li>ON：开启低光照增强；</li>
<li>OFF：关闭低光照增强。</li>
                     * @return Switch 低光照增强控制开关，可选值：
<li>ON：开启低光照增强；</li>
<li>OFF：关闭低光照增强。</li>
                     * 
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置低光照增强控制开关，可选值：
<li>ON：开启低光照增强；</li>
<li>OFF：关闭低光照增强。</li>
                     * @param _switch 低光照增强控制开关，可选值：
<li>ON：开启低光照增强；</li>
<li>OFF：关闭低光照增强。</li>
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
                     * 获取低光照增强类型，仅当低光照增强控制开关为 ON 时有效，可选值：
<li>normal：正常低光照增强；</li>
默认值：normal。
                     * @return Type 低光照增强类型，仅当低光照增强控制开关为 ON 时有效，可选值：
<li>normal：正常低光照增强；</li>
默认值：normal。
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置低光照增强类型，仅当低光照增强控制开关为 ON 时有效，可选值：
<li>normal：正常低光照增强；</li>
默认值：normal。
                     * @param _type 低光照增强类型，仅当低光照增强控制开关为 ON 时有效，可选值：
<li>normal：正常低光照增强；</li>
默认值：normal。
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
                     * 低光照增强控制开关，可选值：
<li>ON：开启低光照增强；</li>
<li>OFF：关闭低光照增强。</li>
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * 低光照增强类型，仅当低光照增强控制开关为 ON 时有效，可选值：
<li>normal：正常低光照增强；</li>
默认值：normal。
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_LOWLIGHTENHANCEINFO_H_
