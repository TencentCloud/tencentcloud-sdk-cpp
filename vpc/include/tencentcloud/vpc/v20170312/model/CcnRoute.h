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
                     * 获取路由策略ID
                     * @return RouteId 路由策略ID
                     * 
                     */
                    std::string GetRouteId() const;

                    /**
                     * 设置路由策略ID
                     * @param _routeId 路由策略ID
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
                     * 获取目的端
                     * @return DestinationCidrBlock 目的端
                     * 
                     */
                    std::string GetDestinationCidrBlock() const;

                    /**
                     * 设置目的端
                     * @param _destinationCidrBlock 目的端
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
                     * 获取下一跳类型（关联实例类型），所有类型：VPC、DIRECTCONNECT
                     * @return InstanceType 下一跳类型（关联实例类型），所有类型：VPC、DIRECTCONNECT
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置下一跳类型（关联实例类型），所有类型：VPC、DIRECTCONNECT
                     * @param _instanceType 下一跳类型（关联实例类型），所有类型：VPC、DIRECTCONNECT
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
                     * 获取下一跳（关联实例）
                     * @return InstanceId 下一跳（关联实例）
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置下一跳（关联实例）
                     * @param _instanceId 下一跳（关联实例）
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
                     * 获取下一跳名称（关联实例名称）
                     * @return InstanceName 下一跳名称（关联实例名称）
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置下一跳名称（关联实例名称）
                     * @param _instanceName 下一跳名称（关联实例名称）
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
                     * 获取下一跳所属地域（关联实例所属地域）
                     * @return InstanceRegion 下一跳所属地域（关联实例所属地域）
                     * 
                     */
                    std::string GetInstanceRegion() const;

                    /**
                     * 设置下一跳所属地域（关联实例所属地域）
                     * @param _instanceRegion 下一跳所属地域（关联实例所属地域）
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
                     * 获取更新时间
                     * @return UpdateTime 更新时间
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置更新时间
                     * @param _updateTime 更新时间
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
                     * 获取路由是否启用
                     * @return Enabled 路由是否启用
                     * 
                     */
                    bool GetEnabled() const;

                    /**
                     * 设置路由是否启用
                     * @param _enabled 路由是否启用
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
                     * 获取关联实例所属UIN（根账号）
                     * @return InstanceUin 关联实例所属UIN（根账号）
                     * 
                     */
                    std::string GetInstanceUin() const;

                    /**
                     * 设置关联实例所属UIN（根账号）
                     * @param _instanceUin 关联实例所属UIN（根账号）
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
                     * 获取路由的扩展状态
                     * @return ExtraState 路由的扩展状态
                     * 
                     */
                    std::string GetExtraState() const;

                    /**
                     * 设置路由的扩展状态
                     * @param _extraState 路由的扩展状态
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
                     * 获取是否动态路由
                     * @return IsBgp 是否动态路由
                     * 
                     */
                    bool GetIsBgp() const;

                    /**
                     * 设置是否动态路由
                     * @param _isBgp 是否动态路由
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
                     * 获取路由优先级
                     * @return RoutePriority 路由优先级
                     * 
                     */
                    uint64_t GetRoutePriority() const;

                    /**
                     * 设置路由优先级
                     * @param _routePriority 路由优先级
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
                     * 获取下一跳扩展名称（关联实例的扩展名称）
                     * @return InstanceExtraName 下一跳扩展名称（关联实例的扩展名称）
                     * 
                     */
                    std::string GetInstanceExtraName() const;

                    /**
                     * 设置下一跳扩展名称（关联实例的扩展名称）
                     * @param _instanceExtraName 下一跳扩展名称（关联实例的扩展名称）
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
                     * 获取实例类型
                     * @return AliasType 实例类型
                     * 
                     */
                    std::string GetAliasType() const;

                    /**
                     * 设置实例类型
                     * @param _aliasType 实例类型
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
                     * 获取实例id
                     * @return AliasInstanceId 实例id
                     * 
                     */
                    std::string GetAliasInstanceId() const;

                    /**
                     * 设置实例id
                     * @param _aliasInstanceId 实例id
                     * 
                     */
                    void SetAliasInstanceId(const std::string& _aliasInstanceId);

                    /**
                     * 判断参数 AliasInstanceId 是否已赋值
                     * @return AliasInstanceId 是否已赋值
                     * 
                     */
                    bool AliasInstanceIdHasBeenSet() const;

                private:

                    /**
                     * 路由策略ID
                     */
                    std::string m_routeId;
                    bool m_routeIdHasBeenSet;

                    /**
                     * 目的端
                     */
                    std::string m_destinationCidrBlock;
                    bool m_destinationCidrBlockHasBeenSet;

                    /**
                     * 下一跳类型（关联实例类型），所有类型：VPC、DIRECTCONNECT
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * 下一跳（关联实例）
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 下一跳名称（关联实例名称）
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * 下一跳所属地域（关联实例所属地域）
                     */
                    std::string m_instanceRegion;
                    bool m_instanceRegionHasBeenSet;

                    /**
                     * 更新时间
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 路由是否启用
                     */
                    bool m_enabled;
                    bool m_enabledHasBeenSet;

                    /**
                     * 关联实例所属UIN（根账号）
                     */
                    std::string m_instanceUin;
                    bool m_instanceUinHasBeenSet;

                    /**
                     * 路由的扩展状态
                     */
                    std::string m_extraState;
                    bool m_extraStateHasBeenSet;

                    /**
                     * 是否动态路由
                     */
                    bool m_isBgp;
                    bool m_isBgpHasBeenSet;

                    /**
                     * 路由优先级
                     */
                    uint64_t m_routePriority;
                    bool m_routePriorityHasBeenSet;

                    /**
                     * 下一跳扩展名称（关联实例的扩展名称）
                     */
                    std::string m_instanceExtraName;
                    bool m_instanceExtraNameHasBeenSet;

                    /**
                     * 实例类型
                     */
                    std::string m_aliasType;
                    bool m_aliasTypeHasBeenSet;

                    /**
                     * 实例id
                     */
                    std::string m_aliasInstanceId;
                    bool m_aliasInstanceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_CCNROUTE_H_
