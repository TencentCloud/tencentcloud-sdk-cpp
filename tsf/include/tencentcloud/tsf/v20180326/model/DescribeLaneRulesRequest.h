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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_DESCRIBELANERULESREQUEST_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_DESCRIBELANERULESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tsf
    {
        namespace V20180326
        {
            namespace Model
            {
                /**
                * DescribeLaneRules请求参数结构体
                */
                class DescribeLaneRulesRequest : public AbstractModel
                {
                public:
                    DescribeLaneRulesRequest();
                    ~DescribeLaneRulesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取返回数量，默认为20，最大值为500。
                     * @return Limit 返回数量，默认为20，最大值为500。
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置返回数量，默认为20，最大值为500。
                     * @param _limit 返回数量，默认为20，最大值为500。
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取偏移量，默认为0。
                     * @return Offset 偏移量，默认为0。
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置偏移量，默认为0。
                     * @param _offset 偏移量，默认为0。
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取搜索关键词。
                     * @return SearchWord 搜索关键词。
                     * 
                     */
                    std::string GetSearchWord() const;

                    /**
                     * 设置搜索关键词。
                     * @param _searchWord 搜索关键词。
                     * 
                     */
                    void SetSearchWord(const std::string& _searchWord);

                    /**
                     * 判断参数 SearchWord 是否已赋值
                     * @return SearchWord 是否已赋值
                     * 
                     */
                    bool SearchWordHasBeenSet() const;

                    /**
                     * 获取灰度发布规则ID。该参数可以通过调用 [DescribeLaneRules](https://cloud.tencent.com/document/product/649/44505) 的返回值中的 RuleId 字段来获取或通过登录[控制台](https://console.cloud.tencent.com/tse/tsf-consul?tab=grayscale&subTab=lanerule)查看；也可以调用[CreateLaneRule](https://cloud.tencent.com/document/product/649/44507)创建新的灰度发布规则。
                     * @return RuleId 灰度发布规则ID。该参数可以通过调用 [DescribeLaneRules](https://cloud.tencent.com/document/product/649/44505) 的返回值中的 RuleId 字段来获取或通过登录[控制台](https://console.cloud.tencent.com/tse/tsf-consul?tab=grayscale&subTab=lanerule)查看；也可以调用[CreateLaneRule](https://cloud.tencent.com/document/product/649/44507)创建新的灰度发布规则。
                     * 
                     */
                    std::string GetRuleId() const;

                    /**
                     * 设置灰度发布规则ID。该参数可以通过调用 [DescribeLaneRules](https://cloud.tencent.com/document/product/649/44505) 的返回值中的 RuleId 字段来获取或通过登录[控制台](https://console.cloud.tencent.com/tse/tsf-consul?tab=grayscale&subTab=lanerule)查看；也可以调用[CreateLaneRule](https://cloud.tencent.com/document/product/649/44507)创建新的灰度发布规则。
                     * @param _ruleId 灰度发布规则ID。该参数可以通过调用 [DescribeLaneRules](https://cloud.tencent.com/document/product/649/44505) 的返回值中的 RuleId 字段来获取或通过登录[控制台](https://console.cloud.tencent.com/tse/tsf-consul?tab=grayscale&subTab=lanerule)查看；也可以调用[CreateLaneRule](https://cloud.tencent.com/document/product/649/44507)创建新的灰度发布规则。
                     * 
                     */
                    void SetRuleId(const std::string& _ruleId);

                    /**
                     * 判断参数 RuleId 是否已赋值
                     * @return RuleId 是否已赋值
                     * 
                     */
                    bool RuleIdHasBeenSet() const;

                    /**
                     * 获取灰度发布规则ID。该参数可以通过调用 [DescribeLaneRules](https://cloud.tencent.com/document/product/649/44505) 的返回值中的 RuleId 字段来获取或通过登录[控制台](https://console.cloud.tencent.com/tse/tsf-consul?tab=grayscale&subTab=lanerule)查看；也可以调用[CreateLaneRule](https://cloud.tencent.com/document/product/649/44507)创建新的灰度发布规则。
                     * @return RuleIdList 灰度发布规则ID。该参数可以通过调用 [DescribeLaneRules](https://cloud.tencent.com/document/product/649/44505) 的返回值中的 RuleId 字段来获取或通过登录[控制台](https://console.cloud.tencent.com/tse/tsf-consul?tab=grayscale&subTab=lanerule)查看；也可以调用[CreateLaneRule](https://cloud.tencent.com/document/product/649/44507)创建新的灰度发布规则。
                     * 
                     */
                    std::vector<std::string> GetRuleIdList() const;

                    /**
                     * 设置灰度发布规则ID。该参数可以通过调用 [DescribeLaneRules](https://cloud.tencent.com/document/product/649/44505) 的返回值中的 RuleId 字段来获取或通过登录[控制台](https://console.cloud.tencent.com/tse/tsf-consul?tab=grayscale&subTab=lanerule)查看；也可以调用[CreateLaneRule](https://cloud.tencent.com/document/product/649/44507)创建新的灰度发布规则。
                     * @param _ruleIdList 灰度发布规则ID。该参数可以通过调用 [DescribeLaneRules](https://cloud.tencent.com/document/product/649/44505) 的返回值中的 RuleId 字段来获取或通过登录[控制台](https://console.cloud.tencent.com/tse/tsf-consul?tab=grayscale&subTab=lanerule)查看；也可以调用[CreateLaneRule](https://cloud.tencent.com/document/product/649/44507)创建新的灰度发布规则。
                     * 
                     */
                    void SetRuleIdList(const std::vector<std::string>& _ruleIdList);

                    /**
                     * 判断参数 RuleIdList 是否已赋值
                     * @return RuleIdList 是否已赋值
                     * 
                     */
                    bool RuleIdListHasBeenSet() const;

                    /**
                     * 获取查询全部标记
                     * @return QueryAll 查询全部标记
                     * 
                     */
                    bool GetQueryAll() const;

                    /**
                     * 设置查询全部标记
                     * @param _queryAll 查询全部标记
                     * 
                     */
                    void SetQueryAll(const bool& _queryAll);

                    /**
                     * 判断参数 QueryAll 是否已赋值
                     * @return QueryAll 是否已赋值
                     * 
                     */
                    bool QueryAllHasBeenSet() const;

                private:

                    /**
                     * 返回数量，默认为20，最大值为500。
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 偏移量，默认为0。
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 搜索关键词。
                     */
                    std::string m_searchWord;
                    bool m_searchWordHasBeenSet;

                    /**
                     * 灰度发布规则ID。该参数可以通过调用 [DescribeLaneRules](https://cloud.tencent.com/document/product/649/44505) 的返回值中的 RuleId 字段来获取或通过登录[控制台](https://console.cloud.tencent.com/tse/tsf-consul?tab=grayscale&subTab=lanerule)查看；也可以调用[CreateLaneRule](https://cloud.tencent.com/document/product/649/44507)创建新的灰度发布规则。
                     */
                    std::string m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * 灰度发布规则ID。该参数可以通过调用 [DescribeLaneRules](https://cloud.tencent.com/document/product/649/44505) 的返回值中的 RuleId 字段来获取或通过登录[控制台](https://console.cloud.tencent.com/tse/tsf-consul?tab=grayscale&subTab=lanerule)查看；也可以调用[CreateLaneRule](https://cloud.tencent.com/document/product/649/44507)创建新的灰度发布规则。
                     */
                    std::vector<std::string> m_ruleIdList;
                    bool m_ruleIdListHasBeenSet;

                    /**
                     * 查询全部标记
                     */
                    bool m_queryAll;
                    bool m_queryAllHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_DESCRIBELANERULESREQUEST_H_
