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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_SUBNETINPUT_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_SUBNETINPUT_H_

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
                * 子网对象
                */
                class SubnetInput : public AbstractModel
                {
                public:
                    SubnetInput();
                    ~SubnetInput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取子网的`CIDR`。
                     * @return CidrBlock 子网的`CIDR`。
                     * 
                     */
                    std::string GetCidrBlock() const;

                    /**
                     * 设置子网的`CIDR`。
                     * @param _cidrBlock 子网的`CIDR`。
                     * 
                     */
                    void SetCidrBlock(const std::string& _cidrBlock);

                    /**
                     * 判断参数 CidrBlock 是否已赋值
                     * @return CidrBlock 是否已赋值
                     * 
                     */
                    bool CidrBlockHasBeenSet() const;

                    /**
                     * 获取子网名称。
                     * @return SubnetName 子网名称。
                     * 
                     */
                    std::string GetSubnetName() const;

                    /**
                     * 设置子网名称。
                     * @param _subnetName 子网名称。
                     * 
                     */
                    void SetSubnetName(const std::string& _subnetName);

                    /**
                     * 判断参数 SubnetName 是否已赋值
                     * @return SubnetName 是否已赋值
                     * 
                     */
                    bool SubnetNameHasBeenSet() const;

                    /**
                     * 获取可用区。形如：`ap-guangzhou-2`。
                     * @return Zone 可用区。形如：`ap-guangzhou-2`。
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置可用区。形如：`ap-guangzhou-2`。
                     * @param _zone 可用区。形如：`ap-guangzhou-2`。
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
                     * 获取指定关联路由表，形如：`rtb-3ryrwzuu`。
                     * @return RouteTableId 指定关联路由表，形如：`rtb-3ryrwzuu`。
                     * 
                     */
                    std::string GetRouteTableId() const;

                    /**
                     * 设置指定关联路由表，形如：`rtb-3ryrwzuu`。
                     * @param _routeTableId 指定关联路由表，形如：`rtb-3ryrwzuu`。
                     * 
                     */
                    void SetRouteTableId(const std::string& _routeTableId);

                    /**
                     * 判断参数 RouteTableId 是否已赋值
                     * @return RouteTableId 是否已赋值
                     * 
                     */
                    bool RouteTableIdHasBeenSet() const;

                private:

                    /**
                     * 子网的`CIDR`。
                     */
                    std::string m_cidrBlock;
                    bool m_cidrBlockHasBeenSet;

                    /**
                     * 子网名称。
                     */
                    std::string m_subnetName;
                    bool m_subnetNameHasBeenSet;

                    /**
                     * 可用区。形如：`ap-guangzhou-2`。
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * 指定关联路由表，形如：`rtb-3ryrwzuu`。
                     */
                    std::string m_routeTableId;
                    bool m_routeTableIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_SUBNETINPUT_H_
