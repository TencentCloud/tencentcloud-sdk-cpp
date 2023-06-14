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

#ifndef TENCENTCLOUD_AME_V20190916_MODEL_APPLICATIONLICENSEINPUT_H_
#define TENCENTCLOUD_AME_V20190916_MODEL_APPLICATIONLICENSEINPUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ame
    {
        namespace V20190916
        {
            namespace Model
            {
                /**
                * 用户license基础信息
                */
                class ApplicationLicenseInput : public AbstractModel
                {
                public:
                    ApplicationLicenseInput();
                    ~ApplicationLicenseInput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取应用名称，注：后面三个字段AndroidPackageName、IOSBundleId、PcIdentifier，三者选填一个
                     * @return AppName 应用名称，注：后面三个字段AndroidPackageName、IOSBundleId、PcIdentifier，三者选填一个
                     * 
                     */
                    std::string GetAppName() const;

                    /**
                     * 设置应用名称，注：后面三个字段AndroidPackageName、IOSBundleId、PcIdentifier，三者选填一个
                     * @param _appName 应用名称，注：后面三个字段AndroidPackageName、IOSBundleId、PcIdentifier，三者选填一个
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
                     * 获取app的安卓包名
                     * @return AndroidPackageName app的安卓包名
                     * 
                     */
                    std::string GetAndroidPackageName() const;

                    /**
                     * 设置app的安卓包名
                     * @param _androidPackageName app的安卓包名
                     * 
                     */
                    void SetAndroidPackageName(const std::string& _androidPackageName);

                    /**
                     * 判断参数 AndroidPackageName 是否已赋值
                     * @return AndroidPackageName 是否已赋值
                     * 
                     */
                    bool AndroidPackageNameHasBeenSet() const;

                    /**
                     * 获取app的IOS的BundleId名
                     * @return IOSBundleId app的IOS的BundleId名
                     * 
                     */
                    std::string GetIOSBundleId() const;

                    /**
                     * 设置app的IOS的BundleId名
                     * @param _iOSBundleId app的IOS的BundleId名
                     * 
                     */
                    void SetIOSBundleId(const std::string& _iOSBundleId);

                    /**
                     * 判断参数 IOSBundleId 是否已赋值
                     * @return IOSBundleId 是否已赋值
                     * 
                     */
                    bool IOSBundleIdHasBeenSet() const;

                    /**
                     * 获取PC标识名
                     * @return PcIdentifier PC标识名
                     * 
                     */
                    std::string GetPcIdentifier() const;

                    /**
                     * 设置PC标识名
                     * @param _pcIdentifier PC标识名
                     * 
                     */
                    void SetPcIdentifier(const std::string& _pcIdentifier);

                    /**
                     * 判断参数 PcIdentifier 是否已赋值
                     * @return PcIdentifier 是否已赋值
                     * 
                     */
                    bool PcIdentifierHasBeenSet() const;

                private:

                    /**
                     * 应用名称，注：后面三个字段AndroidPackageName、IOSBundleId、PcIdentifier，三者选填一个
                     */
                    std::string m_appName;
                    bool m_appNameHasBeenSet;

                    /**
                     * app的安卓包名
                     */
                    std::string m_androidPackageName;
                    bool m_androidPackageNameHasBeenSet;

                    /**
                     * app的IOS的BundleId名
                     */
                    std::string m_iOSBundleId;
                    bool m_iOSBundleIdHasBeenSet;

                    /**
                     * PC标识名
                     */
                    std::string m_pcIdentifier;
                    bool m_pcIdentifierHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AME_V20190916_MODEL_APPLICATIONLICENSEINPUT_H_
