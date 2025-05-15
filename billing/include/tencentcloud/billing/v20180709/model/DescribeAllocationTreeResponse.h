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

#ifndef TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBEALLOCATIONTREERESPONSE_H_
#define TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBEALLOCATIONTREERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/billing/v20180709/model/AllocationTree.h>


namespace TencentCloud
{
    namespace Billing
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * DescribeAllocationTree返回参数结构体
                */
                class DescribeAllocationTreeResponse : public AbstractModel
                {
                public:
                    DescribeAllocationTreeResponse();
                    ~DescribeAllocationTreeResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取分账单元ID
                     * @return Id 分账单元ID
                     * 
                     */
                    uint64_t GetId() const;

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
                     * 判断参数 TreeNodeUniqKey 是否已赋值
                     * @return TreeNodeUniqKey 是否已赋值
                     * 
                     */
                    bool TreeNodeUniqKeyHasBeenSet() const;

                    /**
                     * 获取子树
                     * @return Children 子树
                     * 
                     */
                    std::vector<AllocationTree> GetChildren() const;

                    /**
                     * 判断参数 Children 是否已赋值
                     * @return Children 是否已赋值
                     * 
                     */
                    bool ChildrenHasBeenSet() const;

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
                     * 子树
                     */
                    std::vector<AllocationTree> m_children;
                    bool m_childrenHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBEALLOCATIONTREERESPONSE_H_
