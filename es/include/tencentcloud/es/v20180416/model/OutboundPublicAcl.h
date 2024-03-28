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

#ifndef TENCENTCLOUD_ES_V20180416_MODEL_OUTBOUNDPUBLICACL_H_
#define TENCENTCLOUD_ES_V20180416_MODEL_OUTBOUNDPUBLICACL_H_

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
                * 节点出站访问信息
                */
                class OutboundPublicAcl : public AbstractModel
                {
                public:
                    OutboundPublicAcl();
                    ~OutboundPublicAcl() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取允许节点出站访问的节点类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NodeType 允许节点出站访问的节点类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetNodeType() const;

                    /**
                     * 设置允许节点出站访问的节点类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _nodeType 允许节点出站访问的节点类型
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取允许节点出站访问的白名单
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WhiteHostList 允许节点出站访问的白名单
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetWhiteHostList() const;

                    /**
                     * 设置允许节点出站访问的白名单
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _whiteHostList 允许节点出站访问的白名单
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetWhiteHostList(const std::vector<std::string>& _whiteHostList);

                    /**
                     * 判断参数 WhiteHostList 是否已赋值
                     * @return WhiteHostList 是否已赋值
                     * 
                     */
                    bool WhiteHostListHasBeenSet() const;

                private:

                    /**
                     * 允许节点出站访问的节点类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_nodeType;
                    bool m_nodeTypeHasBeenSet;

                    /**
                     * 允许节点出站访问的白名单
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_whiteHostList;
                    bool m_whiteHostListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20180416_MODEL_OUTBOUNDPUBLICACL_H_
