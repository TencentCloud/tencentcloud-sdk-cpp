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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_NETINSTANCESINFO_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_NETINSTANCESINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * 网络实例信息
                */
                class NetInstancesInfo : public AbstractModel
                {
                public:
                    NetInstancesInfo();
                    ~NetInstancesInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取网络实例ID
                     * @return InstanceId 网络实例ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置网络实例ID
                     * @param _instanceId 网络实例ID
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取网络实例名称
                     * @return InstanceName 网络实例名称
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置网络实例名称
                     * @param _instanceName 网络实例名称
                     * 
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     * 
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取网络cidr (多段以逗号分隔)
                     * @return InstanceCidr 网络cidr (多段以逗号分隔)
                     * 
                     */
                    std::string GetInstanceCidr() const;

                    /**
                     * 设置网络cidr (多段以逗号分隔)
                     * @param _instanceCidr 网络cidr (多段以逗号分隔)
                     * 
                     */
                    void SetInstanceCidr(const std::string& _instanceCidr);

                    /**
                     * 判断参数 InstanceCidr 是否已赋值
                     * @return InstanceCidr 是否已赋值
                     * 
                     */
                    bool InstanceCidrHasBeenSet() const;

                    /**
                     * 获取网络实例所在地域
                     * @return Region 网络实例所在地域
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置网络实例所在地域
                     * @param _region 网络实例所在地域
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                private:

                    /**
                     * 网络实例ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 网络实例名称
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * 网络cidr (多段以逗号分隔)
                     */
                    std::string m_instanceCidr;
                    bool m_instanceCidrHasBeenSet;

                    /**
                     * 网络实例所在地域
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_NETINSTANCESINFO_H_
