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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_MODIFYLANERULEREQUEST_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_MODIFYLANERULEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tsf/v20180326/model/LaneRuleTag.h>


namespace TencentCloud
{
    namespace Tsf
    {
        namespace V20180326
        {
            namespace Model
            {
                /**
                * ModifyLaneRule请求参数结构体
                */
                class ModifyLaneRuleRequest : public AbstractModel
                {
                public:
                    ModifyLaneRuleRequest();
                    ~ModifyLaneRuleRequest() = default;
                    std::string ToJsonString() const;


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
                     * 获取灰度发布规则名称，最多支持60个字符，支持中英文字符。
                     * @return RuleName 灰度发布规则名称，最多支持60个字符，支持中英文字符。
                     * 
                     */
                    std::string GetRuleName() const;

                    /**
                     * 设置灰度发布规则名称，最多支持60个字符，支持中英文字符。
                     * @param _ruleName 灰度发布规则名称，最多支持60个字符，支持中英文字符。
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
                     * 获取灰度发布规则备注，最多支持200个字符。
                     * @return Remark 灰度发布规则备注，最多支持200个字符。
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置灰度发布规则备注，最多支持200个字符。
                     * @param _remark 灰度发布规则备注，最多支持200个字符。
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取灰度发布规则标签列表。
                     * @return RuleTagList 灰度发布规则标签列表。
                     * 
                     */
                    std::vector<LaneRuleTag> GetRuleTagList() const;

                    /**
                     * 设置灰度发布规则标签列表。
                     * @param _ruleTagList 灰度发布规则标签列表。
                     * 
                     */
                    void SetRuleTagList(const std::vector<LaneRuleTag>& _ruleTagList);

                    /**
                     * 判断参数 RuleTagList 是否已赋值
                     * @return RuleTagList 是否已赋值
                     * 
                     */
                    bool RuleTagListHasBeenSet() const;

                    /**
                     * 获取灰度发布规则标签关系。- RELEATION_AND：与- RELEATION_OR：或
                     * @return RuleTagRelationship 灰度发布规则标签关系。- RELEATION_AND：与- RELEATION_OR：或
                     * 
                     */
                    std::string GetRuleTagRelationship() const;

                    /**
                     * 设置灰度发布规则标签关系。- RELEATION_AND：与- RELEATION_OR：或
                     * @param _ruleTagRelationship 灰度发布规则标签关系。- RELEATION_AND：与- RELEATION_OR：或
                     * 
                     */
                    void SetRuleTagRelationship(const std::string& _ruleTagRelationship);

                    /**
                     * 判断参数 RuleTagRelationship 是否已赋值
                     * @return RuleTagRelationship 是否已赋值
                     * 
                     */
                    bool RuleTagRelationshipHasBeenSet() const;

                    /**
                     * 获取泳道配置ID。该参数可以通过调用 [DescribeLanes](https://cloud.tencent.com/document/product/649/44504) 的返回值中的 LaneId 字段来获取或通过登录[控制台](https://console.cloud.tencent.com/tse/tsf-consul?tab=grayscale&subTab=lane)查看；也可以调用[CreateLane](https://cloud.tencent.com/document/product/649/44508)创建新的泳道配置。
                     * @return LaneId 泳道配置ID。该参数可以通过调用 [DescribeLanes](https://cloud.tencent.com/document/product/649/44504) 的返回值中的 LaneId 字段来获取或通过登录[控制台](https://console.cloud.tencent.com/tse/tsf-consul?tab=grayscale&subTab=lane)查看；也可以调用[CreateLane](https://cloud.tencent.com/document/product/649/44508)创建新的泳道配置。
                     * 
                     */
                    std::string GetLaneId() const;

                    /**
                     * 设置泳道配置ID。该参数可以通过调用 [DescribeLanes](https://cloud.tencent.com/document/product/649/44504) 的返回值中的 LaneId 字段来获取或通过登录[控制台](https://console.cloud.tencent.com/tse/tsf-consul?tab=grayscale&subTab=lane)查看；也可以调用[CreateLane](https://cloud.tencent.com/document/product/649/44508)创建新的泳道配置。
                     * @param _laneId 泳道配置ID。该参数可以通过调用 [DescribeLanes](https://cloud.tencent.com/document/product/649/44504) 的返回值中的 LaneId 字段来获取或通过登录[控制台](https://console.cloud.tencent.com/tse/tsf-consul?tab=grayscale&subTab=lane)查看；也可以调用[CreateLane](https://cloud.tencent.com/document/product/649/44508)创建新的泳道配置。
                     * 
                     */
                    void SetLaneId(const std::string& _laneId);

                    /**
                     * 判断参数 LaneId 是否已赋值
                     * @return LaneId 是否已赋值
                     * 
                     */
                    bool LaneIdHasBeenSet() const;

                    /**
                     * 获取开启状态。
- true：开启
- false：关闭
                     * @return Enable 开启状态。
- true：开启
- false：关闭
                     * 
                     */
                    bool GetEnable() const;

                    /**
                     * 设置开启状态。
- true：开启
- false：关闭
                     * @param _enable 开启状态。
- true：开启
- false：关闭
                     * 
                     */
                    void SetEnable(const bool& _enable);

                    /**
                     * 判断参数 Enable 是否已赋值
                     * @return Enable 是否已赋值
                     * 
                     */
                    bool EnableHasBeenSet() const;

                private:

                    /**
                     * 灰度发布规则ID。该参数可以通过调用 [DescribeLaneRules](https://cloud.tencent.com/document/product/649/44505) 的返回值中的 RuleId 字段来获取或通过登录[控制台](https://console.cloud.tencent.com/tse/tsf-consul?tab=grayscale&subTab=lanerule)查看；也可以调用[CreateLaneRule](https://cloud.tencent.com/document/product/649/44507)创建新的灰度发布规则。
                     */
                    std::string m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * 灰度发布规则名称，最多支持60个字符，支持中英文字符。
                     */
                    std::string m_ruleName;
                    bool m_ruleNameHasBeenSet;

                    /**
                     * 灰度发布规则备注，最多支持200个字符。
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * 灰度发布规则标签列表。
                     */
                    std::vector<LaneRuleTag> m_ruleTagList;
                    bool m_ruleTagListHasBeenSet;

                    /**
                     * 灰度发布规则标签关系。- RELEATION_AND：与- RELEATION_OR：或
                     */
                    std::string m_ruleTagRelationship;
                    bool m_ruleTagRelationshipHasBeenSet;

                    /**
                     * 泳道配置ID。该参数可以通过调用 [DescribeLanes](https://cloud.tencent.com/document/product/649/44504) 的返回值中的 LaneId 字段来获取或通过登录[控制台](https://console.cloud.tencent.com/tse/tsf-consul?tab=grayscale&subTab=lane)查看；也可以调用[CreateLane](https://cloud.tencent.com/document/product/649/44508)创建新的泳道配置。
                     */
                    std::string m_laneId;
                    bool m_laneIdHasBeenSet;

                    /**
                     * 开启状态。
- true：开启
- false：关闭
                     */
                    bool m_enable;
                    bool m_enableHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_MODIFYLANERULEREQUEST_H_
