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

#ifndef TENCENTCLOUD_GS_V20191118_MODEL_STARTANDROIDINSTANCESAPPREQUEST_H_
#define TENCENTCLOUD_GS_V20191118_MODEL_STARTANDROIDINSTANCESAPPREQUEST_H_

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
                * StartAndroidInstancesApp请求参数结构体
                */
                class StartAndroidInstancesAppRequest : public AbstractModel
                {
                public:
                    StartAndroidInstancesAppRequest();
                    ~StartAndroidInstancesAppRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例 ID 列表
                     * @return AndroidInstanceIds 实例 ID 列表
                     * 
                     */
                    std::vector<std::string> GetAndroidInstanceIds() const;

                    /**
                     * 设置实例 ID 列表
                     * @param _androidInstanceIds 实例 ID 列表
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

                    /**
                     * 获取启动页。建议指定启动页来启动应用，避免启动失败。如果启动页为空，系统尝试根据 PackageName 启动，但不保证成功。
                     * @return Activity 启动页。建议指定启动页来启动应用，避免启动失败。如果启动页为空，系统尝试根据 PackageName 启动，但不保证成功。
                     * 
                     */
                    std::string GetActivity() const;

                    /**
                     * 设置启动页。建议指定启动页来启动应用，避免启动失败。如果启动页为空，系统尝试根据 PackageName 启动，但不保证成功。
                     * @param _activity 启动页。建议指定启动页来启动应用，避免启动失败。如果启动页为空，系统尝试根据 PackageName 启动，但不保证成功。
                     * 
                     */
                    void SetActivity(const std::string& _activity);

                    /**
                     * 判断参数 Activity 是否已赋值
                     * @return Activity 是否已赋值
                     * 
                     */
                    bool ActivityHasBeenSet() const;

                private:

                    /**
                     * 实例 ID 列表
                     */
                    std::vector<std::string> m_androidInstanceIds;
                    bool m_androidInstanceIdsHasBeenSet;

                    /**
                     * 应用包名
                     */
                    std::string m_packageName;
                    bool m_packageNameHasBeenSet;

                    /**
                     * 启动页。建议指定启动页来启动应用，避免启动失败。如果启动页为空，系统尝试根据 PackageName 启动，但不保证成功。
                     */
                    std::string m_activity;
                    bool m_activityHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GS_V20191118_MODEL_STARTANDROIDINSTANCESAPPREQUEST_H_
