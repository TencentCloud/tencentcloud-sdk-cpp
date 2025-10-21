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

#ifndef TENCENTCLOUD_CTEM_V20231128_MODEL_DISPLAYAPP_H_
#define TENCENTCLOUD_CTEM_V20231128_MODEL_DISPLAYAPP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ctem/v20231128/model/DisplayToolCommon.h>


namespace TencentCloud
{
    namespace Ctem
    {
        namespace V20231128
        {
            namespace Model
            {
                /**
                * 移动资产详情
                */
                class DisplayApp : public AbstractModel
                {
                public:
                    DisplayApp();
                    ~DisplayApp() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取主键ID
                     * @return Id 主键ID
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置主键ID
                     * @param _id 主键ID
                     * 
                     */
                    void SetId(const int64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取公共字段
                     * @return DisplayToolCommon 公共字段
                     * 
                     */
                    DisplayToolCommon GetDisplayToolCommon() const;

                    /**
                     * 设置公共字段
                     * @param _displayToolCommon 公共字段
                     * 
                     */
                    void SetDisplayToolCommon(const DisplayToolCommon& _displayToolCommon);

                    /**
                     * 判断参数 DisplayToolCommon 是否已赋值
                     * @return DisplayToolCommon 是否已赋值
                     * 
                     */
                    bool DisplayToolCommonHasBeenSet() const;

                    /**
                     * 获取APP名称
                     * @return Name APP名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置APP名称
                     * @param _name APP名称
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
                     * 获取描述
                     * @return Description 描述
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置描述
                     * @param _description 描述
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
                     * 获取开发者
                     * @return Developer 开发者
                     * 
                     */
                    std::string GetDeveloper() const;

                    /**
                     * 设置开发者
                     * @param _developer 开发者
                     * 
                     */
                    void SetDeveloper(const std::string& _developer);

                    /**
                     * 判断参数 Developer 是否已赋值
                     * @return Developer 是否已赋值
                     * 
                     */
                    bool DeveloperHasBeenSet() const;

                    /**
                     * 获取下载地址
                     * @return DownloadUrl 下载地址
                     * 
                     */
                    std::string GetDownloadUrl() const;

                    /**
                     * 设置下载地址
                     * @param _downloadUrl 下载地址
                     * 
                     */
                    void SetDownloadUrl(const std::string& _downloadUrl);

                    /**
                     * 判断参数 DownloadUrl 是否已赋值
                     * @return DownloadUrl 是否已赋值
                     * 
                     */
                    bool DownloadUrlHasBeenSet() const;

                    /**
                     * 获取图片
                     * @return Logo 图片
                     * 
                     */
                    std::string GetLogo() const;

                    /**
                     * 设置图片
                     * @param _logo 图片
                     * 
                     */
                    void SetLogo(const std::string& _logo);

                    /**
                     * 判断参数 Logo 是否已赋值
                     * @return Logo 是否已赋值
                     * 
                     */
                    bool LogoHasBeenSet() const;

                    /**
                     * 获取包名
                     * @return PackageName 包名
                     * 
                     */
                    std::string GetPackageName() const;

                    /**
                     * 设置包名
                     * @param _packageName 包名
                     * 
                     */
                    void SetPackageName(const std::string& _packageName);

                    /**
                     * 判断参数 PackageName 是否已赋值
                     * @return PackageName 是否已赋值
                     * 
                     */
                    bool PackageNameHasBeenSet() const;

                    /**
                     * 获取平台
                     * @return Platform 平台
                     * 
                     */
                    std::string GetPlatform() const;

                    /**
                     * 设置平台
                     * @param _platform 平台
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
                     * 获取服务端地址
                     * @return ServerUrl 服务端地址
                     * 
                     */
                    std::string GetServerUrl() const;

                    /**
                     * 设置服务端地址
                     * @param _serverUrl 服务端地址
                     * 
                     */
                    void SetServerUrl(const std::string& _serverUrl);

                    /**
                     * 判断参数 ServerUrl 是否已赋值
                     * @return ServerUrl 是否已赋值
                     * 
                     */
                    bool ServerUrlHasBeenSet() const;

                    /**
                     * 获取app版本
                     * @return AppVersion app版本
                     * 
                     */
                    std::string GetAppVersion() const;

                    /**
                     * 设置app版本
                     * @param _appVersion app版本
                     * 
                     */
                    void SetAppVersion(const std::string& _appVersion);

                    /**
                     * 判断参数 AppVersion 是否已赋值
                     * @return AppVersion 是否已赋值
                     * 
                     */
                    bool AppVersionHasBeenSet() const;

                private:

                    /**
                     * 主键ID
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 公共字段
                     */
                    DisplayToolCommon m_displayToolCommon;
                    bool m_displayToolCommonHasBeenSet;

                    /**
                     * APP名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 描述
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 开发者
                     */
                    std::string m_developer;
                    bool m_developerHasBeenSet;

                    /**
                     * 下载地址
                     */
                    std::string m_downloadUrl;
                    bool m_downloadUrlHasBeenSet;

                    /**
                     * 图片
                     */
                    std::string m_logo;
                    bool m_logoHasBeenSet;

                    /**
                     * 包名
                     */
                    std::string m_packageName;
                    bool m_packageNameHasBeenSet;

                    /**
                     * 平台
                     */
                    std::string m_platform;
                    bool m_platformHasBeenSet;

                    /**
                     * 服务端地址
                     */
                    std::string m_serverUrl;
                    bool m_serverUrlHasBeenSet;

                    /**
                     * app版本
                     */
                    std::string m_appVersion;
                    bool m_appVersionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CTEM_V20231128_MODEL_DISPLAYAPP_H_
