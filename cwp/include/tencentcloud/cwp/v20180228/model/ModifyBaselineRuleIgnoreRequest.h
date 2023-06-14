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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_MODIFYBASELINERULEIGNOREREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_MODIFYBASELINERULEIGNOREREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/Filter.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * ModifyBaselineRuleIgnore请求参数结构体
                */
                class ModifyBaselineRuleIgnoreRequest : public AbstractModel
                {
                public:
                    ModifyBaselineRuleIgnoreRequest();
                    ~ModifyBaselineRuleIgnoreRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取规则名称
                     * @return RuleName 规则名称
                     * 
                     */
                    std::string GetRuleName() const;

                    /**
                     * 设置规则名称
                     * @param _ruleName 规则名称
                     * 
                     */
                    void SetRuleName(const std::string& _ruleName);

                    /**
                     * 判断参数 RuleName 是否已赋值
                     * @return RuleName 是否已赋值
                     * 
                     */
                    bool RuleNameHasBeenSet() const;

                    /**
                     * 获取资产类型[0:所有专业版旗舰版|1:id|2:ip]
                     * @return AssetType 资产类型[0:所有专业版旗舰版|1:id|2:ip]
                     * 
                     */
                    int64_t GetAssetType() const;

                    /**
                     * 设置资产类型[0:所有专业版旗舰版|1:id|2:ip]
                     * @param _assetType 资产类型[0:所有专业版旗舰版|1:id|2:ip]
                     * 
                     */
                    void SetAssetType(const int64_t& _assetType);

                    /**
                     * 判断参数 AssetType 是否已赋值
                     * @return AssetType 是否已赋值
                     * 
                     */
                    bool AssetTypeHasBeenSet() const;

                    /**
                     * 获取规则Id
                     * @return RuleId 规则Id
                     * 
                     */
                    int64_t GetRuleId() const;

                    /**
                     * 设置规则Id
                     * @param _ruleId 规则Id
                     * 
                     */
                    void SetRuleId(const int64_t& _ruleId);

                    /**
                     * 判断参数 RuleId 是否已赋值
                     * @return RuleId 是否已赋值
                     * 
                     */
                    bool RuleIdHasBeenSet() const;

                    /**
                     * 获取关联项
                     * @return ItemIds 关联项
                     * 
                     */
                    std::vector<int64_t> GetItemIds() const;

                    /**
                     * 设置关联项
                     * @param _itemIds 关联项
                     * 
                     */
                    void SetItemIds(const std::vector<int64_t>& _itemIds);

                    /**
                     * 判断参数 ItemIds 是否已赋值
                     * @return ItemIds 是否已赋值
                     * 
                     */
                    bool ItemIdsHasBeenSet() const;

                    /**
                     * 获取主机Id
                     * @return HostIds 主机Id
                     * 
                     */
                    std::vector<std::string> GetHostIds() const;

                    /**
                     * 设置主机Id
                     * @param _hostIds 主机Id
                     * 
                     */
                    void SetHostIds(const std::vector<std::string>& _hostIds);

                    /**
                     * 判断参数 HostIds 是否已赋值
                     * @return HostIds 是否已赋值
                     * 
                     */
                    bool HostIdsHasBeenSet() const;

                    /**
                     * 获取主机Ip
                     * @return HostIps 主机Ip
                     * 
                     */
                    std::vector<std::string> GetHostIps() const;

                    /**
                     * 设置主机Ip
                     * @param _hostIps 主机Ip
                     * 
                     */
                    void SetHostIps(const std::vector<std::string>& _hostIps);

                    /**
                     * 判断参数 HostIps 是否已赋值
                     * @return HostIps 是否已赋值
                     * 
                     */
                    bool HostIpsHasBeenSet() const;

                    /**
                     * 获取是否全选过滤
                     * @return SelectAll 是否全选过滤
                     * 
                     */
                    int64_t GetSelectAll() const;

                    /**
                     * 设置是否全选过滤
                     * @param _selectAll 是否全选过滤
                     * 
                     */
                    void SetSelectAll(const int64_t& _selectAll);

                    /**
                     * 判断参数 SelectAll 是否已赋值
                     * @return SelectAll 是否已赋值
                     * 
                     */
                    bool SelectAllHasBeenSet() const;

                    /**
                     * 获取<li>ItemName - string - 是否必填：否 - 项名称</li>
                     * @return Filters <li>ItemName - string - 是否必填：否 - 项名称</li>
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置<li>ItemName - string - 是否必填：否 - 项名称</li>
                     * @param _filters <li>ItemName - string - 是否必填：否 - 项名称</li>
                     * 
                     */
                    void SetFilters(const std::vector<Filter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                private:

                    /**
                     * 规则名称
                     */
                    std::string m_ruleName;
                    bool m_ruleNameHasBeenSet;

                    /**
                     * 资产类型[0:所有专业版旗舰版|1:id|2:ip]
                     */
                    int64_t m_assetType;
                    bool m_assetTypeHasBeenSet;

                    /**
                     * 规则Id
                     */
                    int64_t m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * 关联项
                     */
                    std::vector<int64_t> m_itemIds;
                    bool m_itemIdsHasBeenSet;

                    /**
                     * 主机Id
                     */
                    std::vector<std::string> m_hostIds;
                    bool m_hostIdsHasBeenSet;

                    /**
                     * 主机Ip
                     */
                    std::vector<std::string> m_hostIps;
                    bool m_hostIpsHasBeenSet;

                    /**
                     * 是否全选过滤
                     */
                    int64_t m_selectAll;
                    bool m_selectAllHasBeenSet;

                    /**
                     * <li>ItemName - string - 是否必填：否 - 项名称</li>
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_MODIFYBASELINERULEIGNOREREQUEST_H_
