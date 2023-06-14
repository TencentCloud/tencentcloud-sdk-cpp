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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_RESOURCE_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_RESOURCE_H_

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
                * 描述带宽包资源信息的结构
                */
                class Resource : public AbstractModel
                {
                public:
                    Resource();
                    ~Resource() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取带宽包资源类型，包括'Address'和'LoadBalance'
                     * @return ResourceType 带宽包资源类型，包括'Address'和'LoadBalance'
                     * 
                     */
                    std::string GetResourceType() const;

                    /**
                     * 设置带宽包资源类型，包括'Address'和'LoadBalance'
                     * @param _resourceType 带宽包资源类型，包括'Address'和'LoadBalance'
                     * 
                     */
                    void SetResourceType(const std::string& _resourceType);

                    /**
                     * 判断参数 ResourceType 是否已赋值
                     * @return ResourceType 是否已赋值
                     * 
                     */
                    bool ResourceTypeHasBeenSet() const;

                    /**
                     * 获取带宽包资源Id，形如'eip-xxxx', 'lb-xxxx'
                     * @return ResourceId 带宽包资源Id，形如'eip-xxxx', 'lb-xxxx'
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置带宽包资源Id，形如'eip-xxxx', 'lb-xxxx'
                     * @param _resourceId 带宽包资源Id，形如'eip-xxxx', 'lb-xxxx'
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
                     * 获取带宽包资源Ip
                     * @return AddressIp 带宽包资源Ip
                     * 
                     */
                    std::string GetAddressIp() const;

                    /**
                     * 设置带宽包资源Ip
                     * @param _addressIp 带宽包资源Ip
                     * 
                     */
                    void SetAddressIp(const std::string& _addressIp);

                    /**
                     * 判断参数 AddressIp 是否已赋值
                     * @return AddressIp 是否已赋值
                     * 
                     */
                    bool AddressIpHasBeenSet() const;

                private:

                    /**
                     * 带宽包资源类型，包括'Address'和'LoadBalance'
                     */
                    std::string m_resourceType;
                    bool m_resourceTypeHasBeenSet;

                    /**
                     * 带宽包资源Id，形如'eip-xxxx', 'lb-xxxx'
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * 带宽包资源Ip
                     */
                    std::string m_addressIp;
                    bool m_addressIpHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_RESOURCE_H_
