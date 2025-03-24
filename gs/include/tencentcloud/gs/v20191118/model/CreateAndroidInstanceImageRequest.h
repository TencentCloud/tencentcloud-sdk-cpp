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

#ifndef TENCENTCLOUD_GS_V20191118_MODEL_CREATEANDROIDINSTANCEIMAGEREQUEST_H_
#define TENCENTCLOUD_GS_V20191118_MODEL_CREATEANDROIDINSTANCEIMAGEREQUEST_H_

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
                * CreateAndroidInstanceImage请求参数结构体
                */
                class CreateAndroidInstanceImageRequest : public AbstractModel
                {
                public:
                    CreateAndroidInstanceImageRequest();
                    ~CreateAndroidInstanceImageRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取安卓实例镜像名称
                     * @return AndroidInstanceImageName 安卓实例镜像名称
                     * 
                     */
                    std::string GetAndroidInstanceImageName() const;

                    /**
                     * 设置安卓实例镜像名称
                     * @param _androidInstanceImageName 安卓实例镜像名称
                     * 
                     */
                    void SetAndroidInstanceImageName(const std::string& _androidInstanceImageName);

                    /**
                     * 判断参数 AndroidInstanceImageName 是否已赋值
                     * @return AndroidInstanceImageName 是否已赋值
                     * 
                     */
                    bool AndroidInstanceImageNameHasBeenSet() const;

                    /**
                     * 获取安卓实例 ID
                     * @return AndroidInstanceId 安卓实例 ID
                     * 
                     */
                    std::string GetAndroidInstanceId() const;

                    /**
                     * 设置安卓实例 ID
                     * @param _androidInstanceId 安卓实例 ID
                     * 
                     */
                    void SetAndroidInstanceId(const std::string& _androidInstanceId);

                    /**
                     * 判断参数 AndroidInstanceId 是否已赋值
                     * @return AndroidInstanceId 是否已赋值
                     * 
                     */
                    bool AndroidInstanceIdHasBeenSet() const;

                private:

                    /**
                     * 安卓实例镜像名称
                     */
                    std::string m_androidInstanceImageName;
                    bool m_androidInstanceImageNameHasBeenSet;

                    /**
                     * 安卓实例 ID
                     */
                    std::string m_androidInstanceId;
                    bool m_androidInstanceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GS_V20191118_MODEL_CREATEANDROIDINSTANCEIMAGEREQUEST_H_
