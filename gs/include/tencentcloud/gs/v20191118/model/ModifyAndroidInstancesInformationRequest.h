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

#ifndef TENCENTCLOUD_GS_V20191118_MODEL_MODIFYANDROIDINSTANCESINFORMATIONREQUEST_H_
#define TENCENTCLOUD_GS_V20191118_MODEL_MODIFYANDROIDINSTANCESINFORMATIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/gs/v20191118/model/AndroidInstanceInformation.h>


namespace TencentCloud
{
    namespace Gs
    {
        namespace V20191118
        {
            namespace Model
            {
                /**
                * ModifyAndroidInstancesInformation请求参数结构体
                */
                class ModifyAndroidInstancesInformationRequest : public AbstractModel
                {
                public:
                    ModifyAndroidInstancesInformationRequest();
                    ~ModifyAndroidInstancesInformationRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取安卓实例信息数据
                     * @return AndroidInstanceInformations 安卓实例信息数据
                     * 
                     */
                    std::vector<AndroidInstanceInformation> GetAndroidInstanceInformations() const;

                    /**
                     * 设置安卓实例信息数据
                     * @param _androidInstanceInformations 安卓实例信息数据
                     * 
                     */
                    void SetAndroidInstanceInformations(const std::vector<AndroidInstanceInformation>& _androidInstanceInformations);

                    /**
                     * 判断参数 AndroidInstanceInformations 是否已赋值
                     * @return AndroidInstanceInformations 是否已赋值
                     * 
                     */
                    bool AndroidInstanceInformationsHasBeenSet() const;

                private:

                    /**
                     * 安卓实例信息数据
                     */
                    std::vector<AndroidInstanceInformation> m_androidInstanceInformations;
                    bool m_androidInstanceInformationsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GS_V20191118_MODEL_MODIFYANDROIDINSTANCESINFORMATIONREQUEST_H_
