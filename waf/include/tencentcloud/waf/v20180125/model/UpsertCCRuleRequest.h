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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_UPSERTCCRULEREQUEST_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_UPSERTCCRULEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/waf/v20180125/model/JobDateTime.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * UpsertCCRule请求参数结构体
                */
                class UpsertCCRuleRequest : public AbstractModel
                {
                public:
                    UpsertCCRuleRequest();
                    ~UpsertCCRuleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取域名
                     * @return Domain 域名
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置域名
                     * @param _domain 域名
                     * 
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取名称
                     * @return Name 名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置名称
                     * @param _name 名称
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
                     * 获取状态
                     * @return Status 状态
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置状态
                     * @param _status 状态
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取高级模式（是否使用Session检测），0表示不启用，1表示启用
                     * @return Advance 高级模式（是否使用Session检测），0表示不启用，1表示启用
                     * 
                     */
                    std::string GetAdvance() const;

                    /**
                     * 设置高级模式（是否使用Session检测），0表示不启用，1表示启用
                     * @param _advance 高级模式（是否使用Session检测），0表示不启用，1表示启用
                     * 
                     */
                    void SetAdvance(const std::string& _advance);

                    /**
                     * 判断参数 Advance 是否已赋值
                     * @return Advance 是否已赋值
                     * 
                     */
                    bool AdvanceHasBeenSet() const;

                    /**
                     * 获取CC检测阈值
                     * @return Limit CC检测阈值
                     * 
                     */
                    std::string GetLimit() const;

                    /**
                     * 设置CC检测阈值
                     * @param _limit CC检测阈值
                     * 
                     */
                    void SetLimit(const std::string& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取CC检测周期
                     * @return Interval CC检测周期
                     * 
                     */
                    std::string GetInterval() const;

                    /**
                     * 设置CC检测周期
                     * @param _interval CC检测周期
                     * 
                     */
                    void SetInterval(const std::string& _interval);

                    /**
                     * 判断参数 Interval 是否已赋值
                     * @return Interval 是否已赋值
                     * 
                     */
                    bool IntervalHasBeenSet() const;

                    /**
                     * 获取动作，20表示观察，21表示人机识别，22表示拦截，23表示精准拦截，26表示精准人机识别，27表示JS校验
                     * @return ActionType 动作，20表示观察，21表示人机识别，22表示拦截，23表示精准拦截，26表示精准人机识别，27表示JS校验
                     * 
                     */
                    std::string GetActionType() const;

                    /**
                     * 设置动作，20表示观察，21表示人机识别，22表示拦截，23表示精准拦截，26表示精准人机识别，27表示JS校验
                     * @param _actionType 动作，20表示观察，21表示人机识别，22表示拦截，23表示精准拦截，26表示精准人机识别，27表示JS校验
                     * 
                     */
                    void SetActionType(const std::string& _actionType);

                    /**
                     * 判断参数 ActionType 是否已赋值
                     * @return ActionType 是否已赋值
                     * 
                     */
                    bool ActionTypeHasBeenSet() const;

                    /**
                     * 获取优先级
                     * @return Priority 优先级
                     * 
                     */
                    int64_t GetPriority() const;

                    /**
                     * 设置优先级
                     * @param _priority 优先级
                     * 
                     */
                    void SetPriority(const int64_t& _priority);

                    /**
                     * 判断参数 Priority 是否已赋值
                     * @return Priority 是否已赋值
                     * 
                     */
                    bool PriorityHasBeenSet() const;

                    /**
                     * 获取动作有效时间
                     * @return ValidTime 动作有效时间
                     * 
                     */
                    int64_t GetValidTime() const;

                    /**
                     * 设置动作有效时间
                     * @param _validTime 动作有效时间
                     * 
                     */
                    void SetValidTime(const int64_t& _validTime);

                    /**
                     * 判断参数 ValidTime 是否已赋值
                     * @return ValidTime 是否已赋值
                     * 
                     */
                    bool ValidTimeHasBeenSet() const;

                    /**
                     * 获取检测Url
                     * @return Url 检测Url
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置检测Url
                     * @param _url 检测Url
                     * 
                     */
                    void SetUrl(const std::string& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     * 
                     */
                    bool UrlHasBeenSet() const;

                    /**
                     * 获取匹配方法，0表示等于，1表示前缀匹配，2表示包含，3表示不等于，6表示后缀匹配，7表示不包含
                     * @return MatchFunc 匹配方法，0表示等于，1表示前缀匹配，2表示包含，3表示不等于，6表示后缀匹配，7表示不包含
                     * 
                     */
                    int64_t GetMatchFunc() const;

                    /**
                     * 设置匹配方法，0表示等于，1表示前缀匹配，2表示包含，3表示不等于，6表示后缀匹配，7表示不包含
                     * @param _matchFunc 匹配方法，0表示等于，1表示前缀匹配，2表示包含，3表示不等于，6表示后缀匹配，7表示不包含
                     * 
                     */
                    void SetMatchFunc(const int64_t& _matchFunc);

                    /**
                     * 判断参数 MatchFunc 是否已赋值
                     * @return MatchFunc 是否已赋值
                     * 
                     */
                    bool MatchFuncHasBeenSet() const;

                    /**
                     * 获取CC的匹配条件JSON序列化的字符串，示例：[{\"key\":\"Method\",\"args\":[\"=R0VU\"],\"match\":\"0\",\"encodeflag\":true}] Key可选值为 Method、Post、Referer、Cookie、User-Agent、CustomHeader、CaptchaRisk、CaptchaDeviceRisk、CaptchaScore match可选值为，当Key为Method的时候可选值为0（等于）、3（不等于）。 Key为Post的时候可选值为0（等于）、3（不等于），Key为Cookie的时候可选值为0（等于）、2（包含），3（不等于）、7（不包含）、 当Key为Referer的时候可选值为0（等于）、3（不等于）、1（前缀匹配）、6（后缀匹配）、2（包含）、7（不包含）、12（存在）、5（不存在）、4（内容为空）， 当Key为Cookie的时候可选值为0（等于）、3（不等于）、2（包含）、7（不包含）、12（存在）、5（不存在）、4（内容为空）， 当Key为User-Agent的时候可选值为0（等于）、3（不等于）、1（前缀匹配）、6（后缀匹配）、2（包含）、7（不包含）、12（存在）、5（不存在）、4（内容为空）， 当Key为CustomHeader的时候可选值为0（等于）、3（不等于）、2（包含）、7（不包含）、12（存在）、5（不存在）、4（内容为空）。 Key为IPLocation时，可选值为13（属于）、14（不属于）。 Key为CaptchaRisk时，可选值为0（等于）、3（不等于）、13（属于）、14（不属于）、12（存在）、5（不存在）。 Key为CaptchaDeviceRisk时，可选值为0（等于）、3（不等于）、13（属于）、14（不属于）、12（存在）、5（不存在）。 Key为CaptchaScore时，可选值为15（数值等于）、16（数值不等于）、17（数值大于）、18（数值小于）、19（数值大于等于）、20（数值小于等于）、12（存在）、5（不存在）。args用来表示匹配内容，需要设置encodeflag为true，当Key为Post、Cookie、CustomHeader时，用等号=来分别串接Key和Value，并分别用Base64编码，类似YWJj=YWJj。当Key为Referer、User-Agent时，用等号=来串接Value，类似=YWJj。
                     * @return OptionsArr CC的匹配条件JSON序列化的字符串，示例：[{\"key\":\"Method\",\"args\":[\"=R0VU\"],\"match\":\"0\",\"encodeflag\":true}] Key可选值为 Method、Post、Referer、Cookie、User-Agent、CustomHeader、CaptchaRisk、CaptchaDeviceRisk、CaptchaScore match可选值为，当Key为Method的时候可选值为0（等于）、3（不等于）。 Key为Post的时候可选值为0（等于）、3（不等于），Key为Cookie的时候可选值为0（等于）、2（包含），3（不等于）、7（不包含）、 当Key为Referer的时候可选值为0（等于）、3（不等于）、1（前缀匹配）、6（后缀匹配）、2（包含）、7（不包含）、12（存在）、5（不存在）、4（内容为空）， 当Key为Cookie的时候可选值为0（等于）、3（不等于）、2（包含）、7（不包含）、12（存在）、5（不存在）、4（内容为空）， 当Key为User-Agent的时候可选值为0（等于）、3（不等于）、1（前缀匹配）、6（后缀匹配）、2（包含）、7（不包含）、12（存在）、5（不存在）、4（内容为空）， 当Key为CustomHeader的时候可选值为0（等于）、3（不等于）、2（包含）、7（不包含）、12（存在）、5（不存在）、4（内容为空）。 Key为IPLocation时，可选值为13（属于）、14（不属于）。 Key为CaptchaRisk时，可选值为0（等于）、3（不等于）、13（属于）、14（不属于）、12（存在）、5（不存在）。 Key为CaptchaDeviceRisk时，可选值为0（等于）、3（不等于）、13（属于）、14（不属于）、12（存在）、5（不存在）。 Key为CaptchaScore时，可选值为15（数值等于）、16（数值不等于）、17（数值大于）、18（数值小于）、19（数值大于等于）、20（数值小于等于）、12（存在）、5（不存在）。args用来表示匹配内容，需要设置encodeflag为true，当Key为Post、Cookie、CustomHeader时，用等号=来分别串接Key和Value，并分别用Base64编码，类似YWJj=YWJj。当Key为Referer、User-Agent时，用等号=来串接Value，类似=YWJj。
                     * 
                     */
                    std::string GetOptionsArr() const;

                    /**
                     * 设置CC的匹配条件JSON序列化的字符串，示例：[{\"key\":\"Method\",\"args\":[\"=R0VU\"],\"match\":\"0\",\"encodeflag\":true}] Key可选值为 Method、Post、Referer、Cookie、User-Agent、CustomHeader、CaptchaRisk、CaptchaDeviceRisk、CaptchaScore match可选值为，当Key为Method的时候可选值为0（等于）、3（不等于）。 Key为Post的时候可选值为0（等于）、3（不等于），Key为Cookie的时候可选值为0（等于）、2（包含），3（不等于）、7（不包含）、 当Key为Referer的时候可选值为0（等于）、3（不等于）、1（前缀匹配）、6（后缀匹配）、2（包含）、7（不包含）、12（存在）、5（不存在）、4（内容为空）， 当Key为Cookie的时候可选值为0（等于）、3（不等于）、2（包含）、7（不包含）、12（存在）、5（不存在）、4（内容为空）， 当Key为User-Agent的时候可选值为0（等于）、3（不等于）、1（前缀匹配）、6（后缀匹配）、2（包含）、7（不包含）、12（存在）、5（不存在）、4（内容为空）， 当Key为CustomHeader的时候可选值为0（等于）、3（不等于）、2（包含）、7（不包含）、12（存在）、5（不存在）、4（内容为空）。 Key为IPLocation时，可选值为13（属于）、14（不属于）。 Key为CaptchaRisk时，可选值为0（等于）、3（不等于）、13（属于）、14（不属于）、12（存在）、5（不存在）。 Key为CaptchaDeviceRisk时，可选值为0（等于）、3（不等于）、13（属于）、14（不属于）、12（存在）、5（不存在）。 Key为CaptchaScore时，可选值为15（数值等于）、16（数值不等于）、17（数值大于）、18（数值小于）、19（数值大于等于）、20（数值小于等于）、12（存在）、5（不存在）。args用来表示匹配内容，需要设置encodeflag为true，当Key为Post、Cookie、CustomHeader时，用等号=来分别串接Key和Value，并分别用Base64编码，类似YWJj=YWJj。当Key为Referer、User-Agent时，用等号=来串接Value，类似=YWJj。
                     * @param _optionsArr CC的匹配条件JSON序列化的字符串，示例：[{\"key\":\"Method\",\"args\":[\"=R0VU\"],\"match\":\"0\",\"encodeflag\":true}] Key可选值为 Method、Post、Referer、Cookie、User-Agent、CustomHeader、CaptchaRisk、CaptchaDeviceRisk、CaptchaScore match可选值为，当Key为Method的时候可选值为0（等于）、3（不等于）。 Key为Post的时候可选值为0（等于）、3（不等于），Key为Cookie的时候可选值为0（等于）、2（包含），3（不等于）、7（不包含）、 当Key为Referer的时候可选值为0（等于）、3（不等于）、1（前缀匹配）、6（后缀匹配）、2（包含）、7（不包含）、12（存在）、5（不存在）、4（内容为空）， 当Key为Cookie的时候可选值为0（等于）、3（不等于）、2（包含）、7（不包含）、12（存在）、5（不存在）、4（内容为空）， 当Key为User-Agent的时候可选值为0（等于）、3（不等于）、1（前缀匹配）、6（后缀匹配）、2（包含）、7（不包含）、12（存在）、5（不存在）、4（内容为空）， 当Key为CustomHeader的时候可选值为0（等于）、3（不等于）、2（包含）、7（不包含）、12（存在）、5（不存在）、4（内容为空）。 Key为IPLocation时，可选值为13（属于）、14（不属于）。 Key为CaptchaRisk时，可选值为0（等于）、3（不等于）、13（属于）、14（不属于）、12（存在）、5（不存在）。 Key为CaptchaDeviceRisk时，可选值为0（等于）、3（不等于）、13（属于）、14（不属于）、12（存在）、5（不存在）。 Key为CaptchaScore时，可选值为15（数值等于）、16（数值不等于）、17（数值大于）、18（数值小于）、19（数值大于等于）、20（数值小于等于）、12（存在）、5（不存在）。args用来表示匹配内容，需要设置encodeflag为true，当Key为Post、Cookie、CustomHeader时，用等号=来分别串接Key和Value，并分别用Base64编码，类似YWJj=YWJj。当Key为Referer、User-Agent时，用等号=来串接Value，类似=YWJj。
                     * 
                     */
                    void SetOptionsArr(const std::string& _optionsArr);

                    /**
                     * 判断参数 OptionsArr 是否已赋值
                     * @return OptionsArr 是否已赋值
                     * 
                     */
                    bool OptionsArrHasBeenSet() const;

                    /**
                     * 获取waf版本，sparta-waf或者clb-waf
                     * @return Edition waf版本，sparta-waf或者clb-waf
                     * 
                     */
                    std::string GetEdition() const;

                    /**
                     * 设置waf版本，sparta-waf或者clb-waf
                     * @param _edition waf版本，sparta-waf或者clb-waf
                     * 
                     */
                    void SetEdition(const std::string& _edition);

                    /**
                     * 判断参数 Edition 是否已赋值
                     * @return Edition 是否已赋值
                     * 
                     */
                    bool EditionHasBeenSet() const;

                    /**
                     * 获取操作类型
                     * @return Type 操作类型
                     * 
                     */
                    int64_t GetType() const;

                    /**
                     * 设置操作类型
                     * @param _type 操作类型
                     * 
                     */
                    void SetType(const int64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取添加规则的来源事件id
                     * @return EventId 添加规则的来源事件id
                     * 
                     */
                    std::string GetEventId() const;

                    /**
                     * 设置添加规则的来源事件id
                     * @param _eventId 添加规则的来源事件id
                     * 
                     */
                    void SetEventId(const std::string& _eventId);

                    /**
                     * 判断参数 EventId 是否已赋值
                     * @return EventId 是否已赋值
                     * 
                     */
                    bool EventIdHasBeenSet() const;

                    /**
                     * 获取规则需要启用的SessionID
                     * @return SessionApplied 规则需要启用的SessionID
                     * 
                     */
                    std::vector<int64_t> GetSessionApplied() const;

                    /**
                     * 设置规则需要启用的SessionID
                     * @param _sessionApplied 规则需要启用的SessionID
                     * 
                     */
                    void SetSessionApplied(const std::vector<int64_t>& _sessionApplied);

                    /**
                     * 判断参数 SessionApplied 是否已赋值
                     * @return SessionApplied 是否已赋值
                     * 
                     */
                    bool SessionAppliedHasBeenSet() const;

                    /**
                     * 获取规则ID，新增时填0
                     * @return RuleId 规则ID，新增时填0
                     * 
                     */
                    int64_t GetRuleId() const;

                    /**
                     * 设置规则ID，新增时填0
                     * @param _ruleId 规则ID，新增时填0
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
                     * 获取规则创建时间
                     * @return CreateTime 规则创建时间
                     * 
                     */
                    uint64_t GetCreateTime() const;

                    /**
                     * 设置规则创建时间
                     * @param _createTime 规则创建时间
                     * 
                     */
                    void SetCreateTime(const uint64_t& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取url长度
                     * @return Length url长度
                     * 
                     */
                    uint64_t GetLength() const;

                    /**
                     * 设置url长度
                     * @param _length url长度
                     * 
                     */
                    void SetLength(const uint64_t& _length);

                    /**
                     * 判断参数 Length 是否已赋值
                     * @return Length 是否已赋值
                     * 
                     */
                    bool LengthHasBeenSet() const;

                    /**
                     * 获取限频方式
                     * @return LimitMethod 限频方式
                     * 
                     */
                    std::string GetLimitMethod() const;

                    /**
                     * 设置限频方式
                     * @param _limitMethod 限频方式
                     * 
                     */
                    void SetLimitMethod(const std::string& _limitMethod);

                    /**
                     * 判断参数 LimitMethod 是否已赋值
                     * @return LimitMethod 是否已赋值
                     * 
                     */
                    bool LimitMethodHasBeenSet() const;

                    /**
                     * 获取cel表达式
                     * @return CelRule cel表达式
                     * 
                     */
                    std::string GetCelRule() const;

                    /**
                     * 设置cel表达式
                     * @param _celRule cel表达式
                     * 
                     */
                    void SetCelRule(const std::string& _celRule);

                    /**
                     * 判断参数 CelRule 是否已赋值
                     * @return CelRule 是否已赋值
                     * 
                     */
                    bool CelRuleHasBeenSet() const;

                    /**
                     * 获取配置方式的逻辑操作符，and或者or
                     * @return LogicalOp 配置方式的逻辑操作符，and或者or
                     * 
                     */
                    std::string GetLogicalOp() const;

                    /**
                     * 设置配置方式的逻辑操作符，and或者or
                     * @param _logicalOp 配置方式的逻辑操作符，and或者or
                     * 
                     */
                    void SetLogicalOp(const std::string& _logicalOp);

                    /**
                     * 判断参数 LogicalOp 是否已赋值
                     * @return LogicalOp 是否已赋值
                     * 
                     */
                    bool LogicalOpHasBeenSet() const;

                    /**
                     * 获取页面ID
                     * @return PageId 页面ID
                     * 
                     */
                    std::string GetPageId() const;

                    /**
                     * 设置页面ID
                     * @param _pageId 页面ID
                     * 
                     */
                    void SetPageId(const std::string& _pageId);

                    /**
                     * 判断参数 PageId 是否已赋值
                     * @return PageId 是否已赋值
                     * 
                     */
                    bool PageIdHasBeenSet() const;

                    /**
                     * 获取动作灰度比例，默认值100
                     * @return ActionRatio 动作灰度比例，默认值100
                     * 
                     */
                    uint64_t GetActionRatio() const;

                    /**
                     * 设置动作灰度比例，默认值100
                     * @param _actionRatio 动作灰度比例，默认值100
                     * 
                     */
                    void SetActionRatio(const uint64_t& _actionRatio);

                    /**
                     * 判断参数 ActionRatio 是否已赋值
                     * @return ActionRatio 是否已赋值
                     * 
                     */
                    bool ActionRatioHasBeenSet() const;

                    /**
                     * 获取规则来源
                     * @return Source 规则来源
                     * 
                     */
                    std::string GetSource() const;

                    /**
                     * 设置规则来源
                     * @param _source 规则来源
                     * 
                     */
                    void SetSource(const std::string& _source);

                    /**
                     * 判断参数 Source 是否已赋值
                     * @return Source 是否已赋值
                     * 
                     */
                    bool SourceHasBeenSet() const;

                    /**
                     * 获取forever
                     * @return JobType forever
                     * 
                     */
                    std::string GetJobType() const;

                    /**
                     * 设置forever
                     * @param _jobType forever
                     * 
                     */
                    void SetJobType(const std::string& _jobType);

                    /**
                     * 判断参数 JobType 是否已赋值
                     * @return JobType 是否已赋值
                     * 
                     */
                    bool JobTypeHasBeenSet() const;

                    /**
                     * 获取无
                     * @return JobDateTime 无
                     * 
                     */
                    JobDateTime GetJobDateTime() const;

                    /**
                     * 设置无
                     * @param _jobDateTime 无
                     * 
                     */
                    void SetJobDateTime(const JobDateTime& _jobDateTime);

                    /**
                     * 判断参数 JobDateTime 是否已赋值
                     * @return JobDateTime 是否已赋值
                     * 
                     */
                    bool JobDateTimeHasBeenSet() const;

                    /**
                     * 获取0
                     * @return ExpireTime 0
                     * 
                     */
                    uint64_t GetExpireTime() const;

                    /**
                     * 设置0
                     * @param _expireTime 0
                     * 
                     */
                    void SetExpireTime(const uint64_t& _expireTime);

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     * 
                     */
                    bool ExpireTimeHasBeenSet() const;

                    /**
                     * 获取有效性
                     * @return ValidStatus 有效性
                     * 
                     */
                    int64_t GetValidStatus() const;

                    /**
                     * 设置有效性
                     * @param _validStatus 有效性
                     * 
                     */
                    void SetValidStatus(const int64_t& _validStatus);

                    /**
                     * 判断参数 ValidStatus 是否已赋值
                     * @return ValidStatus 是否已赋值
                     * 
                     */
                    bool ValidStatusHasBeenSet() const;

                private:

                    /**
                     * 域名
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * 名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 状态
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 高级模式（是否使用Session检测），0表示不启用，1表示启用
                     */
                    std::string m_advance;
                    bool m_advanceHasBeenSet;

                    /**
                     * CC检测阈值
                     */
                    std::string m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * CC检测周期
                     */
                    std::string m_interval;
                    bool m_intervalHasBeenSet;

                    /**
                     * 动作，20表示观察，21表示人机识别，22表示拦截，23表示精准拦截，26表示精准人机识别，27表示JS校验
                     */
                    std::string m_actionType;
                    bool m_actionTypeHasBeenSet;

                    /**
                     * 优先级
                     */
                    int64_t m_priority;
                    bool m_priorityHasBeenSet;

                    /**
                     * 动作有效时间
                     */
                    int64_t m_validTime;
                    bool m_validTimeHasBeenSet;

                    /**
                     * 检测Url
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * 匹配方法，0表示等于，1表示前缀匹配，2表示包含，3表示不等于，6表示后缀匹配，7表示不包含
                     */
                    int64_t m_matchFunc;
                    bool m_matchFuncHasBeenSet;

                    /**
                     * CC的匹配条件JSON序列化的字符串，示例：[{\"key\":\"Method\",\"args\":[\"=R0VU\"],\"match\":\"0\",\"encodeflag\":true}] Key可选值为 Method、Post、Referer、Cookie、User-Agent、CustomHeader、CaptchaRisk、CaptchaDeviceRisk、CaptchaScore match可选值为，当Key为Method的时候可选值为0（等于）、3（不等于）。 Key为Post的时候可选值为0（等于）、3（不等于），Key为Cookie的时候可选值为0（等于）、2（包含），3（不等于）、7（不包含）、 当Key为Referer的时候可选值为0（等于）、3（不等于）、1（前缀匹配）、6（后缀匹配）、2（包含）、7（不包含）、12（存在）、5（不存在）、4（内容为空）， 当Key为Cookie的时候可选值为0（等于）、3（不等于）、2（包含）、7（不包含）、12（存在）、5（不存在）、4（内容为空）， 当Key为User-Agent的时候可选值为0（等于）、3（不等于）、1（前缀匹配）、6（后缀匹配）、2（包含）、7（不包含）、12（存在）、5（不存在）、4（内容为空）， 当Key为CustomHeader的时候可选值为0（等于）、3（不等于）、2（包含）、7（不包含）、12（存在）、5（不存在）、4（内容为空）。 Key为IPLocation时，可选值为13（属于）、14（不属于）。 Key为CaptchaRisk时，可选值为0（等于）、3（不等于）、13（属于）、14（不属于）、12（存在）、5（不存在）。 Key为CaptchaDeviceRisk时，可选值为0（等于）、3（不等于）、13（属于）、14（不属于）、12（存在）、5（不存在）。 Key为CaptchaScore时，可选值为15（数值等于）、16（数值不等于）、17（数值大于）、18（数值小于）、19（数值大于等于）、20（数值小于等于）、12（存在）、5（不存在）。args用来表示匹配内容，需要设置encodeflag为true，当Key为Post、Cookie、CustomHeader时，用等号=来分别串接Key和Value，并分别用Base64编码，类似YWJj=YWJj。当Key为Referer、User-Agent时，用等号=来串接Value，类似=YWJj。
                     */
                    std::string m_optionsArr;
                    bool m_optionsArrHasBeenSet;

                    /**
                     * waf版本，sparta-waf或者clb-waf
                     */
                    std::string m_edition;
                    bool m_editionHasBeenSet;

                    /**
                     * 操作类型
                     */
                    int64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 添加规则的来源事件id
                     */
                    std::string m_eventId;
                    bool m_eventIdHasBeenSet;

                    /**
                     * 规则需要启用的SessionID
                     */
                    std::vector<int64_t> m_sessionApplied;
                    bool m_sessionAppliedHasBeenSet;

                    /**
                     * 规则ID，新增时填0
                     */
                    int64_t m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * 规则创建时间
                     */
                    uint64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * url长度
                     */
                    uint64_t m_length;
                    bool m_lengthHasBeenSet;

                    /**
                     * 限频方式
                     */
                    std::string m_limitMethod;
                    bool m_limitMethodHasBeenSet;

                    /**
                     * cel表达式
                     */
                    std::string m_celRule;
                    bool m_celRuleHasBeenSet;

                    /**
                     * 配置方式的逻辑操作符，and或者or
                     */
                    std::string m_logicalOp;
                    bool m_logicalOpHasBeenSet;

                    /**
                     * 页面ID
                     */
                    std::string m_pageId;
                    bool m_pageIdHasBeenSet;

                    /**
                     * 动作灰度比例，默认值100
                     */
                    uint64_t m_actionRatio;
                    bool m_actionRatioHasBeenSet;

                    /**
                     * 规则来源
                     */
                    std::string m_source;
                    bool m_sourceHasBeenSet;

                    /**
                     * forever
                     */
                    std::string m_jobType;
                    bool m_jobTypeHasBeenSet;

                    /**
                     * 无
                     */
                    JobDateTime m_jobDateTime;
                    bool m_jobDateTimeHasBeenSet;

                    /**
                     * 0
                     */
                    uint64_t m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * 有效性
                     */
                    int64_t m_validStatus;
                    bool m_validStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_UPSERTCCRULEREQUEST_H_
