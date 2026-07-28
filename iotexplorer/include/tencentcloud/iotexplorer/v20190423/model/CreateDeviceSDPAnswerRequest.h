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

#ifndef TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_CREATEDEVICESDPANSWERREQUEST_H_
#define TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_CREATEDEVICESDPANSWERREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * CreateDeviceSDPAnswer请求参数结构体
                */
                class CreateDeviceSDPAnswerRequest : public AbstractModel
                {
                public:
                    CreateDeviceSDPAnswerRequest();
                    ~CreateDeviceSDPAnswerRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>产品ID</p>
                     * @return ProductId <p>产品ID</p>
                     * 
                     */
                    std::string GetProductId() const;

                    /**
                     * 设置<p>产品ID</p>
                     * @param _productId <p>产品ID</p>
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
                     * 获取<p>设备名称</p>
                     * @return DeviceName <p>设备名称</p>
                     * 
                     */
                    std::string GetDeviceName() const;

                    /**
                     * 设置<p>设备名称</p>
                     * @param _deviceName <p>设备名称</p>
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
                     * 获取<p>SDP提议</p>
                     * @return SDPOffer <p>SDP提议</p>
                     * 
                     */
                    std::string GetSDPOffer() const;

                    /**
                     * 设置<p>SDP提议</p>
                     * @param _sDPOffer <p>SDP提议</p>
                     * 
                     */
                    void SetSDPOffer(const std::string& _sDPOffer);

                    /**
                     * 判断参数 SDPOffer 是否已赋值
                     * @return SDPOffer 是否已赋值
                     * 
                     */
                    bool SDPOfferHasBeenSet() const;

                    /**
                     * 获取<p>客户自定义拉流标识</p>
                     * @return RequesterTag <p>客户自定义拉流标识</p>
                     * 
                     */
                    std::string GetRequesterTag() const;

                    /**
                     * 设置<p>客户自定义拉流标识</p>
                     * @param _requesterTag <p>客户自定义拉流标识</p>
                     * 
                     */
                    void SetRequesterTag(const std::string& _requesterTag);

                    /**
                     * 判断参数 RequesterTag 是否已赋值
                     * @return RequesterTag 是否已赋值
                     * 
                     */
                    bool RequesterTagHasBeenSet() const;

                    /**
                     * 获取<p>默认值：0，如果需要webrtc推流拉流在同一个SDP中，需要值为1，常用于单PC模式</p><p>枚举值：</p><ul><li>0： 默认值，传统多pc推流模式</li><li>1： 单pc模式，如果需要webrtc单pc推拉流，采用此模式，此模式下注意SDP需要包含推拉流全部信息</li></ul><p>默认值：0</p>
                     * @return EnableSubPub <p>默认值：0，如果需要webrtc推流拉流在同一个SDP中，需要值为1，常用于单PC模式</p><p>枚举值：</p><ul><li>0： 默认值，传统多pc推流模式</li><li>1： 单pc模式，如果需要webrtc单pc推拉流，采用此模式，此模式下注意SDP需要包含推拉流全部信息</li></ul><p>默认值：0</p>
                     * 
                     */
                    uint64_t GetEnableSubPub() const;

                    /**
                     * 设置<p>默认值：0，如果需要webrtc推流拉流在同一个SDP中，需要值为1，常用于单PC模式</p><p>枚举值：</p><ul><li>0： 默认值，传统多pc推流模式</li><li>1： 单pc模式，如果需要webrtc单pc推拉流，采用此模式，此模式下注意SDP需要包含推拉流全部信息</li></ul><p>默认值：0</p>
                     * @param _enableSubPub <p>默认值：0，如果需要webrtc推流拉流在同一个SDP中，需要值为1，常用于单PC模式</p><p>枚举值：</p><ul><li>0： 默认值，传统多pc推流模式</li><li>1： 单pc模式，如果需要webrtc单pc推拉流，采用此模式，此模式下注意SDP需要包含推拉流全部信息</li></ul><p>默认值：0</p>
                     * 
                     */
                    void SetEnableSubPub(const uint64_t& _enableSubPub);

                    /**
                     * 判断参数 EnableSubPub 是否已赋值
                     * @return EnableSubPub 是否已赋值
                     * 
                     */
                    bool EnableSubPubHasBeenSet() const;

                private:

                    /**
                     * <p>产品ID</p>
                     */
                    std::string m_productId;
                    bool m_productIdHasBeenSet;

                    /**
                     * <p>设备名称</p>
                     */
                    std::string m_deviceName;
                    bool m_deviceNameHasBeenSet;

                    /**
                     * <p>SDP提议</p>
                     */
                    std::string m_sDPOffer;
                    bool m_sDPOfferHasBeenSet;

                    /**
                     * <p>客户自定义拉流标识</p>
                     */
                    std::string m_requesterTag;
                    bool m_requesterTagHasBeenSet;

                    /**
                     * <p>默认值：0，如果需要webrtc推流拉流在同一个SDP中，需要值为1，常用于单PC模式</p><p>枚举值：</p><ul><li>0： 默认值，传统多pc推流模式</li><li>1： 单pc模式，如果需要webrtc单pc推拉流，采用此模式，此模式下注意SDP需要包含推拉流全部信息</li></ul><p>默认值：0</p>
                     */
                    uint64_t m_enableSubPub;
                    bool m_enableSubPubHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_CREATEDEVICESDPANSWERREQUEST_H_
