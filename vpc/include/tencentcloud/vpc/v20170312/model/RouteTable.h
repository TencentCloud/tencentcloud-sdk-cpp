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
                     * 获取<p>VPC实例ID。</p>
                     * @return VpcId <p>VPC实例ID。</p>
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置<p>VPC实例ID。</p>
                     * @param _vpcId <p>VPC实例ID。</p>
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
                     * 获取<p>路由表实例ID，例如：rtb-azd4dt1c。</p>
                     * @return RouteTableId <p>路由表实例ID，例如：rtb-azd4dt1c。</p>
                     * 
                     */
                    std::string GetRouteTableId() const;

                    /**
                     * 设置<p>路由表实例ID，例如：rtb-azd4dt1c。</p>
                     * @param _routeTableId <p>路由表实例ID，例如：rtb-azd4dt1c。</p>
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
                     * 获取<p>路由表名称。</p>
                     * @return RouteTableName <p>路由表名称。</p>
                     * 
                     */
                    std::string GetRouteTableName() const;

                    /**
                     * 设置<p>路由表名称。</p>
                     * @param _routeTableName <p>路由表名称。</p>
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
                     * 获取<p>路由表关联关系。</p>
                     * @return AssociationSet <p>路由表关联关系。</p>
                     * 
                     */
                    std::vector<RouteTableAssociation> GetAssociationSet() const;

                    /**
                     * 设置<p>路由表关联关系。</p>
                     * @param _associationSet <p>路由表关联关系。</p>
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
                     * 获取<p>IPv4路由策略集合。</p>
                     * @return RouteSet <p>IPv4路由策略集合。</p>
                     * 
                     */
                    std::vector<Route> GetRouteSet() const;

                    /**
                     * 设置<p>IPv4路由策略集合。</p>
                     * @param _routeSet <p>IPv4路由策略集合。</p>
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
                     * 获取<p>是否默认路由表。</p>
                     * @return Main <p>是否默认路由表。</p>
                     * 
                     */
                    bool GetMain() const;

                    /**
                     * 设置<p>是否默认路由表。</p>
                     * @param _main <p>是否默认路由表。</p>
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
                     * 获取<p>创建时间。</p>
                     * @return CreatedTime <p>创建时间。</p>
                     * 
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置<p>创建时间。</p>
                     * @param _createdTime <p>创建时间。</p>
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
                     * 获取<p>标签键值对。</p>
                     * @return TagSet <p>标签键值对。</p>
                     * 
                     */
                    std::vector<Tag> GetTagSet() const;

                    /**
                     * 设置<p>标签键值对。</p>
                     * @param _tagSet <p>标签键值对。</p>
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
                     * 获取<p>local路由是否发布云联网。</p>
                     * @return LocalCidrForCcn <p>local路由是否发布云联网。</p>
                     * 
                     */
                    std::vector<CidrForCcn> GetLocalCidrForCcn() const;

                    /**
                     * 设置<p>local路由是否发布云联网。</p>
                     * @param _localCidrForCcn <p>local路由是否发布云联网。</p>
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
                     * <p>VPC实例ID。</p>
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * <p>路由表实例ID，例如：rtb-azd4dt1c。</p>
                     */
                    std::string m_routeTableId;
                    bool m_routeTableIdHasBeenSet;

                    /**
                     * <p>路由表名称。</p>
                     */
                    std::string m_routeTableName;
                    bool m_routeTableNameHasBeenSet;

                    /**
                     * <p>路由表关联关系。</p>
                     */
                    std::vector<RouteTableAssociation> m_associationSet;
                    bool m_associationSetHasBeenSet;

                    /**
                     * <p>IPv4路由策略集合。</p>
                     */
                    std::vector<Route> m_routeSet;
                    bool m_routeSetHasBeenSet;

                    /**
                     * <p>是否默认路由表。</p>
                     */
                    bool m_main;
                    bool m_mainHasBeenSet;

                    /**
                     * <p>创建时间。</p>
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * <p>标签键值对。</p>
                     */
                    std::vector<Tag> m_tagSet;
                    bool m_tagSetHasBeenSet;

                    /**
                     * <p>local路由是否发布云联网。</p>
                     */
                    std::vector<CidrForCcn> m_localCidrForCcn;
                    bool m_localCidrForCcnHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_ROUTETABLE_H_
