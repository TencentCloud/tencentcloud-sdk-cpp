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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_CCNROUTE_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_CCNROUTE_H_

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
                * CCN路由策略对象
                */
                class CcnRoute : public AbstractModel
                {
                public:
                    CcnRoute();
                    ~CcnRoute() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>路由策略ID</p>
                     * @return RouteId <p>路由策略ID</p>
                     * 
                     */
                    std::string GetRouteId() const;

                    /**
                     * 设置<p>路由策略ID</p>
                     * @param _routeId <p>路由策略ID</p>
                     * 
                     */
                    void SetRouteId(const std::string& _routeId);

                    /**
                     * 判断参数 RouteId 是否已赋值
                     * @return RouteId 是否已赋值
                     * 
                     */
                    bool RouteIdHasBeenSet() const;

                    /**
                     * 获取<p>目的端</p>
                     * @return DestinationCidrBlock <p>目的端</p>
                     * 
                     */
                    std::string GetDestinationCidrBlock() const;

                    /**
                     * 设置<p>目的端</p>
                     * @param _destinationCidrBlock <p>目的端</p>
                     * 
                     */
                    void SetDestinationCidrBlock(const std::string& _destinationCidrBlock);

                    /**
                     * 判断参数 DestinationCidrBlock 是否已赋值
                     * @return DestinationCidrBlock 是否已赋值
                     * 
                     */
                    bool DestinationCidrBlockHasBeenSet() const;

                    /**
                     * 获取<p>下一跳类型（关联实例类型），所有类型：VPC、DIRECTCONNECT</p>
                     * @return InstanceType <p>下一跳类型（关联实例类型），所有类型：VPC、DIRECTCONNECT</p>
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置<p>下一跳类型（关联实例类型），所有类型：VPC、DIRECTCONNECT</p>
                     * @param _instanceType <p>下一跳类型（关联实例类型），所有类型：VPC、DIRECTCONNECT</p>
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
                     * 获取<p>下一跳（关联实例）</p>
                     * @return InstanceId <p>下一跳（关联实例）</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>下一跳（关联实例）</p>
                     * @param _instanceId <p>下一跳（关联实例）</p>
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
                     * 获取<p>下一跳名称（关联实例名称）</p>
                     * @return InstanceName <p>下一跳名称（关联实例名称）</p>
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置<p>下一跳名称（关联实例名称）</p>
                     * @param _instanceName <p>下一跳名称（关联实例名称）</p>
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
                     * 获取<p>下一跳所属地域（关联实例所属地域）</p>
                     * @return InstanceRegion <p>下一跳所属地域（关联实例所属地域）</p>
                     * 
                     */
                    std::string GetInstanceRegion() const;

                    /**
                     * 设置<p>下一跳所属地域（关联实例所属地域）</p>
                     * @param _instanceRegion <p>下一跳所属地域（关联实例所属地域）</p>
                     * 
                     */
                    void SetInstanceRegion(const std::string& _instanceRegion);

                    /**
                     * 判断参数 InstanceRegion 是否已赋值
                     * @return InstanceRegion 是否已赋值
                     * 
                     */
                    bool InstanceRegionHasBeenSet() const;

                    /**
                     * 获取<p>更新时间</p>
                     * @return UpdateTime <p>更新时间</p>
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置<p>更新时间</p>
                     * @param _updateTime <p>更新时间</p>
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取<p>路由是否启用</p>
                     * @return Enabled <p>路由是否启用</p>
                     * 
                     */
                    bool GetEnabled() const;

                    /**
                     * 设置<p>路由是否启用</p>
                     * @param _enabled <p>路由是否启用</p>
                     * 
                     */
                    void SetEnabled(const bool& _enabled);

                    /**
                     * 判断参数 Enabled 是否已赋值
                     * @return Enabled 是否已赋值
                     * 
                     */
                    bool EnabledHasBeenSet() const;

                    /**
                     * 获取<p>关联实例所属UIN（根账号）</p>
                     * @return InstanceUin <p>关联实例所属UIN（根账号）</p>
                     * 
                     */
                    std::string GetInstanceUin() const;

                    /**
                     * 设置<p>关联实例所属UIN（根账号）</p>
                     * @param _instanceUin <p>关联实例所属UIN（根账号）</p>
                     * 
                     */
                    void SetInstanceUin(const std::string& _instanceUin);

                    /**
                     * 判断参数 InstanceUin 是否已赋值
                     * @return InstanceUin 是否已赋值
                     * 
                     */
                    bool InstanceUinHasBeenSet() const;

                    /**
                     * 获取<p>路由的扩展状态</p>
                     * @return ExtraState <p>路由的扩展状态</p>
                     * 
                     */
                    std::string GetExtraState() const;

                    /**
                     * 设置<p>路由的扩展状态</p>
                     * @param _extraState <p>路由的扩展状态</p>
                     * 
                     */
                    void SetExtraState(const std::string& _extraState);

                    /**
                     * 判断参数 ExtraState 是否已赋值
                     * @return ExtraState 是否已赋值
                     * 
                     */
                    bool ExtraStateHasBeenSet() const;

                    /**
                     * 获取<p>是否动态路由</p>
                     * @return IsBgp <p>是否动态路由</p>
                     * 
                     */
                    bool GetIsBgp() const;

                    /**
                     * 设置<p>是否动态路由</p>
                     * @param _isBgp <p>是否动态路由</p>
                     * 
                     */
                    void SetIsBgp(const bool& _isBgp);

                    /**
                     * 判断参数 IsBgp 是否已赋值
                     * @return IsBgp 是否已赋值
                     * 
                     */
                    bool IsBgpHasBeenSet() const;

                    /**
                     * 获取<p>路由优先级</p>
                     * @return RoutePriority <p>路由优先级</p>
                     * 
                     */
                    uint64_t GetRoutePriority() const;

                    /**
                     * 设置<p>路由优先级</p>
                     * @param _routePriority <p>路由优先级</p>
                     * 
                     */
                    void SetRoutePriority(const uint64_t& _routePriority);

                    /**
                     * 判断参数 RoutePriority 是否已赋值
                     * @return RoutePriority 是否已赋值
                     * 
                     */
                    bool RoutePriorityHasBeenSet() const;

                    /**
                     * 获取<p>下一跳扩展名称（关联实例的扩展名称）</p>
                     * @return InstanceExtraName <p>下一跳扩展名称（关联实例的扩展名称）</p>
                     * 
                     */
                    std::string GetInstanceExtraName() const;

                    /**
                     * 设置<p>下一跳扩展名称（关联实例的扩展名称）</p>
                     * @param _instanceExtraName <p>下一跳扩展名称（关联实例的扩展名称）</p>
                     * 
                     */
                    void SetInstanceExtraName(const std::string& _instanceExtraName);

                    /**
                     * 判断参数 InstanceExtraName 是否已赋值
                     * @return InstanceExtraName 是否已赋值
                     * 
                     */
                    bool InstanceExtraNameHasBeenSet() const;

                    /**
                     * 获取<p>实例类型</p>
                     * @return AliasType <p>实例类型</p>
                     * 
                     */
                    std::string GetAliasType() const;

                    /**
                     * 设置<p>实例类型</p>
                     * @param _aliasType <p>实例类型</p>
                     * 
                     */
                    void SetAliasType(const std::string& _aliasType);

                    /**
                     * 判断参数 AliasType 是否已赋值
                     * @return AliasType 是否已赋值
                     * 
                     */
                    bool AliasTypeHasBeenSet() const;

                    /**
                     * 获取<p>实例id</p>
                     * @return AliasInstanceId <p>实例id</p>
                     * 
                     */
                    std::string GetAliasInstanceId() const;

                    /**
                     * 设置<p>实例id</p>
                     * @param _aliasInstanceId <p>实例id</p>
                     * 
                     */
                    void SetAliasInstanceId(const std::string& _aliasInstanceId);

                    /**
                     * 判断参数 AliasInstanceId 是否已赋值
                     * @return AliasInstanceId 是否已赋值
                     * 
                     */
                    bool AliasInstanceIdHasBeenSet() const;

                    /**
                     * 获取<p>路由表ID</p>
                     * @return RouteTableId <p>路由表ID</p>
                     * 
                     */
                    std::string GetRouteTableId() const;

                    /**
                     * 设置<p>路由表ID</p>
                     * @param _routeTableId <p>路由表ID</p>
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
                     * 获取<p>AS-PATH</p>
                     * @return AsPath <p>AS-PATH</p>
                     * 
                     */
                    std::string GetAsPath() const;

                    /**
                     * 设置<p>AS-PATH</p>
                     * @param _asPath <p>AS-PATH</p>
                     * 
                     */
                    void SetAsPath(const std::string& _asPath);

                    /**
                     * 判断参数 AsPath 是否已赋值
                     * @return AsPath 是否已赋值
                     * 
                     */
                    bool AsPathHasBeenSet() const;

                private:

                    /**
                     * <p>路由策略ID</p>
                     */
                    std::string m_routeId;
                    bool m_routeIdHasBeenSet;

                    /**
                     * <p>目的端</p>
                     */
                    std::string m_destinationCidrBlock;
                    bool m_destinationCidrBlockHasBeenSet;

                    /**
                     * <p>下一跳类型（关联实例类型），所有类型：VPC、DIRECTCONNECT</p>
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * <p>下一跳（关联实例）</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>下一跳名称（关联实例名称）</p>
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * <p>下一跳所属地域（关联实例所属地域）</p>
                     */
                    std::string m_instanceRegion;
                    bool m_instanceRegionHasBeenSet;

                    /**
                     * <p>更新时间</p>
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * <p>路由是否启用</p>
                     */
                    bool m_enabled;
                    bool m_enabledHasBeenSet;

                    /**
                     * <p>关联实例所属UIN（根账号）</p>
                     */
                    std::string m_instanceUin;
                    bool m_instanceUinHasBeenSet;

                    /**
                     * <p>路由的扩展状态</p>
                     */
                    std::string m_extraState;
                    bool m_extraStateHasBeenSet;

                    /**
                     * <p>是否动态路由</p>
                     */
                    bool m_isBgp;
                    bool m_isBgpHasBeenSet;

                    /**
                     * <p>路由优先级</p>
                     */
                    uint64_t m_routePriority;
                    bool m_routePriorityHasBeenSet;

                    /**
                     * <p>下一跳扩展名称（关联实例的扩展名称）</p>
                     */
                    std::string m_instanceExtraName;
                    bool m_instanceExtraNameHasBeenSet;

                    /**
                     * <p>实例类型</p>
                     */
                    std::string m_aliasType;
                    bool m_aliasTypeHasBeenSet;

                    /**
                     * <p>实例id</p>
                     */
                    std::string m_aliasInstanceId;
                    bool m_aliasInstanceIdHasBeenSet;

                    /**
                     * <p>路由表ID</p>
                     */
                    std::string m_routeTableId;
                    bool m_routeTableIdHasBeenSet;

                    /**
                     * <p>AS-PATH</p>
                     */
                    std::string m_asPath;
                    bool m_asPathHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_CCNROUTE_H_
