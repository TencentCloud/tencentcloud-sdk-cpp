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

#ifndef TENCENTCLOUD_MS_V20180408_MODEL_APPINFO_H_
#define TENCENTCLOUD_MS_V20180408_MODEL_APPINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ms
    {
        namespace V20180408
        {
            namespace Model
            {
                /**
                * 提交的app基本信息
                */
                class AppInfo : public AbstractModel
                {
                public:
                    AppInfo();
                    ~AppInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取app的url，必须保证不用权限校验就可以下载
                     * @return AppUrl app的url，必须保证不用权限校验就可以下载
                     * 
                     */
                    std::string GetAppUrl() const;

                    /**
                     * 设置app的url，必须保证不用权限校验就可以下载
                     * @param _appUrl app的url，必须保证不用权限校验就可以下载
                     * 
                     */
                    void SetAppUrl(const std::string& _appUrl);

                    /**
                     * 判断参数 AppUrl 是否已赋值
                     * @return AppUrl 是否已赋值
                     * 
                     */
                    bool AppUrlHasBeenSet() const;

                    /**
                     * 获取app的md5，需要正确传递
                     * @return AppMd5 app的md5，需要正确传递
                     * 
                     */
                    std::string GetAppMd5() const;

                    /**
                     * 设置app的md5，需要正确传递
                     * @param _appMd5 app的md5，需要正确传递
                     * 
                     */
                    void SetAppMd5(const std::string& _appMd5);

                    /**
                     * 判断参数 AppMd5 是否已赋值
                     * @return AppMd5 是否已赋值
                     * 
                     */
                    bool AppMd5HasBeenSet() const;

                    /**
                     * 获取app的大小
                     * @return AppSize app的大小
                     * 
                     */
                    uint64_t GetAppSize() const;

                    /**
                     * 设置app的大小
                     * @param _appSize app的大小
                     * 
                     */
                    void SetAppSize(const uint64_t& _appSize);

                    /**
                     * 判断参数 AppSize 是否已赋值
                     * @return AppSize 是否已赋值
                     * 
                     */
                    bool AppSizeHasBeenSet() const;

                    /**
                     * 获取app的文件名
                     * @return FileName app的文件名
                     * 
                     */
                    std::string GetFileName() const;

                    /**
                     * 设置app的文件名
                     * @param _fileName app的文件名
                     * 
                     */
                    void SetFileName(const std::string& _fileName);

                    /**
                     * 判断参数 FileName 是否已赋值
                     * @return FileName 是否已赋值
                     * 
                     */
                    bool FileNameHasBeenSet() const;

                    /**
                     * 获取app的包名，需要正确的传递此字段
                     * @return AppPkgName app的包名，需要正确的传递此字段
                     * 
                     */
                    std::string GetAppPkgName() const;

                    /**
                     * 设置app的包名，需要正确的传递此字段
                     * @param _appPkgName app的包名，需要正确的传递此字段
                     * 
                     */
                    void SetAppPkgName(const std::string& _appPkgName);

                    /**
                     * 判断参数 AppPkgName 是否已赋值
                     * @return AppPkgName 是否已赋值
                     * 
                     */
                    bool AppPkgNameHasBeenSet() const;

                    /**
                     * 获取app的版本号
                     * @return AppVersion app的版本号
                     * 
                     */
                    std::string GetAppVersion() const;

                    /**
                     * 设置app的版本号
                     * @param _appVersion app的版本号
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
                     * 获取app的图标url
                     * @return AppIconUrl app的图标url
                     * 
                     */
                    std::string GetAppIconUrl() const;

                    /**
                     * 设置app的图标url
                     * @param _appIconUrl app的图标url
                     * 
                     */
                    void SetAppIconUrl(const std::string& _appIconUrl);

                    /**
                     * 判断参数 AppIconUrl 是否已赋值
                     * @return AppIconUrl 是否已赋值
                     * 
                     */
                    bool AppIconUrlHasBeenSet() const;

                    /**
                     * 获取app的名称
                     * @return AppName app的名称
                     * 
                     */
                    std::string GetAppName() const;

                    /**
                     * 设置app的名称
                     * @param _appName app的名称
                     * 
                     */
                    void SetAppName(const std::string& _appName);

                    /**
                     * 判断参数 AppName 是否已赋值
                     * @return AppName 是否已赋值
                     * 
                     */
                    bool AppNameHasBeenSet() const;

                private:

                    /**
                     * app的url，必须保证不用权限校验就可以下载
                     */
                    std::string m_appUrl;
                    bool m_appUrlHasBeenSet;

                    /**
                     * app的md5，需要正确传递
                     */
                    std::string m_appMd5;
                    bool m_appMd5HasBeenSet;

                    /**
                     * app的大小
                     */
                    uint64_t m_appSize;
                    bool m_appSizeHasBeenSet;

                    /**
                     * app的文件名
                     */
                    std::string m_fileName;
                    bool m_fileNameHasBeenSet;

                    /**
                     * app的包名，需要正确的传递此字段
                     */
                    std::string m_appPkgName;
                    bool m_appPkgNameHasBeenSet;

                    /**
                     * app的版本号
                     */
                    std::string m_appVersion;
                    bool m_appVersionHasBeenSet;

                    /**
                     * app的图标url
                     */
                    std::string m_appIconUrl;
                    bool m_appIconUrlHasBeenSet;

                    /**
                     * app的名称
                     */
                    std::string m_appName;
                    bool m_appNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MS_V20180408_MODEL_APPINFO_H_
