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

#ifndef TENCENTCLOUD_CME_V20191029_MODEL_PLATFORMINFO_H_
#define TENCENTCLOUD_CME_V20191029_MODEL_PLATFORMINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cme
    {
        namespace V20191029
        {
            namespace Model
            {
                /**
                * 平台信息。
                */
                class PlatformInfo : public AbstractModel
                {
                public:
                    PlatformInfo();
                    ~PlatformInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取平台标识。
                     * @return Platform 平台标识。
                     * 
                     */
                    std::string GetPlatform() const;

                    /**
                     * 设置平台标识。
                     * @param _platform 平台标识。
                     * 
                     */
                    void SetPlatform(const std::string& _platform);

                    /**
                     * 判断参数 Platform 是否已赋值
                     * @return Platform 是否已赋值
                     * 
                     */
                    bool PlatformHasBeenSet() const;

                    /**
                     * 获取平台描述。
                     * @return Description 平台描述。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置平台描述。
                     * @param _description 平台描述。
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取云点播子应用 Id。
                     * @return VodSubAppId 云点播子应用 Id。
                     * 
                     */
                    uint64_t GetVodSubAppId() const;

                    /**
                     * 设置云点播子应用 Id。
                     * @param _vodSubAppId 云点播子应用 Id。
                     * 
                     */
                    void SetVodSubAppId(const uint64_t& _vodSubAppId);

                    /**
                     * 判断参数 VodSubAppId 是否已赋值
                     * @return VodSubAppId 是否已赋值
                     * 
                     */
                    bool VodSubAppIdHasBeenSet() const;

                    /**
                     * 获取平台绑定的 license Id。
                     * @return LicenseId 平台绑定的 license Id。
                     * 
                     */
                    std::string GetLicenseId() const;

                    /**
                     * 设置平台绑定的 license Id。
                     * @param _licenseId 平台绑定的 license Id。
                     * 
                     */
                    void SetLicenseId(const std::string& _licenseId);

                    /**
                     * 判断参数 LicenseId 是否已赋值
                     * @return LicenseId 是否已赋值
                     * 
                     */
                    bool LicenseIdHasBeenSet() const;

                    /**
                     * 获取平台状态，可取值为：
<li>Normal：正常，可使用。；</li>
<li>Stopped：已停用，暂无法使用；</li>
<li>Expired：已过期，需要重新购买会员包。</li>
                     * @return Status 平台状态，可取值为：
<li>Normal：正常，可使用。；</li>
<li>Stopped：已停用，暂无法使用；</li>
<li>Expired：已过期，需要重新购买会员包。</li>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置平台状态，可取值为：
<li>Normal：正常，可使用。；</li>
<li>Stopped：已停用，暂无法使用；</li>
<li>Expired：已过期，需要重新购买会员包。</li>
                     * @param _status 平台状态，可取值为：
<li>Normal：正常，可使用。；</li>
<li>Stopped：已停用，暂无法使用；</li>
<li>Expired：已过期，需要重新购买会员包。</li>
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
                     * 获取创建时间，格式按照 ISO 8601 标准表示。
                     * @return CreateTime 创建时间，格式按照 ISO 8601 标准表示。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间，格式按照 ISO 8601 标准表示。
                     * @param _createTime 创建时间，格式按照 ISO 8601 标准表示。
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取更新时间，格式按照 ISO 8601 标准表示。
                     * @return UpdateTime 更新时间，格式按照 ISO 8601 标准表示。
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置更新时间，格式按照 ISO 8601 标准表示。
                     * @param _updateTime 更新时间，格式按照 ISO 8601 标准表示。
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                private:

                    /**
                     * 平台标识。
                     */
                    std::string m_platform;
                    bool m_platformHasBeenSet;

                    /**
                     * 平台描述。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 云点播子应用 Id。
                     */
                    uint64_t m_vodSubAppId;
                    bool m_vodSubAppIdHasBeenSet;

                    /**
                     * 平台绑定的 license Id。
                     */
                    std::string m_licenseId;
                    bool m_licenseIdHasBeenSet;

                    /**
                     * 平台状态，可取值为：
<li>Normal：正常，可使用。；</li>
<li>Stopped：已停用，暂无法使用；</li>
<li>Expired：已过期，需要重新购买会员包。</li>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 创建时间，格式按照 ISO 8601 标准表示。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 更新时间，格式按照 ISO 8601 标准表示。
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CME_V20191029_MODEL_PLATFORMINFO_H_
