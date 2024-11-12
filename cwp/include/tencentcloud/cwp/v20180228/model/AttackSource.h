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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_ATTACKSOURCE_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_ATTACKSOURCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/AttackSourceNode.h>
#include <tencentcloud/cwp/v20180228/model/AttackSourceEdge.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * 攻击溯源
                */
                class AttackSource : public AbstractModel
                {
                public:
                    AttackSource();
                    ~AttackSource() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取攻击溯源节点描述
                     * @return Nodes 攻击溯源节点描述
                     * 
                     */
                    std::vector<AttackSourceNode> GetNodes() const;

                    /**
                     * 设置攻击溯源节点描述
                     * @param _nodes 攻击溯源节点描述
                     * 
                     */
                    void SetNodes(const std::vector<AttackSourceNode>& _nodes);

                    /**
                     * 判断参数 Nodes 是否已赋值
                     * @return Nodes 是否已赋值
                     * 
                     */
                    bool NodesHasBeenSet() const;

                    /**
                     * 获取攻击溯源节点路径
                     * @return Edges 攻击溯源节点路径
                     * 
                     */
                    std::vector<AttackSourceEdge> GetEdges() const;

                    /**
                     * 设置攻击溯源节点路径
                     * @param _edges 攻击溯源节点路径
                     * 
                     */
                    void SetEdges(const std::vector<AttackSourceEdge>& _edges);

                    /**
                     * 判断参数 Edges 是否已赋值
                     * @return Edges 是否已赋值
                     * 
                     */
                    bool EdgesHasBeenSet() const;

                    /**
                     * 获取请求节点相关事件详情的参数
                     * @return EventInfoParam 请求节点相关事件详情的参数
                     * 
                     */
                    std::string GetEventInfoParam() const;

                    /**
                     * 设置请求节点相关事件详情的参数
                     * @param _eventInfoParam 请求节点相关事件详情的参数
                     * 
                     */
                    void SetEventInfoParam(const std::string& _eventInfoParam);

                    /**
                     * 判断参数 EventInfoParam 是否已赋值
                     * @return EventInfoParam 是否已赋值
                     * 
                     */
                    bool EventInfoParamHasBeenSet() const;

                private:

                    /**
                     * 攻击溯源节点描述
                     */
                    std::vector<AttackSourceNode> m_nodes;
                    bool m_nodesHasBeenSet;

                    /**
                     * 攻击溯源节点路径
                     */
                    std::vector<AttackSourceEdge> m_edges;
                    bool m_edgesHasBeenSet;

                    /**
                     * 请求节点相关事件详情的参数
                     */
                    std::string m_eventInfoParam;
                    bool m_eventInfoParamHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_ATTACKSOURCE_H_
