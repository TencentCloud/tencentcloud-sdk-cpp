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

#ifndef TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_MODIFYAPPNAMEREQUEST_H_
#define TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_MODIFYAPPNAMEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcaplusdb
    {
        namespace V20190823
        {
            namespace Model
            {
                /**
                * ModifyAppName请求参数结构体
                */
                class ModifyAppNameRequest : public AbstractModel
                {
                public:
                    ModifyAppNameRequest();
                    ~ModifyAppNameRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取需要修改名称的应用实例ID
                     * @return ApplicationId 需要修改名称的应用实例ID
                     */
                    std::string GetApplicationId() const;

                    /**
                     * 设置需要修改名称的应用实例ID
                     * @param ApplicationId 需要修改名称的应用实例ID
                     */
                    void SetApplicationId(const std::string& _applicationId);

                    /**
                     * 判断参数 ApplicationId 是否已赋值
                     * @return ApplicationId 是否已赋值
                     */
                    bool ApplicationIdHasBeenSet() const;

                    /**
                     * 获取需要修改的应用名称，需要URLEncode
                     * @return AppName 需要修改的应用名称，需要URLEncode
                     */
                    std::string GetAppName() const;

                    /**
                     * 设置需要修改的应用名称，需要URLEncode
                     * @param AppName 需要修改的应用名称，需要URLEncode
                     */
                    void SetAppName(const std::string& _appName);

                    /**
                     * 判断参数 AppName 是否已赋值
                     * @return AppName 是否已赋值
                     */
                    bool AppNameHasBeenSet() const;

                private:

                    /**
                     * 需要修改名称的应用实例ID
                     */
                    std::string m_applicationId;
                    bool m_applicationIdHasBeenSet;

                    /**
                     * 需要修改的应用名称，需要URLEncode
                     */
                    std::string m_appName;
                    bool m_appNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_MODIFYAPPNAMEREQUEST_H_
