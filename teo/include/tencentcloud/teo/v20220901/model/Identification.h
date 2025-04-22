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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_IDENTIFICATION_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_IDENTIFICATION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/AscriptionInfo.h>
#include <tencentcloud/teo/v20220901/model/FileAscriptionInfo.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * 站点验证信息
                */
                class Identification : public AbstractModel
                {
                public:
                    Identification();
                    ~Identification() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取站点名称。
                     * @return ZoneName 站点名称。
                     * 
                     */
                    std::string GetZoneName() const;

                    /**
                     * 设置站点名称。
                     * @param _zoneName 站点名称。
                     * 
                     */
                    void SetZoneName(const std::string& _zoneName);

                    /**
                     * 判断参数 ZoneName 是否已赋值
                     * @return ZoneName 是否已赋值
                     * 
                     */
                    bool ZoneNameHasBeenSet() const;

                    /**
                     * 获取验证子域名。验证站点时，该值为空。验证子域名是为具体子域名。
                     * @return Domain 验证子域名。验证站点时，该值为空。验证子域名是为具体子域名。
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置验证子域名。验证站点时，该值为空。验证子域名是为具体子域名。
                     * @param _domain 验证子域名。验证站点时，该值为空。验证子域名是为具体子域名。
                     * 
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取验证状态，取值有：
<li> pending：验证中；</li>
<li> finished：验证完成。</li>
                     * @return Status 验证状态，取值有：
<li> pending：验证中；</li>
<li> finished：验证完成。</li>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置验证状态，取值有：
<li> pending：验证中；</li>
<li> finished：验证完成。</li>
                     * @param _status 验证状态，取值有：
<li> pending：验证中；</li>
<li> finished：验证完成。</li>
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取站点归属权校验：Dns校验信息。
                     * @return Ascription 站点归属权校验：Dns校验信息。
                     * 
                     */
                    AscriptionInfo GetAscription() const;

                    /**
                     * 设置站点归属权校验：Dns校验信息。
                     * @param _ascription 站点归属权校验：Dns校验信息。
                     * 
                     */
                    void SetAscription(const AscriptionInfo& _ascription);

                    /**
                     * 判断参数 Ascription 是否已赋值
                     * @return Ascription 是否已赋值
                     * 
                     */
                    bool AscriptionHasBeenSet() const;

                    /**
                     * 获取域名当前的 NS 记录。
                     * @return OriginalNameServers 域名当前的 NS 记录。
                     * 
                     */
                    std::vector<std::string> GetOriginalNameServers() const;

                    /**
                     * 设置域名当前的 NS 记录。
                     * @param _originalNameServers 域名当前的 NS 记录。
                     * 
                     */
                    void SetOriginalNameServers(const std::vector<std::string>& _originalNameServers);

                    /**
                     * 判断参数 OriginalNameServers 是否已赋值
                     * @return OriginalNameServers 是否已赋值
                     * 
                     */
                    bool OriginalNameServersHasBeenSet() const;

                    /**
                     * 获取站点归属权校验：文件校验信息。
                     * @return FileAscription 站点归属权校验：文件校验信息。
                     * 
                     */
                    FileAscriptionInfo GetFileAscription() const;

                    /**
                     * 设置站点归属权校验：文件校验信息。
                     * @param _fileAscription 站点归属权校验：文件校验信息。
                     * 
                     */
                    void SetFileAscription(const FileAscriptionInfo& _fileAscription);

                    /**
                     * 判断参数 FileAscription 是否已赋值
                     * @return FileAscription 是否已赋值
                     * 
                     */
                    bool FileAscriptionHasBeenSet() const;

                private:

                    /**
                     * 站点名称。
                     */
                    std::string m_zoneName;
                    bool m_zoneNameHasBeenSet;

                    /**
                     * 验证子域名。验证站点时，该值为空。验证子域名是为具体子域名。
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * 验证状态，取值有：
<li> pending：验证中；</li>
<li> finished：验证完成。</li>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 站点归属权校验：Dns校验信息。
                     */
                    AscriptionInfo m_ascription;
                    bool m_ascriptionHasBeenSet;

                    /**
                     * 域名当前的 NS 记录。
                     */
                    std::vector<std::string> m_originalNameServers;
                    bool m_originalNameServersHasBeenSet;

                    /**
                     * 站点归属权校验：文件校验信息。
                     */
                    FileAscriptionInfo m_fileAscription;
                    bool m_fileAscriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_IDENTIFICATION_H_
