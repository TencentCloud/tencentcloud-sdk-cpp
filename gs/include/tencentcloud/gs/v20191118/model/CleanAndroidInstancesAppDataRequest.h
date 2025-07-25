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

#ifndef TENCENTCLOUD_GS_V20191118_MODEL_CLEANANDROIDINSTANCESAPPDATAREQUEST_H_
#define TENCENTCLOUD_GS_V20191118_MODEL_CLEANANDROIDINSTANCESAPPDATAREQUEST_H_

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
                * CleanAndroidInstancesAppData请求参数结构体
                */
                class CleanAndroidInstancesAppDataRequest : public AbstractModel
                {
                public:
                    CleanAndroidInstancesAppDataRequest();
                    ~CleanAndroidInstancesAppDataRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取安卓实例 ID 列表（最大100条数据）
                     * @return AndroidInstanceIds 安卓实例 ID 列表（最大100条数据）
                     * 
                     */
                    std::vector<std::string> GetAndroidInstanceIds() const;

                    /**
                     * 设置安卓实例 ID 列表（最大100条数据）
                     * @param _androidInstanceIds 安卓实例 ID 列表（最大100条数据）
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

                private:

                    /**
                     * 安卓实例 ID 列表（最大100条数据）
                     */
                    std::vector<std::string> m_androidInstanceIds;
                    bool m_androidInstanceIdsHasBeenSet;

                    /**
                     * 应用包名
                     */
                    std::string m_packageName;
                    bool m_packageNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GS_V20191118_MODEL_CLEANANDROIDINSTANCESAPPDATAREQUEST_H_
