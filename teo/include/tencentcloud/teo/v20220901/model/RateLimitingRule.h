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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_RATELIMITINGRULE_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_RATELIMITINGRULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/SecurityAction.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * 速率限制的具体配置。
                */
                class RateLimitingRule : public AbstractModel
                {
                public:
                    RateLimitingRule();
                    ~RateLimitingRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>精准速率限制的 ID。<br>通过规则 ID 可支持不同的规则配置操作：<br> <li> <b>增加</b>新规则：ID 为空或不指定 ID 参数；</li><li><b>修改</b>已有规则：指定需要更新/修改的规则 ID；</li><li><b>删除</b>已有规则：RateLimitingRules 参数中，Rules 列表中未包含的已有规则将被删除。</li></p>
                     * @return Id <p>精准速率限制的 ID。<br>通过规则 ID 可支持不同的规则配置操作：<br> <li> <b>增加</b>新规则：ID 为空或不指定 ID 参数；</li><li><b>修改</b>已有规则：指定需要更新/修改的规则 ID；</li><li><b>删除</b>已有规则：RateLimitingRules 参数中，Rules 列表中未包含的已有规则将被删除。</li></p>
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置<p>精准速率限制的 ID。<br>通过规则 ID 可支持不同的规则配置操作：<br> <li> <b>增加</b>新规则：ID 为空或不指定 ID 参数；</li><li><b>修改</b>已有规则：指定需要更新/修改的规则 ID；</li><li><b>删除</b>已有规则：RateLimitingRules 参数中，Rules 列表中未包含的已有规则将被删除。</li></p>
                     * @param _id <p>精准速率限制的 ID。<br>通过规则 ID 可支持不同的规则配置操作：<br> <li> <b>增加</b>新规则：ID 为空或不指定 ID 参数；</li><li><b>修改</b>已有规则：指定需要更新/修改的规则 ID；</li><li><b>删除</b>已有规则：RateLimitingRules 参数中，Rules 列表中未包含的已有规则将被删除。</li></p>
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取<p>精准速率限制的名称。</p>
                     * @return Name <p>精准速率限制的名称。</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>精准速率限制的名称。</p>
                     * @param _name <p>精准速率限制的名称。</p>
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
                     * 获取<p>精准速率限制的具体内容，需符合表达式语法，详细规范参见<a href="https://cloud.tencent.com/document/product/1552/125343">产品文档</a>。</p>
                     * @return Condition <p>精准速率限制的具体内容，需符合表达式语法，详细规范参见<a href="https://cloud.tencent.com/document/product/1552/125343">产品文档</a>。</p>
                     * 
                     */
                    std::string GetCondition() const;

                    /**
                     * 设置<p>精准速率限制的具体内容，需符合表达式语法，详细规范参见<a href="https://cloud.tencent.com/document/product/1552/125343">产品文档</a>。</p>
                     * @param _condition <p>精准速率限制的具体内容，需符合表达式语法，详细规范参见<a href="https://cloud.tencent.com/document/product/1552/125343">产品文档</a>。</p>
                     * 
                     */
                    void SetCondition(const std::string& _condition);

                    /**
                     * 判断参数 Condition 是否已赋值
                     * @return Condition 是否已赋值
                     * 
                     */
                    bool ConditionHasBeenSet() const;

                    /**
                     * 获取<p>限速方式。在统计时间窗口 CountingPeriod 内，对满足特征 CountBy 的请求，支持配置以下限速方式：<li>Block: 阻断访问源。当统计次数超过阈值 MaxRequestThreshold 时，在 ActionDuration 时长内，对满足特征的所有后续请求执行 Action 处置；</li><li>Throttle: 仅处置超额请求。当统计次数超过阈值 MaxRequestThreshold 时，仅对超过阈值的请求执行 Action 处置，窗口结束后停止处置。此时，ActionDuration 参数将被忽略。</li><br>默认值为 Block。</p>
                     * @return Mode <p>限速方式。在统计时间窗口 CountingPeriod 内，对满足特征 CountBy 的请求，支持配置以下限速方式：<li>Block: 阻断访问源。当统计次数超过阈值 MaxRequestThreshold 时，在 ActionDuration 时长内，对满足特征的所有后续请求执行 Action 处置；</li><li>Throttle: 仅处置超额请求。当统计次数超过阈值 MaxRequestThreshold 时，仅对超过阈值的请求执行 Action 处置，窗口结束后停止处置。此时，ActionDuration 参数将被忽略。</li><br>默认值为 Block。</p>
                     * 
                     */
                    std::string GetMode() const;

                    /**
                     * 设置<p>限速方式。在统计时间窗口 CountingPeriod 内，对满足特征 CountBy 的请求，支持配置以下限速方式：<li>Block: 阻断访问源。当统计次数超过阈值 MaxRequestThreshold 时，在 ActionDuration 时长内，对满足特征的所有后续请求执行 Action 处置；</li><li>Throttle: 仅处置超额请求。当统计次数超过阈值 MaxRequestThreshold 时，仅对超过阈值的请求执行 Action 处置，窗口结束后停止处置。此时，ActionDuration 参数将被忽略。</li><br>默认值为 Block。</p>
                     * @param _mode <p>限速方式。在统计时间窗口 CountingPeriod 内，对满足特征 CountBy 的请求，支持配置以下限速方式：<li>Block: 阻断访问源。当统计次数超过阈值 MaxRequestThreshold 时，在 ActionDuration 时长内，对满足特征的所有后续请求执行 Action 处置；</li><li>Throttle: 仅处置超额请求。当统计次数超过阈值 MaxRequestThreshold 时，仅对超过阈值的请求执行 Action 处置，窗口结束后停止处置。此时，ActionDuration 参数将被忽略。</li><br>默认值为 Block。</p>
                     * 
                     */
                    void SetMode(const std::string& _mode);

                    /**
                     * 判断参数 Mode 是否已赋值
                     * @return Mode 是否已赋值
                     * 
                     */
                    bool ModeHasBeenSet() const;

                    /**
                     * 获取<p>速率阈值请求特征的匹配方式， 当 Enabled 为 on 时，此字段必填。<br><br>当条件有多个时，将组合多个条件共同进行统计计算，条件最多不可超过5条。取值有：<br><li><b>http.request.ip</b>：客户端 IP；</li><li><b>http.request.xff_header_ip</b>：客户端 IP（优先匹配 XFF 头部）；</li><li><b>http.request.uri.path</b>：请求的访问路径；</li><li><b>http.request.cookies[&#39;session&#39;]</b>：名称为 session 的 Cookie，其中 session 可替换为自己指定的参数；</li><li><b>http.request.headers[&#39;user-agent&#39;]</b>：名称为 user-agent 的 HTTP 头部，其中 user-agent 可替换为自己指定的参数；</li><li><b>http.request.ja3</b>：请求的 JA3 指纹；</li><li><b>http.request.ja4</b>：请求的 JA4 指纹；</li><li><b>http.request.uri.query[&#39;test&#39;]</b>：名称为 test 的 URL 查询参数，其中 test 可替换为自己指定的参数。</li></p>
                     * @return CountBy <p>速率阈值请求特征的匹配方式， 当 Enabled 为 on 时，此字段必填。<br><br>当条件有多个时，将组合多个条件共同进行统计计算，条件最多不可超过5条。取值有：<br><li><b>http.request.ip</b>：客户端 IP；</li><li><b>http.request.xff_header_ip</b>：客户端 IP（优先匹配 XFF 头部）；</li><li><b>http.request.uri.path</b>：请求的访问路径；</li><li><b>http.request.cookies[&#39;session&#39;]</b>：名称为 session 的 Cookie，其中 session 可替换为自己指定的参数；</li><li><b>http.request.headers[&#39;user-agent&#39;]</b>：名称为 user-agent 的 HTTP 头部，其中 user-agent 可替换为自己指定的参数；</li><li><b>http.request.ja3</b>：请求的 JA3 指纹；</li><li><b>http.request.ja4</b>：请求的 JA4 指纹；</li><li><b>http.request.uri.query[&#39;test&#39;]</b>：名称为 test 的 URL 查询参数，其中 test 可替换为自己指定的参数。</li></p>
                     * 
                     */
                    std::vector<std::string> GetCountBy() const;

                    /**
                     * 设置<p>速率阈值请求特征的匹配方式， 当 Enabled 为 on 时，此字段必填。<br><br>当条件有多个时，将组合多个条件共同进行统计计算，条件最多不可超过5条。取值有：<br><li><b>http.request.ip</b>：客户端 IP；</li><li><b>http.request.xff_header_ip</b>：客户端 IP（优先匹配 XFF 头部）；</li><li><b>http.request.uri.path</b>：请求的访问路径；</li><li><b>http.request.cookies[&#39;session&#39;]</b>：名称为 session 的 Cookie，其中 session 可替换为自己指定的参数；</li><li><b>http.request.headers[&#39;user-agent&#39;]</b>：名称为 user-agent 的 HTTP 头部，其中 user-agent 可替换为自己指定的参数；</li><li><b>http.request.ja3</b>：请求的 JA3 指纹；</li><li><b>http.request.ja4</b>：请求的 JA4 指纹；</li><li><b>http.request.uri.query[&#39;test&#39;]</b>：名称为 test 的 URL 查询参数，其中 test 可替换为自己指定的参数。</li></p>
                     * @param _countBy <p>速率阈值请求特征的匹配方式， 当 Enabled 为 on 时，此字段必填。<br><br>当条件有多个时，将组合多个条件共同进行统计计算，条件最多不可超过5条。取值有：<br><li><b>http.request.ip</b>：客户端 IP；</li><li><b>http.request.xff_header_ip</b>：客户端 IP（优先匹配 XFF 头部）；</li><li><b>http.request.uri.path</b>：请求的访问路径；</li><li><b>http.request.cookies[&#39;session&#39;]</b>：名称为 session 的 Cookie，其中 session 可替换为自己指定的参数；</li><li><b>http.request.headers[&#39;user-agent&#39;]</b>：名称为 user-agent 的 HTTP 头部，其中 user-agent 可替换为自己指定的参数；</li><li><b>http.request.ja3</b>：请求的 JA3 指纹；</li><li><b>http.request.ja4</b>：请求的 JA4 指纹；</li><li><b>http.request.uri.query[&#39;test&#39;]</b>：名称为 test 的 URL 查询参数，其中 test 可替换为自己指定的参数。</li></p>
                     * 
                     */
                    void SetCountBy(const std::vector<std::string>& _countBy);

                    /**
                     * 判断参数 CountBy 是否已赋值
                     * @return CountBy 是否已赋值
                     * 
                     */
                    bool CountByHasBeenSet() const;

                    /**
                     * 获取<p>精准速率限制在时间范围内的累计拦截次数，取值范围 1 ~ 100000。</p>
                     * @return MaxRequestThreshold <p>精准速率限制在时间范围内的累计拦截次数，取值范围 1 ~ 100000。</p>
                     * 
                     */
                    int64_t GetMaxRequestThreshold() const;

                    /**
                     * 设置<p>精准速率限制在时间范围内的累计拦截次数，取值范围 1 ~ 100000。</p>
                     * @param _maxRequestThreshold <p>精准速率限制在时间范围内的累计拦截次数，取值范围 1 ~ 100000。</p>
                     * 
                     */
                    void SetMaxRequestThreshold(const int64_t& _maxRequestThreshold);

                    /**
                     * 判断参数 MaxRequestThreshold 是否已赋值
                     * @return MaxRequestThreshold 是否已赋值
                     * 
                     */
                    bool MaxRequestThresholdHasBeenSet() const;

                    /**
                     * 获取<p>统计的时间窗口，取值有：<li>1s：1秒；</li><li>5s：5秒；</li><li>10s：10秒；</li><li>20s：20秒；</li><li>30s：30秒；</li><li>40s：40秒；</li><li>50s：50秒；</li><li>1m：1分钟；</li><li>2m：2分钟；</li><li>5m：5分钟；</li><li>10m：10分钟；</li><li>1h：1小时。</li></p>
                     * @return CountingPeriod <p>统计的时间窗口，取值有：<li>1s：1秒；</li><li>5s：5秒；</li><li>10s：10秒；</li><li>20s：20秒；</li><li>30s：30秒；</li><li>40s：40秒；</li><li>50s：50秒；</li><li>1m：1分钟；</li><li>2m：2分钟；</li><li>5m：5分钟；</li><li>10m：10分钟；</li><li>1h：1小时。</li></p>
                     * 
                     */
                    std::string GetCountingPeriod() const;

                    /**
                     * 设置<p>统计的时间窗口，取值有：<li>1s：1秒；</li><li>5s：5秒；</li><li>10s：10秒；</li><li>20s：20秒；</li><li>30s：30秒；</li><li>40s：40秒；</li><li>50s：50秒；</li><li>1m：1分钟；</li><li>2m：2分钟；</li><li>5m：5分钟；</li><li>10m：10分钟；</li><li>1h：1小时。</li></p>
                     * @param _countingPeriod <p>统计的时间窗口，取值有：<li>1s：1秒；</li><li>5s：5秒；</li><li>10s：10秒；</li><li>20s：20秒；</li><li>30s：30秒；</li><li>40s：40秒；</li><li>50s：50秒；</li><li>1m：1分钟；</li><li>2m：2分钟；</li><li>5m：5分钟；</li><li>10m：10分钟；</li><li>1h：1小时。</li></p>
                     * 
                     */
                    void SetCountingPeriod(const std::string& _countingPeriod);

                    /**
                     * 判断参数 CountingPeriod 是否已赋值
                     * @return CountingPeriod 是否已赋值
                     * 
                     */
                    bool CountingPeriodHasBeenSet() const;

                    /**
                     * 获取<p>Action 动作的持续时长，单位仅支持：<li>s：秒，取值 1 ~ 120；</li><li>m：分钟，取值 1 ~ 120；</li><li>h：小时，取值 1 ~ 48；</li><li>d：天，取值 1 ~ 30。</li><br>当 Mode 为 Throttle 时，此参数将被忽略，不会生效。</p>
                     * @return ActionDuration <p>Action 动作的持续时长，单位仅支持：<li>s：秒，取值 1 ~ 120；</li><li>m：分钟，取值 1 ~ 120；</li><li>h：小时，取值 1 ~ 48；</li><li>d：天，取值 1 ~ 30。</li><br>当 Mode 为 Throttle 时，此参数将被忽略，不会生效。</p>
                     * 
                     */
                    std::string GetActionDuration() const;

                    /**
                     * 设置<p>Action 动作的持续时长，单位仅支持：<li>s：秒，取值 1 ~ 120；</li><li>m：分钟，取值 1 ~ 120；</li><li>h：小时，取值 1 ~ 48；</li><li>d：天，取值 1 ~ 30。</li><br>当 Mode 为 Throttle 时，此参数将被忽略，不会生效。</p>
                     * @param _actionDuration <p>Action 动作的持续时长，单位仅支持：<li>s：秒，取值 1 ~ 120；</li><li>m：分钟，取值 1 ~ 120；</li><li>h：小时，取值 1 ~ 48；</li><li>d：天，取值 1 ~ 30。</li><br>当 Mode 为 Throttle 时，此参数将被忽略，不会生效。</p>
                     * 
                     */
                    void SetActionDuration(const std::string& _actionDuration);

                    /**
                     * 判断参数 ActionDuration 是否已赋值
                     * @return ActionDuration 是否已赋值
                     * 
                     */
                    bool ActionDurationHasBeenSet() const;

                    /**
                     * 获取<p>精准速率限制的处置方式。SecurityAction.Name 取值范围如下：</p><ul><li>Allow：放行，其中 AllowActionParameters 支持 MinDelayTime 和 MaxDelayTime 配置；</li><li>Deny：拦截，其中 DenyActionParameters 中支持 ReturnCustomPage 和 Stall 配置；</li><li>Monitor：观察；</li><li>Challenge：挑战，其中 ChallengeActionParameters.ChallengeOption 支持 JSChallenge 和 ManagedChallenge；</li><li>Redirect：重定向至URL。</li></ul>
                     * @return Action <p>精准速率限制的处置方式。SecurityAction.Name 取值范围如下：</p><ul><li>Allow：放行，其中 AllowActionParameters 支持 MinDelayTime 和 MaxDelayTime 配置；</li><li>Deny：拦截，其中 DenyActionParameters 中支持 ReturnCustomPage 和 Stall 配置；</li><li>Monitor：观察；</li><li>Challenge：挑战，其中 ChallengeActionParameters.ChallengeOption 支持 JSChallenge 和 ManagedChallenge；</li><li>Redirect：重定向至URL。</li></ul>
                     * 
                     */
                    SecurityAction GetAction() const;

                    /**
                     * 设置<p>精准速率限制的处置方式。SecurityAction.Name 取值范围如下：</p><ul><li>Allow：放行，其中 AllowActionParameters 支持 MinDelayTime 和 MaxDelayTime 配置；</li><li>Deny：拦截，其中 DenyActionParameters 中支持 ReturnCustomPage 和 Stall 配置；</li><li>Monitor：观察；</li><li>Challenge：挑战，其中 ChallengeActionParameters.ChallengeOption 支持 JSChallenge 和 ManagedChallenge；</li><li>Redirect：重定向至URL。</li></ul>
                     * @param _action <p>精准速率限制的处置方式。SecurityAction.Name 取值范围如下：</p><ul><li>Allow：放行，其中 AllowActionParameters 支持 MinDelayTime 和 MaxDelayTime 配置；</li><li>Deny：拦截，其中 DenyActionParameters 中支持 ReturnCustomPage 和 Stall 配置；</li><li>Monitor：观察；</li><li>Challenge：挑战，其中 ChallengeActionParameters.ChallengeOption 支持 JSChallenge 和 ManagedChallenge；</li><li>Redirect：重定向至URL。</li></ul>
                     * 
                     */
                    void SetAction(const SecurityAction& _action);

                    /**
                     * 判断参数 Action 是否已赋值
                     * @return Action 是否已赋值
                     * 
                     */
                    bool ActionHasBeenSet() const;

                    /**
                     * 获取<p>精准速率限制的优先级，范围是 0 ~ 100，默认为 0。</p>
                     * @return Priority <p>精准速率限制的优先级，范围是 0 ~ 100，默认为 0。</p>
                     * 
                     */
                    int64_t GetPriority() const;

                    /**
                     * 设置<p>精准速率限制的优先级，范围是 0 ~ 100，默认为 0。</p>
                     * @param _priority <p>精准速率限制的优先级，范围是 0 ~ 100，默认为 0。</p>
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
                     * 获取<p>精准速率限制规则是否开启。取值有：<li>on：开启；</li><li>off：关闭。</li></p>
                     * @return Enabled <p>精准速率限制规则是否开启。取值有：<li>on：开启；</li><li>off：关闭。</li></p>
                     * 
                     */
                    std::string GetEnabled() const;

                    /**
                     * 设置<p>精准速率限制规则是否开启。取值有：<li>on：开启；</li><li>off：关闭。</li></p>
                     * @param _enabled <p>精准速率限制规则是否开启。取值有：<li>on：开启；</li><li>off：关闭。</li></p>
                     * 
                     */
                    void SetEnabled(const std::string& _enabled);

                    /**
                     * 判断参数 Enabled 是否已赋值
                     * @return Enabled 是否已赋值
                     * 
                     */
                    bool EnabledHasBeenSet() const;

                private:

                    /**
                     * <p>精准速率限制的 ID。<br>通过规则 ID 可支持不同的规则配置操作：<br> <li> <b>增加</b>新规则：ID 为空或不指定 ID 参数；</li><li><b>修改</b>已有规则：指定需要更新/修改的规则 ID；</li><li><b>删除</b>已有规则：RateLimitingRules 参数中，Rules 列表中未包含的已有规则将被删除。</li></p>
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * <p>精准速率限制的名称。</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>精准速率限制的具体内容，需符合表达式语法，详细规范参见<a href="https://cloud.tencent.com/document/product/1552/125343">产品文档</a>。</p>
                     */
                    std::string m_condition;
                    bool m_conditionHasBeenSet;

                    /**
                     * <p>限速方式。在统计时间窗口 CountingPeriod 内，对满足特征 CountBy 的请求，支持配置以下限速方式：<li>Block: 阻断访问源。当统计次数超过阈值 MaxRequestThreshold 时，在 ActionDuration 时长内，对满足特征的所有后续请求执行 Action 处置；</li><li>Throttle: 仅处置超额请求。当统计次数超过阈值 MaxRequestThreshold 时，仅对超过阈值的请求执行 Action 处置，窗口结束后停止处置。此时，ActionDuration 参数将被忽略。</li><br>默认值为 Block。</p>
                     */
                    std::string m_mode;
                    bool m_modeHasBeenSet;

                    /**
                     * <p>速率阈值请求特征的匹配方式， 当 Enabled 为 on 时，此字段必填。<br><br>当条件有多个时，将组合多个条件共同进行统计计算，条件最多不可超过5条。取值有：<br><li><b>http.request.ip</b>：客户端 IP；</li><li><b>http.request.xff_header_ip</b>：客户端 IP（优先匹配 XFF 头部）；</li><li><b>http.request.uri.path</b>：请求的访问路径；</li><li><b>http.request.cookies[&#39;session&#39;]</b>：名称为 session 的 Cookie，其中 session 可替换为自己指定的参数；</li><li><b>http.request.headers[&#39;user-agent&#39;]</b>：名称为 user-agent 的 HTTP 头部，其中 user-agent 可替换为自己指定的参数；</li><li><b>http.request.ja3</b>：请求的 JA3 指纹；</li><li><b>http.request.ja4</b>：请求的 JA4 指纹；</li><li><b>http.request.uri.query[&#39;test&#39;]</b>：名称为 test 的 URL 查询参数，其中 test 可替换为自己指定的参数。</li></p>
                     */
                    std::vector<std::string> m_countBy;
                    bool m_countByHasBeenSet;

                    /**
                     * <p>精准速率限制在时间范围内的累计拦截次数，取值范围 1 ~ 100000。</p>
                     */
                    int64_t m_maxRequestThreshold;
                    bool m_maxRequestThresholdHasBeenSet;

                    /**
                     * <p>统计的时间窗口，取值有：<li>1s：1秒；</li><li>5s：5秒；</li><li>10s：10秒；</li><li>20s：20秒；</li><li>30s：30秒；</li><li>40s：40秒；</li><li>50s：50秒；</li><li>1m：1分钟；</li><li>2m：2分钟；</li><li>5m：5分钟；</li><li>10m：10分钟；</li><li>1h：1小时。</li></p>
                     */
                    std::string m_countingPeriod;
                    bool m_countingPeriodHasBeenSet;

                    /**
                     * <p>Action 动作的持续时长，单位仅支持：<li>s：秒，取值 1 ~ 120；</li><li>m：分钟，取值 1 ~ 120；</li><li>h：小时，取值 1 ~ 48；</li><li>d：天，取值 1 ~ 30。</li><br>当 Mode 为 Throttle 时，此参数将被忽略，不会生效。</p>
                     */
                    std::string m_actionDuration;
                    bool m_actionDurationHasBeenSet;

                    /**
                     * <p>精准速率限制的处置方式。SecurityAction.Name 取值范围如下：</p><ul><li>Allow：放行，其中 AllowActionParameters 支持 MinDelayTime 和 MaxDelayTime 配置；</li><li>Deny：拦截，其中 DenyActionParameters 中支持 ReturnCustomPage 和 Stall 配置；</li><li>Monitor：观察；</li><li>Challenge：挑战，其中 ChallengeActionParameters.ChallengeOption 支持 JSChallenge 和 ManagedChallenge；</li><li>Redirect：重定向至URL。</li></ul>
                     */
                    SecurityAction m_action;
                    bool m_actionHasBeenSet;

                    /**
                     * <p>精准速率限制的优先级，范围是 0 ~ 100，默认为 0。</p>
                     */
                    int64_t m_priority;
                    bool m_priorityHasBeenSet;

                    /**
                     * <p>精准速率限制规则是否开启。取值有：<li>on：开启；</li><li>off：关闭。</li></p>
                     */
                    std::string m_enabled;
                    bool m_enabledHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_RATELIMITINGRULE_H_
