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

#ifndef TENCENTCLOUD_GAAP_V20180529_MODEL_CREATEFIRSTLINKSESSIONREQUEST_H_
#define TENCENTCLOUD_GAAP_V20180529_MODEL_CREATEFIRSTLINKSESSIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/gaap/v20180529/model/SrcAddressInfo.h>
#include <tencentcloud/gaap/v20180529/model/DestAddressInfo.h>
#include <tencentcloud/gaap/v20180529/model/DeviceInfo.h>
#include <tencentcloud/gaap/v20180529/model/Capacity.h>


namespace TencentCloud
{
    namespace Gaap
    {
        namespace V20180529
        {
            namespace Model
            {
                /**
                * CreateFirstLinkSession请求参数结构体
                */
                class CreateFirstLinkSessionRequest : public AbstractModel
                {
                public:
                    CreateFirstLinkSessionRequest();
                    ~CreateFirstLinkSessionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取模版ID
                     * @return TemplateId 模版ID
                     */
                    std::string GetTemplateId() const;

                    /**
                     * 设置模版ID
                     * @param TemplateId 模版ID
                     */
                    void SetTemplateId(const std::string& _templateId);

                    /**
                     * 判断参数 TemplateId 是否已赋值
                     * @return TemplateId 是否已赋值
                     */
                    bool TemplateIdHasBeenSet() const;

                    /**
                     * 获取终端网络信息
                     * @return SrcAddressInfo 终端网络信息
                     */
                    SrcAddressInfo GetSrcAddressInfo() const;

                    /**
                     * 设置终端网络信息
                     * @param SrcAddressInfo 终端网络信息
                     */
                    void SetSrcAddressInfo(const SrcAddressInfo& _srcAddressInfo);

                    /**
                     * 判断参数 SrcAddressInfo 是否已赋值
                     * @return SrcAddressInfo 是否已赋值
                     */
                    bool SrcAddressInfoHasBeenSet() const;

                    /**
                     * 获取加速目标网络信息
                     * @return DestAddressInfo 加速目标网络信息
                     */
                    DestAddressInfo GetDestAddressInfo() const;

                    /**
                     * 设置加速目标网络信息
                     * @param DestAddressInfo 加速目标网络信息
                     */
                    void SetDestAddressInfo(const DestAddressInfo& _destAddressInfo);

                    /**
                     * 判断参数 DestAddressInfo 是否已赋值
                     * @return DestAddressInfo 是否已赋值
                     */
                    bool DestAddressInfoHasBeenSet() const;

                    /**
                     * 获取终端设备信息
                     * @return DeviceInfo 终端设备信息
                     */
                    DeviceInfo GetDeviceInfo() const;

                    /**
                     * 设置终端设备信息
                     * @param DeviceInfo 终端设备信息
                     */
                    void SetDeviceInfo(const DeviceInfo& _deviceInfo);

                    /**
                     * 判断参数 DeviceInfo 是否已赋值
                     * @return DeviceInfo 是否已赋值
                     */
                    bool DeviceInfoHasBeenSet() const;

                    /**
                     * 获取接口扩展参数，如果是电信用户，需要填充CTCC Token字段
                     * @return Capacity 接口扩展参数，如果是电信用户，需要填充CTCC Token字段
                     */
                    Capacity GetCapacity() const;

                    /**
                     * 设置接口扩展参数，如果是电信用户，需要填充CTCC Token字段
                     * @param Capacity 接口扩展参数，如果是电信用户，需要填充CTCC Token字段
                     */
                    void SetCapacity(const Capacity& _capacity);

                    /**
                     * 判断参数 Capacity 是否已赋值
                     * @return Capacity 是否已赋值
                     */
                    bool CapacityHasBeenSet() const;

                private:

                    /**
                     * 模版ID
                     */
                    std::string m_templateId;
                    bool m_templateIdHasBeenSet;

                    /**
                     * 终端网络信息
                     */
                    SrcAddressInfo m_srcAddressInfo;
                    bool m_srcAddressInfoHasBeenSet;

                    /**
                     * 加速目标网络信息
                     */
                    DestAddressInfo m_destAddressInfo;
                    bool m_destAddressInfoHasBeenSet;

                    /**
                     * 终端设备信息
                     */
                    DeviceInfo m_deviceInfo;
                    bool m_deviceInfoHasBeenSet;

                    /**
                     * 接口扩展参数，如果是电信用户，需要填充CTCC Token字段
                     */
                    Capacity m_capacity;
                    bool m_capacityHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GAAP_V20180529_MODEL_CREATEFIRSTLINKSESSIONREQUEST_H_
