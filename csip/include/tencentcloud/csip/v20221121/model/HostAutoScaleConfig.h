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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_HOSTAUTOSCALECONFIG_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_HOSTAUTOSCALECONFIG_H_

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
                * 主机安全模块自动扩容配置
                */
                class HostAutoScaleConfig : public AbstractModel
                {
                public:
                    HostAutoScaleConfig();
                    ~HostAutoScaleConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取主机自动扩容开关
枚举值：
ON：开启
OFF：关闭
补充说明：不传则不修改；映射底层自动加购开关 auto_repurchase_switch
                     * @return Switch 主机自动扩容开关
枚举值：
ON：开启
OFF：关闭
补充说明：不传则不修改；映射底层自动加购开关 auto_repurchase_switch
                     * 
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置主机自动扩容开关
枚举值：
ON：开启
OFF：关闭
补充说明：不传则不修改；映射底层自动加购开关 auto_repurchase_switch
                     * @param _switch 主机自动扩容开关
枚举值：
ON：开启
OFF：关闭
补充说明：不传则不修改；映射底层自动加购开关 auto_repurchase_switch
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
                     * 获取扩容版本
枚举值：
PRO：专业版
ULTIMATE：旗舰版
补充说明：不传则不修改
                     * @return ProtectType 扩容版本
枚举值：
PRO：专业版
ULTIMATE：旗舰版
补充说明：不传则不修改
                     * 
                     */
                    std::string GetProtectType() const;

                    /**
                     * 设置扩容版本
枚举值：
PRO：专业版
ULTIMATE：旗舰版
补充说明：不传则不修改
                     * @param _protectType 扩容版本
枚举值：
PRO：专业版
ULTIMATE：旗舰版
补充说明：不传则不修改
                     * 
                     */
                    void SetProtectType(const std::string& _protectType);

                    /**
                     * 判断参数 ProtectType 是否已赋值
                     * @return ProtectType 是否已赋值
                     * 
                     */
                    bool ProtectTypeHasBeenSet() const;

                private:

                    /**
                     * 主机自动扩容开关
枚举值：
ON：开启
OFF：关闭
补充说明：不传则不修改；映射底层自动加购开关 auto_repurchase_switch
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * 扩容版本
枚举值：
PRO：专业版
ULTIMATE：旗舰版
补充说明：不传则不修改
                     */
                    std::string m_protectType;
                    bool m_protectTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_HOSTAUTOSCALECONFIG_H_
