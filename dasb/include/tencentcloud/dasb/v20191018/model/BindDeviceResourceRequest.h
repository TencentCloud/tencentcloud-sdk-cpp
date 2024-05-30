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

#ifndef TENCENTCLOUD_DASB_V20191018_MODEL_BINDDEVICERESOURCEREQUEST_H_
#define TENCENTCLOUD_DASB_V20191018_MODEL_BINDDEVICERESOURCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dasb
    {
        namespace V20191018
        {
            namespace Model
            {
                /**
                * BindDeviceResource请求参数结构体
                */
                class BindDeviceResourceRequest : public AbstractModel
                {
                public:
                    BindDeviceResourceRequest();
                    ~BindDeviceResourceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取资产ID集合
                     * @return DeviceIdSet 资产ID集合
                     * 
                     */
                    std::vector<uint64_t> GetDeviceIdSet() const;

                    /**
                     * 设置资产ID集合
                     * @param _deviceIdSet 资产ID集合
                     * 
                     */
                    void SetDeviceIdSet(const std::vector<uint64_t>& _deviceIdSet);

                    /**
                     * 判断参数 DeviceIdSet 是否已赋值
                     * @return DeviceIdSet 是否已赋值
                     * 
                     */
                    bool DeviceIdSetHasBeenSet() const;

                    /**
                     * 获取堡垒机服务ID
                     * @return ResourceId 堡垒机服务ID
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置堡垒机服务ID
                     * @param _resourceId 堡垒机服务ID
                     * 
                     */
                    void SetResourceId(const std::string& _resourceId);

                    /**
                     * 判断参数 ResourceId 是否已赋值
                     * @return ResourceId 是否已赋值
                     * 
                     */
                    bool ResourceIdHasBeenSet() const;

                    /**
                     * 获取网络域ID
                     * @return DomainId 网络域ID
                     * 
                     */
                    std::string GetDomainId() const;

                    /**
                     * 设置网络域ID
                     * @param _domainId 网络域ID
                     * 
                     */
                    void SetDomainId(const std::string& _domainId);

                    /**
                     * 判断参数 DomainId 是否已赋值
                     * @return DomainId 是否已赋值
                     * 
                     */
                    bool DomainIdHasBeenSet() const;

                private:

                    /**
                     * 资产ID集合
                     */
                    std::vector<uint64_t> m_deviceIdSet;
                    bool m_deviceIdSetHasBeenSet;

                    /**
                     * 堡垒机服务ID
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * 网络域ID
                     */
                    std::string m_domainId;
                    bool m_domainIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DASB_V20191018_MODEL_BINDDEVICERESOURCEREQUEST_H_
