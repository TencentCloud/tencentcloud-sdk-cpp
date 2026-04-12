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
                     * 获取<p>灰度发布规则ID。该参数可以通过调用 <a href="https://cloud.tencent.com/document/product/649/44505">DescribeLaneRules</a> 的返回值中的 RuleId 字段来获取或通过登录<a href="https://console.cloud.tencent.com/tse/tsf-consul?tab=grayscale&amp;subTab=lanerule">控制台</a>查看；也可以调用<a href="https://cloud.tencent.com/document/product/649/44507">CreateLaneRule</a>创建新的灰度发布规则。</p>
                     * @return RuleId <p>灰度发布规则ID。该参数可以通过调用 <a href="https://cloud.tencent.com/document/product/649/44505">DescribeLaneRules</a> 的返回值中的 RuleId 字段来获取或通过登录<a href="https://console.cloud.tencent.com/tse/tsf-consul?tab=grayscale&amp;subTab=lanerule">控制台</a>查看；也可以调用<a href="https://cloud.tencent.com/document/product/649/44507">CreateLaneRule</a>创建新的灰度发布规则。</p>
                     * 
                     */
                    std::string GetRuleId() const;

                    /**
                     * 设置<p>灰度发布规则ID。该参数可以通过调用 <a href="https://cloud.tencent.com/document/product/649/44505">DescribeLaneRules</a> 的返回值中的 RuleId 字段来获取或通过登录<a href="https://console.cloud.tencent.com/tse/tsf-consul?tab=grayscale&amp;subTab=lanerule">控制台</a>查看；也可以调用<a href="https://cloud.tencent.com/document/product/649/44507">CreateLaneRule</a>创建新的灰度发布规则。</p>
                     * @param _ruleId <p>灰度发布规则ID。该参数可以通过调用 <a href="https://cloud.tencent.com/document/product/649/44505">DescribeLaneRules</a> 的返回值中的 RuleId 字段来获取或通过登录<a href="https://console.cloud.tencent.com/tse/tsf-consul?tab=grayscale&amp;subTab=lanerule">控制台</a>查看；也可以调用<a href="https://cloud.tencent.com/document/product/649/44507">CreateLaneRule</a>创建新的灰度发布规则。</p>
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
                     * 获取<p>灰度发布规则名称，最多支持60个字符，支持中英文字符。</p>
                     * @return RuleName <p>灰度发布规则名称，最多支持60个字符，支持中英文字符。</p>
                     * 
                     */
                    std::string GetRuleName() const;

                    /**
                     * 设置<p>灰度发布规则名称，最多支持60个字符，支持中英文字符。</p>
                     * @param _ruleName <p>灰度发布规则名称，最多支持60个字符，支持中英文字符。</p>
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
                     * 获取<p>灰度发布规则备注，最多支持200个字符。</p>
                     * @return Remark <p>灰度发布规则备注，最多支持200个字符。</p>
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置<p>灰度发布规则备注，最多支持200个字符。</p>
                     * @param _remark <p>灰度发布规则备注，最多支持200个字符。</p>
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
                     * 获取<p>灰度发布规则标签列表。</p>
                     * @return RuleTagList <p>灰度发布规则标签列表。</p>
                     * 
                     */
                    std::vector<LaneRuleTag> GetRuleTagList() const;

                    /**
                     * 设置<p>灰度发布规则标签列表。</p>
                     * @param _ruleTagList <p>灰度发布规则标签列表。</p>
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
                     * 获取<p>泳道配置ID。该参数可以通过调用 <a href="https://cloud.tencent.com/document/product/649/44504">DescribeLanes</a> 的返回值中的 LaneId 字段来获取或通过登录<a href="https://console.cloud.tencent.com/tse/tsf-consul?tab=grayscale&amp;subTab=lane">控制台</a>查看；也可以调用<a href="https://cloud.tencent.com/document/product/649/44508">CreateLane</a>创建新的泳道配置。</p>
                     * @return LaneId <p>泳道配置ID。该参数可以通过调用 <a href="https://cloud.tencent.com/document/product/649/44504">DescribeLanes</a> 的返回值中的 LaneId 字段来获取或通过登录<a href="https://console.cloud.tencent.com/tse/tsf-consul?tab=grayscale&amp;subTab=lane">控制台</a>查看；也可以调用<a href="https://cloud.tencent.com/document/product/649/44508">CreateLane</a>创建新的泳道配置。</p>
                     * 
                     */
                    std::string GetLaneId() const;

                    /**
                     * 设置<p>泳道配置ID。该参数可以通过调用 <a href="https://cloud.tencent.com/document/product/649/44504">DescribeLanes</a> 的返回值中的 LaneId 字段来获取或通过登录<a href="https://console.cloud.tencent.com/tse/tsf-consul?tab=grayscale&amp;subTab=lane">控制台</a>查看；也可以调用<a href="https://cloud.tencent.com/document/product/649/44508">CreateLane</a>创建新的泳道配置。</p>
                     * @param _laneId <p>泳道配置ID。该参数可以通过调用 <a href="https://cloud.tencent.com/document/product/649/44504">DescribeLanes</a> 的返回值中的 LaneId 字段来获取或通过登录<a href="https://console.cloud.tencent.com/tse/tsf-consul?tab=grayscale&amp;subTab=lane">控制台</a>查看；也可以调用<a href="https://cloud.tencent.com/document/product/649/44508">CreateLane</a>创建新的泳道配置。</p>
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
                     * 获取<p>开启状态。</p><ul><li>true：开启</li><li>false：关闭</li></ul>
                     * @return Enable <p>开启状态。</p><ul><li>true：开启</li><li>false：关闭</li></ul>
                     * 
                     */
                    bool GetEnable() const;

                    /**
                     * 设置<p>开启状态。</p><ul><li>true：开启</li><li>false：关闭</li></ul>
                     * @param _enable <p>开启状态。</p><ul><li>true：开启</li><li>false：关闭</li></ul>
                     * 
                     */
                    void SetEnable(const bool& _enable);

                    /**
                     * 判断参数 Enable 是否已赋值
                     * @return Enable 是否已赋值
                     * 
                     */
                    bool EnableHasBeenSet() const;

                    /**
                     * 获取<p>灰度发布规则标签关系。- RELEATION_AND：与- RELEATION_OR：或</p>
                     * @return RuleTagRelationship <p>灰度发布规则标签关系。- RELEATION_AND：与- RELEATION_OR：或</p>
                     * 
                     */
                    std::string GetRuleTagRelationship() const;

                    /**
                     * 设置<p>灰度发布规则标签关系。- RELEATION_AND：与- RELEATION_OR：或</p>
                     * @param _ruleTagRelationship <p>灰度发布规则标签关系。- RELEATION_AND：与- RELEATION_OR：或</p>
                     * 
                     */
                    void SetRuleTagRelationship(const std::string& _ruleTagRelationship);

                    /**
                     * 判断参数 RuleTagRelationship 是否已赋值
                     * @return RuleTagRelationship 是否已赋值
                     * 
                     */
                    bool RuleTagRelationshipHasBeenSet() const;

                private:

                    /**
                     * <p>灰度发布规则ID。该参数可以通过调用 <a href="https://cloud.tencent.com/document/product/649/44505">DescribeLaneRules</a> 的返回值中的 RuleId 字段来获取或通过登录<a href="https://console.cloud.tencent.com/tse/tsf-consul?tab=grayscale&amp;subTab=lanerule">控制台</a>查看；也可以调用<a href="https://cloud.tencent.com/document/product/649/44507">CreateLaneRule</a>创建新的灰度发布规则。</p>
                     */
                    std::string m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * <p>灰度发布规则名称，最多支持60个字符，支持中英文字符。</p>
                     */
                    std::string m_ruleName;
                    bool m_ruleNameHasBeenSet;

                    /**
                     * <p>灰度发布规则备注，最多支持200个字符。</p>
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * <p>灰度发布规则标签列表。</p>
                     */
                    std::vector<LaneRuleTag> m_ruleTagList;
                    bool m_ruleTagListHasBeenSet;

                    /**
                     * <p>泳道配置ID。该参数可以通过调用 <a href="https://cloud.tencent.com/document/product/649/44504">DescribeLanes</a> 的返回值中的 LaneId 字段来获取或通过登录<a href="https://console.cloud.tencent.com/tse/tsf-consul?tab=grayscale&amp;subTab=lane">控制台</a>查看；也可以调用<a href="https://cloud.tencent.com/document/product/649/44508">CreateLane</a>创建新的泳道配置。</p>
                     */
                    std::string m_laneId;
                    bool m_laneIdHasBeenSet;

                    /**
                     * <p>开启状态。</p><ul><li>true：开启</li><li>false：关闭</li></ul>
                     */
                    bool m_enable;
                    bool m_enableHasBeenSet;

                    /**
                     * <p>灰度发布规则标签关系。- RELEATION_AND：与- RELEATION_OR：或</p>
                     */
                    std::string m_ruleTagRelationship;
                    bool m_ruleTagRelationshipHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_MODIFYLANERULEREQUEST_H_
