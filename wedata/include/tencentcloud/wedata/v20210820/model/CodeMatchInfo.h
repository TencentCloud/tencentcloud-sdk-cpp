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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_CODEMATCHINFO_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_CODEMATCHINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * 代码匹配信息
                */
                class CodeMatchInfo : public AbstractModel
                {
                public:
                    CodeMatchInfo();
                    ~CodeMatchInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取行号
                     * @return Number 行号
                     * 
                     */
                    uint64_t GetNumber() const;

                    /**
                     * 设置行号
                     * @param _number 行号
                     * 
                     */
                    void SetNumber(const uint64_t& _number);

                    /**
                     * 判断参数 Number 是否已赋值
                     * @return Number 是否已赋值
                     * 
                     */
                    bool NumberHasBeenSet() const;

                    /**
                     * 获取行内容
                     * @return Line 行内容
                     * 
                     */
                    std::string GetLine() const;

                    /**
                     * 设置行内容
                     * @param _line 行内容
                     * 
                     */
                    void SetLine(const std::string& _line);

                    /**
                     * 判断参数 Line 是否已赋值
                     * @return Line 是否已赋值
                     * 
                     */
                    bool LineHasBeenSet() const;

                    /**
                     * 获取离线节点类型
                     * @return NodeType 离线节点类型
                     * 
                     */
                    std::string GetNodeType() const;

                    /**
                     * 设置离线节点类型
                     * @param _nodeType 离线节点类型
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
                     * 行号
                     */
                    uint64_t m_number;
                    bool m_numberHasBeenSet;

                    /**
                     * 行内容
                     */
                    std::string m_line;
                    bool m_lineHasBeenSet;

                    /**
                     * 离线节点类型
                     */
                    std::string m_nodeType;
                    bool m_nodeTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_CODEMATCHINFO_H_
