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

#ifndef TENCENTCLOUD_TEM_V20210701_MODEL_NODEINFO_H_
#define TENCENTCLOUD_TEM_V20210701_MODEL_NODEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tem
    {
        namespace V20210701
        {
            namespace Model
            {
                /**
                * node信息
                */
                class NodeInfo : public AbstractModel
                {
                public:
                    NodeInfo();
                    ~NodeInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取node名字
                     * @return Name node名字
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置node名字
                     * @param _name node名字
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取node可用区
                     * @return Zone node可用区
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置node可用区
                     * @param _zone node可用区
                     * 
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     * 
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取node子网ID
                     * @return SubnetId node子网ID
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置node子网ID
                     * @param _subnetId node子网ID
                     * 
                     */
                    void SetSubnetId(const std::string& _subnetId);

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     * 
                     */
                    bool SubnetIdHasBeenSet() const;

                    /**
                     * 获取可用IP数
                     * @return AvailableIpCount 可用IP数
                     * 
                     */
                    std::string GetAvailableIpCount() const;

                    /**
                     * 设置可用IP数
                     * @param _availableIpCount 可用IP数
                     * 
                     */
                    void SetAvailableIpCount(const std::string& _availableIpCount);

                    /**
                     * 判断参数 AvailableIpCount 是否已赋值
                     * @return AvailableIpCount 是否已赋值
                     * 
                     */
                    bool AvailableIpCountHasBeenSet() const;

                    /**
                     * 获取cidr块
                     * @return Cidr cidr块
                     * 
                     */
                    std::string GetCidr() const;

                    /**
                     * 设置cidr块
                     * @param _cidr cidr块
                     * 
                     */
                    void SetCidr(const std::string& _cidr);

                    /**
                     * 判断参数 Cidr 是否已赋值
                     * @return Cidr 是否已赋值
                     * 
                     */
                    bool CidrHasBeenSet() const;

                private:

                    /**
                     * node名字
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * node可用区
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * node子网ID
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * 可用IP数
                     */
                    std::string m_availableIpCount;
                    bool m_availableIpCountHasBeenSet;

                    /**
                     * cidr块
                     */
                    std::string m_cidr;
                    bool m_cidrHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEM_V20210701_MODEL_NODEINFO_H_
