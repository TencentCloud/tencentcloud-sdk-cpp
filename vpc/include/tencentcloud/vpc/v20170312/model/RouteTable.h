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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_ROUTETABLE_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_ROUTETABLE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vpc/v20170312/model/RouteTableAssociation.h>
#include <tencentcloud/vpc/v20170312/model/Route.h>
#include <tencentcloud/vpc/v20170312/model/Tag.h>
#include <tencentcloud/vpc/v20170312/model/CidrForCcn.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * 路由表对象
                */
                class RouteTable : public AbstractModel
                {
                public:
                    RouteTable();
                    ~RouteTable() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取VPC实例ID。
                     * @return VpcId VPC实例ID。
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置VPC实例ID。
                     * @param _vpcId VPC实例ID。
                     * 
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     * 
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取路由表实例ID，例如：rtb-azd4dt1c。
                     * @return RouteTableId 路由表实例ID，例如：rtb-azd4dt1c。
                     * 
                     */
                    std::string GetRouteTableId() const;

                    /**
                     * 设置路由表实例ID，例如：rtb-azd4dt1c。
                     * @param _routeTableId 路由表实例ID，例如：rtb-azd4dt1c。
                     * 
                     */
                    void SetRouteTableId(const std::string& _routeTableId);

                    /**
                     * 判断参数 RouteTableId 是否已赋值
                     * @return RouteTableId 是否已赋值
                     * 
                     */
                    bool RouteTableIdHasBeenSet() const;

                    /**
                     * 获取路由表名称。
                     * @return RouteTableName 路由表名称。
                     * 
                     */
                    std::string GetRouteTableName() const;

                    /**
                     * 设置路由表名称。
                     * @param _routeTableName 路由表名称。
                     * 
                     */
                    void SetRouteTableName(const std::string& _routeTableName);

                    /**
                     * 判断参数 RouteTableName 是否已赋值
                     * @return RouteTableName 是否已赋值
                     * 
                     */
                    bool RouteTableNameHasBeenSet() const;

                    /**
                     * 获取路由表关联关系。
                     * @return AssociationSet 路由表关联关系。
                     * 
                     */
                    std::vector<RouteTableAssociation> GetAssociationSet() const;

                    /**
                     * 设置路由表关联关系。
                     * @param _associationSet 路由表关联关系。
                     * 
                     */
                    void SetAssociationSet(const std::vector<RouteTableAssociation>& _associationSet);

                    /**
                     * 判断参数 AssociationSet 是否已赋值
                     * @return AssociationSet 是否已赋值
                     * 
                     */
                    bool AssociationSetHasBeenSet() const;

                    /**
                     * 获取IPv4路由策略集合。
                     * @return RouteSet IPv4路由策略集合。
                     * 
                     */
                    std::vector<Route> GetRouteSet() const;

                    /**
                     * 设置IPv4路由策略集合。
                     * @param _routeSet IPv4路由策略集合。
                     * 
                     */
                    void SetRouteSet(const std::vector<Route>& _routeSet);

                    /**
                     * 判断参数 RouteSet 是否已赋值
                     * @return RouteSet 是否已赋值
                     * 
                     */
                    bool RouteSetHasBeenSet() const;

                    /**
                     * 获取是否默认路由表。
                     * @return Main 是否默认路由表。
                     * 
                     */
                    bool GetMain() const;

                    /**
                     * 设置是否默认路由表。
                     * @param _main 是否默认路由表。
                     * 
                     */
                    void SetMain(const bool& _main);

                    /**
                     * 判断参数 Main 是否已赋值
                     * @return Main 是否已赋值
                     * 
                     */
                    bool MainHasBeenSet() const;

                    /**
                     * 获取创建时间。
                     * @return CreatedTime 创建时间。
                     * 
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置创建时间。
                     * @param _createdTime 创建时间。
                     * 
                     */
                    void SetCreatedTime(const std::string& _createdTime);

                    /**
                     * 判断参数 CreatedTime 是否已赋值
                     * @return CreatedTime 是否已赋值
                     * 
                     */
                    bool CreatedTimeHasBeenSet() const;

                    /**
                     * 获取标签键值对。
                     * @return TagSet 标签键值对。
                     * 
                     */
                    std::vector<Tag> GetTagSet() const;

                    /**
                     * 设置标签键值对。
                     * @param _tagSet 标签键值对。
                     * 
                     */
                    void SetTagSet(const std::vector<Tag>& _tagSet);

                    /**
                     * 判断参数 TagSet 是否已赋值
                     * @return TagSet 是否已赋值
                     * 
                     */
                    bool TagSetHasBeenSet() const;

                    /**
                     * 获取local路由是否发布云联网。
                     * @return LocalCidrForCcn local路由是否发布云联网。
                     * 
                     */
                    std::vector<CidrForCcn> GetLocalCidrForCcn() const;

                    /**
                     * 设置local路由是否发布云联网。
                     * @param _localCidrForCcn local路由是否发布云联网。
                     * 
                     */
                    void SetLocalCidrForCcn(const std::vector<CidrForCcn>& _localCidrForCcn);

                    /**
                     * 判断参数 LocalCidrForCcn 是否已赋值
                     * @return LocalCidrForCcn 是否已赋值
                     * 
                     */
                    bool LocalCidrForCcnHasBeenSet() const;

                private:

                    /**
                     * VPC实例ID。
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 路由表实例ID，例如：rtb-azd4dt1c。
                     */
                    std::string m_routeTableId;
                    bool m_routeTableIdHasBeenSet;

                    /**
                     * 路由表名称。
                     */
                    std::string m_routeTableName;
                    bool m_routeTableNameHasBeenSet;

                    /**
                     * 路由表关联关系。
                     */
                    std::vector<RouteTableAssociation> m_associationSet;
                    bool m_associationSetHasBeenSet;

                    /**
                     * IPv4路由策略集合。
                     */
                    std::vector<Route> m_routeSet;
                    bool m_routeSetHasBeenSet;

                    /**
                     * 是否默认路由表。
                     */
                    bool m_main;
                    bool m_mainHasBeenSet;

                    /**
                     * 创建时间。
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * 标签键值对。
                     */
                    std::vector<Tag> m_tagSet;
                    bool m_tagSetHasBeenSet;

                    /**
                     * local路由是否发布云联网。
                     */
                    std::vector<CidrForCcn> m_localCidrForCcn;
                    bool m_localCidrForCcnHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_ROUTETABLE_H_
