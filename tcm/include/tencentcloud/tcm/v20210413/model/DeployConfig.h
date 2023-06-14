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

#ifndef TENCENTCLOUD_TCM_V20210413_MODEL_DEPLOYCONFIG_H_
#define TENCENTCLOUD_TCM_V20210413_MODEL_DEPLOYCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcm
    {
        namespace V20210413
        {
            namespace Model
            {
                /**
                * 部署配置
                */
                class DeployConfig : public AbstractModel
                {
                public:
                    DeployConfig();
                    ~DeployConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取部署类型，取值范围：
- SPECIFIC：专有模式
- AUTO：普通模式
                     * @return NodeSelectType 部署类型，取值范围：
- SPECIFIC：专有模式
- AUTO：普通模式
                     * 
                     */
                    std::string GetNodeSelectType() const;

                    /**
                     * 设置部署类型，取值范围：
- SPECIFIC：专有模式
- AUTO：普通模式
                     * @param _nodeSelectType 部署类型，取值范围：
- SPECIFIC：专有模式
- AUTO：普通模式
                     * 
                     */
                    void SetNodeSelectType(const std::string& _nodeSelectType);

                    /**
                     * 判断参数 NodeSelectType 是否已赋值
                     * @return NodeSelectType 是否已赋值
                     * 
                     */
                    bool NodeSelectTypeHasBeenSet() const;

                    /**
                     * 获取指定的节点
                     * @return Nodes 指定的节点
                     * 
                     */
                    std::vector<std::string> GetNodes() const;

                    /**
                     * 设置指定的节点
                     * @param _nodes 指定的节点
                     * 
                     */
                    void SetNodes(const std::vector<std::string>& _nodes);

                    /**
                     * 判断参数 Nodes 是否已赋值
                     * @return Nodes 是否已赋值
                     * 
                     */
                    bool NodesHasBeenSet() const;

                private:

                    /**
                     * 部署类型，取值范围：
- SPECIFIC：专有模式
- AUTO：普通模式
                     */
                    std::string m_nodeSelectType;
                    bool m_nodeSelectTypeHasBeenSet;

                    /**
                     * 指定的节点
                     */
                    std::vector<std::string> m_nodes;
                    bool m_nodesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCM_V20210413_MODEL_DEPLOYCONFIG_H_
