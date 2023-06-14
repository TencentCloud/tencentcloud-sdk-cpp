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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_VANITYNAMESERVERSIPS_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_VANITYNAMESERVERSIPS_H_

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
                * 自定义名字服务器 IP 信息
                */
                class VanityNameServersIps : public AbstractModel
                {
                public:
                    VanityNameServersIps();
                    ~VanityNameServersIps() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取自定义名字服务器名称。
                     * @return Name 自定义名字服务器名称。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置自定义名字服务器名称。
                     * @param _name 自定义名字服务器名称。
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取自定义名字服务器 IPv4 地址。
                     * @return IPv4 自定义名字服务器 IPv4 地址。
                     * 
                     */
                    std::string GetIPv4() const;

                    /**
                     * 设置自定义名字服务器 IPv4 地址。
                     * @param _iPv4 自定义名字服务器 IPv4 地址。
                     * 
                     */
                    void SetIPv4(const std::string& _iPv4);

                    /**
                     * 判断参数 IPv4 是否已赋值
                     * @return IPv4 是否已赋值
                     * 
                     */
                    bool IPv4HasBeenSet() const;

                private:

                    /**
                     * 自定义名字服务器名称。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 自定义名字服务器 IPv4 地址。
                     */
                    std::string m_iPv4;
                    bool m_iPv4HasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_VANITYNAMESERVERSIPS_H_
