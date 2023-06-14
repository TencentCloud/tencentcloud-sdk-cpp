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

#ifndef TENCENTCLOUD_ES_V20180416_MODEL_WEBNODETYPEINFO_H_
#define TENCENTCLOUD_ES_V20180416_MODEL_WEBNODETYPEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Es
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * 可视化节点配置
                */
                class WebNodeTypeInfo : public AbstractModel
                {
                public:
                    WebNodeTypeInfo();
                    ~WebNodeTypeInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取可视化节点个数，固定为1
                     * @return NodeNum 可视化节点个数，固定为1
                     * 
                     */
                    uint64_t GetNodeNum() const;

                    /**
                     * 设置可视化节点个数，固定为1
                     * @param _nodeNum 可视化节点个数，固定为1
                     * 
                     */
                    void SetNodeNum(const uint64_t& _nodeNum);

                    /**
                     * 判断参数 NodeNum 是否已赋值
                     * @return NodeNum 是否已赋值
                     * 
                     */
                    bool NodeNumHasBeenSet() const;

                    /**
                     * 获取可视化节点规格
                     * @return NodeType 可视化节点规格
                     * 
                     */
                    std::string GetNodeType() const;

                    /**
                     * 设置可视化节点规格
                     * @param _nodeType 可视化节点规格
                     * 
                     */
                    void SetNodeType(const std::string& _nodeType);

                    /**
                     * 判断参数 NodeType 是否已赋值
                     * @return NodeType 是否已赋值
                     * 
                     */
                    bool NodeTypeHasBeenSet() const;

                private:

                    /**
                     * 可视化节点个数，固定为1
                     */
                    uint64_t m_nodeNum;
                    bool m_nodeNumHasBeenSet;

                    /**
                     * 可视化节点规格
                     */
                    std::string m_nodeType;
                    bool m_nodeTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20180416_MODEL_WEBNODETYPEINFO_H_
