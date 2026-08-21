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

#ifndef TENCENTCLOUD_GS_V20191118_MODEL_UNINSTALLANDROIDINSTANCESAPPREQUEST_H_
#define TENCENTCLOUD_GS_V20191118_MODEL_UNINSTALLANDROIDINSTANCESAPPREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * UninstallAndroidInstancesApp请求参数结构体
                */
                class UninstallAndroidInstancesAppRequest : public AbstractModel
                {
                public:
                    UninstallAndroidInstancesAppRequest();
                    ~UninstallAndroidInstancesAppRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>实例ID</p>
                     * @return AndroidInstanceIds <p>实例ID</p>
                     * 
                     */
                    std::vector<std::string> GetAndroidInstanceIds() const;

                    /**
                     * 设置<p>实例ID</p>
                     * @param _androidInstanceIds <p>实例ID</p>
                     * 
                     */
                    void SetAndroidInstanceIds(const std::vector<std::string>& _androidInstanceIds);

                    /**
                     * 判断参数 AndroidInstanceIds 是否已赋值
                     * @return AndroidInstanceIds 是否已赋值
                     * 
                     */
                    bool AndroidInstanceIdsHasBeenSet() const;

                    /**
                     * 获取<p>应用ID</p>
                     * @return AndroidAppId <p>应用ID</p>
                     * 
                     */
                    std::string GetAndroidAppId() const;

                    /**
                     * 设置<p>应用ID</p>
                     * @param _androidAppId <p>应用ID</p>
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
                     * 获取<p>包名</p>
                     * @return PackageName <p>包名</p>
                     * 
                     */
                    std::string GetPackageName() const;

                    /**
                     * 设置<p>包名</p>
                     * @param _packageName <p>包名</p>
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
                     * <p>实例ID</p>
                     */
                    std::vector<std::string> m_androidInstanceIds;
                    bool m_androidInstanceIdsHasBeenSet;

                    /**
                     * <p>应用ID</p>
                     */
                    std::string m_androidAppId;
                    bool m_androidAppIdHasBeenSet;

                    /**
                     * <p>包名</p>
                     */
                    std::string m_packageName;
                    bool m_packageNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GS_V20191118_MODEL_UNINSTALLANDROIDINSTANCESAPPREQUEST_H_
