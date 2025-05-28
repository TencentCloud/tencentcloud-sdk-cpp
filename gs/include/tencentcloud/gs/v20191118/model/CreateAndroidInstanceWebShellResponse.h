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

#ifndef TENCENTCLOUD_GS_V20191118_MODEL_CREATEANDROIDINSTANCEWEBSHELLRESPONSE_H_
#define TENCENTCLOUD_GS_V20191118_MODEL_CREATEANDROIDINSTANCEWEBSHELLRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Gs
    {
        namespace V20191118
        {
            namespace Model
            {
                /**
                * CreateAndroidInstanceWebShell返回参数结构体
                */
                class CreateAndroidInstanceWebShellResponse : public AbstractModel
                {
                public:
                    CreateAndroidInstanceWebShellResponse();
                    ~CreateAndroidInstanceWebShellResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取鉴权密钥
                     * @return Key 鉴权密钥
                     * 
                     */
                    std::string GetKey() const;

                    /**
                     * 判断参数 Key 是否已赋值
                     * @return Key 是否已赋值
                     * 
                     */
                    bool KeyHasBeenSet() const;

                    /**
                     * 获取连接地址
                     * @return Address 连接地址
                     * 
                     */
                    std::string GetAddress() const;

                    /**
                     * 判断参数 Address 是否已赋值
                     * @return Address 是否已赋值
                     * 
                     */
                    bool AddressHasBeenSet() const;

                    /**
                     * 获取连接区域
                     * @return Zone 连接区域
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     * 
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取访问链接，可以直接使用此链接访问 WebShell
                     * @return ConnectUrl 访问链接，可以直接使用此链接访问 WebShell
                     * 
                     */
                    std::string GetConnectUrl() const;

                    /**
                     * 判断参数 ConnectUrl 是否已赋值
                     * @return ConnectUrl 是否已赋值
                     * 
                     */
                    bool ConnectUrlHasBeenSet() const;

                private:

                    /**
                     * 鉴权密钥
                     */
                    std::string m_key;
                    bool m_keyHasBeenSet;

                    /**
                     * 连接地址
                     */
                    std::string m_address;
                    bool m_addressHasBeenSet;

                    /**
                     * 连接区域
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * 访问链接，可以直接使用此链接访问 WebShell
                     */
                    std::string m_connectUrl;
                    bool m_connectUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GS_V20191118_MODEL_CREATEANDROIDINSTANCEWEBSHELLRESPONSE_H_
