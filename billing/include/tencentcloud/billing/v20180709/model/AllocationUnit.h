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

#ifndef TENCENTCLOUD_BILLING_V20180709_MODEL_ALLOCATIONUNIT_H_
#define TENCENTCLOUD_BILLING_V20180709_MODEL_ALLOCATIONUNIT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Billing
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * 分账单元id和名称
                */
                class AllocationUnit : public AbstractModel
                {
                public:
                    AllocationUnit();
                    ~AllocationUnit() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取分账单元ID
                     * @return NodeId 分账单元ID
                     * 
                     */
                    uint64_t GetNodeId() const;

                    /**
                     * 设置分账单元ID
                     * @param _nodeId 分账单元ID
                     * 
                     */
                    void SetNodeId(const uint64_t& _nodeId);

                    /**
                     * 判断参数 NodeId 是否已赋值
                     * @return NodeId 是否已赋值
                     * 
                     */
                    bool NodeIdHasBeenSet() const;

                    /**
                     * 获取分账规则名称
                     * @return TreeNodeUniqKeyName 分账规则名称
                     * 
                     */
                    std::string GetTreeNodeUniqKeyName() const;

                    /**
                     * 设置分账规则名称
                     * @param _treeNodeUniqKeyName 分账规则名称
                     * 
                     */
                    void SetTreeNodeUniqKeyName(const std::string& _treeNodeUniqKeyName);

                    /**
                     * 判断参数 TreeNodeUniqKeyName 是否已赋值
                     * @return TreeNodeUniqKeyName 是否已赋值
                     * 
                     */
                    bool TreeNodeUniqKeyNameHasBeenSet() const;

                private:

                    /**
                     * 分账单元ID
                     */
                    uint64_t m_nodeId;
                    bool m_nodeIdHasBeenSet;

                    /**
                     * 分账规则名称
                     */
                    std::string m_treeNodeUniqKeyName;
                    bool m_treeNodeUniqKeyNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_ALLOCATIONUNIT_H_
