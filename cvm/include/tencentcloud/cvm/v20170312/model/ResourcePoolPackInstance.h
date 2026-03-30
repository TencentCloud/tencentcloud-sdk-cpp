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

#ifndef TENCENTCLOUD_CVM_V20170312_MODEL_RESOURCEPOOLPACKINSTANCE_H_
#define TENCENTCLOUD_CVM_V20170312_MODEL_RESOURCEPOOLPACKINSTANCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cvm
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * 描述实例资源池内已创建实例的信息
                */
                class ResourcePoolPackInstance : public AbstractModel
                {
                public:
                    ResourcePoolPackInstance();
                    ~ResourcePoolPackInstance() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取实例资源池ID。形如：rpp-fb7bzcyt。
                     * @return DedicatedResourcePackId 实例资源池ID。形如：rpp-fb7bzcyt。
                     * 
                     */
                    std::string GetDedicatedResourcePackId() const;

                    /**
                     * 设置实例资源池ID。形如：rpp-fb7bzcyt。
                     * @param _dedicatedResourcePackId 实例资源池ID。形如：rpp-fb7bzcyt。
                     * 
                     */
                    void SetDedicatedResourcePackId(const std::string& _dedicatedResourcePackId);

                    /**
                     * 判断参数 DedicatedResourcePackId 是否已赋值
                     * @return DedicatedResourcePackId 是否已赋值
                     * 
                     */
                    bool DedicatedResourcePackIdHasBeenSet() const;

                    /**
                     * 获取实例资源池内的实例ID列表。形如：["ins-5u8lxsum"]。
                     * @return InstanceIdSet 实例资源池内的实例ID列表。形如：["ins-5u8lxsum"]。
                     * 
                     */
                    std::vector<std::string> GetInstanceIdSet() const;

                    /**
                     * 设置实例资源池内的实例ID列表。形如：["ins-5u8lxsum"]。
                     * @param _instanceIdSet 实例资源池内的实例ID列表。形如：["ins-5u8lxsum"]。
                     * 
                     */
                    void SetInstanceIdSet(const std::vector<std::string>& _instanceIdSet);

                    /**
                     * 判断参数 InstanceIdSet 是否已赋值
                     * @return InstanceIdSet 是否已赋值
                     * 
                     */
                    bool InstanceIdSetHasBeenSet() const;

                    /**
                     * 获取实例族。形如：SA9。
                     * @return InstanceFamily 实例族。形如：SA9。
                     * 
                     */
                    std::string GetInstanceFamily() const;

                    /**
                     * 设置实例族。形如：SA9。
                     * @param _instanceFamily 实例族。形如：SA9。
                     * 
                     */
                    void SetInstanceFamily(const std::string& _instanceFamily);

                    /**
                     * 判断参数 InstanceFamily 是否已赋值
                     * @return InstanceFamily 是否已赋值
                     * 
                     */
                    bool InstanceFamilyHasBeenSet() const;

                    /**
                     * 获取实例规格。形如：SA9.96XLARGE1152。
                     * @return InstanceType 实例规格。形如：SA9.96XLARGE1152。
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置实例规格。形如：SA9.96XLARGE1152。
                     * @param _instanceType 实例规格。形如：SA9.96XLARGE1152。
                     * 
                     */
                    void SetInstanceType(const std::string& _instanceType);

                    /**
                     * 判断参数 InstanceType 是否已赋值
                     * @return InstanceType 是否已赋值
                     * 
                     */
                    bool InstanceTypeHasBeenSet() const;

                    /**
                     * 获取可用区。形如：ap-guangzhou-6。
                     * @return Zone 可用区。形如：ap-guangzhou-6。
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置可用区。形如：ap-guangzhou-6。
                     * @param _zone 可用区。形如：ap-guangzhou-6。
                     * 
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     * 
                     */
                    bool ZoneHasBeenSet() const;

                private:

                    /**
                     * 实例资源池ID。形如：rpp-fb7bzcyt。
                     */
                    std::string m_dedicatedResourcePackId;
                    bool m_dedicatedResourcePackIdHasBeenSet;

                    /**
                     * 实例资源池内的实例ID列表。形如：["ins-5u8lxsum"]。
                     */
                    std::vector<std::string> m_instanceIdSet;
                    bool m_instanceIdSetHasBeenSet;

                    /**
                     * 实例族。形如：SA9。
                     */
                    std::string m_instanceFamily;
                    bool m_instanceFamilyHasBeenSet;

                    /**
                     * 实例规格。形如：SA9.96XLARGE1152。
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * 可用区。形如：ap-guangzhou-6。
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVM_V20170312_MODEL_RESOURCEPOOLPACKINSTANCE_H_
