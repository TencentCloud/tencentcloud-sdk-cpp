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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_WAFGROUPINFO_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_WAFGROUPINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/WafGroupDetail.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * 托管规则
                */
                class WafGroupInfo : public AbstractModel
                {
                public:
                    WafGroupInfo();
                    ~WafGroupInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取托管规则组列表。
                     * @return WafGroupDetails 托管规则组列表。
                     */
                    std::vector<WafGroupDetail> GetWafGroupDetails() const;

                    /**
                     * 设置托管规则组列表。
                     * @param WafGroupDetails 托管规则组列表。
                     */
                    void SetWafGroupDetails(const std::vector<WafGroupDetail>& _wafGroupDetails);

                    /**
                     * 判断参数 WafGroupDetails 是否已赋值
                     * @return WafGroupDetails 是否已赋值
                     */
                    bool WafGroupDetailsHasBeenSet() const;

                    /**
                     * 获取规则组等级，取值有：
<li> loose：宽松；</li>
<li> normal：正常；</li>
<li> strict：严格；</li>
<li> stricter：超严格。</li>
                     * @return Level 规则组等级，取值有：
<li> loose：宽松；</li>
<li> normal：正常；</li>
<li> strict：严格；</li>
<li> stricter：超严格。</li>
                     */
                    std::string GetLevel() const;

                    /**
                     * 设置规则组等级，取值有：
<li> loose：宽松；</li>
<li> normal：正常；</li>
<li> strict：严格；</li>
<li> stricter：超严格。</li>
                     * @param Level 规则组等级，取值有：
<li> loose：宽松；</li>
<li> normal：正常；</li>
<li> strict：严格；</li>
<li> stricter：超严格。</li>
                     */
                    void SetLevel(const std::string& _level);

                    /**
                     * 判断参数 Level 是否已赋值
                     * @return Level 是否已赋值
                     */
                    bool LevelHasBeenSet() const;

                    /**
                     * 获取保留字段。
                     * @return Act 保留字段。
                     */
                    std::string GetAct() const;

                    /**
                     * 设置保留字段。
                     * @param Act 保留字段。
                     */
                    void SetAct(const std::string& _act);

                    /**
                     * 判断参数 Act 是否已赋值
                     * @return Act 是否已赋值
                     */
                    bool ActHasBeenSet() const;

                    /**
                     * 获取模式，取值有：
<li> block：阻断；</li>
<li> observe：观察。</li>
                     * @return Mode 模式，取值有：
<li> block：阻断；</li>
<li> observe：观察。</li>
                     */
                    std::string GetMode() const;

                    /**
                     * 设置模式，取值有：
<li> block：阻断；</li>
<li> observe：观察。</li>
                     * @param Mode 模式，取值有：
<li> block：阻断；</li>
<li> observe：观察。</li>
                     */
                    void SetMode(const std::string& _mode);

                    /**
                     * 判断参数 Mode 是否已赋值
                     * @return Mode 是否已赋值
                     */
                    bool ModeHasBeenSet() const;

                    /**
                     * 获取开关，取值有：
<li> on：开启；</li>
<li> off：关闭。</li>
                     * @return Switch 开关，取值有：
<li> on：开启；</li>
<li> off：关闭。</li>
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置开关，取值有：
<li> on：开启；</li>
<li> off：关闭。</li>
                     * @param Switch 开关，取值有：
<li> on：开启；</li>
<li> off：关闭。</li>
                     */
                    void SetSwitch(const std::string& _switch);

                    /**
                     * 判断参数 Switch 是否已赋值
                     * @return Switch 是否已赋值
                     */
                    bool SwitchHasBeenSet() const;

                private:

                    /**
                     * 托管规则组列表。
                     */
                    std::vector<WafGroupDetail> m_wafGroupDetails;
                    bool m_wafGroupDetailsHasBeenSet;

                    /**
                     * 规则组等级，取值有：
<li> loose：宽松；</li>
<li> normal：正常；</li>
<li> strict：严格；</li>
<li> stricter：超严格。</li>
                     */
                    std::string m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * 保留字段。
                     */
                    std::string m_act;
                    bool m_actHasBeenSet;

                    /**
                     * 模式，取值有：
<li> block：阻断；</li>
<li> observe：观察。</li>
                     */
                    std::string m_mode;
                    bool m_modeHasBeenSet;

                    /**
                     * 开关，取值有：
<li> on：开启；</li>
<li> off：关闭。</li>
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_WAFGROUPINFO_H_
