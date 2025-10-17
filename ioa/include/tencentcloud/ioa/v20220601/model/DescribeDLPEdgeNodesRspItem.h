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

#ifndef TENCENTCLOUD_IOA_V20220601_MODEL_DESCRIBEDLPEDGENODESRSPITEM_H_
#define TENCENTCLOUD_IOA_V20220601_MODEL_DESCRIBEDLPEDGENODESRSPITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ioa
    {
        namespace V20220601
        {
            namespace Model
            {
                /**
                * 边缘节点信息
                */
                class DescribeDLPEdgeNodesRspItem : public AbstractModel
                {
                public:
                    DescribeDLPEdgeNodesRspItem();
                    ~DescribeDLPEdgeNodesRspItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取自增id，数据库中唯一
                     * @return Id 自增id，数据库中唯一
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置自增id，数据库中唯一
                     * @param _id 自增id，数据库中唯一
                     * 
                     */
                    void SetId(const int64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取节点分组唯一id
                     * @return GroupId 节点分组唯一id
                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置节点分组唯一id
                     * @param _groupId 节点分组唯一id
                     * 
                     */
                    void SetGroupId(const std::string& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     * 
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取节点id
                     * @return EdgeNodeId 节点id
                     * 
                     */
                    std::string GetEdgeNodeId() const;

                    /**
                     * 设置节点id
                     * @param _edgeNodeId 节点id
                     * 
                     */
                    void SetEdgeNodeId(const std::string& _edgeNodeId);

                    /**
                     * 判断参数 EdgeNodeId 是否已赋值
                     * @return EdgeNodeId 是否已赋值
                     * 
                     */
                    bool EdgeNodeIdHasBeenSet() const;

                    /**
                     * 获取节点名称
                     * @return EdgeNodeName 节点名称
                     * 
                     */
                    std::string GetEdgeNodeName() const;

                    /**
                     * 设置节点名称
                     * @param _edgeNodeName 节点名称
                     * 
                     */
                    void SetEdgeNodeName(const std::string& _edgeNodeName);

                    /**
                     * 判断参数 EdgeNodeName 是否已赋值
                     * @return EdgeNodeName 是否已赋值
                     * 
                     */
                    bool EdgeNodeNameHasBeenSet() const;

                    /**
                     * 获取是否活跃/连通
                     * @return IsActive 是否活跃/连通
                     * 
                     */
                    bool GetIsActive() const;

                    /**
                     * 设置是否活跃/连通
                     * @param _isActive 是否活跃/连通
                     * 
                     */
                    void SetIsActive(const bool& _isActive);

                    /**
                     * 判断参数 IsActive 是否已赋值
                     * @return IsActive 是否已赋值
                     * 
                     */
                    bool IsActiveHasBeenSet() const;

                    /**
                     * 获取节点分组名称
                     * @return GroupName 节点分组名称
                     * 
                     */
                    std::string GetGroupName() const;

                    /**
                     * 设置节点分组名称
                     * @param _groupName 节点分组名称
                     * 
                     */
                    void SetGroupName(const std::string& _groupName);

                    /**
                     * 判断参数 GroupName 是否已赋值
                     * @return GroupName 是否已赋值
                     * 
                     */
                    bool GroupNameHasBeenSet() const;

                    /**
                     * 获取节点IP
                     * @return Ip 节点IP
                     * 
                     */
                    std::string GetIp() const;

                    /**
                     * 设置节点IP
                     * @param _ip 节点IP
                     * 
                     */
                    void SetIp(const std::string& _ip);

                    /**
                     * 判断参数 Ip 是否已赋值
                     * @return Ip 是否已赋值
                     * 
                     */
                    bool IpHasBeenSet() const;

                    /**
                     * 获取节点版本
                     * @return Version 节点版本
                     * 
                     */
                    std::string GetVersion() const;

                    /**
                     * 设置节点版本
                     * @param _version 节点版本
                     * 
                     */
                    void SetVersion(const std::string& _version);

                    /**
                     * 判断参数 Version 是否已赋值
                     * @return Version 是否已赋值
                     * 
                     */
                    bool VersionHasBeenSet() const;

                    /**
                     * 获取是否支持升级连接器
                     * @return IsUpgradeEnable 是否支持升级连接器
                     * 
                     */
                    bool GetIsUpgradeEnable() const;

                    /**
                     * 设置是否支持升级连接器
                     * @param _isUpgradeEnable 是否支持升级连接器
                     * 
                     */
                    void SetIsUpgradeEnable(const bool& _isUpgradeEnable);

                    /**
                     * 判断参数 IsUpgradeEnable 是否已赋值
                     * @return IsUpgradeEnable 是否已赋值
                     * 
                     */
                    bool IsUpgradeEnableHasBeenSet() const;

                    /**
                     * 获取升级状态: 0(升级中) , 1(升级失败) 或 2(升级成功)
                     * @return UpgradeStatus 升级状态: 0(升级中) , 1(升级失败) 或 2(升级成功)
                     * 
                     */
                    int64_t GetUpgradeStatus() const;

                    /**
                     * 设置升级状态: 0(升级中) , 1(升级失败) 或 2(升级成功)
                     * @param _upgradeStatus 升级状态: 0(升级中) , 1(升级失败) 或 2(升级成功)
                     * 
                     */
                    void SetUpgradeStatus(const int64_t& _upgradeStatus);

                    /**
                     * 判断参数 UpgradeStatus 是否已赋值
                     * @return UpgradeStatus 是否已赋值
                     * 
                     */
                    bool UpgradeStatusHasBeenSet() const;

                    /**
                     * 获取升级状态描述
                     * @return UpgradeDescription 升级状态描述
                     * 
                     */
                    std::string GetUpgradeDescription() const;

                    /**
                     * 设置升级状态描述
                     * @param _upgradeDescription 升级状态描述
                     * 
                     */
                    void SetUpgradeDescription(const std::string& _upgradeDescription);

                    /**
                     * 判断参数 UpgradeDescription 是否已赋值
                     * @return UpgradeDescription 是否已赋值
                     * 
                     */
                    bool UpgradeDescriptionHasBeenSet() const;

                    /**
                     * 获取规则版本
                     * @return RuleVersion 规则版本
                     * 
                     */
                    std::string GetRuleVersion() const;

                    /**
                     * 设置规则版本
                     * @param _ruleVersion 规则版本
                     * 
                     */
                    void SetRuleVersion(const std::string& _ruleVersion);

                    /**
                     * 判断参数 RuleVersion 是否已赋值
                     * @return RuleVersion 是否已赋值
                     * 
                     */
                    bool RuleVersionHasBeenSet() const;

                private:

                    /**
                     * 自增id，数据库中唯一
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 节点分组唯一id
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * 节点id
                     */
                    std::string m_edgeNodeId;
                    bool m_edgeNodeIdHasBeenSet;

                    /**
                     * 节点名称
                     */
                    std::string m_edgeNodeName;
                    bool m_edgeNodeNameHasBeenSet;

                    /**
                     * 是否活跃/连通
                     */
                    bool m_isActive;
                    bool m_isActiveHasBeenSet;

                    /**
                     * 节点分组名称
                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                    /**
                     * 节点IP
                     */
                    std::string m_ip;
                    bool m_ipHasBeenSet;

                    /**
                     * 节点版本
                     */
                    std::string m_version;
                    bool m_versionHasBeenSet;

                    /**
                     * 是否支持升级连接器
                     */
                    bool m_isUpgradeEnable;
                    bool m_isUpgradeEnableHasBeenSet;

                    /**
                     * 升级状态: 0(升级中) , 1(升级失败) 或 2(升级成功)
                     */
                    int64_t m_upgradeStatus;
                    bool m_upgradeStatusHasBeenSet;

                    /**
                     * 升级状态描述
                     */
                    std::string m_upgradeDescription;
                    bool m_upgradeDescriptionHasBeenSet;

                    /**
                     * 规则版本
                     */
                    std::string m_ruleVersion;
                    bool m_ruleVersionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOA_V20220601_MODEL_DESCRIBEDLPEDGENODESRSPITEM_H_
