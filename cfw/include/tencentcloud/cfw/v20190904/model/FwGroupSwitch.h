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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_FWGROUPSWITCH_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_FWGROUPSWITCH_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * 多种VPC墙模式开关结构
                */
                class FwGroupSwitch : public AbstractModel
                {
                public:
                    FwGroupSwitch();
                    ~FwGroupSwitch() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取防火墙实例的开关模式 1: 单点互通 2: 多点互通 3: 全互通 4: 自定义路由
                     * @return SwitchMode 防火墙实例的开关模式 1: 单点互通 2: 多点互通 3: 全互通 4: 自定义路由
                     * 
                     */
                    int64_t GetSwitchMode() const;

                    /**
                     * 设置防火墙实例的开关模式 1: 单点互通 2: 多点互通 3: 全互通 4: 自定义路由
                     * @param _switchMode 防火墙实例的开关模式 1: 单点互通 2: 多点互通 3: 全互通 4: 自定义路由
                     * 
                     */
                    void SetSwitchMode(const int64_t& _switchMode);

                    /**
                     * 判断参数 SwitchMode 是否已赋值
                     * @return SwitchMode 是否已赋值
                     * 
                     */
                    bool SwitchModeHasBeenSet() const;

                    /**
                     * 获取防火墙开关ID
支持三种类型
1. 边开关(单点互通)
2. 点开关(多点互通)
3. 全开关(全互通)
                     * @return SwitchId 防火墙开关ID
支持三种类型
1. 边开关(单点互通)
2. 点开关(多点互通)
3. 全开关(全互通)
                     * 
                     */
                    std::string GetSwitchId() const;

                    /**
                     * 设置防火墙开关ID
支持三种类型
1. 边开关(单点互通)
2. 点开关(多点互通)
3. 全开关(全互通)
                     * @param _switchId 防火墙开关ID
支持三种类型
1. 边开关(单点互通)
2. 点开关(多点互通)
3. 全开关(全互通)
                     * 
                     */
                    void SetSwitchId(const std::string& _switchId);

                    /**
                     * 判断参数 SwitchId 是否已赋值
                     * @return SwitchId 是否已赋值
                     * 
                     */
                    bool SwitchIdHasBeenSet() const;

                private:

                    /**
                     * 防火墙实例的开关模式 1: 单点互通 2: 多点互通 3: 全互通 4: 自定义路由
                     */
                    int64_t m_switchMode;
                    bool m_switchModeHasBeenSet;

                    /**
                     * 防火墙开关ID
支持三种类型
1. 边开关(单点互通)
2. 点开关(多点互通)
3. 全开关(全互通)
                     */
                    std::string m_switchId;
                    bool m_switchIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_FWGROUPSWITCH_H_
