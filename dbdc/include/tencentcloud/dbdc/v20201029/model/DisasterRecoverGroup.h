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

#ifndef TENCENTCLOUD_DBDC_V20201029_MODEL_DISASTERRECOVERGROUP_H_
#define TENCENTCLOUD_DBDC_V20201029_MODEL_DISASTERRECOVERGROUP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dbdc/v20201029/model/Tag.h>


namespace TencentCloud
{
    namespace Dbdc
    {
        namespace V20201029
        {
            namespace Model
            {
                /**
                * DB Custom 置放群组信息。
                */
                class DisasterRecoverGroup : public AbstractModel
                {
                public:
                    DisasterRecoverGroup();
                    ~DisasterRecoverGroup() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>置放群组ID</p>
                     * @return DisasterRecoverGroupId <p>置放群组ID</p>
                     * 
                     */
                    std::string GetDisasterRecoverGroupId() const;

                    /**
                     * 设置<p>置放群组ID</p>
                     * @param _disasterRecoverGroupId <p>置放群组ID</p>
                     * 
                     */
                    void SetDisasterRecoverGroupId(const std::string& _disasterRecoverGroupId);

                    /**
                     * 判断参数 DisasterRecoverGroupId 是否已赋值
                     * @return DisasterRecoverGroupId 是否已赋值
                     * 
                     */
                    bool DisasterRecoverGroupIdHasBeenSet() const;

                    /**
                     * 获取<p>置放群组名称</p>
                     * @return Name <p>置放群组名称</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>置放群组名称</p>
                     * @param _name <p>置放群组名称</p>
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
                     * 获取<p>置放群组类型</p><p>枚举值：</p><ul><li>HOST： 物理机</li></ul>
                     * @return Type <p>置放群组类型</p><p>枚举值：</p><ul><li>HOST： 物理机</li></ul>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>置放群组类型</p><p>枚举值：</p><ul><li>HOST： 物理机</li></ul>
                     * @param _type <p>置放群组类型</p><p>枚举值：</p><ul><li>HOST： 物理机</li></ul>
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取<p>置放群组状态</p><p>枚举值：</p><ul><li>Creating： 创建中</li><li>Available： 正常可使用</li><li>CreateFailed： 创建失败</li><li>Deleting： 删除中</li><li>Modifying： 变更中</li></ul>
                     * @return Status <p>置放群组状态</p><p>枚举值：</p><ul><li>Creating： 创建中</li><li>Available： 正常可使用</li><li>CreateFailed： 创建失败</li><li>Deleting： 删除中</li><li>Modifying： 变更中</li></ul>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>置放群组状态</p><p>枚举值：</p><ul><li>Creating： 创建中</li><li>Available： 正常可使用</li><li>CreateFailed： 创建失败</li><li>Deleting： 删除中</li><li>Modifying： 变更中</li></ul>
                     * @param _status <p>置放群组状态</p><p>枚举值：</p><ul><li>Creating： 创建中</li><li>Available： 正常可使用</li><li>CreateFailed： 创建失败</li><li>Deleting： 删除中</li><li>Modifying： 变更中</li></ul>
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>置放群组内最大容纳节点数</p>
                     * @return NodeQuotaTotal <p>置放群组内最大容纳节点数</p>
                     * 
                     */
                    uint64_t GetNodeQuotaTotal() const;

                    /**
                     * 设置<p>置放群组内最大容纳节点数</p>
                     * @param _nodeQuotaTotal <p>置放群组内最大容纳节点数</p>
                     * 
                     */
                    void SetNodeQuotaTotal(const uint64_t& _nodeQuotaTotal);

                    /**
                     * 判断参数 NodeQuotaTotal 是否已赋值
                     * @return NodeQuotaTotal 是否已赋值
                     * 
                     */
                    bool NodeQuotaTotalHasBeenSet() const;

                    /**
                     * 获取<p>置放群组内当前节点数</p>
                     * @return CurrentNum <p>置放群组内当前节点数</p>
                     * 
                     */
                    uint64_t GetCurrentNum() const;

                    /**
                     * 设置<p>置放群组内当前节点数</p>
                     * @param _currentNum <p>置放群组内当前节点数</p>
                     * 
                     */
                    void SetCurrentNum(const uint64_t& _currentNum);

                    /**
                     * 判断参数 CurrentNum 是否已赋值
                     * @return CurrentNum 是否已赋值
                     * 
                     */
                    bool CurrentNumHasBeenSet() const;

                    /**
                     * 获取<p>亲和度</p><p>取值范围：[1, 10]</p>
                     * @return Affinity <p>亲和度</p><p>取值范围：[1, 10]</p>
                     * 
                     */
                    uint64_t GetAffinity() const;

                    /**
                     * 设置<p>亲和度</p><p>取值范围：[1, 10]</p>
                     * @param _affinity <p>亲和度</p><p>取值范围：[1, 10]</p>
                     * 
                     */
                    void SetAffinity(const uint64_t& _affinity);

                    /**
                     * 判断参数 Affinity 是否已赋值
                     * @return Affinity 是否已赋值
                     * 
                     */
                    bool AffinityHasBeenSet() const;

                    /**
                     * 获取<p>置放群组策略</p><p>枚举值：</p><ul><li>SPREAD： 分散置放群组</li></ul>
                     * @return Strategy <p>置放群组策略</p><p>枚举值：</p><ul><li>SPREAD： 分散置放群组</li></ul>
                     * 
                     */
                    std::string GetStrategy() const;

                    /**
                     * 设置<p>置放群组策略</p><p>枚举值：</p><ul><li>SPREAD： 分散置放群组</li></ul>
                     * @param _strategy <p>置放群组策略</p><p>枚举值：</p><ul><li>SPREAD： 分散置放群组</li></ul>
                     * 
                     */
                    void SetStrategy(const std::string& _strategy);

                    /**
                     * 判断参数 Strategy 是否已赋值
                     * @return Strategy 是否已赋值
                     * 
                     */
                    bool StrategyHasBeenSet() const;

                    /**
                     * 获取<p>创建时间</p>
                     * @return CreatedTime <p>创建时间</p>
                     * 
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置<p>创建时间</p>
                     * @param _createdTime <p>创建时间</p>
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
                     * 获取<p>标签信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Tags <p>标签信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置<p>标签信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tags <p>标签信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取<p>置放群组内 DB Custom 节点数量</p>
                     * @return NodeIds <p>置放群组内 DB Custom 节点数量</p>
                     * 
                     */
                    std::vector<std::string> GetNodeIds() const;

                    /**
                     * 设置<p>置放群组内 DB Custom 节点数量</p>
                     * @param _nodeIds <p>置放群组内 DB Custom 节点数量</p>
                     * 
                     */
                    void SetNodeIds(const std::vector<std::string>& _nodeIds);

                    /**
                     * 判断参数 NodeIds 是否已赋值
                     * @return NodeIds 是否已赋值
                     * 
                     */
                    bool NodeIdsHasBeenSet() const;

                private:

                    /**
                     * <p>置放群组ID</p>
                     */
                    std::string m_disasterRecoverGroupId;
                    bool m_disasterRecoverGroupIdHasBeenSet;

                    /**
                     * <p>置放群组名称</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>置放群组类型</p><p>枚举值：</p><ul><li>HOST： 物理机</li></ul>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>置放群组状态</p><p>枚举值：</p><ul><li>Creating： 创建中</li><li>Available： 正常可使用</li><li>CreateFailed： 创建失败</li><li>Deleting： 删除中</li><li>Modifying： 变更中</li></ul>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>置放群组内最大容纳节点数</p>
                     */
                    uint64_t m_nodeQuotaTotal;
                    bool m_nodeQuotaTotalHasBeenSet;

                    /**
                     * <p>置放群组内当前节点数</p>
                     */
                    uint64_t m_currentNum;
                    bool m_currentNumHasBeenSet;

                    /**
                     * <p>亲和度</p><p>取值范围：[1, 10]</p>
                     */
                    uint64_t m_affinity;
                    bool m_affinityHasBeenSet;

                    /**
                     * <p>置放群组策略</p><p>枚举值：</p><ul><li>SPREAD： 分散置放群组</li></ul>
                     */
                    std::string m_strategy;
                    bool m_strategyHasBeenSet;

                    /**
                     * <p>创建时间</p>
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * <p>标签信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * <p>置放群组内 DB Custom 节点数量</p>
                     */
                    std::vector<std::string> m_nodeIds;
                    bool m_nodeIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBDC_V20201029_MODEL_DISASTERRECOVERGROUP_H_
