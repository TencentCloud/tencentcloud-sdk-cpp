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

#ifndef TENCENTCLOUD_GS_V20191118_MODEL_ANDROIDINSTANCEAPPINFO_H_
#define TENCENTCLOUD_GS_V20191118_MODEL_ANDROIDINSTANCEAPPINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Gs
    {
        namespace V20191118
        {
            namespace Model
            {
                /**
                * 安卓实例应用信息
                */
                class AndroidInstanceAppInfo : public AbstractModel
                {
                public:
                    AndroidInstanceAppInfo();
                    ~AndroidInstanceAppInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取应用id
                     * @return AndroidAppId 应用id
                     * 
                     */
                    std::string GetAndroidAppId() const;

                    /**
                     * 设置应用id
                     * @param _androidAppId 应用id
                     * 
                     */
                    void SetAndroidAppId(const std::string& _androidAppId);

                    /**
                     * 判断参数 AndroidAppId 是否已赋值
                     * @return AndroidAppId 是否已赋值
                     * 
                     */
                    bool AndroidAppIdHasBeenSet() const;

                    /**
                     * 获取应用名称
                     * @return Name 应用名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置应用名称
                     * @param _name 应用名称
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
                     * 获取应用版本
                     * @return AndroidAppVersion 应用版本
                     * 
                     */
                    std::string GetAndroidAppVersion() const;

                    /**
                     * 设置应用版本
                     * @param _androidAppVersion 应用版本
                     * 
                     */
                    void SetAndroidAppVersion(const std::string& _androidAppVersion);

                    /**
                     * 判断参数 AndroidAppVersion 是否已赋值
                     * @return AndroidAppVersion 是否已赋值
                     * 
                     */
                    bool AndroidAppVersionHasBeenSet() const;

                    /**
                     * 获取应用包名
                     * @return PackageName 应用包名
                     * 
                     */
                    std::string GetPackageName() const;

                    /**
                     * 设置应用包名
                     * @param _packageName 应用包名
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
                     * 获取应用包版本
                     * @return PackageVersion 应用包版本
                     * 
                     */
                    std::string GetPackageVersion() const;

                    /**
                     * 设置应用包版本
                     * @param _packageVersion 应用包版本
                     * 
                     */
                    void SetPackageVersion(const std::string& _packageVersion);

                    /**
                     * 判断参数 PackageVersion 是否已赋值
                     * @return PackageVersion 是否已赋值
                     * 
                     */
                    bool PackageVersionHasBeenSet() const;

                    /**
                     * 获取应用包标签
                     * @return PackageLabel 应用包标签
                     * 
                     */
                    std::string GetPackageLabel() const;

                    /**
                     * 设置应用包标签
                     * @param _packageLabel 应用包标签
                     * 
                     */
                    void SetPackageLabel(const std::string& _packageLabel);

                    /**
                     * 判断参数 PackageLabel 是否已赋值
                     * @return PackageLabel 是否已赋值
                     * 
                     */
                    bool PackageLabelHasBeenSet() const;

                private:

                    /**
                     * 应用id
                     */
                    std::string m_androidAppId;
                    bool m_androidAppIdHasBeenSet;

                    /**
                     * 应用名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 应用版本
                     */
                    std::string m_androidAppVersion;
                    bool m_androidAppVersionHasBeenSet;

                    /**
                     * 应用包名
                     */
                    std::string m_packageName;
                    bool m_packageNameHasBeenSet;

                    /**
                     * 应用包版本
                     */
                    std::string m_packageVersion;
                    bool m_packageVersionHasBeenSet;

                    /**
                     * 应用包标签
                     */
                    std::string m_packageLabel;
                    bool m_packageLabelHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GS_V20191118_MODEL_ANDROIDINSTANCEAPPINFO_H_
