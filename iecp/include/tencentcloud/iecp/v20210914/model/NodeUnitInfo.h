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

#ifndef TENCENTCLOUD_IECP_V20210914_MODEL_NODEUNITINFO_H_
#define TENCENTCLOUD_IECP_V20210914_MODEL_NODEUNITINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iecp/v20210914/model/NodeUnitNodeInfo.h>


namespace TencentCloud
{
    namespace Iecp
    {
        namespace V20210914
        {
            namespace Model
            {
                /**
                * NodeUnit信息
                */
                class NodeUnitInfo : public AbstractModel
                {
                public:
                    NodeUnitInfo();
                    ~NodeUnitInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取NodeUnitId
                     * @return Id NodeUnitId
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置NodeUnitId
                     * @param _id NodeUnitId
                     * 
                     */
                    void SetId(const uint64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取NodeUnit名称
                     * @return NodeUnitName NodeUnit名称
                     * 
                     */
                    std::string GetNodeUnitName() const;

                    /**
                     * 设置NodeUnit名称
                     * @param _nodeUnitName NodeUnit名称
                     * 
                     */
                    void SetNodeUnitName(const std::string& _nodeUnitName);

                    /**
                     * 判断参数 NodeUnitName 是否已赋值
                     * @return NodeUnitName 是否已赋值
                     * 
                     */
                    bool NodeUnitNameHasBeenSet() const;

                    /**
                     * 获取包含节点列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NodeList 包含节点列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<NodeUnitNodeInfo> GetNodeList() const;

                    /**
                     * 设置包含节点列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _nodeList 包含节点列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNodeList(const std::vector<NodeUnitNodeInfo>& _nodeList);

                    /**
                     * 判断参数 NodeList 是否已赋值
                     * @return NodeList 是否已赋值
                     * 
                     */
                    bool NodeListHasBeenSet() const;

                private:

                    /**
                     * NodeUnitId
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * NodeUnit名称
                     */
                    std::string m_nodeUnitName;
                    bool m_nodeUnitNameHasBeenSet;

                    /**
                     * 包含节点列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<NodeUnitNodeInfo> m_nodeList;
                    bool m_nodeListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IECP_V20210914_MODEL_NODEUNITINFO_H_
