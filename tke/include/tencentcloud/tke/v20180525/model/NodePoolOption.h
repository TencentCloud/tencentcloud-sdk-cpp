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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_NODEPOOLOPTION_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_NODEPOOLOPTION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * 加入存量节点时的节点池选项
                */
                class NodePoolOption : public AbstractModel
                {
                public:
                    NodePoolOption();
                    ~NodePoolOption() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取是否加入节点池
                     * @return AddToNodePool 是否加入节点池
                     * 
                     */
                    bool GetAddToNodePool() const;

                    /**
                     * 设置是否加入节点池
                     * @param _addToNodePool 是否加入节点池
                     * 
                     */
                    void SetAddToNodePool(const bool& _addToNodePool);

                    /**
                     * 判断参数 AddToNodePool 是否已赋值
                     * @return AddToNodePool 是否已赋值
                     * 
                     */
                    bool AddToNodePoolHasBeenSet() const;

                    /**
                     * 获取节点池id
                     * @return NodePoolId 节点池id
                     * 
                     */
                    std::string GetNodePoolId() const;

                    /**
                     * 设置节点池id
                     * @param _nodePoolId 节点池id
                     * 
                     */
                    void SetNodePoolId(const std::string& _nodePoolId);

                    /**
                     * 判断参数 NodePoolId 是否已赋值
                     * @return NodePoolId 是否已赋值
                     * 
                     */
                    bool NodePoolIdHasBeenSet() const;

                    /**
                     * 获取是否继承节点池相关配置
                     * @return InheritConfigurationFromNodePool 是否继承节点池相关配置
                     * 
                     */
                    bool GetInheritConfigurationFromNodePool() const;

                    /**
                     * 设置是否继承节点池相关配置
                     * @param _inheritConfigurationFromNodePool 是否继承节点池相关配置
                     * 
                     */
                    void SetInheritConfigurationFromNodePool(const bool& _inheritConfigurationFromNodePool);

                    /**
                     * 判断参数 InheritConfigurationFromNodePool 是否已赋值
                     * @return InheritConfigurationFromNodePool 是否已赋值
                     * 
                     */
                    bool InheritConfigurationFromNodePoolHasBeenSet() const;

                private:

                    /**
                     * 是否加入节点池
                     */
                    bool m_addToNodePool;
                    bool m_addToNodePoolHasBeenSet;

                    /**
                     * 节点池id
                     */
                    std::string m_nodePoolId;
                    bool m_nodePoolIdHasBeenSet;

                    /**
                     * 是否继承节点池相关配置
                     */
                    bool m_inheritConfigurationFromNodePool;
                    bool m_inheritConfigurationFromNodePoolHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_NODEPOOLOPTION_H_
