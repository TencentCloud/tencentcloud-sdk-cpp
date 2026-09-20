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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_ORIGINACLFAMILYINFO_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_ORIGINACLFAMILYINFO_H_

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
                * 回源 IP 网段版本信息。
                */
                class OriginACLFamilyInfo : public AbstractModel
                {
                public:
                    OriginACLFamilyInfo();
                    ~OriginACLFamilyInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取源站防护版本号。
格式说明：
标准版本：
<li>gaz-xxxxx：全球；</li>
<li>mlc-xxxxx：中国；</li>
<li>emc-xxxxx：海外(全球不含中国)；</li>
精简版(平台级版本)：
<li>plat-gaz-xxxxxx：精简全球版；</li>
<li>plat-mlc-xxxxxx：精简中国版；</li>
<li>plat-emc-xxxxxx：精简海外(全球不含中国)版；</li>
缩写说明：
<li>gaz：Global AZ Availability Zone;</li>
<li>mlc：mainlandChina;</li>
<li>emc：Exclude mainlandChina.</li>
                     * @return Version 源站防护版本号。
格式说明：
标准版本：
<li>gaz-xxxxx：全球；</li>
<li>mlc-xxxxx：中国；</li>
<li>emc-xxxxx：海外(全球不含中国)；</li>
精简版(平台级版本)：
<li>plat-gaz-xxxxxx：精简全球版；</li>
<li>plat-mlc-xxxxxx：精简中国版；</li>
<li>plat-emc-xxxxxx：精简海外(全球不含中国)版；</li>
缩写说明：
<li>gaz：Global AZ Availability Zone;</li>
<li>mlc：mainlandChina;</li>
<li>emc：Exclude mainlandChina.</li>
                     * 
                     */
                    std::string GetVersion() const;

                    /**
                     * 设置源站防护版本号。
格式说明：
标准版本：
<li>gaz-xxxxx：全球；</li>
<li>mlc-xxxxx：中国；</li>
<li>emc-xxxxx：海外(全球不含中国)；</li>
精简版(平台级版本)：
<li>plat-gaz-xxxxxx：精简全球版；</li>
<li>plat-mlc-xxxxxx：精简中国版；</li>
<li>plat-emc-xxxxxx：精简海外(全球不含中国)版；</li>
缩写说明：
<li>gaz：Global AZ Availability Zone;</li>
<li>mlc：mainlandChina;</li>
<li>emc：Exclude mainlandChina.</li>
                     * @param _version 源站防护版本号。
格式说明：
标准版本：
<li>gaz-xxxxx：全球；</li>
<li>mlc-xxxxx：中国；</li>
<li>emc-xxxxx：海外(全球不含中国)；</li>
精简版(平台级版本)：
<li>plat-gaz-xxxxxx：精简全球版；</li>
<li>plat-mlc-xxxxxx：精简中国版；</li>
<li>plat-emc-xxxxxx：精简海外(全球不含中国)版；</li>
缩写说明：
<li>gaz：Global AZ Availability Zone;</li>
<li>mlc：mainlandChina;</li>
<li>emc：Exclude mainlandChina.</li>
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
                     * @return ActiveTime 版本生效时间，时间是北京时间 UTC+8， 遵循 ISO 8601 标准的日期和时间格式。
                     * 
                     */
                    std::string GetActiveTime() const;

                    /**
                     * 设置版本生效时间，时间是北京时间 UTC+8， 遵循 ISO 8601 标准的日期和时间格式。
                     * @param _activeTime 版本生效时间，时间是北京时间 UTC+8， 遵循 ISO 8601 标准的日期和时间格式。
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
                     * 获取源站防护回源ACL控制域。取值说明如下：
<li>gaz：标准全球可用区控制域；</li>
<li>mlc：标准中国大陆可用区控制域；</li>
<li>emc：标准全球(不含中国大陆)可用区控制域；</li>
<li>plat-gaz：精简全球可用区控制域；</li>
<li>plat-mlc：精简中国大陆可用区控制域；</li>
<li>plat-emc：精简全球(不含中国大陆)可用区控制域；</li>
                     * @return OriginACLFamily 源站防护回源ACL控制域。取值说明如下：
<li>gaz：标准全球可用区控制域；</li>
<li>mlc：标准中国大陆可用区控制域；</li>
<li>emc：标准全球(不含中国大陆)可用区控制域；</li>
<li>plat-gaz：精简全球可用区控制域；</li>
<li>plat-mlc：精简中国大陆可用区控制域；</li>
<li>plat-emc：精简全球(不含中国大陆)可用区控制域；</li>
                     * 
                     */
                    std::string GetOriginACLFamily() const;

                    /**
                     * 设置源站防护回源ACL控制域。取值说明如下：
<li>gaz：标准全球可用区控制域；</li>
<li>mlc：标准中国大陆可用区控制域；</li>
<li>emc：标准全球(不含中国大陆)可用区控制域；</li>
<li>plat-gaz：精简全球可用区控制域；</li>
<li>plat-mlc：精简中国大陆可用区控制域；</li>
<li>plat-emc：精简全球(不含中国大陆)可用区控制域；</li>
                     * @param _originACLFamily 源站防护回源ACL控制域。取值说明如下：
<li>gaz：标准全球可用区控制域；</li>
<li>mlc：标准中国大陆可用区控制域；</li>
<li>emc：标准全球(不含中国大陆)可用区控制域；</li>
<li>plat-gaz：精简全球可用区控制域；</li>
<li>plat-mlc：精简中国大陆可用区控制域；</li>
<li>plat-emc：精简全球(不含中国大陆)可用区控制域；</li>
                     * 
                     */
                    void SetOriginACLFamily(const std::string& _originACLFamily);

                    /**
                     * 判断参数 OriginACLFamily 是否已赋值
                     * @return OriginACLFamily 是否已赋值
                     * 
                     */
                    bool OriginACLFamilyHasBeenSet() const;

                private:

                    /**
                     * 源站防护版本号。
格式说明：
标准版本：
<li>gaz-xxxxx：全球；</li>
<li>mlc-xxxxx：中国；</li>
<li>emc-xxxxx：海外(全球不含中国)；</li>
精简版(平台级版本)：
<li>plat-gaz-xxxxxx：精简全球版；</li>
<li>plat-mlc-xxxxxx：精简中国版；</li>
<li>plat-emc-xxxxxx：精简海外(全球不含中国)版；</li>
缩写说明：
<li>gaz：Global AZ Availability Zone;</li>
<li>mlc：mainlandChina;</li>
<li>emc：Exclude mainlandChina.</li>
                     */
                    std::string m_version;
                    bool m_versionHasBeenSet;

                    /**
                     * 版本生效时间，时间是北京时间 UTC+8， 遵循 ISO 8601 标准的日期和时间格式。
                     */
                    std::string m_activeTime;
                    bool m_activeTimeHasBeenSet;

                    /**
                     * 回源 IP 网段详情。	
                     */
                    Addresses m_entireAddresses;
                    bool m_entireAddressesHasBeenSet;

                    /**
                     * 源站防护回源ACL控制域。取值说明如下：
<li>gaz：标准全球可用区控制域；</li>
<li>mlc：标准中国大陆可用区控制域；</li>
<li>emc：标准全球(不含中国大陆)可用区控制域；</li>
<li>plat-gaz：精简全球可用区控制域；</li>
<li>plat-mlc：精简中国大陆可用区控制域；</li>
<li>plat-emc：精简全球(不含中国大陆)可用区控制域；</li>
                     */
                    std::string m_originACLFamily;
                    bool m_originACLFamilyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_ORIGINACLFAMILYINFO_H_
