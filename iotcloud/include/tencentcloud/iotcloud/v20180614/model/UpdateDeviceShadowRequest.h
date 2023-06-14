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

#ifndef TENCENTCLOUD_IOTCLOUD_V20180614_MODEL_UPDATEDEVICESHADOWREQUEST_H_
#define TENCENTCLOUD_IOTCLOUD_V20180614_MODEL_UPDATEDEVICESHADOWREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotcloud
    {
        namespace V20180614
        {
            namespace Model
            {
                /**
                * UpdateDeviceShadow请求参数结构体
                */
                class UpdateDeviceShadowRequest : public AbstractModel
                {
                public:
                    UpdateDeviceShadowRequest();
                    ~UpdateDeviceShadowRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取产品ID
                     * @return ProductId 产品ID
                     * 
                     */
                    std::string GetProductId() const;

                    /**
                     * 设置产品ID
                     * @param _productId 产品ID
                     * 
                     */
                    void SetProductId(const std::string& _productId);

                    /**
                     * 判断参数 ProductId 是否已赋值
                     * @return ProductId 是否已赋值
                     * 
                     */
                    bool ProductIdHasBeenSet() const;

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
                     * 获取虚拟设备的状态，JSON字符串格式，由desired结构组成
                     * @return State 虚拟设备的状态，JSON字符串格式，由desired结构组成
                     * 
                     */
                    std::string GetState() const;

                    /**
                     * 设置虚拟设备的状态，JSON字符串格式，由desired结构组成
                     * @param _state 虚拟设备的状态，JSON字符串格式，由desired结构组成
                     * 
                     */
                    void SetState(const std::string& _state);

                    /**
                     * 判断参数 State 是否已赋值
                     * @return State 是否已赋值
                     * 
                     */
                    bool StateHasBeenSet() const;

                    /**
                     * 获取当前版本号，需要和后台的version保持一致，才能更新成功
                     * @return ShadowVersion 当前版本号，需要和后台的version保持一致，才能更新成功
                     * 
                     */
                    uint64_t GetShadowVersion() const;

                    /**
                     * 设置当前版本号，需要和后台的version保持一致，才能更新成功
                     * @param _shadowVersion 当前版本号，需要和后台的version保持一致，才能更新成功
                     * 
                     */
                    void SetShadowVersion(const uint64_t& _shadowVersion);

                    /**
                     * 判断参数 ShadowVersion 是否已赋值
                     * @return ShadowVersion 是否已赋值
                     * 
                     */
                    bool ShadowVersionHasBeenSet() const;

                    /**
                     * 获取下发delta消息的topic前缀，可选类型: "$shadow","$template"。不填写默认"$shadow"。
                     * @return Prefix 下发delta消息的topic前缀，可选类型: "$shadow","$template"。不填写默认"$shadow"。
                     * 
                     */
                    std::string GetPrefix() const;

                    /**
                     * 设置下发delta消息的topic前缀，可选类型: "$shadow","$template"。不填写默认"$shadow"。
                     * @param _prefix 下发delta消息的topic前缀，可选类型: "$shadow","$template"。不填写默认"$shadow"。
                     * 
                     */
                    void SetPrefix(const std::string& _prefix);

                    /**
                     * 判断参数 Prefix 是否已赋值
                     * @return Prefix 是否已赋值
                     * 
                     */
                    bool PrefixHasBeenSet() const;

                private:

                    /**
                     * 产品ID
                     */
                    std::string m_productId;
                    bool m_productIdHasBeenSet;

                    /**
                     * 设备名称
                     */
                    std::string m_deviceName;
                    bool m_deviceNameHasBeenSet;

                    /**
                     * 虚拟设备的状态，JSON字符串格式，由desired结构组成
                     */
                    std::string m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * 当前版本号，需要和后台的version保持一致，才能更新成功
                     */
                    uint64_t m_shadowVersion;
                    bool m_shadowVersionHasBeenSet;

                    /**
                     * 下发delta消息的topic前缀，可选类型: "$shadow","$template"。不填写默认"$shadow"。
                     */
                    std::string m_prefix;
                    bool m_prefixHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTCLOUD_V20180614_MODEL_UPDATEDEVICESHADOWREQUEST_H_
