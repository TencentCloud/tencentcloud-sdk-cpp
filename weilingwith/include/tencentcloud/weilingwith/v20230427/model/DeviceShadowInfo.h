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

#ifndef TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_DEVICESHADOWINFO_H_
#define TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_DEVICESHADOWINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Weilingwith
    {
        namespace V20230427
        {
            namespace Model
            {
                /**
                * 设备影子信息
                */
                class DeviceShadowInfo : public AbstractModel
                {
                public:
                    DeviceShadowInfo();
                    ~DeviceShadowInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取设备ID
                     * @return WID 设备ID
                     * 
                     */
                    std::string GetWID() const;

                    /**
                     * 设置设备ID
                     * @param _wID 设备ID
                     * 
                     */
                    void SetWID(const std::string& _wID);

                    /**
                     * 判断参数 WID 是否已赋值
                     * @return WID 是否已赋值
                     * 
                     */
                    bool WIDHasBeenSet() const;

                    /**
                     * 获取设备影子数据,返回有效数据为"x-json:"后字段
                     * @return DeviceShadow 设备影子数据,返回有效数据为"x-json:"后字段
                     * 
                     */
                    std::string GetDeviceShadow() const;

                    /**
                     * 设置设备影子数据,返回有效数据为"x-json:"后字段
                     * @param _deviceShadow 设备影子数据,返回有效数据为"x-json:"后字段
                     * 
                     */
                    void SetDeviceShadow(const std::string& _deviceShadow);

                    /**
                     * 判断参数 DeviceShadow 是否已赋值
                     * @return DeviceShadow 是否已赋值
                     * 
                     */
                    bool DeviceShadowHasBeenSet() const;

                    /**
                     * 获取设备影子更新时间
                     * @return DeviceShadowUpdateTime 设备影子更新时间
                     * 
                     */
                    std::string GetDeviceShadowUpdateTime() const;

                    /**
                     * 设置设备影子更新时间
                     * @param _deviceShadowUpdateTime 设备影子更新时间
                     * 
                     */
                    void SetDeviceShadowUpdateTime(const std::string& _deviceShadowUpdateTime);

                    /**
                     * 判断参数 DeviceShadowUpdateTime 是否已赋值
                     * @return DeviceShadowUpdateTime 是否已赋值
                     * 
                     */
                    bool DeviceShadowUpdateTimeHasBeenSet() const;

                private:

                    /**
                     * 设备ID
                     */
                    std::string m_wID;
                    bool m_wIDHasBeenSet;

                    /**
                     * 设备影子数据,返回有效数据为"x-json:"后字段
                     */
                    std::string m_deviceShadow;
                    bool m_deviceShadowHasBeenSet;

                    /**
                     * 设备影子更新时间
                     */
                    std::string m_deviceShadowUpdateTime;
                    bool m_deviceShadowUpdateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_DEVICESHADOWINFO_H_
