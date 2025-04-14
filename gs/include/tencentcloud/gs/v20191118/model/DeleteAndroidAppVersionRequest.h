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

#ifndef TENCENTCLOUD_GS_V20191118_MODEL_DELETEANDROIDAPPVERSIONREQUEST_H_
#define TENCENTCLOUD_GS_V20191118_MODEL_DELETEANDROIDAPPVERSIONREQUEST_H_

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
                * DeleteAndroidAppVersion请求参数结构体
                */
                class DeleteAndroidAppVersionRequest : public AbstractModel
                {
                public:
                    DeleteAndroidAppVersionRequest();
                    ~DeleteAndroidAppVersionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取安卓应用 Id
                     * @return AndroidAppId 安卓应用 Id
                     * 
                     */
                    std::string GetAndroidAppId() const;

                    /**
                     * 设置安卓应用 Id
                     * @param _androidAppId 安卓应用 Id
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
                     * 获取安卓应用版本
                     * @return AndroidAppVersion 安卓应用版本
                     * 
                     */
                    std::string GetAndroidAppVersion() const;

                    /**
                     * 设置安卓应用版本
                     * @param _androidAppVersion 安卓应用版本
                     * 
                     */
                    void SetAndroidAppVersion(const std::string& _androidAppVersion);

                    /**
                     * 判断参数 AndroidAppVersion 是否已赋值
                     * @return AndroidAppVersion 是否已赋值
                     * 
                     */
                    bool AndroidAppVersionHasBeenSet() const;

                private:

                    /**
                     * 安卓应用 Id
                     */
                    std::string m_androidAppId;
                    bool m_androidAppIdHasBeenSet;

                    /**
                     * 安卓应用版本
                     */
                    std::string m_androidAppVersion;
                    bool m_androidAppVersionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GS_V20191118_MODEL_DELETEANDROIDAPPVERSIONREQUEST_H_
