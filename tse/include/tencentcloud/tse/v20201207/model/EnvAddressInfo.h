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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_ENVADDRESSINFO_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_ENVADDRESSINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tse
    {
        namespace V20201207
        {
            namespace Model
            {
                /**
                * 多环境网络信息
                */
                class EnvAddressInfo : public AbstractModel
                {
                public:
                    EnvAddressInfo();
                    ~EnvAddressInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取环境名
                     * @return EnvName 环境名
                     */
                    std::string GetEnvName() const;

                    /**
                     * 设置环境名
                     * @param EnvName 环境名
                     */
                    void SetEnvName(const std::string& _envName);

                    /**
                     * 判断参数 EnvName 是否已赋值
                     * @return EnvName 是否已赋值
                     */
                    bool EnvNameHasBeenSet() const;

                    /**
                     * 获取是否开启config公网
                     * @return EnableConfigInternet 是否开启config公网
                     */
                    bool GetEnableConfigInternet() const;

                    /**
                     * 设置是否开启config公网
                     * @param EnableConfigInternet 是否开启config公网
                     */
                    void SetEnableConfigInternet(const bool& _enableConfigInternet);

                    /**
                     * 判断参数 EnableConfigInternet 是否已赋值
                     * @return EnableConfigInternet 是否已赋值
                     */
                    bool EnableConfigInternetHasBeenSet() const;

                    /**
                     * 获取config公网ip
                     * @return ConfigInternetServiceIp config公网ip
                     */
                    std::string GetConfigInternetServiceIp() const;

                    /**
                     * 设置config公网ip
                     * @param ConfigInternetServiceIp config公网ip
                     */
                    void SetConfigInternetServiceIp(const std::string& _configInternetServiceIp);

                    /**
                     * 判断参数 ConfigInternetServiceIp 是否已赋值
                     * @return ConfigInternetServiceIp 是否已赋值
                     */
                    bool ConfigInternetServiceIpHasBeenSet() const;

                    /**
                     * 获取config内网访问地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ConfigIntranetAddress config内网访问地址
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetConfigIntranetAddress() const;

                    /**
                     * 设置config内网访问地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ConfigIntranetAddress config内网访问地址
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetConfigIntranetAddress(const std::string& _configIntranetAddress);

                    /**
                     * 判断参数 ConfigIntranetAddress 是否已赋值
                     * @return ConfigIntranetAddress 是否已赋值
                     */
                    bool ConfigIntranetAddressHasBeenSet() const;

                    /**
                     * 获取是否开启config内网clb
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EnableConfigIntranet 是否开启config内网clb
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool GetEnableConfigIntranet() const;

                    /**
                     * 设置是否开启config内网clb
注意：此字段可能返回 null，表示取不到有效值。
                     * @param EnableConfigIntranet 是否开启config内网clb
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetEnableConfigIntranet(const bool& _enableConfigIntranet);

                    /**
                     * 判断参数 EnableConfigIntranet 是否已赋值
                     * @return EnableConfigIntranet 是否已赋值
                     */
                    bool EnableConfigIntranetHasBeenSet() const;

                private:

                    /**
                     * 环境名
                     */
                    std::string m_envName;
                    bool m_envNameHasBeenSet;

                    /**
                     * 是否开启config公网
                     */
                    bool m_enableConfigInternet;
                    bool m_enableConfigInternetHasBeenSet;

                    /**
                     * config公网ip
                     */
                    std::string m_configInternetServiceIp;
                    bool m_configInternetServiceIpHasBeenSet;

                    /**
                     * config内网访问地址
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_configIntranetAddress;
                    bool m_configIntranetAddressHasBeenSet;

                    /**
                     * 是否开启config内网clb
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_enableConfigIntranet;
                    bool m_enableConfigIntranetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_ENVADDRESSINFO_H_
