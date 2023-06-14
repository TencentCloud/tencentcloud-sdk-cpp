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

#ifndef TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_FENCEBINDDEVICEITEM_H_
#define TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_FENCEBINDDEVICEITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotexplorer
    {
        namespace V20190423
        {
            namespace Model
            {
                /**
                * 围栏绑定的设备信息
                */
                class FenceBindDeviceItem : public AbstractModel
                {
                public:
                    FenceBindDeviceItem();
                    ~FenceBindDeviceItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取设备名称
                     * @return DeviceName 设备名称
                     * 
                     */
                    std::string GetDeviceName() const;

                    /**
                     * 设置设备名称
                     * @param _deviceName 设备名称
                     * 
                     */
                    void SetDeviceName(const std::string& _deviceName);

                    /**
                     * 判断参数 DeviceName 是否已赋值
                     * @return DeviceName 是否已赋值
                     * 
                     */
                    bool DeviceNameHasBeenSet() const;

                    /**
                     * 获取告警条件(In，进围栏报警；Out，出围栏报警；InOrOut，进围栏或者出围栏均报警)
                     * @return AlertCondition 告警条件(In，进围栏报警；Out，出围栏报警；InOrOut，进围栏或者出围栏均报警)
                     * 
                     */
                    std::string GetAlertCondition() const;

                    /**
                     * 设置告警条件(In，进围栏报警；Out，出围栏报警；InOrOut，进围栏或者出围栏均报警)
                     * @param _alertCondition 告警条件(In，进围栏报警；Out，出围栏报警；InOrOut，进围栏或者出围栏均报警)
                     * 
                     */
                    void SetAlertCondition(const std::string& _alertCondition);

                    /**
                     * 判断参数 AlertCondition 是否已赋值
                     * @return AlertCondition 是否已赋值
                     * 
                     */
                    bool AlertConditionHasBeenSet() const;

                    /**
                     * 获取是否使能围栏(true，使能；false，禁用)
                     * @return FenceEnable 是否使能围栏(true，使能；false，禁用)
                     * 
                     */
                    bool GetFenceEnable() const;

                    /**
                     * 设置是否使能围栏(true，使能；false，禁用)
                     * @param _fenceEnable 是否使能围栏(true，使能；false，禁用)
                     * 
                     */
                    void SetFenceEnable(const bool& _fenceEnable);

                    /**
                     * 判断参数 FenceEnable 是否已赋值
                     * @return FenceEnable 是否已赋值
                     * 
                     */
                    bool FenceEnableHasBeenSet() const;

                    /**
                     * 获取告警处理方法
                     * @return Method 告警处理方法
                     * 
                     */
                    std::string GetMethod() const;

                    /**
                     * 设置告警处理方法
                     * @param _method 告警处理方法
                     * 
                     */
                    void SetMethod(const std::string& _method);

                    /**
                     * 判断参数 Method 是否已赋值
                     * @return Method 是否已赋值
                     * 
                     */
                    bool MethodHasBeenSet() const;

                private:

                    /**
                     * 设备名称
                     */
                    std::string m_deviceName;
                    bool m_deviceNameHasBeenSet;

                    /**
                     * 告警条件(In，进围栏报警；Out，出围栏报警；InOrOut，进围栏或者出围栏均报警)
                     */
                    std::string m_alertCondition;
                    bool m_alertConditionHasBeenSet;

                    /**
                     * 是否使能围栏(true，使能；false，禁用)
                     */
                    bool m_fenceEnable;
                    bool m_fenceEnableHasBeenSet;

                    /**
                     * 告警处理方法
                     */
                    std::string m_method;
                    bool m_methodHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_FENCEBINDDEVICEITEM_H_
