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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_BATCHMODIFYBASELINEPOLICYREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_BATCHMODIFYBASELINEPOLICYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/CycleScanConf.h>
#include <tencentcloud/csip/v20221121/model/BaselinePolicySystemCategoryConf.h>
#include <tencentcloud/csip/v20221121/model/BaselineCustomItemConf.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * BatchModifyBaselinePolicy请求参数结构体
                */
                class BatchModifyBaselinePolicyRequest : public AbstractModel
                {
                public:
                    BatchModifyBaselinePolicyRequest();
                    ~BatchModifyBaselinePolicyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>待修改的基线策略 ID 列表，不可为空且元素不可为 0。</p>
                     * @return PolicyIDList <p>待修改的基线策略 ID 列表，不可为空且元素不可为 0。</p>
                     * 
                     */
                    std::vector<uint64_t> GetPolicyIDList() const;

                    /**
                     * 设置<p>待修改的基线策略 ID 列表，不可为空且元素不可为 0。</p>
                     * @param _policyIDList <p>待修改的基线策略 ID 列表，不可为空且元素不可为 0。</p>
                     * 
                     */
                    void SetPolicyIDList(const std::vector<uint64_t>& _policyIDList);

                    /**
                     * 判断参数 PolicyIDList 是否已赋值
                     * @return PolicyIDList 是否已赋值
                     * 
                     */
                    bool PolicyIDListHasBeenSet() const;

                    /**
                     * 获取<p>周期扫描配置；不修改时可省略。Enable=1 时必须同时传 IntervalType 与 IntervalValueList。</p>
                     * @return CycleScanConf <p>周期扫描配置；不修改时可省略。Enable=1 时必须同时传 IntervalType 与 IntervalValueList。</p>
                     * 
                     */
                    CycleScanConf GetCycleScanConf() const;

                    /**
                     * 设置<p>周期扫描配置；不修改时可省略。Enable=1 时必须同时传 IntervalType 与 IntervalValueList。</p>
                     * @param _cycleScanConf <p>周期扫描配置；不修改时可省略。Enable=1 时必须同时传 IntervalType 与 IntervalValueList。</p>
                     * 
                     */
                    void SetCycleScanConf(const CycleScanConf& _cycleScanConf);

                    /**
                     * 判断参数 CycleScanConf 是否已赋值
                     * @return CycleScanConf 是否已赋值
                     * 
                     */
                    bool CycleScanConfHasBeenSet() const;

                    /**
                     * 获取<p>新增内置检测项自动同步开关。true 自动加入，false 不加入。</p>
                     * @return AutoSyncItem <p>新增内置检测项自动同步开关。true 自动加入，false 不加入。</p>
                     * 
                     */
                    bool GetAutoSyncItem() const;

                    /**
                     * 设置<p>新增内置检测项自动同步开关。true 自动加入，false 不加入。</p>
                     * @param _autoSyncItem <p>新增内置检测项自动同步开关。true 自动加入，false 不加入。</p>
                     * 
                     */
                    void SetAutoSyncItem(const bool& _autoSyncItem);

                    /**
                     * 判断参数 AutoSyncItem 是否已赋值
                     * @return AutoSyncItem 是否已赋值
                     * 
                     */
                    bool AutoSyncItemHasBeenSet() const;

                    /**
                     * 获取<p>分类 / 子分类 / 检测项命中配置；不修改时可省略。</p>
                     * @return CategoryConf <p>分类 / 子分类 / 检测项命中配置；不修改时可省略。</p>
                     * 
                     */
                    std::vector<BaselinePolicySystemCategoryConf> GetCategoryConf() const;

                    /**
                     * 设置<p>分类 / 子分类 / 检测项命中配置；不修改时可省略。</p>
                     * @param _categoryConf <p>分类 / 子分类 / 检测项命中配置；不修改时可省略。</p>
                     * 
                     */
                    void SetCategoryConf(const std::vector<BaselinePolicySystemCategoryConf>& _categoryConf);

                    /**
                     * 判断参数 CategoryConf 是否已赋值
                     * @return CategoryConf 是否已赋值
                     * 
                     */
                    bool CategoryConfHasBeenSet() const;

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
                     * 获取<p>自定义检测项取值配置列表；不修改时可省略。每个元素 RuleID 与 CustomItemID 不能同时为 0。</p>
                     * @return CustomItemConf <p>自定义检测项取值配置列表；不修改时可省略。每个元素 RuleID 与 CustomItemID 不能同时为 0。</p>
                     * 
                     */
                    std::vector<BaselineCustomItemConf> GetCustomItemConf() const;

                    /**
                     * 设置<p>自定义检测项取值配置列表；不修改时可省略。每个元素 RuleID 与 CustomItemID 不能同时为 0。</p>
                     * @param _customItemConf <p>自定义检测项取值配置列表；不修改时可省略。每个元素 RuleID 与 CustomItemID 不能同时为 0。</p>
                     * 
                     */
                    void SetCustomItemConf(const std::vector<BaselineCustomItemConf>& _customItemConf);

                    /**
                     * 判断参数 CustomItemConf 是否已赋值
                     * @return CustomItemConf 是否已赋值
                     * 
                     */
                    bool CustomItemConfHasBeenSet() const;

                private:

                    /**
                     * <p>待修改的基线策略 ID 列表，不可为空且元素不可为 0。</p>
                     */
                    std::vector<uint64_t> m_policyIDList;
                    bool m_policyIDListHasBeenSet;

                    /**
                     * <p>周期扫描配置；不修改时可省略。Enable=1 时必须同时传 IntervalType 与 IntervalValueList。</p>
                     */
                    CycleScanConf m_cycleScanConf;
                    bool m_cycleScanConfHasBeenSet;

                    /**
                     * <p>新增内置检测项自动同步开关。true 自动加入，false 不加入。</p>
                     */
                    bool m_autoSyncItem;
                    bool m_autoSyncItemHasBeenSet;

                    /**
                     * <p>分类 / 子分类 / 检测项命中配置；不修改时可省略。</p>
                     */
                    std::vector<BaselinePolicySystemCategoryConf> m_categoryConf;
                    bool m_categoryConfHasBeenSet;

                    /**
                     * <p>集团账号的成员id</p>
                     */
                    std::vector<std::string> m_memberId;
                    bool m_memberIdHasBeenSet;

                    /**
                     * <p>自定义检测项取值配置列表；不修改时可省略。每个元素 RuleID 与 CustomItemID 不能同时为 0。</p>
                     */
                    std::vector<BaselineCustomItemConf> m_customItemConf;
                    bool m_customItemConfHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_BATCHMODIFYBASELINEPOLICYREQUEST_H_
