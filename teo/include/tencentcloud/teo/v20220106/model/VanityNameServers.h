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

#ifndef TENCENTCLOUD_TEO_V20220106_MODEL_VANITYNAMESERVERS_H_
#define TENCENTCLOUD_TEO_V20220106_MODEL_VANITYNAMESERVERS_H_

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
        namespace V20220106
        {
            namespace Model
            {
                /**
                * 自定义 nameservers
                */
                class VanityNameServers : public AbstractModel
                {
                public:
                    VanityNameServers();
                    ~VanityNameServers() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取自定义 ns 开关
- on 开启
- off 关闭
                     * @return Switch 自定义 ns 开关
- on 开启
- off 关闭
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置自定义 ns 开关
- on 开启
- off 关闭
                     * @param Switch 自定义 ns 开关
- on 开启
- off 关闭
                     */
                    void SetSwitch(const std::string& _switch);

                    /**
                     * 判断参数 Switch 是否已赋值
                     * @return Switch 是否已赋值
                     */
                    bool SwitchHasBeenSet() const;

                    /**
                     * 获取自定义 ns 列表
                     * @return Servers 自定义 ns 列表
                     */
                    std::vector<std::string> GetServers() const;

                    /**
                     * 设置自定义 ns 列表
                     * @param Servers 自定义 ns 列表
                     */
                    void SetServers(const std::vector<std::string>& _servers);

                    /**
                     * 判断参数 Servers 是否已赋值
                     * @return Servers 是否已赋值
                     */
                    bool ServersHasBeenSet() const;

                private:

                    /**
                     * 自定义 ns 开关
- on 开启
- off 关闭
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * 自定义 ns 列表
                     */
                    std::vector<std::string> m_servers;
                    bool m_serversHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220106_MODEL_VANITYNAMESERVERS_H_
