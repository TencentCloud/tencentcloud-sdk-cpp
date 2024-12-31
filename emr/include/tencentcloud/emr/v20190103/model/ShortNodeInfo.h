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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_SHORTNODEINFO_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_SHORTNODEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * 节点信息
                */
                class ShortNodeInfo : public AbstractModel
                {
                public:
                    ShortNodeInfo();
                    ~ShortNodeInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取节点类型，Master/Core/Task/Router/Common
                     * @return NodeType 节点类型，Master/Core/Task/Router/Common
                     * 
                     */
                    std::string GetNodeType() const;

                    /**
                     * 设置节点类型，Master/Core/Task/Router/Common
                     * @param _nodeType 节点类型，Master/Core/Task/Router/Common
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
                     * 获取节点数量
                     * @return NodeSize 节点数量
                     * 
                     */
                    uint64_t GetNodeSize() const;

                    /**
                     * 设置节点数量
                     * @param _nodeSize 节点数量
                     * 
                     */
                    void SetNodeSize(const uint64_t& _nodeSize);

                    /**
                     * 判断参数 NodeSize 是否已赋值
                     * @return NodeSize 是否已赋值
                     * 
                     */
                    bool NodeSizeHasBeenSet() const;

                private:

                    /**
                     * 节点类型，Master/Core/Task/Router/Common
                     */
                    std::string m_nodeType;
                    bool m_nodeTypeHasBeenSet;

                    /**
                     * 节点数量
                     */
                    uint64_t m_nodeSize;
                    bool m_nodeSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_SHORTNODEINFO_H_
