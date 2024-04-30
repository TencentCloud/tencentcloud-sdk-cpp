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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_RENEWFLAG_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_RENEWFLAG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * 预付费套餐自动续费配置项。
                */
                class RenewFlag : public AbstractModel
                {
                public:
                    RenewFlag();
                    ~RenewFlag() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取预付费套餐的自动续费标志，取值有：
<li> on：开启自动续费；</li>
<li> off：不开启自动续费。</li>
                     * @return Switch 预付费套餐的自动续费标志，取值有：
<li> on：开启自动续费；</li>
<li> off：不开启自动续费。</li>
                     * 
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置预付费套餐的自动续费标志，取值有：
<li> on：开启自动续费；</li>
<li> off：不开启自动续费。</li>
                     * @param _switch 预付费套餐的自动续费标志，取值有：
<li> on：开启自动续费；</li>
<li> off：不开启自动续费。</li>
                     * 
                     */
                    void SetSwitch(const std::string& _switch);

                    /**
                     * 判断参数 Switch 是否已赋值
                     * @return Switch 是否已赋值
                     * 
                     */
                    bool SwitchHasBeenSet() const;

                private:

                    /**
                     * 预付费套餐的自动续费标志，取值有：
<li> on：开启自动续费；</li>
<li> off：不开启自动续费。</li>
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_RENEWFLAG_H_
