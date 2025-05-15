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

#ifndef TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBEALLOCATIONUNITDETAILRESPONSE_H_
#define TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBEALLOCATIONUNITDETAILRESPONSE_H_

#include <string>
#include <vector>
#include <map>
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
                * DescribeAllocationUnitDetail返回参数结构体
                */
                class DescribeAllocationUnitDetailResponse : public AbstractModel
                {
                public:
                    DescribeAllocationUnitDetailResponse();
                    ~DescribeAllocationUnitDetailResponse() = default;
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
                     * 获取分账单元所属UIN
                     * @return Uin 分账单元所属UIN
                     * 
                     */
                    std::string GetUin() const;

                    /**
                     * 判断参数 Uin 是否已赋值
                     * @return Uin 是否已赋值
                     * 
                     */
                    bool UinHasBeenSet() const;

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
                     * 获取分账单元父节点ID
                     * @return ParentId 分账单元父节点ID
                     * 
                     */
                    uint64_t GetParentId() const;

                    /**
                     * 判断参数 ParentId 是否已赋值
                     * @return ParentId 是否已赋值
                     * 
                     */
                    bool ParentIdHasBeenSet() const;

                    /**
                     * 获取源组织名称
                     * @return SourceName 源组织名称
                     * 
                     */
                    std::string GetSourceName() const;

                    /**
                     * 判断参数 SourceName 是否已赋值
                     * @return SourceName 是否已赋值
                     * 
                     */
                    bool SourceNameHasBeenSet() const;

                    /**
                     * 获取源组织ID
                     * @return SourceId 源组织ID
                     * 
                     */
                    std::string GetSourceId() const;

                    /**
                     * 判断参数 SourceId 是否已赋值
                     * @return SourceId 是否已赋值
                     * 
                     */
                    bool SourceIdHasBeenSet() const;

                    /**
                     * 获取备注说明
                     * @return Remark 备注说明
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取分账单元标识
                     * @return TreeNodeUniqKey 分账单元标识
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
                     * 获取若分账单元设置归集规则，返回归集规则ID，若无分账规则，则不返回
                     * @return RuleId 若分账单元设置归集规则，返回归集规则ID，若无分账规则，则不返回
                     * 
                     */
                    uint64_t GetRuleId() const;

                    /**
                     * 判断参数 RuleId 是否已赋值
                     * @return RuleId 是否已赋值
                     * 
                     */
                    bool RuleIdHasBeenSet() const;

                private:

                    /**
                     * 分账单元ID
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 分账单元所属UIN
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * 分账单元名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 分账单元父节点ID
                     */
                    uint64_t m_parentId;
                    bool m_parentIdHasBeenSet;

                    /**
                     * 源组织名称
                     */
                    std::string m_sourceName;
                    bool m_sourceNameHasBeenSet;

                    /**
                     * 源组织ID
                     */
                    std::string m_sourceId;
                    bool m_sourceIdHasBeenSet;

                    /**
                     * 备注说明
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * 分账单元标识
                     */
                    std::string m_treeNodeUniqKey;
                    bool m_treeNodeUniqKeyHasBeenSet;

                    /**
                     * 若分账单元设置归集规则，返回归集规则ID，若无分账规则，则不返回
                     */
                    uint64_t m_ruleId;
                    bool m_ruleIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBEALLOCATIONUNITDETAILRESPONSE_H_
