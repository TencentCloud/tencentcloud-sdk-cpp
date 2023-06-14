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

#ifndef TENCENTCLOUD_CAPTCHA_V20190722_MODEL_CAPTCHASTATISTICOBJ_H_
#define TENCENTCLOUD_CAPTCHA_V20190722_MODEL_CAPTCHASTATISTICOBJ_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/captcha/v20190722/model/RequestTrendObj.h>
#include <tencentcloud/captcha/v20190722/model/InterceptPerTrendObj.h>
#include <tencentcloud/captcha/v20190722/model/TicketCheckTrendObj.h>


namespace TencentCloud
{
    namespace Captcha
    {
        namespace V20190722
        {
            namespace Model
            {
                /**
                * 验证码统计图Obj
                */
                class CaptchaStatisticObj : public AbstractModel
                {
                public:
                    CaptchaStatisticObj();
                    ~CaptchaStatisticObj() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取请求总量
                     * @return ActionTotal 请求总量
                     * 
                     */
                    int64_t GetActionTotal() const;

                    /**
                     * 设置请求总量
                     * @param _actionTotal 请求总量
                     * 
                     */
                    void SetActionTotal(const int64_t& _actionTotal);

                    /**
                     * 判断参数 ActionTotal 是否已赋值
                     * @return ActionTotal 是否已赋值
                     * 
                     */
                    bool ActionTotalHasBeenSet() const;

                    /**
                     * 获取验证总量
                     * @return VerifyTotal 验证总量
                     * 
                     */
                    int64_t GetVerifyTotal() const;

                    /**
                     * 设置验证总量
                     * @param _verifyTotal 验证总量
                     * 
                     */
                    void SetVerifyTotal(const int64_t& _verifyTotal);

                    /**
                     * 判断参数 VerifyTotal 是否已赋值
                     * @return VerifyTotal 是否已赋值
                     * 
                     */
                    bool VerifyTotalHasBeenSet() const;

                    /**
                     * 获取验证通过总量
                     * @return VerifyThroughTotal 验证通过总量
                     * 
                     */
                    int64_t GetVerifyThroughTotal() const;

                    /**
                     * 设置验证通过总量
                     * @param _verifyThroughTotal 验证通过总量
                     * 
                     */
                    void SetVerifyThroughTotal(const int64_t& _verifyThroughTotal);

                    /**
                     * 判断参数 VerifyThroughTotal 是否已赋值
                     * @return VerifyThroughTotal 是否已赋值
                     * 
                     */
                    bool VerifyThroughTotalHasBeenSet() const;

                    /**
                     * 获取验证拦截总量
                     * @return VerifyInterceptTotal 验证拦截总量
                     * 
                     */
                    int64_t GetVerifyInterceptTotal() const;

                    /**
                     * 设置验证拦截总量
                     * @param _verifyInterceptTotal 验证拦截总量
                     * 
                     */
                    void SetVerifyInterceptTotal(const int64_t& _verifyInterceptTotal);

                    /**
                     * 判断参数 VerifyInterceptTotal 是否已赋值
                     * @return VerifyInterceptTotal 是否已赋值
                     * 
                     */
                    bool VerifyInterceptTotalHasBeenSet() const;

                    /**
                     * 获取票据校验总量
                     * @return TicketTotal 票据校验总量
                     * 
                     */
                    int64_t GetTicketTotal() const;

                    /**
                     * 设置票据校验总量
                     * @param _ticketTotal 票据校验总量
                     * 
                     */
                    void SetTicketTotal(const int64_t& _ticketTotal);

                    /**
                     * 判断参数 TicketTotal 是否已赋值
                     * @return TicketTotal 是否已赋值
                     * 
                     */
                    bool TicketTotalHasBeenSet() const;

                    /**
                     * 获取票据通过总量
                     * @return TicketThroughTotal 票据通过总量
                     * 
                     */
                    int64_t GetTicketThroughTotal() const;

                    /**
                     * 设置票据通过总量
                     * @param _ticketThroughTotal 票据通过总量
                     * 
                     */
                    void SetTicketThroughTotal(const int64_t& _ticketThroughTotal);

                    /**
                     * 判断参数 TicketThroughTotal 是否已赋值
                     * @return TicketThroughTotal 是否已赋值
                     * 
                     */
                    bool TicketThroughTotalHasBeenSet() const;

                    /**
                     * 获取票据拦截总量
                     * @return TicketInterceptTotal 票据拦截总量
                     * 
                     */
                    int64_t GetTicketInterceptTotal() const;

                    /**
                     * 设置票据拦截总量
                     * @param _ticketInterceptTotal 票据拦截总量
                     * 
                     */
                    void SetTicketInterceptTotal(const int64_t& _ticketInterceptTotal);

                    /**
                     * 判断参数 TicketInterceptTotal 是否已赋值
                     * @return TicketInterceptTotal 是否已赋值
                     * 
                     */
                    bool TicketInterceptTotalHasBeenSet() const;

                    /**
                     * 获取请求趋势图
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RequestTrend 请求趋势图
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<RequestTrendObj> GetRequestTrend() const;

                    /**
                     * 设置请求趋势图
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _requestTrend 请求趋势图
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRequestTrend(const std::vector<RequestTrendObj>& _requestTrend);

                    /**
                     * 判断参数 RequestTrend 是否已赋值
                     * @return RequestTrend 是否已赋值
                     * 
                     */
                    bool RequestTrendHasBeenSet() const;

                    /**
                     * 获取拦截率趋势图
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InterceptPerTrend 拦截率趋势图
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<InterceptPerTrendObj> GetInterceptPerTrend() const;

                    /**
                     * 设置拦截率趋势图
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _interceptPerTrend 拦截率趋势图
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInterceptPerTrend(const std::vector<InterceptPerTrendObj>& _interceptPerTrend);

                    /**
                     * 判断参数 InterceptPerTrend 是否已赋值
                     * @return InterceptPerTrend 是否已赋值
                     * 
                     */
                    bool InterceptPerTrendHasBeenSet() const;

                    /**
                     * 获取票据校验趋势图
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TicketCheckTrend 票据校验趋势图
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<TicketCheckTrendObj> GetTicketCheckTrend() const;

                    /**
                     * 设置票据校验趋势图
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ticketCheckTrend 票据校验趋势图
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTicketCheckTrend(const std::vector<TicketCheckTrendObj>& _ticketCheckTrend);

                    /**
                     * 判断参数 TicketCheckTrend 是否已赋值
                     * @return TicketCheckTrend 是否已赋值
                     * 
                     */
                    bool TicketCheckTrendHasBeenSet() const;

                private:

                    /**
                     * 请求总量
                     */
                    int64_t m_actionTotal;
                    bool m_actionTotalHasBeenSet;

                    /**
                     * 验证总量
                     */
                    int64_t m_verifyTotal;
                    bool m_verifyTotalHasBeenSet;

                    /**
                     * 验证通过总量
                     */
                    int64_t m_verifyThroughTotal;
                    bool m_verifyThroughTotalHasBeenSet;

                    /**
                     * 验证拦截总量
                     */
                    int64_t m_verifyInterceptTotal;
                    bool m_verifyInterceptTotalHasBeenSet;

                    /**
                     * 票据校验总量
                     */
                    int64_t m_ticketTotal;
                    bool m_ticketTotalHasBeenSet;

                    /**
                     * 票据通过总量
                     */
                    int64_t m_ticketThroughTotal;
                    bool m_ticketThroughTotalHasBeenSet;

                    /**
                     * 票据拦截总量
                     */
                    int64_t m_ticketInterceptTotal;
                    bool m_ticketInterceptTotalHasBeenSet;

                    /**
                     * 请求趋势图
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<RequestTrendObj> m_requestTrend;
                    bool m_requestTrendHasBeenSet;

                    /**
                     * 拦截率趋势图
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<InterceptPerTrendObj> m_interceptPerTrend;
                    bool m_interceptPerTrendHasBeenSet;

                    /**
                     * 票据校验趋势图
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<TicketCheckTrendObj> m_ticketCheckTrend;
                    bool m_ticketCheckTrendHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAPTCHA_V20190722_MODEL_CAPTCHASTATISTICOBJ_H_
