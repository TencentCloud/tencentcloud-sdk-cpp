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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_CCNATTACHEDINSTANCE_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_CCNATTACHEDINSTANCE_H_

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
                * 云联网（CCN）关联实例（Instance）对象
                */
                class CcnAttachedInstance : public AbstractModel
                {
                public:
                    CcnAttachedInstance();
                    ~CcnAttachedInstance() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>云联网实例ID。</p>
                     * @return CcnId <p>云联网实例ID。</p>
                     * 
                     */
                    std::string GetCcnId() const;

                    /**
                     * 设置<p>云联网实例ID。</p>
                     * @param _ccnId <p>云联网实例ID。</p>
                     * 
                     */
                    void SetCcnId(const std::string& _ccnId);

                    /**
                     * 判断参数 CcnId 是否已赋值
                     * @return CcnId 是否已赋值
                     * 
                     */
                    bool CcnIdHasBeenSet() const;

                    /**
                     * 获取<p>关联实例类型：</p><li><code>VPC</code>：私有网络</li><li><code>DIRECTCONNECT</code>：专线网关</li><li><code>BMVPC</code>：黑石私有网络</li>
                     * @return InstanceType <p>关联实例类型：</p><li><code>VPC</code>：私有网络</li><li><code>DIRECTCONNECT</code>：专线网关</li><li><code>BMVPC</code>：黑石私有网络</li>
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置<p>关联实例类型：</p><li><code>VPC</code>：私有网络</li><li><code>DIRECTCONNECT</code>：专线网关</li><li><code>BMVPC</code>：黑石私有网络</li>
                     * @param _instanceType <p>关联实例类型：</p><li><code>VPC</code>：私有网络</li><li><code>DIRECTCONNECT</code>：专线网关</li><li><code>BMVPC</code>：黑石私有网络</li>
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
                     * 获取<p>关联实例ID。</p>
                     * @return InstanceId <p>关联实例ID。</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>关联实例ID。</p>
                     * @param _instanceId <p>关联实例ID。</p>
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
                     * 获取<p>关联实例名称。</p>
                     * @return InstanceName <p>关联实例名称。</p>
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置<p>关联实例名称。</p>
                     * @param _instanceName <p>关联实例名称。</p>
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
                     * 获取<p>关联实例所属大区，例如：ap-guangzhou。</p>
                     * @return InstanceRegion <p>关联实例所属大区，例如：ap-guangzhou。</p>
                     * 
                     */
                    std::string GetInstanceRegion() const;

                    /**
                     * 设置<p>关联实例所属大区，例如：ap-guangzhou。</p>
                     * @param _instanceRegion <p>关联实例所属大区，例如：ap-guangzhou。</p>
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
                     * 获取<p>关联实例所属UIN（根账号）。</p>
                     * @return InstanceUin <p>关联实例所属UIN（根账号）。</p>
                     * 
                     */
                    std::string GetInstanceUin() const;

                    /**
                     * 设置<p>关联实例所属UIN（根账号）。</p>
                     * @param _instanceUin <p>关联实例所属UIN（根账号）。</p>
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
                     * 获取<p>关联实例CIDR。</p>
                     * @return CidrBlock <p>关联实例CIDR。</p>
                     * 
                     */
                    std::vector<std::string> GetCidrBlock() const;

                    /**
                     * 设置<p>关联实例CIDR。</p>
                     * @param _cidrBlock <p>关联实例CIDR。</p>
                     * 
                     */
                    void SetCidrBlock(const std::vector<std::string>& _cidrBlock);

                    /**
                     * 判断参数 CidrBlock 是否已赋值
                     * @return CidrBlock 是否已赋值
                     * 
                     */
                    bool CidrBlockHasBeenSet() const;

                    /**
                     * 获取<p>关联实例状态：</p><li><code>PENDING</code>：申请中</li><li><code>ACTIVE</code>：已连接</li><li><code>EXPIRED</code>：已过期</li><li><code>REJECTED</code>：已拒绝</li><li><code>DELETED</code>：已删除</li><li><code>FAILED</code>：失败的（2小时后将异步强制解关联）</li><li><code>ATTACHING</code>：关联中</li><li><code>DETACHING</code>：解关联中</li><li><code>DETACHFAILED</code>：解关联失败（2小时后将异步强制解关联）</li>
                     * @return State <p>关联实例状态：</p><li><code>PENDING</code>：申请中</li><li><code>ACTIVE</code>：已连接</li><li><code>EXPIRED</code>：已过期</li><li><code>REJECTED</code>：已拒绝</li><li><code>DELETED</code>：已删除</li><li><code>FAILED</code>：失败的（2小时后将异步强制解关联）</li><li><code>ATTACHING</code>：关联中</li><li><code>DETACHING</code>：解关联中</li><li><code>DETACHFAILED</code>：解关联失败（2小时后将异步强制解关联）</li>
                     * 
                     */
                    std::string GetState() const;

                    /**
                     * 设置<p>关联实例状态：</p><li><code>PENDING</code>：申请中</li><li><code>ACTIVE</code>：已连接</li><li><code>EXPIRED</code>：已过期</li><li><code>REJECTED</code>：已拒绝</li><li><code>DELETED</code>：已删除</li><li><code>FAILED</code>：失败的（2小时后将异步强制解关联）</li><li><code>ATTACHING</code>：关联中</li><li><code>DETACHING</code>：解关联中</li><li><code>DETACHFAILED</code>：解关联失败（2小时后将异步强制解关联）</li>
                     * @param _state <p>关联实例状态：</p><li><code>PENDING</code>：申请中</li><li><code>ACTIVE</code>：已连接</li><li><code>EXPIRED</code>：已过期</li><li><code>REJECTED</code>：已拒绝</li><li><code>DELETED</code>：已删除</li><li><code>FAILED</code>：失败的（2小时后将异步强制解关联）</li><li><code>ATTACHING</code>：关联中</li><li><code>DETACHING</code>：解关联中</li><li><code>DETACHFAILED</code>：解关联失败（2小时后将异步强制解关联）</li>
                     * 
                     */
                    void SetState(const std::string& _state);

                    /**
                     * 判断参数 State 是否已赋值
                     * @return State 是否已赋值
                     * 
                     */
                    bool StateHasBeenSet() const;

                    /**
                     * 获取<p>关联时间。</p>
                     * @return AttachedTime <p>关联时间。</p>
                     * 
                     */
                    std::string GetAttachedTime() const;

                    /**
                     * 设置<p>关联时间。</p>
                     * @param _attachedTime <p>关联时间。</p>
                     * 
                     */
                    void SetAttachedTime(const std::string& _attachedTime);

                    /**
                     * 判断参数 AttachedTime 是否已赋值
                     * @return AttachedTime 是否已赋值
                     * 
                     */
                    bool AttachedTimeHasBeenSet() const;

                    /**
                     * 获取<p>云联网所属UIN（根账号）。</p>
                     * @return CcnUin <p>云联网所属UIN（根账号）。</p>
                     * 
                     */
                    std::string GetCcnUin() const;

                    /**
                     * 设置<p>云联网所属UIN（根账号）。</p>
                     * @param _ccnUin <p>云联网所属UIN（根账号）。</p>
                     * 
                     */
                    void SetCcnUin(const std::string& _ccnUin);

                    /**
                     * 判断参数 CcnUin 是否已赋值
                     * @return CcnUin 是否已赋值
                     * 
                     */
                    bool CcnUinHasBeenSet() const;

                    /**
                     * 获取<p>关联实例所属的大地域，如: CHINA_MAINLAND</p>
                     * @return InstanceArea <p>关联实例所属的大地域，如: CHINA_MAINLAND</p>
                     * 
                     */
                    std::string GetInstanceArea() const;

                    /**
                     * 设置<p>关联实例所属的大地域，如: CHINA_MAINLAND</p>
                     * @param _instanceArea <p>关联实例所属的大地域，如: CHINA_MAINLAND</p>
                     * 
                     */
                    void SetInstanceArea(const std::string& _instanceArea);

                    /**
                     * 判断参数 InstanceArea 是否已赋值
                     * @return InstanceArea 是否已赋值
                     * 
                     */
                    bool InstanceAreaHasBeenSet() const;

                    /**
                     * 获取<p>备注</p>
                     * @return Description <p>备注</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>备注</p>
                     * @param _description <p>备注</p>
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

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
                     * 获取<p>路由表名称</p>
                     * @return RouteTableName <p>路由表名称</p>
                     * 
                     */
                    std::string GetRouteTableName() const;

                    /**
                     * 设置<p>路由表名称</p>
                     * @param _routeTableName <p>路由表名称</p>
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
                     * 获取<p>别名类型</p>
                     * @return AliasType <p>别名类型</p>
                     * 
                     */
                    std::string GetAliasType() const;

                    /**
                     * 设置<p>别名类型</p>
                     * @param _aliasType <p>别名类型</p>
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
                     * 获取<p>别名ID</p>
                     * @return AliasInstanceId <p>别名ID</p>
                     * 
                     */
                    std::string GetAliasInstanceId() const;

                    /**
                     * 设置<p>别名ID</p>
                     * @param _aliasInstanceId <p>别名ID</p>
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
                     * <p>云联网实例ID。</p>
                     */
                    std::string m_ccnId;
                    bool m_ccnIdHasBeenSet;

                    /**
                     * <p>关联实例类型：</p><li><code>VPC</code>：私有网络</li><li><code>DIRECTCONNECT</code>：专线网关</li><li><code>BMVPC</code>：黑石私有网络</li>
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * <p>关联实例ID。</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>关联实例名称。</p>
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * <p>关联实例所属大区，例如：ap-guangzhou。</p>
                     */
                    std::string m_instanceRegion;
                    bool m_instanceRegionHasBeenSet;

                    /**
                     * <p>关联实例所属UIN（根账号）。</p>
                     */
                    std::string m_instanceUin;
                    bool m_instanceUinHasBeenSet;

                    /**
                     * <p>关联实例CIDR。</p>
                     */
                    std::vector<std::string> m_cidrBlock;
                    bool m_cidrBlockHasBeenSet;

                    /**
                     * <p>关联实例状态：</p><li><code>PENDING</code>：申请中</li><li><code>ACTIVE</code>：已连接</li><li><code>EXPIRED</code>：已过期</li><li><code>REJECTED</code>：已拒绝</li><li><code>DELETED</code>：已删除</li><li><code>FAILED</code>：失败的（2小时后将异步强制解关联）</li><li><code>ATTACHING</code>：关联中</li><li><code>DETACHING</code>：解关联中</li><li><code>DETACHFAILED</code>：解关联失败（2小时后将异步强制解关联）</li>
                     */
                    std::string m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * <p>关联时间。</p>
                     */
                    std::string m_attachedTime;
                    bool m_attachedTimeHasBeenSet;

                    /**
                     * <p>云联网所属UIN（根账号）。</p>
                     */
                    std::string m_ccnUin;
                    bool m_ccnUinHasBeenSet;

                    /**
                     * <p>关联实例所属的大地域，如: CHINA_MAINLAND</p>
                     */
                    std::string m_instanceArea;
                    bool m_instanceAreaHasBeenSet;

                    /**
                     * <p>备注</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>路由表ID</p>
                     */
                    std::string m_routeTableId;
                    bool m_routeTableIdHasBeenSet;

                    /**
                     * <p>路由表名称</p>
                     */
                    std::string m_routeTableName;
                    bool m_routeTableNameHasBeenSet;

                    /**
                     * <p>别名类型</p>
                     */
                    std::string m_aliasType;
                    bool m_aliasTypeHasBeenSet;

                    /**
                     * <p>别名ID</p>
                     */
                    std::string m_aliasInstanceId;
                    bool m_aliasInstanceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_CCNATTACHEDINSTANCE_H_
