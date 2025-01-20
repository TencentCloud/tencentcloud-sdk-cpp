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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_CUSTOMERGATEWAYVENDOR_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_CUSTOMERGATEWAYVENDOR_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * 对端网关厂商信息对象。
                */
                class CustomerGatewayVendor : public AbstractModel
                {
                public:
                    CustomerGatewayVendor();
                    ~CustomerGatewayVendor() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取平台。
                     * @return Platform 平台。
                     * 
                     */
                    std::string GetPlatform() const;

                    /**
                     * 设置平台。
                     * @param _platform 平台。
                     * 
                     */
                    void SetPlatform(const std::string& _platform);

                    /**
                     * 判断参数 Platform 是否已赋值
                     * @return Platform 是否已赋值
                     * 
                     */
                    bool PlatformHasBeenSet() const;

                    /**
                     * 获取软件版本。
                     * @return SoftwareVersion 软件版本。
                     * 
                     */
                    std::string GetSoftwareVersion() const;

                    /**
                     * 设置软件版本。
                     * @param _softwareVersion 软件版本。
                     * 
                     */
                    void SetSoftwareVersion(const std::string& _softwareVersion);

                    /**
                     * 判断参数 SoftwareVersion 是否已赋值
                     * @return SoftwareVersion 是否已赋值
                     * 
                     */
                    bool SoftwareVersionHasBeenSet() const;

                    /**
                     * 获取供应商名称。
                     * @return VendorName 供应商名称。
                     * 
                     */
                    std::string GetVendorName() const;

                    /**
                     * 设置供应商名称。
                     * @param _vendorName 供应商名称。
                     * 
                     */
                    void SetVendorName(const std::string& _vendorName);

                    /**
                     * 判断参数 VendorName 是否已赋值
                     * @return VendorName 是否已赋值
                     * 
                     */
                    bool VendorNameHasBeenSet() const;

                private:

                    /**
                     * 平台。
                     */
                    std::string m_platform;
                    bool m_platformHasBeenSet;

                    /**
                     * 软件版本。
                     */
                    std::string m_softwareVersion;
                    bool m_softwareVersionHasBeenSet;

                    /**
                     * 供应商名称。
                     */
                    std::string m_vendorName;
                    bool m_vendorNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_CUSTOMERGATEWAYVENDOR_H_
