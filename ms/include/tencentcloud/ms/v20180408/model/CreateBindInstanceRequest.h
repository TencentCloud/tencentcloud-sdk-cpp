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

#ifndef TENCENTCLOUD_MS_V20180408_MODEL_CREATEBINDINSTANCEREQUEST_H_
#define TENCENTCLOUD_MS_V20180408_MODEL_CREATEBINDINSTANCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * CreateBindInstance请求参数结构体
                */
                class CreateBindInstanceRequest : public AbstractModel
                {
                public:
                    CreateBindInstanceRequest();
                    ~CreateBindInstanceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取资源id，全局唯一
                     * @return ResourceId 资源id，全局唯一
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置资源id，全局唯一
                     * @param _resourceId 资源id，全局唯一
                     * 
                     */
                    void SetResourceId(const std::string& _resourceId);

                    /**
                     * 判断参数 ResourceId 是否已赋值
                     * @return ResourceId 是否已赋值
                     * 
                     */
                    bool ResourceIdHasBeenSet() const;

                    /**
                     * 获取app的icon的url
                     * @return AppIconUrl app的icon的url
                     * 
                     */
                    std::string GetAppIconUrl() const;

                    /**
                     * 设置app的icon的url
                     * @param _appIconUrl app的icon的url
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

                    /**
                     * 获取app的包名
                     * @return AppPkgName app的包名
                     * 
                     */
                    std::string GetAppPkgName() const;

                    /**
                     * 设置app的包名
                     * @param _appPkgName app的包名
                     * 
                     */
                    void SetAppPkgName(const std::string& _appPkgName);

                    /**
                     * 判断参数 AppPkgName 是否已赋值
                     * @return AppPkgName 是否已赋值
                     * 
                     */
                    bool AppPkgNameHasBeenSet() const;

                private:

                    /**
                     * 资源id，全局唯一
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * app的icon的url
                     */
                    std::string m_appIconUrl;
                    bool m_appIconUrlHasBeenSet;

                    /**
                     * app的名称
                     */
                    std::string m_appName;
                    bool m_appNameHasBeenSet;

                    /**
                     * app的包名
                     */
                    std::string m_appPkgName;
                    bool m_appPkgNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MS_V20180408_MODEL_CREATEBINDINSTANCEREQUEST_H_
