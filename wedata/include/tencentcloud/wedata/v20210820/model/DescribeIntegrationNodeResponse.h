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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEINTEGRATIONNODERESPONSE_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEINTEGRATIONNODERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/IntegrationNodeInfo.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * DescribeIntegrationNode返回参数结构体
                */
                class DescribeIntegrationNodeResponse : public AbstractModel
                {
                public:
                    DescribeIntegrationNodeResponse();
                    ~DescribeIntegrationNodeResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取节点信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NodeInfo 节点信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    IntegrationNodeInfo GetNodeInfo() const;

                    /**
                     * 判断参数 NodeInfo 是否已赋值
                     * @return NodeInfo 是否已赋值
                     * 
                     */
                    bool NodeInfoHasBeenSet() const;

                    /**
                     * 获取上游节点是否已经修改。true 已修改，需要提示；false 没有修改
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SourceCheckFlag 上游节点是否已经修改。true 已修改，需要提示；false 没有修改
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetSourceCheckFlag() const;

                    /**
                     * 判断参数 SourceCheckFlag 是否已赋值
                     * @return SourceCheckFlag 是否已赋值
                     * 
                     */
                    bool SourceCheckFlagHasBeenSet() const;

                private:

                    /**
                     * 节点信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    IntegrationNodeInfo m_nodeInfo;
                    bool m_nodeInfoHasBeenSet;

                    /**
                     * 上游节点是否已经修改。true 已修改，需要提示；false 没有修改
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_sourceCheckFlag;
                    bool m_sourceCheckFlagHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEINTEGRATIONNODERESPONSE_H_
