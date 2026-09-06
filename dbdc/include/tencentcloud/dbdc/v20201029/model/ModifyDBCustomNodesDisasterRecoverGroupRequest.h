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

#ifndef TENCENTCLOUD_DBDC_V20201029_MODEL_MODIFYDBCUSTOMNODESDISASTERRECOVERGROUPREQUEST_H_
#define TENCENTCLOUD_DBDC_V20201029_MODEL_MODIFYDBCUSTOMNODESDISASTERRECOVERGROUPREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dbdc
    {
        namespace V20201029
        {
            namespace Model
            {
                /**
                * ModifyDBCustomNodesDisasterRecoverGroup请求参数结构体
                */
                class ModifyDBCustomNodesDisasterRecoverGroupRequest : public AbstractModel
                {
                public:
                    ModifyDBCustomNodesDisasterRecoverGroupRequest();
                    ~ModifyDBCustomNodesDisasterRecoverGroupRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>节点ID</p><p>入参限制：单次数量上限为100</p>
                     * @return NodeIds <p>节点ID</p><p>入参限制：单次数量上限为100</p>
                     * 
                     */
                    std::vector<std::string> GetNodeIds() const;

                    /**
                     * 设置<p>节点ID</p><p>入参限制：单次数量上限为100</p>
                     * @param _nodeIds <p>节点ID</p><p>入参限制：单次数量上限为100</p>
                     * 
                     */
                    void SetNodeIds(const std::vector<std::string>& _nodeIds);

                    /**
                     * 判断参数 NodeIds 是否已赋值
                     * @return NodeIds 是否已赋值
                     * 
                     */
                    bool NodeIdsHasBeenSet() const;

                    /**
                     * 获取<p>置放群组ID</p><p>入参限制：支持传一个ID</p>
                     * @return DisasterRecoverGroupIds <p>置放群组ID</p><p>入参限制：支持传一个ID</p>
                     * 
                     */
                    std::vector<std::string> GetDisasterRecoverGroupIds() const;

                    /**
                     * 设置<p>置放群组ID</p><p>入参限制：支持传一个ID</p>
                     * @param _disasterRecoverGroupIds <p>置放群组ID</p><p>入参限制：支持传一个ID</p>
                     * 
                     */
                    void SetDisasterRecoverGroupIds(const std::vector<std::string>& _disasterRecoverGroupIds);

                    /**
                     * 判断参数 DisasterRecoverGroupIds 是否已赋值
                     * @return DisasterRecoverGroupIds 是否已赋值
                     * 
                     */
                    bool DisasterRecoverGroupIdsHasBeenSet() const;

                    /**
                     * 获取<p>是否强制更换节点宿主机</p><p>枚举值：</p><ul><li>true： 表示允许节点更换宿主机，允许重启。本地盘节点不支持指定此参数。</li><li>false： 不允许节点更换宿主机，只在当前宿主机上加入置放群组。这可能导致更换置放群组失败。</li></ul><p>默认值：false</p>
                     * @return Force <p>是否强制更换节点宿主机</p><p>枚举值：</p><ul><li>true： 表示允许节点更换宿主机，允许重启。本地盘节点不支持指定此参数。</li><li>false： 不允许节点更换宿主机，只在当前宿主机上加入置放群组。这可能导致更换置放群组失败。</li></ul><p>默认值：false</p>
                     * 
                     */
                    bool GetForce() const;

                    /**
                     * 设置<p>是否强制更换节点宿主机</p><p>枚举值：</p><ul><li>true： 表示允许节点更换宿主机，允许重启。本地盘节点不支持指定此参数。</li><li>false： 不允许节点更换宿主机，只在当前宿主机上加入置放群组。这可能导致更换置放群组失败。</li></ul><p>默认值：false</p>
                     * @param _force <p>是否强制更换节点宿主机</p><p>枚举值：</p><ul><li>true： 表示允许节点更换宿主机，允许重启。本地盘节点不支持指定此参数。</li><li>false： 不允许节点更换宿主机，只在当前宿主机上加入置放群组。这可能导致更换置放群组失败。</li></ul><p>默认值：false</p>
                     * 
                     */
                    void SetForce(const bool& _force);

                    /**
                     * 判断参数 Force 是否已赋值
                     * @return Force 是否已赋值
                     * 
                     */
                    bool ForceHasBeenSet() const;

                private:

                    /**
                     * <p>节点ID</p><p>入参限制：单次数量上限为100</p>
                     */
                    std::vector<std::string> m_nodeIds;
                    bool m_nodeIdsHasBeenSet;

                    /**
                     * <p>置放群组ID</p><p>入参限制：支持传一个ID</p>
                     */
                    std::vector<std::string> m_disasterRecoverGroupIds;
                    bool m_disasterRecoverGroupIdsHasBeenSet;

                    /**
                     * <p>是否强制更换节点宿主机</p><p>枚举值：</p><ul><li>true： 表示允许节点更换宿主机，允许重启。本地盘节点不支持指定此参数。</li><li>false： 不允许节点更换宿主机，只在当前宿主机上加入置放群组。这可能导致更换置放群组失败。</li></ul><p>默认值：false</p>
                     */
                    bool m_force;
                    bool m_forceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBDC_V20201029_MODEL_MODIFYDBCUSTOMNODESDISASTERRECOVERGROUPREQUEST_H_
