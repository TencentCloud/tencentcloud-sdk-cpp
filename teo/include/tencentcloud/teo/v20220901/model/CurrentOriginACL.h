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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_CURRENTORIGINACL_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_CURRENTORIGINACL_H_

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
                class CurrentOriginACL : public AbstractModel
                {
                public:
                    CurrentOriginACL();
                    ~CurrentOriginACL() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取回源 IP 网段详情。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EntireAddresses 回源 IP 网段详情。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    Addresses GetEntireAddresses() const;

                    /**
                     * 设置回源 IP 网段详情。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _entireAddresses 回源 IP 网段详情。
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Version 版本号。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetVersion() const;

                    /**
                     * 设置版本号。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _version 版本号。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetVersion(const std::string& _version);

                    /**
                     * 判断参数 Version 是否已赋值
                     * @return Version 是否已赋值
                     * 
                     */
                    bool VersionHasBeenSet() const;

                    /**
                     * 获取版本生效时间，时间是北京时间 UTC+8， 遵循 ISO 8601 标准的日期和时间格式。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ActiveTime 版本生效时间，时间是北京时间 UTC+8， 遵循 ISO 8601 标准的日期和时间格式。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetActiveTime() const;

                    /**
                     * 设置版本生效时间，时间是北京时间 UTC+8， 遵循 ISO 8601 标准的日期和时间格式。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _activeTime 版本生效时间，时间是北京时间 UTC+8， 遵循 ISO 8601 标准的日期和时间格式。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetActiveTime(const std::string& _activeTime);

                    /**
                     * 判断参数 ActiveTime 是否已赋值
                     * @return ActiveTime 是否已赋值
                     * 
                     */
                    bool ActiveTimeHasBeenSet() const;

                    /**
                     * 获取本参数用于记录当前版本生效前是否完成「我已更新至最新回源 IP 网段」的确认。取值有：
<li>true：版本生效时，已完成更新至最新回源 IP 的确认；</li>
<li>false：版本生效时，仍未完成已更新至最新回源 IP 的确认，回源 IP 网段由后台强制更新至最新版本。</li>注意：本参数返回 false 时，请及时确认您的源站防火墙配置是否已更新至最新的回源 IP 网段，以避免出现回源失败。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsPlaned 本参数用于记录当前版本生效前是否完成「我已更新至最新回源 IP 网段」的确认。取值有：
<li>true：版本生效时，已完成更新至最新回源 IP 的确认；</li>
<li>false：版本生效时，仍未完成已更新至最新回源 IP 的确认，回源 IP 网段由后台强制更新至最新版本。</li>注意：本参数返回 false 时，请及时确认您的源站防火墙配置是否已更新至最新的回源 IP 网段，以避免出现回源失败。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetIsPlaned() const;

                    /**
                     * 设置本参数用于记录当前版本生效前是否完成「我已更新至最新回源 IP 网段」的确认。取值有：
<li>true：版本生效时，已完成更新至最新回源 IP 的确认；</li>
<li>false：版本生效时，仍未完成已更新至最新回源 IP 的确认，回源 IP 网段由后台强制更新至最新版本。</li>注意：本参数返回 false 时，请及时确认您的源站防火墙配置是否已更新至最新的回源 IP 网段，以避免出现回源失败。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isPlaned 本参数用于记录当前版本生效前是否完成「我已更新至最新回源 IP 网段」的确认。取值有：
<li>true：版本生效时，已完成更新至最新回源 IP 的确认；</li>
<li>false：版本生效时，仍未完成已更新至最新回源 IP 的确认，回源 IP 网段由后台强制更新至最新版本。</li>注意：本参数返回 false 时，请及时确认您的源站防火墙配置是否已更新至最新的回源 IP 网段，以避免出现回源失败。
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Addresses m_entireAddresses;
                    bool m_entireAddressesHasBeenSet;

                    /**
                     * 版本号。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_version;
                    bool m_versionHasBeenSet;

                    /**
                     * 版本生效时间，时间是北京时间 UTC+8， 遵循 ISO 8601 标准的日期和时间格式。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_activeTime;
                    bool m_activeTimeHasBeenSet;

                    /**
                     * 本参数用于记录当前版本生效前是否完成「我已更新至最新回源 IP 网段」的确认。取值有：
<li>true：版本生效时，已完成更新至最新回源 IP 的确认；</li>
<li>false：版本生效时，仍未完成已更新至最新回源 IP 的确认，回源 IP 网段由后台强制更新至最新版本。</li>注意：本参数返回 false 时，请及时确认您的源站防火墙配置是否已更新至最新的回源 IP 网段，以避免出现回源失败。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_isPlaned;
                    bool m_isPlanedHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_CURRENTORIGINACL_H_
