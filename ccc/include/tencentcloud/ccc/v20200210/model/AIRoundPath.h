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

#ifndef TENCENTCLOUD_CCC_V20200210_MODEL_AIROUNDPATH_H_
#define TENCENTCLOUD_CCC_V20200210_MODEL_AIROUNDPATH_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ccc
    {
        namespace V20200210
        {
            namespace Model
            {
                /**
                * 本轮对话在画布中经过的节点路径
                */
                class AIRoundPath : public AbstractModel
                {
                public:
                    AIRoundPath();
                    ~AIRoundPath() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>画布中的节点名称</p>
                     * @return NodeName <p>画布中的节点名称</p>
                     * 
                     */
                    std::string GetNodeName() const;

                    /**
                     * 设置<p>画布中的节点名称</p>
                     * @param _nodeName <p>画布中的节点名称</p>
                     * 
                     */
                    void SetNodeName(const std::string& _nodeName);

                    /**
                     * 判断参数 NodeName 是否已赋值
                     * @return NodeName 是否已赋值
                     * 
                     */
                    bool NodeNameHasBeenSet() const;

                    /**
                     * 获取<p>画布中的节点类型</p><p>枚举值：</p><ul><li>DIALOGUE： 对话节点</li><li>API_CALL： 接口调用节点</li><li>TRANSFER： 转接节点</li><li>KEY_PRESS： 按键节点</li><li>END_CALL： 挂断节点</li></ul>
                     * @return NodeType <p>画布中的节点类型</p><p>枚举值：</p><ul><li>DIALOGUE： 对话节点</li><li>API_CALL： 接口调用节点</li><li>TRANSFER： 转接节点</li><li>KEY_PRESS： 按键节点</li><li>END_CALL： 挂断节点</li></ul>
                     * 
                     */
                    std::string GetNodeType() const;

                    /**
                     * 设置<p>画布中的节点类型</p><p>枚举值：</p><ul><li>DIALOGUE： 对话节点</li><li>API_CALL： 接口调用节点</li><li>TRANSFER： 转接节点</li><li>KEY_PRESS： 按键节点</li><li>END_CALL： 挂断节点</li></ul>
                     * @param _nodeType <p>画布中的节点类型</p><p>枚举值：</p><ul><li>DIALOGUE： 对话节点</li><li>API_CALL： 接口调用节点</li><li>TRANSFER： 转接节点</li><li>KEY_PRESS： 按键节点</li><li>END_CALL： 挂断节点</li></ul>
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
                     * 获取<p>经过当前节点的时间戳</p><p>单位：ms</p>
                     * @return Timestamp <p>经过当前节点的时间戳</p><p>单位：ms</p>
                     * 
                     */
                    int64_t GetTimestamp() const;

                    /**
                     * 设置<p>经过当前节点的时间戳</p><p>单位：ms</p>
                     * @param _timestamp <p>经过当前节点的时间戳</p><p>单位：ms</p>
                     * 
                     */
                    void SetTimestamp(const int64_t& _timestamp);

                    /**
                     * 判断参数 Timestamp 是否已赋值
                     * @return Timestamp 是否已赋值
                     * 
                     */
                    bool TimestampHasBeenSet() const;

                private:

                    /**
                     * <p>画布中的节点名称</p>
                     */
                    std::string m_nodeName;
                    bool m_nodeNameHasBeenSet;

                    /**
                     * <p>画布中的节点类型</p><p>枚举值：</p><ul><li>DIALOGUE： 对话节点</li><li>API_CALL： 接口调用节点</li><li>TRANSFER： 转接节点</li><li>KEY_PRESS： 按键节点</li><li>END_CALL： 挂断节点</li></ul>
                     */
                    std::string m_nodeType;
                    bool m_nodeTypeHasBeenSet;

                    /**
                     * <p>经过当前节点的时间戳</p><p>单位：ms</p>
                     */
                    int64_t m_timestamp;
                    bool m_timestampHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CCC_V20200210_MODEL_AIROUNDPATH_H_
