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

#ifndef TENCENTCLOUD_CDWPG_V20201230_MODEL_INSTANCENODE_H_
#define TENCENTCLOUD_CDWPG_V20201230_MODEL_INSTANCENODE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdwpg
    {
        namespace V20201230
        {
            namespace Model
            {
                /**
                * Instance node
                */
                class InstanceNode : public AbstractModel
                {
                public:
                    InstanceNode();
                    ~InstanceNode() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取id
                     * @return NodeId id
                     * 
                     */
                    int64_t GetNodeId() const;

                    /**
                     * 设置id
                     * @param _nodeId id
                     * 
                     */
                    void SetNodeId(const int64_t& _nodeId);

                    /**
                     * 判断参数 NodeId 是否已赋值
                     * @return NodeId 是否已赋值
                     * 
                     */
                    bool NodeIdHasBeenSet() const;

                    /**
                     * 获取cn
                     * @return NodeType cn
                     * 
                     */
                    std::string GetNodeType() const;

                    /**
                     * 设置cn
                     * @param _nodeType cn
                     * 
                     */
                    void SetNodeType(const std::string& _nodeType);

                    /**
                     * 判断参数 NodeType 是否已赋值
                     * @return NodeType 是否已赋值
                     * 
                     */
                    bool NodeTypeHasBeenSet() const;

                    /**
                     * 获取ip
                     * @return NodeIp ip
                     * 
                     */
                    std::string GetNodeIp() const;

                    /**
                     * 设置ip
                     * @param _nodeIp ip
                     * 
                     */
                    void SetNodeIp(const std::string& _nodeIp);

                    /**
                     * 判断参数 NodeIp 是否已赋值
                     * @return NodeIp 是否已赋值
                     * 
                     */
                    bool NodeIpHasBeenSet() const;

                private:

                    /**
                     * id
                     */
                    int64_t m_nodeId;
                    bool m_nodeIdHasBeenSet;

                    /**
                     * cn
                     */
                    std::string m_nodeType;
                    bool m_nodeTypeHasBeenSet;

                    /**
                     * ip
                     */
                    std::string m_nodeIp;
                    bool m_nodeIpHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWPG_V20201230_MODEL_INSTANCENODE_H_
