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

#ifndef TENCENTCLOUD_CHC_V20230418_MODEL_CREATECOMMONSERVICEWORKORDERREQUEST_H_
#define TENCENTCLOUD_CHC_V20230418_MODEL_CREATECOMMONSERVICEWORKORDERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/chc/v20230418/model/DevicePosition.h>


namespace TencentCloud
{
    namespace Chc
    {
        namespace V20230418
        {
            namespace Model
            {
                /**
                * CreateCommonServiceWorkOrder请求参数结构体
                */
                class CreateCommonServiceWorkOrderRequest : public AbstractModel
                {
                public:
                    CreateCommonServiceWorkOrderRequest();
                    ~CreateCommonServiceWorkOrderRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取设备及位置信息列表
                     * @return DevicePositionSet 设备及位置信息列表
                     * 
                     */
                    std::vector<DevicePosition> GetDevicePositionSet() const;

                    /**
                     * 设置设备及位置信息列表
                     * @param _devicePositionSet 设备及位置信息列表
                     * 
                     */
                    void SetDevicePositionSet(const std::vector<DevicePosition>& _devicePositionSet);

                    /**
                     * 判断参数 DevicePositionSet 是否已赋值
                     * @return DevicePositionSet 是否已赋值
                     * 
                     */
                    bool DevicePositionSetHasBeenSet() const;

                    /**
                     * 获取服务级别，只支持传入 1、2、3，分别对应 L1、L2、L3
                     * @return ServiceLevel 服务级别，只支持传入 1、2、3，分别对应 L1、L2、L3
                     * 
                     */
                    uint64_t GetServiceLevel() const;

                    /**
                     * 设置服务级别，只支持传入 1、2、3，分别对应 L1、L2、L3
                     * @param _serviceLevel 服务级别，只支持传入 1、2、3，分别对应 L1、L2、L3
                     * 
                     */
                    void SetServiceLevel(const uint64_t& _serviceLevel);

                    /**
                     * 判断参数 ServiceLevel 是否已赋值
                     * @return ServiceLevel 是否已赋值
                     * 
                     */
                    bool ServiceLevelHasBeenSet() const;

                    /**
                     * 获取操作预授权
                     * @return PreAuthorization 操作预授权
                     * 
                     */
                    bool GetPreAuthorization() const;

                    /**
                     * 设置操作预授权
                     * @param _preAuthorization 操作预授权
                     * 
                     */
                    void SetPreAuthorization(const bool& _preAuthorization);

                    /**
                     * 判断参数 PreAuthorization 是否已赋值
                     * @return PreAuthorization 是否已赋值
                     * 
                     */
                    bool PreAuthorizationHasBeenSet() const;

                    /**
                     * 获取业务联系人
                     * @return ContactName 业务联系人
                     * 
                     */
                    std::string GetContactName() const;

                    /**
                     * 设置业务联系人
                     * @param _contactName 业务联系人
                     * 
                     */
                    void SetContactName(const std::string& _contactName);

                    /**
                     * 判断参数 ContactName 是否已赋值
                     * @return ContactName 是否已赋值
                     * 
                     */
                    bool ContactNameHasBeenSet() const;

                    /**
                     * 获取联系人电话
                     * @return ContactPhone 联系人电话
                     * 
                     */
                    std::string GetContactPhone() const;

                    /**
                     * 设置联系人电话
                     * @param _contactPhone 联系人电话
                     * 
                     */
                    void SetContactPhone(const std::string& _contactPhone);

                    /**
                     * 判断参数 ContactPhone 是否已赋值
                     * @return ContactPhone 是否已赋值
                     * 
                     */
                    bool ContactPhoneHasBeenSet() const;

                    /**
                     * 获取设备类型 server 服务器，netDevice 网络设备	
                     * @return DeviceType 设备类型 server 服务器，netDevice 网络设备	
                     * 
                     */
                    std::string GetDeviceType() const;

                    /**
                     * 设置设备类型 server 服务器，netDevice 网络设备	
                     * @param _deviceType 设备类型 server 服务器，netDevice 网络设备	
                     * 
                     */
                    void SetDeviceType(const std::string& _deviceType);

                    /**
                     * 判断参数 DeviceType 是否已赋值
                     * @return DeviceType 是否已赋值
                     * 
                     */
                    bool DeviceTypeHasBeenSet() const;

                    /**
                     * 获取操作说明
                     * @return Instructions 操作说明
                     * 
                     */
                    std::string GetInstructions() const;

                    /**
                     * 设置操作说明
                     * @param _instructions 操作说明
                     * 
                     */
                    void SetInstructions(const std::string& _instructions);

                    /**
                     * 判断参数 Instructions 是否已赋值
                     * @return Instructions 是否已赋值
                     * 
                     */
                    bool InstructionsHasBeenSet() const;

                private:

                    /**
                     * 设备及位置信息列表
                     */
                    std::vector<DevicePosition> m_devicePositionSet;
                    bool m_devicePositionSetHasBeenSet;

                    /**
                     * 服务级别，只支持传入 1、2、3，分别对应 L1、L2、L3
                     */
                    uint64_t m_serviceLevel;
                    bool m_serviceLevelHasBeenSet;

                    /**
                     * 操作预授权
                     */
                    bool m_preAuthorization;
                    bool m_preAuthorizationHasBeenSet;

                    /**
                     * 业务联系人
                     */
                    std::string m_contactName;
                    bool m_contactNameHasBeenSet;

                    /**
                     * 联系人电话
                     */
                    std::string m_contactPhone;
                    bool m_contactPhoneHasBeenSet;

                    /**
                     * 设备类型 server 服务器，netDevice 网络设备	
                     */
                    std::string m_deviceType;
                    bool m_deviceTypeHasBeenSet;

                    /**
                     * 操作说明
                     */
                    std::string m_instructions;
                    bool m_instructionsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CHC_V20230418_MODEL_CREATECOMMONSERVICEWORKORDERREQUEST_H_
