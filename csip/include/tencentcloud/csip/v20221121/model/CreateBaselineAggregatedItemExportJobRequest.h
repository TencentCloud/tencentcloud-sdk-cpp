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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_CREATEBASELINEAGGREGATEDITEMEXPORTJOBREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_CREATEBASELINEAGGREGATEDITEMEXPORTJOBREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/Filters.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * CreateBaselineAggregatedItemExportJob请求参数结构体
                */
                class CreateBaselineAggregatedItemExportJobRequest : public AbstractModel
                {
                public:
                    CreateBaselineAggregatedItemExportJobRequest();
                    ~CreateBaselineAggregatedItemExportJobRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>基线策略 ID 列表（可同时传多条做联合统计）。</p>
                     * @return PolicyID <p>基线策略 ID 列表（可同时传多条做联合统计）。</p>
                     * 
                     */
                    std::vector<uint64_t> GetPolicyID() const;

                    /**
                     * 设置<p>基线策略 ID 列表（可同时传多条做联合统计）。</p>
                     * @param _policyID <p>基线策略 ID 列表（可同时传多条做联合统计）。</p>
                     * 
                     */
                    void SetPolicyID(const std::vector<uint64_t>& _policyID);

                    /**
                     * 判断参数 PolicyID 是否已赋值
                     * @return PolicyID 是否已赋值
                     * 
                     */
                    bool PolicyIDHasBeenSet() const;

                    /**
                     * 获取<p>基线系统父分类 ID。</p>
                     * @return ParentCategoryID <p>基线系统父分类 ID。</p>
                     * 
                     */
                    uint64_t GetParentCategoryID() const;

                    /**
                     * 设置<p>基线系统父分类 ID。</p>
                     * @param _parentCategoryID <p>基线系统父分类 ID。</p>
                     * 
                     */
                    void SetParentCategoryID(const uint64_t& _parentCategoryID);

                    /**
                     * 判断参数 ParentCategoryID 是否已赋值
                     * @return ParentCategoryID 是否已赋值
                     * 
                     */
                    bool ParentCategoryIDHasBeenSet() const;

                    /**
                     * 获取<p>基线子分类 ID。</p>
                     * @return CategoryID <p>基线子分类 ID。</p>
                     * 
                     */
                    uint64_t GetCategoryID() const;

                    /**
                     * 设置<p>基线子分类 ID。</p>
                     * @param _categoryID <p>基线子分类 ID。</p>
                     * 
                     */
                    void SetCategoryID(const uint64_t& _categoryID);

                    /**
                     * 判断参数 CategoryID 是否已赋值
                     * @return CategoryID 是否已赋值
                     * 
                     */
                    bool CategoryIDHasBeenSet() const;

                    /**
                     * 获取<p>导出任务名称。不传时自动生成。</p>
                     * @return Name <p>导出任务名称。不传时自动生成。</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>导出任务名称。不传时自动生成。</p>
                     * @param _name <p>导出任务名称。不传时自动生成。</p>
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
                     * 获取<p>导出类型，默认 RISK。<br>枚举值：<br>STATISTIC：导出统计结果<br>RISK：导出风险明细</p>
                     * @return ExportType <p>导出类型，默认 RISK。<br>枚举值：<br>STATISTIC：导出统计结果<br>RISK：导出风险明细</p>
                     * 
                     */
                    std::string GetExportType() const;

                    /**
                     * 设置<p>导出类型，默认 RISK。<br>枚举值：<br>STATISTIC：导出统计结果<br>RISK：导出风险明细</p>
                     * @param _exportType <p>导出类型，默认 RISK。<br>枚举值：<br>STATISTIC：导出统计结果<br>RISK：导出风险明细</p>
                     * 
                     */
                    void SetExportType(const std::string& _exportType);

                    /**
                     * 判断参数 ExportType 是否已赋值
                     * @return ExportType 是否已赋值
                     * 
                     */
                    bool ExportTypeHasBeenSet() const;

                    /**
                     * 获取<p>集团账号的成员id</p>
                     * @return MemberId <p>集团账号的成员id</p>
                     * 
                     */
                    std::vector<std::string> GetMemberId() const;

                    /**
                     * 设置<p>集团账号的成员id</p>
                     * @param _memberId <p>集团账号的成员id</p>
                     * 
                     */
                    void SetMemberId(const std::vector<std::string>& _memberId);

                    /**
                     * 判断参数 MemberId 是否已赋值
                     * @return MemberId 是否已赋值
                     * 
                     */
                    bool MemberIdHasBeenSet() const;

                    /**
                     * 获取<p>通用过滤条件。支持的 Name：ResultStatus（通过状态 PASS/NOT_PASS）、Name（检测项名称，模糊搜索）、RiskLevel（风险等级 CRITICAL/HIGH/MEDIUM/LOW）、PolicyName（所属基线/策略名称，模糊搜索）。</p>
                     * @return Filters <p>通用过滤条件。支持的 Name：ResultStatus（通过状态 PASS/NOT_PASS）、Name（检测项名称，模糊搜索）、RiskLevel（风险等级 CRITICAL/HIGH/MEDIUM/LOW）、PolicyName（所属基线/策略名称，模糊搜索）。</p>
                     * 
                     */
                    std::vector<Filters> GetFilters() const;

                    /**
                     * 设置<p>通用过滤条件。支持的 Name：ResultStatus（通过状态 PASS/NOT_PASS）、Name（检测项名称，模糊搜索）、RiskLevel（风险等级 CRITICAL/HIGH/MEDIUM/LOW）、PolicyName（所属基线/策略名称，模糊搜索）。</p>
                     * @param _filters <p>通用过滤条件。支持的 Name：ResultStatus（通过状态 PASS/NOT_PASS）、Name（检测项名称，模糊搜索）、RiskLevel（风险等级 CRITICAL/HIGH/MEDIUM/LOW）、PolicyName（所属基线/策略名称，模糊搜索）。</p>
                     * 
                     */
                    void SetFilters(const std::vector<Filters>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取<p>废弃</p>
                     * @return CheckAssetType <p>废弃</p>
                     * 
                     */
                    std::string GetCheckAssetType() const;

                    /**
                     * 设置<p>废弃</p>
                     * @param _checkAssetType <p>废弃</p>
                     * 
                     */
                    void SetCheckAssetType(const std::string& _checkAssetType);

                    /**
                     * 判断参数 CheckAssetType 是否已赋值
                     * @return CheckAssetType 是否已赋值
                     * 
                     */
                    bool CheckAssetTypeHasBeenSet() const;

                private:

                    /**
                     * <p>基线策略 ID 列表（可同时传多条做联合统计）。</p>
                     */
                    std::vector<uint64_t> m_policyID;
                    bool m_policyIDHasBeenSet;

                    /**
                     * <p>基线系统父分类 ID。</p>
                     */
                    uint64_t m_parentCategoryID;
                    bool m_parentCategoryIDHasBeenSet;

                    /**
                     * <p>基线子分类 ID。</p>
                     */
                    uint64_t m_categoryID;
                    bool m_categoryIDHasBeenSet;

                    /**
                     * <p>导出任务名称。不传时自动生成。</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>导出类型，默认 RISK。<br>枚举值：<br>STATISTIC：导出统计结果<br>RISK：导出风险明细</p>
                     */
                    std::string m_exportType;
                    bool m_exportTypeHasBeenSet;

                    /**
                     * <p>集团账号的成员id</p>
                     */
                    std::vector<std::string> m_memberId;
                    bool m_memberIdHasBeenSet;

                    /**
                     * <p>通用过滤条件。支持的 Name：ResultStatus（通过状态 PASS/NOT_PASS）、Name（检测项名称，模糊搜索）、RiskLevel（风险等级 CRITICAL/HIGH/MEDIUM/LOW）、PolicyName（所属基线/策略名称，模糊搜索）。</p>
                     */
                    std::vector<Filters> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * <p>废弃</p>
                     */
                    std::string m_checkAssetType;
                    bool m_checkAssetTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_CREATEBASELINEAGGREGATEDITEMEXPORTJOBREQUEST_H_
