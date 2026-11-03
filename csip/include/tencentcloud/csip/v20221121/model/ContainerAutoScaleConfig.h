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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_CONTAINERAUTOSCALECONFIG_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_CONTAINERAUTOSCALECONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * 容器安全模块自动扩容配置
                */
                class ContainerAutoScaleConfig : public AbstractModel
                {
                public:
                    ContainerAutoScaleConfig();
                    ~ContainerAutoScaleConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>容器自动扩容开关</p><p>枚举值：</p><ul><li>OFF： 关</li><li>ON： 开</li></ul>
                     * @return Switch <p>容器自动扩容开关</p><p>枚举值：</p><ul><li>OFF： 关</li><li>ON： 开</li></ul>
                     * 
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置<p>容器自动扩容开关</p><p>枚举值：</p><ul><li>OFF： 关</li><li>ON： 开</li></ul>
                     * @param _switch <p>容器自动扩容开关</p><p>枚举值：</p><ul><li>OFF： 关</li><li>ON： 开</li></ul>
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
                     * <p>容器自动扩容开关</p><p>枚举值：</p><ul><li>OFF： 关</li><li>ON： 开</li></ul>
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_CONTAINERAUTOSCALECONFIG_H_
