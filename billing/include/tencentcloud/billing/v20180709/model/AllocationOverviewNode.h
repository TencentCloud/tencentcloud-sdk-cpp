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

#ifndef TENCENTCLOUD_BILLING_V20180709_MODEL_ALLOCATIONOVERVIEWNODE_H_
#define TENCENTCLOUD_BILLING_V20180709_MODEL_ALLOCATIONOVERVIEWNODE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/billing/v20180709/model/AllocationOverviewNode.h>
#include <tencentcloud/billing/v20180709/model/AllocationMonthOverviewDetail.h>


namespace TencentCloud
{
    namespace Billing
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * 分账账单月概览详情
                */
                class AllocationOverviewNode : public AbstractModel
                {
                public:
                    AllocationOverviewNode();
                    ~AllocationOverviewNode() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取分账单元ID
                     * @return Id 分账单元ID
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置分账单元ID
                     * @param _id 分账单元ID
                     * 
                     */
                    void SetId(const uint64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取分账单元名称
                     * @return Name 分账单元名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置分账单元名称
                     * @param _name 分账单元名称
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取分账单元唯一标识
                     * @return TreeNodeUniqKey 分账单元唯一标识
                     * 
                     */
                    std::string GetTreeNodeUniqKey() const;

                    /**
                     * 设置分账单元唯一标识
                     * @param _treeNodeUniqKey 分账单元唯一标识
                     * 
                     */
                    void SetTreeNodeUniqKey(const std::string& _treeNodeUniqKey);

                    /**
                     * 判断参数 TreeNodeUniqKey 是否已赋值
                     * @return TreeNodeUniqKey 是否已赋值
                     * 
                     */
                    bool TreeNodeUniqKeyHasBeenSet() const;

                    /**
                     * 获取分账单元包含规则标志
0 - 不存在规则
1 - 同时存在归集规则和公摊规则
2 - 仅存在归集规则
3 - 仅存在公摊规则
                     * @return Symbol 分账单元包含规则标志
0 - 不存在规则
1 - 同时存在归集规则和公摊规则
2 - 仅存在归集规则
3 - 仅存在公摊规则
                     * 
                     */
                    uint64_t GetSymbol() const;

                    /**
                     * 设置分账单元包含规则标志
0 - 不存在规则
1 - 同时存在归集规则和公摊规则
2 - 仅存在归集规则
3 - 仅存在公摊规则
                     * @param _symbol 分账单元包含规则标志
0 - 不存在规则
1 - 同时存在归集规则和公摊规则
2 - 仅存在归集规则
3 - 仅存在公摊规则
                     * 
                     */
                    void SetSymbol(const uint64_t& _symbol);

                    /**
                     * 判断参数 Symbol 是否已赋值
                     * @return Symbol 是否已赋值
                     * 
                     */
                    bool SymbolHasBeenSet() const;

                    /**
                     * 获取子单元月概览详情
                     * @return Children 子单元月概览详情
                     * 
                     */
                    std::vector<AllocationOverviewNode> GetChildren() const;

                    /**
                     * 设置子单元月概览详情
                     * @param _children 子单元月概览详情
                     * 
                     */
                    void SetChildren(const std::vector<AllocationOverviewNode>& _children);

                    /**
                     * 判断参数 Children 是否已赋值
                     * @return Children 是否已赋值
                     * 
                     */
                    bool ChildrenHasBeenSet() const;

                    /**
                     * 获取分账账单月概览金额明细
                     * @return Detail 分账账单月概览金额明细
                     * 
                     */
                    AllocationMonthOverviewDetail GetDetail() const;

                    /**
                     * 设置分账账单月概览金额明细
                     * @param _detail 分账账单月概览金额明细
                     * 
                     */
                    void SetDetail(const AllocationMonthOverviewDetail& _detail);

                    /**
                     * 判断参数 Detail 是否已赋值
                     * @return Detail 是否已赋值
                     * 
                     */
                    bool DetailHasBeenSet() const;

                private:

                    /**
                     * 分账单元ID
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 分账单元名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 分账单元唯一标识
                     */
                    std::string m_treeNodeUniqKey;
                    bool m_treeNodeUniqKeyHasBeenSet;

                    /**
                     * 分账单元包含规则标志
0 - 不存在规则
1 - 同时存在归集规则和公摊规则
2 - 仅存在归集规则
3 - 仅存在公摊规则
                     */
                    uint64_t m_symbol;
                    bool m_symbolHasBeenSet;

                    /**
                     * 子单元月概览详情
                     */
                    std::vector<AllocationOverviewNode> m_children;
                    bool m_childrenHasBeenSet;

                    /**
                     * 分账账单月概览金额明细
                     */
                    AllocationMonthOverviewDetail m_detail;
                    bool m_detailHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_ALLOCATIONOVERVIEWNODE_H_
