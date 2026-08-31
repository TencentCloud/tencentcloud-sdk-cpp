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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_CCNROUTETABLEBROADCASTPOLICY_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_CCNROUTETABLEBROADCASTPOLICY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vpc/v20170312/model/CcnRouteBroadcastPolicyRouteCondition.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * 云联网路由传播策略
                */
                class CcnRouteTableBroadcastPolicy : public AbstractModel
                {
                public:
                    CcnRouteTableBroadcastPolicy();
                    ~CcnRouteTableBroadcastPolicy() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>路由条件</p>
                     * @return RouteConditions <p>路由条件</p>
                     * 
                     */
                    std::vector<CcnRouteBroadcastPolicyRouteCondition> GetRouteConditions() const;

                    /**
                     * 设置<p>路由条件</p>
                     * @param _routeConditions <p>路由条件</p>
                     * 
                     */
                    void SetRouteConditions(const std::vector<CcnRouteBroadcastPolicyRouteCondition>& _routeConditions);

                    /**
                     * 判断参数 RouteConditions 是否已赋值
                     * @return RouteConditions 是否已赋值
                     * 
                     */
                    bool RouteConditionsHasBeenSet() const;

                    /**
                     * 获取<p>传播条件</p>
                     * @return BroadcastConditions <p>传播条件</p>
                     * 
                     */
                    std::vector<CcnRouteBroadcastPolicyRouteCondition> GetBroadcastConditions() const;

                    /**
                     * 设置<p>传播条件</p>
                     * @param _broadcastConditions <p>传播条件</p>
                     * 
                     */
                    void SetBroadcastConditions(const std::vector<CcnRouteBroadcastPolicyRouteCondition>& _broadcastConditions);

                    /**
                     * 判断参数 BroadcastConditions 是否已赋值
                     * @return BroadcastConditions 是否已赋值
                     * 
                     */
                    bool BroadcastConditionsHasBeenSet() const;

                    /**
                     * 获取<p>路由行为，<code>accept</code> 允许，<code>drop</code> 拒绝</p>
                     * @return Action <p>路由行为，<code>accept</code> 允许，<code>drop</code> 拒绝</p>
                     * 
                     */
                    std::string GetAction() const;

                    /**
                     * 设置<p>路由行为，<code>accept</code> 允许，<code>drop</code> 拒绝</p>
                     * @param _action <p>路由行为，<code>accept</code> 允许，<code>drop</code> 拒绝</p>
                     * 
                     */
                    void SetAction(const std::string& _action);

                    /**
                     * 判断参数 Action 是否已赋值
                     * @return Action 是否已赋值
                     * 
                     */
                    bool ActionHasBeenSet() const;

                    /**
                     * 获取<p>策略描述</p>
                     * @return Description <p>策略描述</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>策略描述</p>
                     * @param _description <p>策略描述</p>
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
                     * 获取<p>as-path操作</p>
                     * @return OperateAsPath <p>as-path操作</p>
                     * 
                     */
                    std::string GetOperateAsPath() const;

                    /**
                     * 设置<p>as-path操作</p>
                     * @param _operateAsPath <p>as-path操作</p>
                     * 
                     */
                    void SetOperateAsPath(const std::string& _operateAsPath);

                    /**
                     * 判断参数 OperateAsPath 是否已赋值
                     * @return OperateAsPath 是否已赋值
                     * 
                     */
                    bool OperateAsPathHasBeenSet() const;

                    /**
                     * 获取<p>as-path操作模式</p>
                     * @return AsPathOperateMode <p>as-path操作模式</p>
                     * 
                     */
                    std::string GetAsPathOperateMode() const;

                    /**
                     * 设置<p>as-path操作模式</p>
                     * @param _asPathOperateMode <p>as-path操作模式</p>
                     * 
                     */
                    void SetAsPathOperateMode(const std::string& _asPathOperateMode);

                    /**
                     * 判断参数 AsPathOperateMode 是否已赋值
                     * @return AsPathOperateMode 是否已赋值
                     * 
                     */
                    bool AsPathOperateModeHasBeenSet() const;

                    /**
                     * 获取<p>community操作</p>
                     * @return OperateCommunitySet <p>community操作</p>
                     * 
                     */
                    std::vector<std::string> GetOperateCommunitySet() const;

                    /**
                     * 设置<p>community操作</p>
                     * @param _operateCommunitySet <p>community操作</p>
                     * 
                     */
                    void SetOperateCommunitySet(const std::vector<std::string>& _operateCommunitySet);

                    /**
                     * 判断参数 OperateCommunitySet 是否已赋值
                     * @return OperateCommunitySet 是否已赋值
                     * 
                     */
                    bool OperateCommunitySetHasBeenSet() const;

                    /**
                     * 获取<p>community操作模式</p>
                     * @return CommunityOperateMode <p>community操作模式</p>
                     * 
                     */
                    std::string GetCommunityOperateMode() const;

                    /**
                     * 设置<p>community操作模式</p>
                     * @param _communityOperateMode <p>community操作模式</p>
                     * 
                     */
                    void SetCommunityOperateMode(const std::string& _communityOperateMode);

                    /**
                     * 判断参数 CommunityOperateMode 是否已赋值
                     * @return CommunityOperateMode 是否已赋值
                     * 
                     */
                    bool CommunityOperateModeHasBeenSet() const;

                private:

                    /**
                     * <p>路由条件</p>
                     */
                    std::vector<CcnRouteBroadcastPolicyRouteCondition> m_routeConditions;
                    bool m_routeConditionsHasBeenSet;

                    /**
                     * <p>传播条件</p>
                     */
                    std::vector<CcnRouteBroadcastPolicyRouteCondition> m_broadcastConditions;
                    bool m_broadcastConditionsHasBeenSet;

                    /**
                     * <p>路由行为，<code>accept</code> 允许，<code>drop</code> 拒绝</p>
                     */
                    std::string m_action;
                    bool m_actionHasBeenSet;

                    /**
                     * <p>策略描述</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>as-path操作</p>
                     */
                    std::string m_operateAsPath;
                    bool m_operateAsPathHasBeenSet;

                    /**
                     * <p>as-path操作模式</p>
                     */
                    std::string m_asPathOperateMode;
                    bool m_asPathOperateModeHasBeenSet;

                    /**
                     * <p>community操作</p>
                     */
                    std::vector<std::string> m_operateCommunitySet;
                    bool m_operateCommunitySetHasBeenSet;

                    /**
                     * <p>community操作模式</p>
                     */
                    std::string m_communityOperateMode;
                    bool m_communityOperateModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_CCNROUTETABLEBROADCASTPOLICY_H_
