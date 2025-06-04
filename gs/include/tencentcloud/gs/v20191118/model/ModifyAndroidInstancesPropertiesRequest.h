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

#ifndef TENCENTCLOUD_GS_V20191118_MODEL_MODIFYANDROIDINSTANCESPROPERTIESREQUEST_H_
#define TENCENTCLOUD_GS_V20191118_MODEL_MODIFYANDROIDINSTANCESPROPERTIESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/gs/v20191118/model/AndroidInstanceDevice.h>
#include <tencentcloud/gs/v20191118/model/AndroidInstanceProperty.h>


namespace TencentCloud
{
    namespace Gs
    {
        namespace V20191118
        {
            namespace Model
            {
                /**
                * ModifyAndroidInstancesProperties请求参数结构体
                */
                class ModifyAndroidInstancesPropertiesRequest : public AbstractModel
                {
                public:
                    ModifyAndroidInstancesPropertiesRequest();
                    ~ModifyAndroidInstancesPropertiesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取安卓实例 ID 列表
                     * @return AndroidInstanceIds 安卓实例 ID 列表
                     * 
                     */
                    std::vector<std::string> GetAndroidInstanceIds() const;

                    /**
                     * 设置安卓实例 ID 列表
                     * @param _androidInstanceIds 安卓实例 ID 列表
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
                     * 获取安卓实例设备
                     * @return AndroidInstanceDevice 安卓实例设备
                     * 
                     */
                    AndroidInstanceDevice GetAndroidInstanceDevice() const;

                    /**
                     * 设置安卓实例设备
                     * @param _androidInstanceDevice 安卓实例设备
                     * 
                     */
                    void SetAndroidInstanceDevice(const AndroidInstanceDevice& _androidInstanceDevice);

                    /**
                     * 判断参数 AndroidInstanceDevice 是否已赋值
                     * @return AndroidInstanceDevice 是否已赋值
                     * 
                     */
                    bool AndroidInstanceDeviceHasBeenSet() const;

                    /**
                     * 获取安卓实例其它属性列表
                     * @return AndroidInstanceProperties 安卓实例其它属性列表
                     * 
                     */
                    std::vector<AndroidInstanceProperty> GetAndroidInstanceProperties() const;

                    /**
                     * 设置安卓实例其它属性列表
                     * @param _androidInstanceProperties 安卓实例其它属性列表
                     * 
                     */
                    void SetAndroidInstanceProperties(const std::vector<AndroidInstanceProperty>& _androidInstanceProperties);

                    /**
                     * 判断参数 AndroidInstanceProperties 是否已赋值
                     * @return AndroidInstanceProperties 是否已赋值
                     * 
                     */
                    bool AndroidInstancePropertiesHasBeenSet() const;

                private:

                    /**
                     * 安卓实例 ID 列表
                     */
                    std::vector<std::string> m_androidInstanceIds;
                    bool m_androidInstanceIdsHasBeenSet;

                    /**
                     * 安卓实例设备
                     */
                    AndroidInstanceDevice m_androidInstanceDevice;
                    bool m_androidInstanceDeviceHasBeenSet;

                    /**
                     * 安卓实例其它属性列表
                     */
                    std::vector<AndroidInstanceProperty> m_androidInstanceProperties;
                    bool m_androidInstancePropertiesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GS_V20191118_MODEL_MODIFYANDROIDINSTANCESPROPERTIESREQUEST_H_
