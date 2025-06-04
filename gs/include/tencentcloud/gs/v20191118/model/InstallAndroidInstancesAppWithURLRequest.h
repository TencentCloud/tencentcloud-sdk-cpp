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

#ifndef TENCENTCLOUD_GS_V20191118_MODEL_INSTALLANDROIDINSTANCESAPPWITHURLREQUEST_H_
#define TENCENTCLOUD_GS_V20191118_MODEL_INSTALLANDROIDINSTANCESAPPWITHURLREQUEST_H_

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
                * InstallAndroidInstancesAppWithURL请求参数结构体
                */
                class InstallAndroidInstancesAppWithURLRequest : public AbstractModel
                {
                public:
                    InstallAndroidInstancesAppWithURLRequest();
                    ~InstallAndroidInstancesAppWithURLRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例ID
                     * @return AndroidInstanceIds 实例ID
                     * 
                     */
                    std::vector<std::string> GetAndroidInstanceIds() const;

                    /**
                     * 设置实例ID
                     * @param _androidInstanceIds 实例ID
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
                     * 获取安卓应用下载 URL
                     * @return AndroidAppURL 安卓应用下载 URL
                     * 
                     */
                    std::string GetAndroidAppURL() const;

                    /**
                     * 设置安卓应用下载 URL
                     * @param _androidAppURL 安卓应用下载 URL
                     * 
                     */
                    void SetAndroidAppURL(const std::string& _androidAppURL);

                    /**
                     * 判断参数 AndroidAppURL 是否已赋值
                     * @return AndroidAppURL 是否已赋值
                     * 
                     */
                    bool AndroidAppURLHasBeenSet() const;

                private:

                    /**
                     * 实例ID
                     */
                    std::vector<std::string> m_androidInstanceIds;
                    bool m_androidInstanceIdsHasBeenSet;

                    /**
                     * 安卓应用下载 URL
                     */
                    std::string m_androidAppURL;
                    bool m_androidAppURLHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GS_V20191118_MODEL_INSTALLANDROIDINSTANCESAPPWITHURLREQUEST_H_
