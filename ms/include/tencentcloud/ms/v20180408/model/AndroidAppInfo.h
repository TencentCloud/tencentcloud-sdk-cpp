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

#ifndef TENCENTCLOUD_MS_V20180408_MODEL_ANDROIDAPPINFO_H_
#define TENCENTCLOUD_MS_V20180408_MODEL_ANDROIDAPPINFO_H_

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
                * 渠道合作Android加固App信息
                */
                class AndroidAppInfo : public AbstractModel
                {
                public:
                    AndroidAppInfo();
                    ~AndroidAppInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取app文件的md5算法值，需要正确传递，在线加固必输。
例如linux环境下执行算法命令md5sum ：
#md5sum test.apk 
d40cc11e4bddd643ecdf29cde729a12b
                     * @return AppMd5 app文件的md5算法值，需要正确传递，在线加固必输。
例如linux环境下执行算法命令md5sum ：
#md5sum test.apk 
d40cc11e4bddd643ecdf29cde729a12b
                     * 
                     */
                    std::string GetAppMd5() const;

                    /**
                     * 设置app文件的md5算法值，需要正确传递，在线加固必输。
例如linux环境下执行算法命令md5sum ：
#md5sum test.apk 
d40cc11e4bddd643ecdf29cde729a12b
                     * @param _appMd5 app文件的md5算法值，需要正确传递，在线加固必输。
例如linux环境下执行算法命令md5sum ：
#md5sum test.apk 
d40cc11e4bddd643ecdf29cde729a12b
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
                     * 获取app的大小，非必输。
                     * @return AppSize app的大小，非必输。
                     * 
                     */
                    int64_t GetAppSize() const;

                    /**
                     * 设置app的大小，非必输。
                     * @param _appSize app的大小，非必输。
                     * 
                     */
                    void SetAppSize(const int64_t& _appSize);

                    /**
                     * 判断参数 AppSize 是否已赋值
                     * @return AppSize 是否已赋值
                     * 
                     */
                    bool AppSizeHasBeenSet() const;

                    /**
                     * 获取app下载链接，在线加固必输。
                     * @return AppUrl app下载链接，在线加固必输。
                     * 
                     */
                    std::string GetAppUrl() const;

                    /**
                     * 设置app下载链接，在线加固必输。
                     * @param _appUrl app下载链接，在线加固必输。
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
                     * 获取app名称，非必输
                     * @return AppName app名称，非必输
                     * 
                     */
                    std::string GetAppName() const;

                    /**
                     * 设置app名称，非必输
                     * @param _appName app名称，非必输
                     * 
                     */
                    void SetAppName(const std::string& _appName);

                    /**
                     * 判断参数 AppName 是否已赋值
                     * @return AppName 是否已赋值
                     * 
                     */
                    bool AppNameHasBeenSet() const;

                    /**
                     * 获取app的包名，本次操作的包名。
当Android是按年收费、免费试用加固时，在线加固和输出工具要求该字段必输，且与AndroidPlan.AppPkgName值相等。
                     * @return AppPkgName app的包名，本次操作的包名。
当Android是按年收费、免费试用加固时，在线加固和输出工具要求该字段必输，且与AndroidPlan.AppPkgName值相等。
                     * 
                     */
                    std::string GetAppPkgName() const;

                    /**
                     * 设置app的包名，本次操作的包名。
当Android是按年收费、免费试用加固时，在线加固和输出工具要求该字段必输，且与AndroidPlan.AppPkgName值相等。
                     * @param _appPkgName app的包名，本次操作的包名。
当Android是按年收费、免费试用加固时，在线加固和输出工具要求该字段必输，且与AndroidPlan.AppPkgName值相等。
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
                     * 获取app的文件名，非必输。
                     * @return AppFileName app的文件名，非必输。
                     * 
                     */
                    std::string GetAppFileName() const;

                    /**
                     * 设置app的文件名，非必输。
                     * @param _appFileName app的文件名，非必输。
                     * 
                     */
                    void SetAppFileName(const std::string& _appFileName);

                    /**
                     * 判断参数 AppFileName 是否已赋值
                     * @return AppFileName 是否已赋值
                     * 
                     */
                    bool AppFileNameHasBeenSet() const;

                    /**
                     * 获取app版本号，非必输。
                     * @return AppVersion app版本号，非必输。
                     * 
                     */
                    std::string GetAppVersion() const;

                    /**
                     * 设置app版本号，非必输。
                     * @param _appVersion app版本号，非必输。
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
                     * 获取Android app的文件类型，本次加固操作的应用类型 。
Android在线加固和输出工具加固必输，其值需等于“apk”或“aab”，且与AndroidAppInfo.AppType值相等。
                     * @return AppType Android app的文件类型，本次加固操作的应用类型 。
Android在线加固和输出工具加固必输，其值需等于“apk”或“aab”，且与AndroidAppInfo.AppType值相等。
                     * 
                     */
                    std::string GetAppType() const;

                    /**
                     * 设置Android app的文件类型，本次加固操作的应用类型 。
Android在线加固和输出工具加固必输，其值需等于“apk”或“aab”，且与AndroidAppInfo.AppType值相等。
                     * @param _appType Android app的文件类型，本次加固操作的应用类型 。
Android在线加固和输出工具加固必输，其值需等于“apk”或“aab”，且与AndroidAppInfo.AppType值相等。
                     * 
                     */
                    void SetAppType(const std::string& _appType);

                    /**
                     * 判断参数 AppType 是否已赋值
                     * @return AppType 是否已赋值
                     * 
                     */
                    bool AppTypeHasBeenSet() const;

                private:

                    /**
                     * app文件的md5算法值，需要正确传递，在线加固必输。
例如linux环境下执行算法命令md5sum ：
#md5sum test.apk 
d40cc11e4bddd643ecdf29cde729a12b
                     */
                    std::string m_appMd5;
                    bool m_appMd5HasBeenSet;

                    /**
                     * app的大小，非必输。
                     */
                    int64_t m_appSize;
                    bool m_appSizeHasBeenSet;

                    /**
                     * app下载链接，在线加固必输。
                     */
                    std::string m_appUrl;
                    bool m_appUrlHasBeenSet;

                    /**
                     * app名称，非必输
                     */
                    std::string m_appName;
                    bool m_appNameHasBeenSet;

                    /**
                     * app的包名，本次操作的包名。
当Android是按年收费、免费试用加固时，在线加固和输出工具要求该字段必输，且与AndroidPlan.AppPkgName值相等。
                     */
                    std::string m_appPkgName;
                    bool m_appPkgNameHasBeenSet;

                    /**
                     * app的文件名，非必输。
                     */
                    std::string m_appFileName;
                    bool m_appFileNameHasBeenSet;

                    /**
                     * app版本号，非必输。
                     */
                    std::string m_appVersion;
                    bool m_appVersionHasBeenSet;

                    /**
                     * Android app的文件类型，本次加固操作的应用类型 。
Android在线加固和输出工具加固必输，其值需等于“apk”或“aab”，且与AndroidAppInfo.AppType值相等。
                     */
                    std::string m_appType;
                    bool m_appTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MS_V20180408_MODEL_ANDROIDAPPINFO_H_
