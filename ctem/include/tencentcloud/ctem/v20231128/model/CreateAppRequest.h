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

#ifndef TENCENTCLOUD_CTEM_V20231128_MODEL_CREATEAPPREQUEST_H_
#define TENCENTCLOUD_CTEM_V20231128_MODEL_CREATEAPPREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ctem
    {
        namespace V20231128
        {
            namespace Model
            {
                /**
                * CreateApp请求参数结构体
                */
                class CreateAppRequest : public AbstractModel
                {
                public:
                    CreateAppRequest();
                    ~CreateAppRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取企业ID
                     * @return CustomerId 企业ID
                     * 
                     */
                    int64_t GetCustomerId() const;

                    /**
                     * 设置企业ID
                     * @param _customerId 企业ID
                     * 
                     */
                    void SetCustomerId(const int64_t& _customerId);

                    /**
                     * 判断参数 CustomerId 是否已赋值
                     * @return CustomerId 是否已赋值
                     * 
                     */
                    bool CustomerIdHasBeenSet() const;

                    /**
                     * 获取移动端名称
                     * @return Name 移动端名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置移动端名称
                     * @param _name 移动端名称
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
                     * 获取图片地址
                     * @return Logo 图片地址
                     * 
                     */
                    std::string GetLogo() const;

                    /**
                     * 设置图片地址
                     * @param _logo 图片地址
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
                     * 获取平台，ios或android
                     * @return Platform 平台，ios或android
                     * 
                     */
                    std::string GetPlatform() const;

                    /**
                     * 设置平台，ios或android
                     * @param _platform 平台，ios或android
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
                     * 获取版本
                     * @return AppVersion 版本
                     * 
                     */
                    std::string GetAppVersion() const;

                    /**
                     * 设置版本
                     * @param _appVersion 版本
                     * 
                     */
                    void SetAppVersion(const std::string& _appVersion);

                    /**
                     * 判断参数 AppVersion 是否已赋值
                     * @return AppVersion 是否已赋值
                     * 
                     */
                    bool AppVersionHasBeenSet() const;

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
                     * 获取安装包名
                     * @return PackageName 安装包名
                     * 
                     */
                    std::string GetPackageName() const;

                    /**
                     * 设置安装包名
                     * @param _packageName 安装包名
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
                     * 获取移动端地址
                     * @return ServerUrl 移动端地址
                     * 
                     */
                    std::string GetServerUrl() const;

                    /**
                     * 设置移动端地址
                     * @param _serverUrl 移动端地址
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
                     * 获取子公司ID
                     * @return EnterpriseUid 子公司ID
                     * 
                     */
                    std::string GetEnterpriseUid() const;

                    /**
                     * 设置子公司ID
                     * @param _enterpriseUid 子公司ID
                     * 
                     */
                    void SetEnterpriseUid(const std::string& _enterpriseUid);

                    /**
                     * 判断参数 EnterpriseUid 是否已赋值
                     * @return EnterpriseUid 是否已赋值
                     * 
                     */
                    bool EnterpriseUidHasBeenSet() const;

                private:

                    /**
                     * 企业ID
                     */
                    int64_t m_customerId;
                    bool m_customerIdHasBeenSet;

                    /**
                     * 移动端名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 图片地址
                     */
                    std::string m_logo;
                    bool m_logoHasBeenSet;

                    /**
                     * 平台，ios或android
                     */
                    std::string m_platform;
                    bool m_platformHasBeenSet;

                    /**
                     * 版本
                     */
                    std::string m_appVersion;
                    bool m_appVersionHasBeenSet;

                    /**
                     * 下载地址
                     */
                    std::string m_downloadUrl;
                    bool m_downloadUrlHasBeenSet;

                    /**
                     * 安装包名
                     */
                    std::string m_packageName;
                    bool m_packageNameHasBeenSet;

                    /**
                     * 开发者
                     */
                    std::string m_developer;
                    bool m_developerHasBeenSet;

                    /**
                     * 移动端地址
                     */
                    std::string m_serverUrl;
                    bool m_serverUrlHasBeenSet;

                    /**
                     * 描述
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 子公司ID
                     */
                    std::string m_enterpriseUid;
                    bool m_enterpriseUidHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CTEM_V20231128_MODEL_CREATEAPPREQUEST_H_
