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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_MULTIPATHGATEWAYCURRENTORIGINACL_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_MULTIPATHGATEWAYCURRENTORIGINACL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/Addresses.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * 当前生效的回源 IP 网段。
                */
                class MultiPathGatewayCurrentOriginACL : public AbstractModel
                {
                public:
                    MultiPathGatewayCurrentOriginACL();
                    ~MultiPathGatewayCurrentOriginACL() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取回源 IP 网段详情。
                     * @return EntireAddresses 回源 IP 网段详情。
                     * 
                     */
                    Addresses GetEntireAddresses() const;

                    /**
                     * 设置回源 IP 网段详情。
                     * @param _entireAddresses 回源 IP 网段详情。
                     * 
                     */
                    void SetEntireAddresses(const Addresses& _entireAddresses);

                    /**
                     * 判断参数 EntireAddresses 是否已赋值
                     * @return EntireAddresses 是否已赋值
                     * 
                     */
                    bool EntireAddressesHasBeenSet() const;

                    /**
                     * 获取版本号。
                     * @return Version 版本号。
                     * 
                     */
                    int64_t GetVersion() const;

                    /**
                     * 设置版本号。
                     * @param _version 版本号。
                     * 
                     */
                    void SetVersion(const int64_t& _version);

                    /**
                     * 判断参数 Version 是否已赋值
                     * @return Version 是否已赋值
                     * 
                     */
                    bool VersionHasBeenSet() const;

                    /**
                     * 获取本参数用于记录当前版本生效前是否完成「我已更新至最新回源 IP 网段」的确认。取值有：
<li>true：已完成更新至最新回源 IP 的确认；</li>
<li>false：未完成更新至最新回源 IP 的确认；</li>
注意：本参数返回 false 时，请及时确认您的源站防火墙配置是否已更新至最新的回源 IP 网段，以避免出现回源失败。
                     * @return IsPlaned 本参数用于记录当前版本生效前是否完成「我已更新至最新回源 IP 网段」的确认。取值有：
<li>true：已完成更新至最新回源 IP 的确认；</li>
<li>false：未完成更新至最新回源 IP 的确认；</li>
注意：本参数返回 false 时，请及时确认您的源站防火墙配置是否已更新至最新的回源 IP 网段，以避免出现回源失败。
                     * 
                     */
                    std::string GetIsPlaned() const;

                    /**
                     * 设置本参数用于记录当前版本生效前是否完成「我已更新至最新回源 IP 网段」的确认。取值有：
<li>true：已完成更新至最新回源 IP 的确认；</li>
<li>false：未完成更新至最新回源 IP 的确认；</li>
注意：本参数返回 false 时，请及时确认您的源站防火墙配置是否已更新至最新的回源 IP 网段，以避免出现回源失败。
                     * @param _isPlaned 本参数用于记录当前版本生效前是否完成「我已更新至最新回源 IP 网段」的确认。取值有：
<li>true：已完成更新至最新回源 IP 的确认；</li>
<li>false：未完成更新至最新回源 IP 的确认；</li>
注意：本参数返回 false 时，请及时确认您的源站防火墙配置是否已更新至最新的回源 IP 网段，以避免出现回源失败。
                     * 
                     */
                    void SetIsPlaned(const std::string& _isPlaned);

                    /**
                     * 判断参数 IsPlaned 是否已赋值
                     * @return IsPlaned 是否已赋值
                     * 
                     */
                    bool IsPlanedHasBeenSet() const;

                private:

                    /**
                     * 回源 IP 网段详情。
                     */
                    Addresses m_entireAddresses;
                    bool m_entireAddressesHasBeenSet;

                    /**
                     * 版本号。
                     */
                    int64_t m_version;
                    bool m_versionHasBeenSet;

                    /**
                     * 本参数用于记录当前版本生效前是否完成「我已更新至最新回源 IP 网段」的确认。取值有：
<li>true：已完成更新至最新回源 IP 的确认；</li>
<li>false：未完成更新至最新回源 IP 的确认；</li>
注意：本参数返回 false 时，请及时确认您的源站防火墙配置是否已更新至最新的回源 IP 网段，以避免出现回源失败。
                     */
                    std::string m_isPlaned;
                    bool m_isPlanedHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_MULTIPATHGATEWAYCURRENTORIGINACL_H_
