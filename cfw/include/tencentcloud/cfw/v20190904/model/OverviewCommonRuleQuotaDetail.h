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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_OVERVIEWCOMMONRULEQUOTADETAIL_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_OVERVIEWCOMMONRULEQUOTADETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * 概览通用规则配额详情
                */
                class OverviewCommonRuleQuotaDetail : public AbstractModel
                {
                public:
                    OverviewCommonRuleQuotaDetail();
                    ~OverviewCommonRuleQuotaDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>允许使用的规则总数。</p>
                     * @return AllowedNum <p>允许使用的规则总数。</p>
                     * 
                     */
                    int64_t GetAllowedNum() const;

                    /**
                     * 设置<p>允许使用的规则总数。</p>
                     * @param _allowedNum <p>允许使用的规则总数。</p>
                     * 
                     */
                    void SetAllowedNum(const int64_t& _allowedNum);

                    /**
                     * 判断参数 AllowedNum 是否已赋值
                     * @return AllowedNum 是否已赋值
                     * 
                     */
                    bool AllowedNumHasBeenSet() const;

                    /**
                     * 获取<p>已使用规则数量。</p>
                     * @return UsedNum <p>已使用规则数量。</p>
                     * 
                     */
                    int64_t GetUsedNum() const;

                    /**
                     * 设置<p>已使用规则数量。</p>
                     * @param _usedNum <p>已使用规则数量。</p>
                     * 
                     */
                    void SetUsedNum(const int64_t& _usedNum);

                    /**
                     * 判断参数 UsedNum 是否已赋值
                     * @return UsedNum 是否已赋值
                     * 
                     */
                    bool UsedNumHasBeenSet() const;

                    /**
                     * 获取<p>剩余规则配额数量。</p>
                     * @return RemainQuota <p>剩余规则配额数量。</p>
                     * 
                     */
                    int64_t GetRemainQuota() const;

                    /**
                     * 设置<p>剩余规则配额数量。</p>
                     * @param _remainQuota <p>剩余规则配额数量。</p>
                     * 
                     */
                    void SetRemainQuota(const int64_t& _remainQuota);

                    /**
                     * 判断参数 RemainQuota 是否已赋值
                     * @return RemainQuota 是否已赋值
                     * 
                     */
                    bool RemainQuotaHasBeenSet() const;

                    /**
                     * 获取<p>剩余扩容规则数量。</p>
                     * @return RemainExtensionNum <p>剩余扩容规则数量。</p>
                     * 
                     */
                    int64_t GetRemainExtensionNum() const;

                    /**
                     * 设置<p>剩余扩容规则数量。</p>
                     * @param _remainExtensionNum <p>剩余扩容规则数量。</p>
                     * 
                     */
                    void SetRemainExtensionNum(const int64_t& _remainExtensionNum);

                    /**
                     * 判断参数 RemainExtensionNum 是否已赋值
                     * @return RemainExtensionNum 是否已赋值
                     * 
                     */
                    bool RemainExtensionNumHasBeenSet() const;

                    /**
                     * 获取<p>入方向规则总数。</p>
                     * @return InTotal <p>入方向规则总数。</p>
                     * 
                     */
                    int64_t GetInTotal() const;

                    /**
                     * 设置<p>入方向规则总数。</p>
                     * @param _inTotal <p>入方向规则总数。</p>
                     * 
                     */
                    void SetInTotal(const int64_t& _inTotal);

                    /**
                     * 判断参数 InTotal 是否已赋值
                     * @return InTotal 是否已赋值
                     * 
                     */
                    bool InTotalHasBeenSet() const;

                    /**
                     * 获取<p>入方向启用规则数。</p>
                     * @return InEnableNum <p>入方向启用规则数。</p>
                     * 
                     */
                    int64_t GetInEnableNum() const;

                    /**
                     * 设置<p>入方向启用规则数。</p>
                     * @param _inEnableNum <p>入方向启用规则数。</p>
                     * 
                     */
                    void SetInEnableNum(const int64_t& _inEnableNum);

                    /**
                     * 判断参数 InEnableNum 是否已赋值
                     * @return InEnableNum 是否已赋值
                     * 
                     */
                    bool InEnableNumHasBeenSet() const;

                    /**
                     * 获取<p>出方向规则总数。</p>
                     * @return OutTotal <p>出方向规则总数。</p>
                     * 
                     */
                    int64_t GetOutTotal() const;

                    /**
                     * 设置<p>出方向规则总数。</p>
                     * @param _outTotal <p>出方向规则总数。</p>
                     * 
                     */
                    void SetOutTotal(const int64_t& _outTotal);

                    /**
                     * 判断参数 OutTotal 是否已赋值
                     * @return OutTotal 是否已赋值
                     * 
                     */
                    bool OutTotalHasBeenSet() const;

                    /**
                     * 获取<p>出方向启用规则数。</p>
                     * @return OutEnableNum <p>出方向启用规则数。</p>
                     * 
                     */
                    int64_t GetOutEnableNum() const;

                    /**
                     * 设置<p>出方向启用规则数。</p>
                     * @param _outEnableNum <p>出方向启用规则数。</p>
                     * 
                     */
                    void SetOutEnableNum(const int64_t& _outEnableNum);

                    /**
                     * 判断参数 OutEnableNum 是否已赋值
                     * @return OutEnableNum 是否已赋值
                     * 
                     */
                    bool OutEnableNumHasBeenSet() const;

                private:

                    /**
                     * <p>允许使用的规则总数。</p>
                     */
                    int64_t m_allowedNum;
                    bool m_allowedNumHasBeenSet;

                    /**
                     * <p>已使用规则数量。</p>
                     */
                    int64_t m_usedNum;
                    bool m_usedNumHasBeenSet;

                    /**
                     * <p>剩余规则配额数量。</p>
                     */
                    int64_t m_remainQuota;
                    bool m_remainQuotaHasBeenSet;

                    /**
                     * <p>剩余扩容规则数量。</p>
                     */
                    int64_t m_remainExtensionNum;
                    bool m_remainExtensionNumHasBeenSet;

                    /**
                     * <p>入方向规则总数。</p>
                     */
                    int64_t m_inTotal;
                    bool m_inTotalHasBeenSet;

                    /**
                     * <p>入方向启用规则数。</p>
                     */
                    int64_t m_inEnableNum;
                    bool m_inEnableNumHasBeenSet;

                    /**
                     * <p>出方向规则总数。</p>
                     */
                    int64_t m_outTotal;
                    bool m_outTotalHasBeenSet;

                    /**
                     * <p>出方向启用规则数。</p>
                     */
                    int64_t m_outEnableNum;
                    bool m_outEnableNumHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_OVERVIEWCOMMONRULEQUOTADETAIL_H_
