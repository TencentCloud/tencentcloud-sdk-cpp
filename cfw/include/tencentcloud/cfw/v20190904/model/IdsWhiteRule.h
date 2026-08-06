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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_IDSWHITERULE_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_IDSWHITERULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cfw/v20190904/model/WhiteRuleInfo.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * 入侵防御白名单策略。必填字段：RuleName、FwType、EndTime、Info；Comment 选填
                */
                class IdsWhiteRule : public AbstractModel
                {
                public:
                    IdsWhiteRule();
                    ~IdsWhiteRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取策略备注，最多 200 个字符；可省略或传空字符串。
                     * @return Comment 策略备注，最多 200 个字符；可省略或传空字符串。
                     * 
                     */
                    std::string GetComment() const;

                    /**
                     * 设置策略备注，最多 200 个字符；可省略或传空字符串。
                     * @param _comment 策略备注，最多 200 个字符；可省略或传空字符串。
                     * 
                     */
                    void SetComment(const std::string& _comment);

                    /**
                     * 判断参数 Comment 是否已赋值
                     * @return Comment 是否已赋值
                     * 
                     */
                    bool CommentHasBeenSet() const;

                    /**
                     * 获取策略截止时间，北京时间（UTC+8）YYYY-MM-DD HH:MM:SS，必须晚于当前时间；永久有效传 3000-01-01 00:00:00。
                     * @return EndTime 策略截止时间，北京时间（UTC+8）YYYY-MM-DD HH:MM:SS，必须晚于当前时间；永久有效传 3000-01-01 00:00:00。
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置策略截止时间，北京时间（UTC+8）YYYY-MM-DD HH:MM:SS，必须晚于当前时间；永久有效传 3000-01-01 00:00:00。
                     * @param _endTime 策略截止时间，北京时间（UTC+8）YYYY-MM-DD HH:MM:SS，必须晚于当前时间；永久有效传 3000-01-01 00:00:00。
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取使用 JSON integer 表示生效范围位图，取值 1–31；各项按位相加：1 互联网旁路、2 NAT、4 VPC、8 互联网串行、16 NDR。
例如：12 表示 VPC+互联网串行，31 表示全部范围。
匹配条件支持的范围：
- 源/目的 IP、域名、IPS 规则：支持 1、2、4、8、16 及其组合。
- 威胁情报：固定为 1。
- 资产：使用 4、16 或 20。
- UserAgent、Url、XForwardedFor、HostName、FileName、FileMd5：固定为 16；RuleType=9 同样固定为 16。
                     * @return FwType 使用 JSON integer 表示生效范围位图，取值 1–31；各项按位相加：1 互联网旁路、2 NAT、4 VPC、8 互联网串行、16 NDR。
例如：12 表示 VPC+互联网串行，31 表示全部范围。
匹配条件支持的范围：
- 源/目的 IP、域名、IPS 规则：支持 1、2、4、8、16 及其组合。
- 威胁情报：固定为 1。
- 资产：使用 4、16 或 20。
- UserAgent、Url、XForwardedFor、HostName、FileName、FileMd5：固定为 16；RuleType=9 同样固定为 16。
                     * 
                     */
                    int64_t GetFwType() const;

                    /**
                     * 设置使用 JSON integer 表示生效范围位图，取值 1–31；各项按位相加：1 互联网旁路、2 NAT、4 VPC、8 互联网串行、16 NDR。
例如：12 表示 VPC+互联网串行，31 表示全部范围。
匹配条件支持的范围：
- 源/目的 IP、域名、IPS 规则：支持 1、2、4、8、16 及其组合。
- 威胁情报：固定为 1。
- 资产：使用 4、16 或 20。
- UserAgent、Url、XForwardedFor、HostName、FileName、FileMd5：固定为 16；RuleType=9 同样固定为 16。
                     * @param _fwType 使用 JSON integer 表示生效范围位图，取值 1–31；各项按位相加：1 互联网旁路、2 NAT、4 VPC、8 互联网串行、16 NDR。
例如：12 表示 VPC+互联网串行，31 表示全部范围。
匹配条件支持的范围：
- 源/目的 IP、域名、IPS 规则：支持 1、2、4、8、16 及其组合。
- 威胁情报：固定为 1。
- 资产：使用 4、16 或 20。
- UserAgent、Url、XForwardedFor、HostName、FileName、FileMd5：固定为 16；RuleType=9 同样固定为 16。
                     * 
                     */
                    void SetFwType(const int64_t& _fwType);

                    /**
                     * 判断参数 FwType 是否已赋值
                     * @return FwType 是否已赋值
                     * 
                     */
                    bool FwTypeHasBeenSet() const;

                    /**
                     * 获取匹配条件。按 RuleType 填写对应字段，无值字段省略。除 UserAgent 外，同字段多值用逗号分隔；UserAgent 多值用 <#cfw-splite#>。
                     * @return Info 匹配条件。按 RuleType 填写对应字段，无值字段省略。除 UserAgent 外，同字段多值用逗号分隔；UserAgent 多值用 <#cfw-splite#>。
                     * 
                     */
                    WhiteRuleInfo GetInfo() const;

                    /**
                     * 设置匹配条件。按 RuleType 填写对应字段，无值字段省略。除 UserAgent 外，同字段多值用逗号分隔；UserAgent 多值用 <#cfw-splite#>。
                     * @param _info 匹配条件。按 RuleType 填写对应字段，无值字段省略。除 UserAgent 外，同字段多值用逗号分隔；UserAgent 多值用 <#cfw-splite#>。
                     * 
                     */
                    void SetInfo(const WhiteRuleInfo& _info);

                    /**
                     * 判断参数 Info 是否已赋值
                     * @return Info 是否已赋值
                     * 
                     */
                    bool InfoHasBeenSet() const;

                    /**
                     * 获取策略名称，填写 1–50 个字符。
                     * @return RuleName 策略名称，填写 1–50 个字符。
                     * 
                     */
                    std::string GetRuleName() const;

                    /**
                     * 设置策略名称，填写 1–50 个字符。
                     * @param _ruleName 策略名称，填写 1–50 个字符。
                     * 
                     */
                    void SetRuleName(const std::string& _ruleName);

                    /**
                     * 判断参数 RuleName 是否已赋值
                     * @return RuleName 是否已赋值
                     * 
                     */
                    bool RuleNameHasBeenSet() const;

                private:

                    /**
                     * 策略备注，最多 200 个字符；可省略或传空字符串。
                     */
                    std::string m_comment;
                    bool m_commentHasBeenSet;

                    /**
                     * 策略截止时间，北京时间（UTC+8）YYYY-MM-DD HH:MM:SS，必须晚于当前时间；永久有效传 3000-01-01 00:00:00。
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 使用 JSON integer 表示生效范围位图，取值 1–31；各项按位相加：1 互联网旁路、2 NAT、4 VPC、8 互联网串行、16 NDR。
例如：12 表示 VPC+互联网串行，31 表示全部范围。
匹配条件支持的范围：
- 源/目的 IP、域名、IPS 规则：支持 1、2、4、8、16 及其组合。
- 威胁情报：固定为 1。
- 资产：使用 4、16 或 20。
- UserAgent、Url、XForwardedFor、HostName、FileName、FileMd5：固定为 16；RuleType=9 同样固定为 16。
                     */
                    int64_t m_fwType;
                    bool m_fwTypeHasBeenSet;

                    /**
                     * 匹配条件。按 RuleType 填写对应字段，无值字段省略。除 UserAgent 外，同字段多值用逗号分隔；UserAgent 多值用 <#cfw-splite#>。
                     */
                    WhiteRuleInfo m_info;
                    bool m_infoHasBeenSet;

                    /**
                     * 策略名称，填写 1–50 个字符。
                     */
                    std::string m_ruleName;
                    bool m_ruleNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_IDSWHITERULE_H_
