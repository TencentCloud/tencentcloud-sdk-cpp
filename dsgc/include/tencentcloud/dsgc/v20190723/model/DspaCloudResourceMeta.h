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

#ifndef TENCENTCLOUD_DSGC_V20190723_MODEL_DSPACLOUDRESOURCEMETA_H_
#define TENCENTCLOUD_DSGC_V20190723_MODEL_DSPACLOUDRESOURCEMETA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dsgc
    {
        namespace V20190723
        {
            namespace Model
            {
                /**
                * 云上资源元数据
                */
                class DspaCloudResourceMeta : public AbstractModel
                {
                public:
                    DspaCloudResourceMeta();
                    ~DspaCloudResourceMeta() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取用户资源ID。
                     * @return ResourceId 用户资源ID。
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置用户资源ID。
                     * @param _resourceId 用户资源ID。
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
                     * 获取资源名称。
                     * @return ResourceName 资源名称。
                     * 
                     */
                    std::string GetResourceName() const;

                    /**
                     * 设置资源名称。
                     * @param _resourceName 资源名称。
                     * 
                     */
                    void SetResourceName(const std::string& _resourceName);

                    /**
                     * 判断参数 ResourceName 是否已赋值
                     * @return ResourceName 是否已赋值
                     * 
                     */
                    bool ResourceNameHasBeenSet() const;

                    /**
                     * 获取资源VIP。
                     * @return ResourceVip 资源VIP。
                     * 
                     */
                    std::string GetResourceVip() const;

                    /**
                     * 设置资源VIP。
                     * @param _resourceVip 资源VIP。
                     * 
                     */
                    void SetResourceVip(const std::string& _resourceVip);

                    /**
                     * 判断参数 ResourceVip 是否已赋值
                     * @return ResourceVip 是否已赋值
                     * 
                     */
                    bool ResourceVipHasBeenSet() const;

                    /**
                     * 获取资源端口。
                     * @return ResourceVPort 资源端口。
                     * 
                     */
                    uint64_t GetResourceVPort() const;

                    /**
                     * 设置资源端口。
                     * @param _resourceVPort 资源端口。
                     * 
                     */
                    void SetResourceVPort(const uint64_t& _resourceVPort);

                    /**
                     * 判断参数 ResourceVPort 是否已赋值
                     * @return ResourceVPort 是否已赋值
                     * 
                     */
                    bool ResourceVPortHasBeenSet() const;

                    /**
                     * 获取资源被创建时间。
                     * @return ResourceCreateTime 资源被创建时间。
                     * 
                     */
                    std::string GetResourceCreateTime() const;

                    /**
                     * 设置资源被创建时间。
                     * @param _resourceCreateTime 资源被创建时间。
                     * 
                     */
                    void SetResourceCreateTime(const std::string& _resourceCreateTime);

                    /**
                     * 判断参数 ResourceCreateTime 是否已赋值
                     * @return ResourceCreateTime 是否已赋值
                     * 
                     */
                    bool ResourceCreateTimeHasBeenSet() const;

                    /**
                     * 获取用户资源VPC ID 字符串。
                     * @return ResourceUniqueVpcId 用户资源VPC ID 字符串。
                     * 
                     */
                    std::string GetResourceUniqueVpcId() const;

                    /**
                     * 设置用户资源VPC ID 字符串。
                     * @param _resourceUniqueVpcId 用户资源VPC ID 字符串。
                     * 
                     */
                    void SetResourceUniqueVpcId(const std::string& _resourceUniqueVpcId);

                    /**
                     * 判断参数 ResourceUniqueVpcId 是否已赋值
                     * @return ResourceUniqueVpcId 是否已赋值
                     * 
                     */
                    bool ResourceUniqueVpcIdHasBeenSet() const;

                    /**
                     * 获取用户资源Subnet ID 字符串。
                     * @return ResourceUniqueSubnetId 用户资源Subnet ID 字符串。
                     * 
                     */
                    std::string GetResourceUniqueSubnetId() const;

                    /**
                     * 设置用户资源Subnet ID 字符串。
                     * @param _resourceUniqueSubnetId 用户资源Subnet ID 字符串。
                     * 
                     */
                    void SetResourceUniqueSubnetId(const std::string& _resourceUniqueSubnetId);

                    /**
                     * 判断参数 ResourceUniqueSubnetId 是否已赋值
                     * @return ResourceUniqueSubnetId 是否已赋值
                     * 
                     */
                    bool ResourceUniqueSubnetIdHasBeenSet() const;

                private:

                    /**
                     * 用户资源ID。
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * 资源名称。
                     */
                    std::string m_resourceName;
                    bool m_resourceNameHasBeenSet;

                    /**
                     * 资源VIP。
                     */
                    std::string m_resourceVip;
                    bool m_resourceVipHasBeenSet;

                    /**
                     * 资源端口。
                     */
                    uint64_t m_resourceVPort;
                    bool m_resourceVPortHasBeenSet;

                    /**
                     * 资源被创建时间。
                     */
                    std::string m_resourceCreateTime;
                    bool m_resourceCreateTimeHasBeenSet;

                    /**
                     * 用户资源VPC ID 字符串。
                     */
                    std::string m_resourceUniqueVpcId;
                    bool m_resourceUniqueVpcIdHasBeenSet;

                    /**
                     * 用户资源Subnet ID 字符串。
                     */
                    std::string m_resourceUniqueSubnetId;
                    bool m_resourceUniqueSubnetIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DSGC_V20190723_MODEL_DSPACLOUDRESOURCEMETA_H_
