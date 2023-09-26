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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_NSVERIFICATION_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_NSVERIFICATION_H_

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
                * NS 接入，切换 DNS 服务器所需的信息。
                */
                class NsVerification : public AbstractModel
                {
                public:
                    NsVerification();
                    ~NsVerification() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取NS 接入时，分配给用户的 DNS 服务器地址，需要将域名的 NameServer 切换至该地址。
                     * @return NameServers NS 接入时，分配给用户的 DNS 服务器地址，需要将域名的 NameServer 切换至该地址。
                     * 
                     */
                    std::vector<std::string> GetNameServers() const;

                    /**
                     * 设置NS 接入时，分配给用户的 DNS 服务器地址，需要将域名的 NameServer 切换至该地址。
                     * @param _nameServers NS 接入时，分配给用户的 DNS 服务器地址，需要将域名的 NameServer 切换至该地址。
                     * 
                     */
                    void SetNameServers(const std::vector<std::string>& _nameServers);

                    /**
                     * 判断参数 NameServers 是否已赋值
                     * @return NameServers 是否已赋值
                     * 
                     */
                    bool NameServersHasBeenSet() const;

                private:

                    /**
                     * NS 接入时，分配给用户的 DNS 服务器地址，需要将域名的 NameServer 切换至该地址。
                     */
                    std::vector<std::string> m_nameServers;
                    bool m_nameServersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_NSVERIFICATION_H_
