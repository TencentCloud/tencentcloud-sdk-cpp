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
                     * 获取查询开始时间字符串，格式为yyyymmdd,时间跨度不能大于31天
                     * @return StartTime 查询开始时间字符串，格式为yyyymmdd,时间跨度不能大于31天
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置查询开始时间字符串，格式为yyyymmdd,时间跨度不能大于31天
                     * @param _startTime 查询开始时间字符串，格式为yyyymmdd,时间跨度不能大于31天
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
                     * 获取查询结束时间字符串，格式为yyyymmdd,时间跨度不能大于31天
                     * @return EndTime 查询结束时间字符串，格式为yyyymmdd,时间跨度不能大于31天
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置查询结束时间字符串，格式为yyyymmdd,时间跨度不能大于31天
                     * @param _endTime 查询结束时间字符串，格式为yyyymmdd,时间跨度不能大于31天
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
                     * 获取指定分页返回第几页的数据，如果不传默认返回第一页，页码从 0 开始，即首页为 0
                     * @return Offset 指定分页返回第几页的数据，如果不传默认返回第一页，页码从 0 开始，即首页为 0
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置指定分页返回第几页的数据，如果不传默认返回第一页，页码从 0 开始，即首页为 0
                     * @param _offset 指定分页返回第几页的数据，如果不传默认返回第一页，页码从 0 开始，即首页为 0
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
                     * 获取指定分页每页返回的数据条数，如果不传默认为 50，单页最大支持 50。
                     * @return Limit 指定分页每页返回的数据条数，如果不传默认为 50，单页最大支持 50。
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置指定分页每页返回的数据条数，如果不传默认为 50，单页最大支持 50。
                     * @param _limit 指定分页每页返回的数据条数，如果不传默认为 50，单页最大支持 50。
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
                     * 获取查询的套餐类型 （选填 ）不传则查询所有套餐；
目前支持:
<ul>
<li>**CloudEnterprise**: 企业版合同</li>
<li>**SingleSignature**: 单方签章</li>
<li>**CloudProve**: 签署报告</li>
<li>**CloudOnlineSign**: 腾讯会议在线签约</li>
<li>**ChannelWeCard**: 微工卡</li>
<li>**SignFlow**: 合同套餐</li>
<li>**SignFace**: 签署意愿（人脸识别）</li>
<li>**SignPassword**: 签署意愿（密码）</li>
<li>**SignSMS**: 签署意愿（短信）</li>
<li>**PersonalEssAuth**: 签署人实名（腾讯电子签认证）</li>
<li>**PersonalThirdAuth**: 签署人实名（信任第三方认证）</li>
<li>**OrgEssAuth**: 签署企业实名</li>
<li>**FlowNotify**: 短信通知</li>
<li>**AuthService**: 企业工商信息查询</li>
<li>**NoAuthSign**: 形式签</li>
</ul>
                     * @return QuotaType 查询的套餐类型 （选填 ）不传则查询所有套餐；
目前支持:
<ul>
<li>**CloudEnterprise**: 企业版合同</li>
<li>**SingleSignature**: 单方签章</li>
<li>**CloudProve**: 签署报告</li>
<li>**CloudOnlineSign**: 腾讯会议在线签约</li>
<li>**ChannelWeCard**: 微工卡</li>
<li>**SignFlow**: 合同套餐</li>
<li>**SignFace**: 签署意愿（人脸识别）</li>
<li>**SignPassword**: 签署意愿（密码）</li>
<li>**SignSMS**: 签署意愿（短信）</li>
<li>**PersonalEssAuth**: 签署人实名（腾讯电子签认证）</li>
<li>**PersonalThirdAuth**: 签署人实名（信任第三方认证）</li>
<li>**OrgEssAuth**: 签署企业实名</li>
<li>**FlowNotify**: 短信通知</li>
<li>**AuthService**: 企业工商信息查询</li>
<li>**NoAuthSign**: 形式签</li>
</ul>
                     * 
                     */
                    std::string GetQuotaType() const;

                    /**
                     * 设置查询的套餐类型 （选填 ）不传则查询所有套餐；
目前支持:
<ul>
<li>**CloudEnterprise**: 企业版合同</li>
<li>**SingleSignature**: 单方签章</li>
<li>**CloudProve**: 签署报告</li>
<li>**CloudOnlineSign**: 腾讯会议在线签约</li>
<li>**ChannelWeCard**: 微工卡</li>
<li>**SignFlow**: 合同套餐</li>
<li>**SignFace**: 签署意愿（人脸识别）</li>
<li>**SignPassword**: 签署意愿（密码）</li>
<li>**SignSMS**: 签署意愿（短信）</li>
<li>**PersonalEssAuth**: 签署人实名（腾讯电子签认证）</li>
<li>**PersonalThirdAuth**: 签署人实名（信任第三方认证）</li>
<li>**OrgEssAuth**: 签署企业实名</li>
<li>**FlowNotify**: 短信通知</li>
<li>**AuthService**: 企业工商信息查询</li>
<li>**NoAuthSign**: 形式签</li>
</ul>
                     * @param _quotaType 查询的套餐类型 （选填 ）不传则查询所有套餐；
目前支持:
<ul>
<li>**CloudEnterprise**: 企业版合同</li>
<li>**SingleSignature**: 单方签章</li>
<li>**CloudProve**: 签署报告</li>
<li>**CloudOnlineSign**: 腾讯会议在线签约</li>
<li>**ChannelWeCard**: 微工卡</li>
<li>**SignFlow**: 合同套餐</li>
<li>**SignFace**: 签署意愿（人脸识别）</li>
<li>**SignPassword**: 签署意愿（密码）</li>
<li>**SignSMS**: 签署意愿（短信）</li>
<li>**PersonalEssAuth**: 签署人实名（腾讯电子签认证）</li>
<li>**PersonalThirdAuth**: 签署人实名（信任第三方认证）</li>
<li>**OrgEssAuth**: 签署企业实名</li>
<li>**FlowNotify**: 短信通知</li>
<li>**AuthService**: 企业工商信息查询</li>
<li>**NoAuthSign**: 形式签</li>
</ul>
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
                     * 获取代理企业和员工的信息。
在集团企业代理子企业操作的场景中，需设置此参数。在此情境下，ProxyOrganizationId（子企业的组织ID）为必填项。
                     * @return Agent 代理企业和员工的信息。
在集团企业代理子企业操作的场景中，需设置此参数。在此情境下，ProxyOrganizationId（子企业的组织ID）为必填项。
                     * 
                     */
                    Agent GetAgent() const;

                    /**
                     * 设置代理企业和员工的信息。
在集团企业代理子企业操作的场景中，需设置此参数。在此情境下，ProxyOrganizationId（子企业的组织ID）为必填项。
                     * @param _agent 代理企业和员工的信息。
在集团企业代理子企业操作的场景中，需设置此参数。在此情境下，ProxyOrganizationId（子企业的组织ID）为必填项。
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
                     * 查询开始时间字符串，格式为yyyymmdd,时间跨度不能大于31天
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 查询结束时间字符串，格式为yyyymmdd,时间跨度不能大于31天
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 指定分页返回第几页的数据，如果不传默认返回第一页，页码从 0 开始，即首页为 0
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 指定分页每页返回的数据条数，如果不传默认为 50，单页最大支持 50。
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 查询的套餐类型 （选填 ）不传则查询所有套餐；
目前支持:
<ul>
<li>**CloudEnterprise**: 企业版合同</li>
<li>**SingleSignature**: 单方签章</li>
<li>**CloudProve**: 签署报告</li>
<li>**CloudOnlineSign**: 腾讯会议在线签约</li>
<li>**ChannelWeCard**: 微工卡</li>
<li>**SignFlow**: 合同套餐</li>
<li>**SignFace**: 签署意愿（人脸识别）</li>
<li>**SignPassword**: 签署意愿（密码）</li>
<li>**SignSMS**: 签署意愿（短信）</li>
<li>**PersonalEssAuth**: 签署人实名（腾讯电子签认证）</li>
<li>**PersonalThirdAuth**: 签署人实名（信任第三方认证）</li>
<li>**OrgEssAuth**: 签署企业实名</li>
<li>**FlowNotify**: 短信通知</li>
<li>**AuthService**: 企业工商信息查询</li>
<li>**NoAuthSign**: 形式签</li>
</ul>
                     */
                    std::string m_quotaType;
                    bool m_quotaTypeHasBeenSet;

                    /**
                     * 代理企业和员工的信息。
在集团企业代理子企业操作的场景中，需设置此参数。在此情境下，ProxyOrganizationId（子企业的组织ID）为必填项。
                     */
                    Agent m_agent;
                    bool m_agentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_DESCRIBEBILLUSAGEDETAILREQUEST_H_
