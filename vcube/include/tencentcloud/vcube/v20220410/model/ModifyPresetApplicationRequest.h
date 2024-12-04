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

#ifndef TENCENTCLOUD_VCUBE_V20220410_MODEL_MODIFYPRESETAPPLICATIONREQUEST_H_
#define TENCENTCLOUD_VCUBE_V20220410_MODEL_MODIFYPRESETAPPLICATIONREQUEST_H_

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
                * ModifyPresetApplication请求参数结构体
                */
                class ModifyPresetApplicationRequest : public AbstractModel
                {
                public:
                    ModifyPresetApplicationRequest();
                    ~ModifyPresetApplicationRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取应用Id
                     * @return ApplicationId 应用Id
                     * 
                     */
                    uint64_t GetApplicationId() const;

                    /**
                     * 设置应用Id
                     * @param _applicationId 应用Id
                     * 
                     */
                    void SetApplicationId(const uint64_t& _applicationId);

                    /**
                     * 判断参数 ApplicationId 是否已赋值
                     * @return ApplicationId 是否已赋值
                     * 
                     */
                    bool ApplicationIdHasBeenSet() const;

                    /**
                     * 获取您的app名称
                     * @return AppName 您的app名称
                     * 
                     */
                    std::string GetAppName() const;

                    /**
                     * 设置您的app名称
                     * @param _appName 您的app名称
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
                     * 获取ios包名
                     * @return BundleId ios包名
                     * 
                     */
                    std::string GetBundleId() const;

                    /**
                     * 设置ios包名
                     * @param _bundleId ios包名
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
                     * 获取安卓包名
                     * @return PackageName 安卓包名
                     * 
                     */
                    std::string GetPackageName() const;

                    /**
                     * 设置安卓包名
                     * @param _packageName 安卓包名
                     * 
                     */
                    void SetPackageName(const std::string& _packageName);

                    /**
                     * 判断参数 PackageName 是否已赋值
                     * @return PackageName 是否已赋值
                     * 
                     */
                    bool PackageNameHasBeenSet() const;

                private:

                    /**
                     * 应用Id
                     */
                    uint64_t m_applicationId;
                    bool m_applicationIdHasBeenSet;

                    /**
                     * 您的app名称
                     */
                    std::string m_appName;
                    bool m_appNameHasBeenSet;

                    /**
                     * ios包名
                     */
                    std::string m_bundleId;
                    bool m_bundleIdHasBeenSet;

                    /**
                     * 安卓包名
                     */
                    std::string m_packageName;
                    bool m_packageNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VCUBE_V20220410_MODEL_MODIFYPRESETAPPLICATIONREQUEST_H_
