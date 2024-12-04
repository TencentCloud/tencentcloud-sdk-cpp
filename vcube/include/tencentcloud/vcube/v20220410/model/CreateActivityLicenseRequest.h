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

#ifndef TENCENTCLOUD_VCUBE_V20220410_MODEL_CREATEACTIVITYLICENSEREQUEST_H_
#define TENCENTCLOUD_VCUBE_V20220410_MODEL_CREATEACTIVITYLICENSEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vcube
    {
        namespace V20220410
        {
            namespace Model
            {
                /**
                * CreateActivityLicense请求参数结构体
                */
                class CreateActivityLicenseRequest : public AbstractModel
                {
                public:
                    CreateActivityLicenseRequest();
                    ~CreateActivityLicenseRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取活动Id
                     * @return Activity 活动Id
                     * 
                     */
                    std::string GetActivity() const;

                    /**
                     * 设置活动Id
                     * @param _activity 活动Id
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
                     * 活动Id
                     */
                    std::string m_activity;
                    bool m_activityHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VCUBE_V20220410_MODEL_CREATEACTIVITYLICENSEREQUEST_H_
