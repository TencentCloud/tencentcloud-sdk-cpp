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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_SCALABLERULE_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_SCALABLERULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * ScalableRule值
                */
                class ScalableRule : public AbstractModel
                {
                public:
                    ScalableRule();
                    ~ScalableRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取RuleId值
                     * @return RuleId RuleId值
                     * 
                     */
                    std::string GetRuleId() const;

                    /**
                     * 设置RuleId值
                     * @param _ruleId RuleId值
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
                     * 获取Name值
                     * @return Name Name值
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Name值
                     * @param _name Name值
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
                     * 获取ExpandVmCountLimit值
                     * @return ExpandVmCountLimit ExpandVmCountLimit值
                     * 
                     */
                    int64_t GetExpandVmCountLimit() const;

                    /**
                     * 设置ExpandVmCountLimit值
                     * @param _expandVmCountLimit ExpandVmCountLimit值
                     * 
                     */
                    void SetExpandVmCountLimit(const int64_t& _expandVmCountLimit);

                    /**
                     * 判断参数 ExpandVmCountLimit 是否已赋值
                     * @return ExpandVmCountLimit 是否已赋值
                     * 
                     */
                    bool ExpandVmCountLimitHasBeenSet() const;

                    /**
                     * 获取ShrinkVmCountLimit值
                     * @return ShrinkVmCountLimit ShrinkVmCountLimit值
                     * 
                     */
                    int64_t GetShrinkVmCountLimit() const;

                    /**
                     * 设置ShrinkVmCountLimit值
                     * @param _shrinkVmCountLimit ShrinkVmCountLimit值
                     * 
                     */
                    void SetShrinkVmCountLimit(const int64_t& _shrinkVmCountLimit);

                    /**
                     * 判断参数 ShrinkVmCountLimit 是否已赋值
                     * @return ShrinkVmCountLimit 是否已赋值
                     * 
                     */
                    bool ShrinkVmCountLimitHasBeenSet() const;

                    /**
                     * 获取GroupCount值
                     * @return GroupCount GroupCount值
                     * 
                     */
                    int64_t GetGroupCount() const;

                    /**
                     * 设置GroupCount值
                     * @param _groupCount GroupCount值
                     * 
                     */
                    void SetGroupCount(const int64_t& _groupCount);

                    /**
                     * 判断参数 GroupCount 是否已赋值
                     * @return GroupCount 是否已赋值
                     * 
                     */
                    bool GroupCountHasBeenSet() const;

                    /**
                     * 获取备注
                     * @return Desc 备注
                     * 
                     */
                    std::string GetDesc() const;

                    /**
                     * 设置备注
                     * @param _desc 备注
                     * 
                     */
                    void SetDesc(const std::string& _desc);

                    /**
                     * 判断参数 Desc 是否已赋值
                     * @return Desc 是否已赋值
                     * 
                     */
                    bool DescHasBeenSet() const;

                    /**
                     * 获取备注
                     * @return Description 备注
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置备注
                     * @param _description 备注
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取是否关闭指标伸缩, 默认0, 0:打开指标伸缩 1:关闭指标伸缩
                     * @return DisableMetricAS 是否关闭指标伸缩, 默认0, 0:打开指标伸缩 1:关闭指标伸缩
                     * 
                     */
                    uint64_t GetDisableMetricAS() const;

                    /**
                     * 设置是否关闭指标伸缩, 默认0, 0:打开指标伸缩 1:关闭指标伸缩
                     * @param _disableMetricAS 是否关闭指标伸缩, 默认0, 0:打开指标伸缩 1:关闭指标伸缩
                     * 
                     */
                    void SetDisableMetricAS(const uint64_t& _disableMetricAS);

                    /**
                     * 判断参数 DisableMetricAS 是否已赋值
                     * @return DisableMetricAS 是否已赋值
                     * 
                     */
                    bool DisableMetricASHasBeenSet() const;

                    /**
                     * 获取开启定时伸缩规则, 默认0, 0:关闭定时伸缩 1:开启定时伸缩
                     * @return EnableCronAS 开启定时伸缩规则, 默认0, 0:关闭定时伸缩 1:开启定时伸缩
                     * 
                     */
                    uint64_t GetEnableCronAS() const;

                    /**
                     * 设置开启定时伸缩规则, 默认0, 0:关闭定时伸缩 1:开启定时伸缩
                     * @param _enableCronAS 开启定时伸缩规则, 默认0, 0:关闭定时伸缩 1:开启定时伸缩
                     * 
                     */
                    void SetEnableCronAS(const uint64_t& _enableCronAS);

                    /**
                     * 判断参数 EnableCronAS 是否已赋值
                     * @return EnableCronAS 是否已赋值
                     * 
                     */
                    bool EnableCronASHasBeenSet() const;

                private:

                    /**
                     * RuleId值
                     */
                    std::string m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * Name值
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * ExpandVmCountLimit值
                     */
                    int64_t m_expandVmCountLimit;
                    bool m_expandVmCountLimitHasBeenSet;

                    /**
                     * ShrinkVmCountLimit值
                     */
                    int64_t m_shrinkVmCountLimit;
                    bool m_shrinkVmCountLimitHasBeenSet;

                    /**
                     * GroupCount值
                     */
                    int64_t m_groupCount;
                    bool m_groupCountHasBeenSet;

                    /**
                     * 备注
                     */
                    std::string m_desc;
                    bool m_descHasBeenSet;

                    /**
                     * 备注
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 是否关闭指标伸缩, 默认0, 0:打开指标伸缩 1:关闭指标伸缩
                     */
                    uint64_t m_disableMetricAS;
                    bool m_disableMetricASHasBeenSet;

                    /**
                     * 开启定时伸缩规则, 默认0, 0:关闭定时伸缩 1:开启定时伸缩
                     */
                    uint64_t m_enableCronAS;
                    bool m_enableCronASHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_SCALABLERULE_H_
