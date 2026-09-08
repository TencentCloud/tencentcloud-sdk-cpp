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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_DESCRIBEBILLUSAGEDETAILREQUEST_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_DESCRIBEBILLUSAGEDETAILREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ess/v20201111/model/Agent.h>


namespace TencentCloud
{
    namespace Ess
    {
        namespace V20201111
        {
            namespace Model
            {
                /**
                * DescribeBillUsageDetail请求参数结构体
                */
                class DescribeBillUsageDetailRequest : public AbstractModel
                {
                public:
                    DescribeBillUsageDetailRequest();
                    ~DescribeBillUsageDetailRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>查询开始时间字符串，格式为yyyyMMdd，时间跨度不能大于31天。<span style="color: red;">注意：从 2026年10月10日起，开始日期和结束日期必须在同一个自然月内，不支持跨月查询。</span></p><ul><li><p>正确示例：StartTime=20260901，EndTime=20260930。开始和结束日期都在 2026年9月，可以查询。</p></li><li><p>错误示例：StartTime=20260815，EndTime=20260915。开始日期在8月，结束日期在9月，属于跨月查询，不支持。</p></li></ul><p>参数格式：yyyyMMdd</p>
                     * @return StartTime <p>查询开始时间字符串，格式为yyyyMMdd，时间跨度不能大于31天。<span style="color: red;">注意：从 2026年10月10日起，开始日期和结束日期必须在同一个自然月内，不支持跨月查询。</span></p><ul><li><p>正确示例：StartTime=20260901，EndTime=20260930。开始和结束日期都在 2026年9月，可以查询。</p></li><li><p>错误示例：StartTime=20260815，EndTime=20260915。开始日期在8月，结束日期在9月，属于跨月查询，不支持。</p></li></ul><p>参数格式：yyyyMMdd</p>
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置<p>查询开始时间字符串，格式为yyyyMMdd，时间跨度不能大于31天。<span style="color: red;">注意：从 2026年10月10日起，开始日期和结束日期必须在同一个自然月内，不支持跨月查询。</span></p><ul><li><p>正确示例：StartTime=20260901，EndTime=20260930。开始和结束日期都在 2026年9月，可以查询。</p></li><li><p>错误示例：StartTime=20260815，EndTime=20260915。开始日期在8月，结束日期在9月，属于跨月查询，不支持。</p></li></ul><p>参数格式：yyyyMMdd</p>
                     * @param _startTime <p>查询开始时间字符串，格式为yyyyMMdd，时间跨度不能大于31天。<span style="color: red;">注意：从 2026年10月10日起，开始日期和结束日期必须在同一个自然月内，不支持跨月查询。</span></p><ul><li><p>正确示例：StartTime=20260901，EndTime=20260930。开始和结束日期都在 2026年9月，可以查询。</p></li><li><p>错误示例：StartTime=20260815，EndTime=20260915。开始日期在8月，结束日期在9月，属于跨月查询，不支持。</p></li></ul><p>参数格式：yyyyMMdd</p>
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取<p>查询结束时间字符串，格式为yyyyMMdd，时间跨度不能大于31天。<span style="color: red;">注意：从 2026年10月10日起，开始日期和结束日期必须在同一个自然月内，不支持跨月查询。</span></p><ul><li><p>正确示例：StartTime=20260901，EndTime=20260930。开始和结束日期都在 2026年9月，可以查询。</p></li><li><p>错误示例：StartTime=20260815，EndTime=20260915。开始日期在8月，结束日期在9月，属于跨月查询，不支持。</p></li></ul><p>参数格式：yyyyMMdd</p>
                     * @return EndTime <p>查询结束时间字符串，格式为yyyyMMdd，时间跨度不能大于31天。<span style="color: red;">注意：从 2026年10月10日起，开始日期和结束日期必须在同一个自然月内，不支持跨月查询。</span></p><ul><li><p>正确示例：StartTime=20260901，EndTime=20260930。开始和结束日期都在 2026年9月，可以查询。</p></li><li><p>错误示例：StartTime=20260815，EndTime=20260915。开始日期在8月，结束日期在9月，属于跨月查询，不支持。</p></li></ul><p>参数格式：yyyyMMdd</p>
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置<p>查询结束时间字符串，格式为yyyyMMdd，时间跨度不能大于31天。<span style="color: red;">注意：从 2026年10月10日起，开始日期和结束日期必须在同一个自然月内，不支持跨月查询。</span></p><ul><li><p>正确示例：StartTime=20260901，EndTime=20260930。开始和结束日期都在 2026年9月，可以查询。</p></li><li><p>错误示例：StartTime=20260815，EndTime=20260915。开始日期在8月，结束日期在9月，属于跨月查询，不支持。</p></li></ul><p>参数格式：yyyyMMdd</p>
                     * @param _endTime <p>查询结束时间字符串，格式为yyyyMMdd，时间跨度不能大于31天。<span style="color: red;">注意：从 2026年10月10日起，开始日期和结束日期必须在同一个自然月内，不支持跨月查询。</span></p><ul><li><p>正确示例：StartTime=20260901，EndTime=20260930。开始和结束日期都在 2026年9月，可以查询。</p></li><li><p>错误示例：StartTime=20260815，EndTime=20260915。开始日期在8月，结束日期在9月，属于跨月查询，不支持。</p></li></ul><p>参数格式：yyyyMMdd</p>
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
                     * 获取<p>指定分页返回第几页的数据，如果不传默认返回第一页，页码从 0 开始，即首页为 0</p>
                     * @return Offset <p>指定分页返回第几页的数据，如果不传默认返回第一页，页码从 0 开始，即首页为 0</p>
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置<p>指定分页返回第几页的数据，如果不传默认返回第一页，页码从 0 开始，即首页为 0</p>
                     * @param _offset <p>指定分页返回第几页的数据，如果不传默认返回第一页，页码从 0 开始，即首页为 0</p>
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
                     * 获取<p>指定分页每页返回的数据条数，如果不传默认为 100，单页最大支持 100。</p>
                     * @return Limit <p>指定分页每页返回的数据条数，如果不传默认为 100，单页最大支持 100。</p>
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置<p>指定分页每页返回的数据条数，如果不传默认为 100，单页最大支持 100。</p>
                     * @param _limit <p>指定分页每页返回的数据条数，如果不传默认为 100，单页最大支持 100。</p>
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
                     * 获取<p>查询的套餐类型 （选填 ）不传则查询所有套餐；<br>目前支持:</p><ul><li>**CloudEnterprise**: 企业版合同</li><li>**SingleSignature**: 单方签章</li><li>**CloudProve**: 签署报告</li><li>**CloudOnlineSign**: 腾讯会议在线签约</li><li>**ChannelWeCard**: 微工卡</li><li>**SignFlow**: 合同套餐</li><li>**SignFace**: 签署意愿（人脸识别）</li><li>**SignPassword**: 签署意愿（密码）</li><li>**SignSMS**: 签署意愿（短信）</li><li>**PersonalEssAuth**: 签署人实名（腾讯电子签认证）</li><li>**PersonalThirdAuth**: 签署人实名（信任第三方认证）</li><li>**OrgEssAuth**: 签署企业实名</li><li>**FlowNotify**: 短信通知</li><li>**AuthService**: 企业工商信息查询</li><li>**NoAuthSign**: 形式签</li></ul>
                     * @return QuotaType <p>查询的套餐类型 （选填 ）不传则查询所有套餐；<br>目前支持:</p><ul><li>**CloudEnterprise**: 企业版合同</li><li>**SingleSignature**: 单方签章</li><li>**CloudProve**: 签署报告</li><li>**CloudOnlineSign**: 腾讯会议在线签约</li><li>**ChannelWeCard**: 微工卡</li><li>**SignFlow**: 合同套餐</li><li>**SignFace**: 签署意愿（人脸识别）</li><li>**SignPassword**: 签署意愿（密码）</li><li>**SignSMS**: 签署意愿（短信）</li><li>**PersonalEssAuth**: 签署人实名（腾讯电子签认证）</li><li>**PersonalThirdAuth**: 签署人实名（信任第三方认证）</li><li>**OrgEssAuth**: 签署企业实名</li><li>**FlowNotify**: 短信通知</li><li>**AuthService**: 企业工商信息查询</li><li>**NoAuthSign**: 形式签</li></ul>
                     * 
                     */
                    std::string GetQuotaType() const;

                    /**
                     * 设置<p>查询的套餐类型 （选填 ）不传则查询所有套餐；<br>目前支持:</p><ul><li>**CloudEnterprise**: 企业版合同</li><li>**SingleSignature**: 单方签章</li><li>**CloudProve**: 签署报告</li><li>**CloudOnlineSign**: 腾讯会议在线签约</li><li>**ChannelWeCard**: 微工卡</li><li>**SignFlow**: 合同套餐</li><li>**SignFace**: 签署意愿（人脸识别）</li><li>**SignPassword**: 签署意愿（密码）</li><li>**SignSMS**: 签署意愿（短信）</li><li>**PersonalEssAuth**: 签署人实名（腾讯电子签认证）</li><li>**PersonalThirdAuth**: 签署人实名（信任第三方认证）</li><li>**OrgEssAuth**: 签署企业实名</li><li>**FlowNotify**: 短信通知</li><li>**AuthService**: 企业工商信息查询</li><li>**NoAuthSign**: 形式签</li></ul>
                     * @param _quotaType <p>查询的套餐类型 （选填 ）不传则查询所有套餐；<br>目前支持:</p><ul><li>**CloudEnterprise**: 企业版合同</li><li>**SingleSignature**: 单方签章</li><li>**CloudProve**: 签署报告</li><li>**CloudOnlineSign**: 腾讯会议在线签约</li><li>**ChannelWeCard**: 微工卡</li><li>**SignFlow**: 合同套餐</li><li>**SignFace**: 签署意愿（人脸识别）</li><li>**SignPassword**: 签署意愿（密码）</li><li>**SignSMS**: 签署意愿（短信）</li><li>**PersonalEssAuth**: 签署人实名（腾讯电子签认证）</li><li>**PersonalThirdAuth**: 签署人实名（信任第三方认证）</li><li>**OrgEssAuth**: 签署企业实名</li><li>**FlowNotify**: 短信通知</li><li>**AuthService**: 企业工商信息查询</li><li>**NoAuthSign**: 形式签</li></ul>
                     * 
                     */
                    void SetQuotaType(const std::string& _quotaType);

                    /**
                     * 判断参数 QuotaType 是否已赋值
                     * @return QuotaType 是否已赋值
                     * 
                     */
                    bool QuotaTypeHasBeenSet() const;

                    /**
                     * 获取<p>代理企业和员工的信息。<br>在集团企业代理子企业操作的场景中，需设置此参数。在此情境下，ProxyOrganizationId（子企业的组织ID）为必填项。</p>
                     * @return Agent <p>代理企业和员工的信息。<br>在集团企业代理子企业操作的场景中，需设置此参数。在此情境下，ProxyOrganizationId（子企业的组织ID）为必填项。</p>
                     * 
                     */
                    Agent GetAgent() const;

                    /**
                     * 设置<p>代理企业和员工的信息。<br>在集团企业代理子企业操作的场景中，需设置此参数。在此情境下，ProxyOrganizationId（子企业的组织ID）为必填项。</p>
                     * @param _agent <p>代理企业和员工的信息。<br>在集团企业代理子企业操作的场景中，需设置此参数。在此情境下，ProxyOrganizationId（子企业的组织ID）为必填项。</p>
                     * 
                     */
                    void SetAgent(const Agent& _agent);

                    /**
                     * 判断参数 Agent 是否已赋值
                     * @return Agent 是否已赋值
                     * 
                     */
                    bool AgentHasBeenSet() const;

                private:

                    /**
                     * <p>查询开始时间字符串，格式为yyyyMMdd，时间跨度不能大于31天。<span style="color: red;">注意：从 2026年10月10日起，开始日期和结束日期必须在同一个自然月内，不支持跨月查询。</span></p><ul><li><p>正确示例：StartTime=20260901，EndTime=20260930。开始和结束日期都在 2026年9月，可以查询。</p></li><li><p>错误示例：StartTime=20260815，EndTime=20260915。开始日期在8月，结束日期在9月，属于跨月查询，不支持。</p></li></ul><p>参数格式：yyyyMMdd</p>
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>查询结束时间字符串，格式为yyyyMMdd，时间跨度不能大于31天。<span style="color: red;">注意：从 2026年10月10日起，开始日期和结束日期必须在同一个自然月内，不支持跨月查询。</span></p><ul><li><p>正确示例：StartTime=20260901，EndTime=20260930。开始和结束日期都在 2026年9月，可以查询。</p></li><li><p>错误示例：StartTime=20260815，EndTime=20260915。开始日期在8月，结束日期在9月，属于跨月查询，不支持。</p></li></ul><p>参数格式：yyyyMMdd</p>
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <p>指定分页返回第几页的数据，如果不传默认返回第一页，页码从 0 开始，即首页为 0</p>
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>指定分页每页返回的数据条数，如果不传默认为 100，单页最大支持 100。</p>
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>查询的套餐类型 （选填 ）不传则查询所有套餐；<br>目前支持:</p><ul><li>**CloudEnterprise**: 企业版合同</li><li>**SingleSignature**: 单方签章</li><li>**CloudProve**: 签署报告</li><li>**CloudOnlineSign**: 腾讯会议在线签约</li><li>**ChannelWeCard**: 微工卡</li><li>**SignFlow**: 合同套餐</li><li>**SignFace**: 签署意愿（人脸识别）</li><li>**SignPassword**: 签署意愿（密码）</li><li>**SignSMS**: 签署意愿（短信）</li><li>**PersonalEssAuth**: 签署人实名（腾讯电子签认证）</li><li>**PersonalThirdAuth**: 签署人实名（信任第三方认证）</li><li>**OrgEssAuth**: 签署企业实名</li><li>**FlowNotify**: 短信通知</li><li>**AuthService**: 企业工商信息查询</li><li>**NoAuthSign**: 形式签</li></ul>
                     */
                    std::string m_quotaType;
                    bool m_quotaTypeHasBeenSet;

                    /**
                     * <p>代理企业和员工的信息。<br>在集团企业代理子企业操作的场景中，需设置此参数。在此情境下，ProxyOrganizationId（子企业的组织ID）为必填项。</p>
                     */
                    Agent m_agent;
                    bool m_agentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_DESCRIBEBILLUSAGEDETAILREQUEST_H_
