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

#ifndef TENCENTCLOUD_VCUBE_V20220410_MODEL_DESCRIBEVCUBEAPPLICATIONANDXMAGICLISTREQUEST_H_
#define TENCENTCLOUD_VCUBE_V20220410_MODEL_DESCRIBEVCUBEAPPLICATIONANDXMAGICLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vcube
    {
        namespace V20220410
        {
            namespace Model
            {
                /**
                * DescribeVcubeApplicationAndXMagicList请求参数结构体
                */
                class DescribeVcubeApplicationAndXMagicListRequest : public AbstractModel
                {
                public:
                    DescribeVcubeApplicationAndXMagicListRequest();
                    ~DescribeVcubeApplicationAndXMagicListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取查询对应业务方的license，直播:live 点播：vod
                     * @return BizType 查询对应业务方的license，直播:live 点播：vod
                     * 
                     */
                    std::string GetBizType() const;

                    /**
                     * 设置查询对应业务方的license，直播:live 点播：vod
                     * @param _bizType 查询对应业务方的license，直播:live 点播：vod
                     * 
                     */
                    void SetBizType(const std::string& _bizType);

                    /**
                     * 判断参数 BizType 是否已赋值
                     * @return BizType 是否已赋值
                     * 
                     */
                    bool BizTypeHasBeenSet() const;

                    /**
                     * 获取应用类型测试：test，正式：formal
                     * @return AppType 应用类型测试：test，正式：formal
                     * 
                     */
                    std::string GetAppType() const;

                    /**
                     * 设置应用类型测试：test，正式：formal
                     * @param _appType 应用类型测试：test，正式：formal
                     * 
                     */
                    void SetAppType(const std::string& _appType);

                    /**
                     * 判断参数 AppType 是否已赋值
                     * @return AppType 是否已赋值
                     * 
                     */
                    bool AppTypeHasBeenSet() const;

                    /**
                     * 获取应用名称，模糊查询
                     * @return AppName 应用名称，模糊查询
                     * 
                     */
                    std::string GetAppName() const;

                    /**
                     * 设置应用名称，模糊查询
                     * @param _appName 应用名称，模糊查询
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
                     * 获取Ios包名，模糊查询
                     * @return BundleId Ios包名，模糊查询
                     * 
                     */
                    std::string GetBundleId() const;

                    /**
                     * 设置Ios包名，模糊查询
                     * @param _bundleId Ios包名，模糊查询
                     * 
                     */
                    void SetBundleId(const std::string& _bundleId);

                    /**
                     * 判断参数 BundleId 是否已赋值
                     * @return BundleId 是否已赋值
                     * 
                     */
                    bool BundleIdHasBeenSet() const;

                    /**
                     * 获取Android 包名，模糊查询
                     * @return PackageName Android 包名，模糊查询
                     * 
                     */
                    std::string GetPackageName() const;

                    /**
                     * 设置Android 包名，模糊查询
                     * @param _packageName Android 包名，模糊查询
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
                     * 获取平台信息，pc 或者 mobile
                     * @return Platform 平台信息，pc 或者 mobile
                     * 
                     */
                    std::string GetPlatform() const;

                    /**
                     * 设置平台信息，pc 或者 mobile
                     * @param _platform 平台信息，pc 或者 mobile
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
                     * 获取Mac 进程名
                     * @return MacBundleId Mac 进程名
                     * 
                     */
                    std::string GetMacBundleId() const;

                    /**
                     * 设置Mac 进程名
                     * @param _macBundleId Mac 进程名
                     * 
                     */
                    void SetMacBundleId(const std::string& _macBundleId);

                    /**
                     * 判断参数 MacBundleId 是否已赋值
                     * @return MacBundleId 是否已赋值
                     * 
                     */
                    bool MacBundleIdHasBeenSet() const;

                    /**
                     * 获取Windows 进程名
                     * @return WinProcessName Windows 进程名
                     * 
                     */
                    std::string GetWinProcessName() const;

                    /**
                     * 设置Windows 进程名
                     * @param _winProcessName Windows 进程名
                     * 
                     */
                    void SetWinProcessName(const std::string& _winProcessName);

                    /**
                     * 判断参数 WinProcessName 是否已赋值
                     * @return WinProcessName 是否已赋值
                     * 
                     */
                    bool WinProcessNameHasBeenSet() const;

                private:

                    /**
                     * 查询对应业务方的license，直播:live 点播：vod
                     */
                    std::string m_bizType;
                    bool m_bizTypeHasBeenSet;

                    /**
                     * 应用类型测试：test，正式：formal
                     */
                    std::string m_appType;
                    bool m_appTypeHasBeenSet;

                    /**
                     * 应用名称，模糊查询
                     */
                    std::string m_appName;
                    bool m_appNameHasBeenSet;

                    /**
                     * Ios包名，模糊查询
                     */
                    std::string m_bundleId;
                    bool m_bundleIdHasBeenSet;

                    /**
                     * Android 包名，模糊查询
                     */
                    std::string m_packageName;
                    bool m_packageNameHasBeenSet;

                    /**
                     * 平台信息，pc 或者 mobile
                     */
                    std::string m_platform;
                    bool m_platformHasBeenSet;

                    /**
                     * Mac 进程名
                     */
                    std::string m_macBundleId;
                    bool m_macBundleIdHasBeenSet;

                    /**
                     * Windows 进程名
                     */
                    std::string m_winProcessName;
                    bool m_winProcessNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VCUBE_V20220410_MODEL_DESCRIBEVCUBEAPPLICATIONANDXMAGICLISTREQUEST_H_
