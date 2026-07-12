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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_DESCRIBEBILLUSAGEREQUEST_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_DESCRIBEBILLUSAGEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ess
    {
        namespace V20201111
        {
            namespace Model
            {
                /**
                * DescribeBillUsage请求参数结构体
                */
                class DescribeBillUsageRequest : public AbstractModel
                {
                public:
                    DescribeBillUsageRequest();
                    ~DescribeBillUsageRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>查询开始时间字符串，格式为yyyymmdd,时间跨度不能大于90天</p>
                     * @return StartTime <p>查询开始时间字符串，格式为yyyymmdd,时间跨度不能大于90天</p>
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置<p>查询开始时间字符串，格式为yyyymmdd,时间跨度不能大于90天</p>
                     * @param _startTime <p>查询开始时间字符串，格式为yyyymmdd,时间跨度不能大于90天</p>
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
                     * 获取<p>查询结束时间字符串，格式为yyyymmdd,时间跨度不能大于90天</p>
                     * @return EndTime <p>查询结束时间字符串，格式为yyyymmdd,时间跨度不能大于90天</p>
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置<p>查询结束时间字符串，格式为yyyymmdd,时间跨度不能大于90天</p>
                     * @param _endTime <p>查询结束时间字符串，格式为yyyymmdd,时间跨度不能大于90天</p>
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
                     * 获取<p>查询的套餐类型 （选填 ）不传则查询所有套餐；目前支持:<ul><li><strong>CloudEnterprise</strong>: 企业版合同</li><li><strong>SingleSignature</strong>: 单方签章</li><li><strong>CloudProve</strong>: 签署报告</li><li><strong>CloudOnlineSign</strong>: 腾讯会议在线签约</li><li><strong>ChannelWeCard</strong>: 微工卡</li><li><strong>SignFlow</strong>: 合同套餐</li><li><strong>SignFace</strong>: 签署意愿（人脸识别）</li><li><strong>SignPassword</strong>: 签署意愿（密码）</li><li><strong>SignSMS</strong>: 签署意愿（短信）</li><li><strong>PersonalEssAuth</strong>: 签署人实名（腾讯电子签认证）</li><li><strong>PersonalThirdAuth</strong>: 签署人实名（信任第三方认证）</li><li><strong>OrgEssAuth</strong>: 签署企业实名</li><li><strong>FlowNotify</strong>: 短信通知</li><li><strong>AuthService</strong>: 企业工商信息查询</li></ul></p>
                     * @return QuotaType <p>查询的套餐类型 （选填 ）不传则查询所有套餐；目前支持:<ul><li><strong>CloudEnterprise</strong>: 企业版合同</li><li><strong>SingleSignature</strong>: 单方签章</li><li><strong>CloudProve</strong>: 签署报告</li><li><strong>CloudOnlineSign</strong>: 腾讯会议在线签约</li><li><strong>ChannelWeCard</strong>: 微工卡</li><li><strong>SignFlow</strong>: 合同套餐</li><li><strong>SignFace</strong>: 签署意愿（人脸识别）</li><li><strong>SignPassword</strong>: 签署意愿（密码）</li><li><strong>SignSMS</strong>: 签署意愿（短信）</li><li><strong>PersonalEssAuth</strong>: 签署人实名（腾讯电子签认证）</li><li><strong>PersonalThirdAuth</strong>: 签署人实名（信任第三方认证）</li><li><strong>OrgEssAuth</strong>: 签署企业实名</li><li><strong>FlowNotify</strong>: 短信通知</li><li><strong>AuthService</strong>: 企业工商信息查询</li></ul></p>
                     * 
                     */
                    std::string GetQuotaType() const;

                    /**
                     * 设置<p>查询的套餐类型 （选填 ）不传则查询所有套餐；目前支持:<ul><li><strong>CloudEnterprise</strong>: 企业版合同</li><li><strong>SingleSignature</strong>: 单方签章</li><li><strong>CloudProve</strong>: 签署报告</li><li><strong>CloudOnlineSign</strong>: 腾讯会议在线签约</li><li><strong>ChannelWeCard</strong>: 微工卡</li><li><strong>SignFlow</strong>: 合同套餐</li><li><strong>SignFace</strong>: 签署意愿（人脸识别）</li><li><strong>SignPassword</strong>: 签署意愿（密码）</li><li><strong>SignSMS</strong>: 签署意愿（短信）</li><li><strong>PersonalEssAuth</strong>: 签署人实名（腾讯电子签认证）</li><li><strong>PersonalThirdAuth</strong>: 签署人实名（信任第三方认证）</li><li><strong>OrgEssAuth</strong>: 签署企业实名</li><li><strong>FlowNotify</strong>: 短信通知</li><li><strong>AuthService</strong>: 企业工商信息查询</li></ul></p>
                     * @param _quotaType <p>查询的套餐类型 （选填 ）不传则查询所有套餐；目前支持:<ul><li><strong>CloudEnterprise</strong>: 企业版合同</li><li><strong>SingleSignature</strong>: 单方签章</li><li><strong>CloudProve</strong>: 签署报告</li><li><strong>CloudOnlineSign</strong>: 腾讯会议在线签约</li><li><strong>ChannelWeCard</strong>: 微工卡</li><li><strong>SignFlow</strong>: 合同套餐</li><li><strong>SignFace</strong>: 签署意愿（人脸识别）</li><li><strong>SignPassword</strong>: 签署意愿（密码）</li><li><strong>SignSMS</strong>: 签署意愿（短信）</li><li><strong>PersonalEssAuth</strong>: 签署人实名（腾讯电子签认证）</li><li><strong>PersonalThirdAuth</strong>: 签署人实名（信任第三方认证）</li><li><strong>OrgEssAuth</strong>: 签署企业实名</li><li><strong>FlowNotify</strong>: 短信通知</li><li><strong>AuthService</strong>: 企业工商信息查询</li></ul></p>
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
                     * 获取<p>是否展示集团子企业的明细，默认否</p>
                     * @return DisplaySubEnterprise <p>是否展示集团子企业的明细，默认否</p>
                     * 
                     */
                    bool GetDisplaySubEnterprise() const;

                    /**
                     * 设置<p>是否展示集团子企业的明细，默认否</p>
                     * @param _displaySubEnterprise <p>是否展示集团子企业的明细，默认否</p>
                     * 
                     */
                    void SetDisplaySubEnterprise(const bool& _displaySubEnterprise);

                    /**
                     * 判断参数 DisplaySubEnterprise 是否已赋值
                     * @return DisplaySubEnterprise 是否已赋值
                     * 
                     */
                    bool DisplaySubEnterpriseHasBeenSet() const;

                private:

                    /**
                     * <p>查询开始时间字符串，格式为yyyymmdd,时间跨度不能大于90天</p>
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>查询结束时间字符串，格式为yyyymmdd,时间跨度不能大于90天</p>
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <p>查询的套餐类型 （选填 ）不传则查询所有套餐；目前支持:<ul><li><strong>CloudEnterprise</strong>: 企业版合同</li><li><strong>SingleSignature</strong>: 单方签章</li><li><strong>CloudProve</strong>: 签署报告</li><li><strong>CloudOnlineSign</strong>: 腾讯会议在线签约</li><li><strong>ChannelWeCard</strong>: 微工卡</li><li><strong>SignFlow</strong>: 合同套餐</li><li><strong>SignFace</strong>: 签署意愿（人脸识别）</li><li><strong>SignPassword</strong>: 签署意愿（密码）</li><li><strong>SignSMS</strong>: 签署意愿（短信）</li><li><strong>PersonalEssAuth</strong>: 签署人实名（腾讯电子签认证）</li><li><strong>PersonalThirdAuth</strong>: 签署人实名（信任第三方认证）</li><li><strong>OrgEssAuth</strong>: 签署企业实名</li><li><strong>FlowNotify</strong>: 短信通知</li><li><strong>AuthService</strong>: 企业工商信息查询</li></ul></p>
                     */
                    std::string m_quotaType;
                    bool m_quotaTypeHasBeenSet;

                    /**
                     * <p>是否展示集团子企业的明细，默认否</p>
                     */
                    bool m_displaySubEnterprise;
                    bool m_displaySubEnterpriseHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_DESCRIBEBILLUSAGEREQUEST_H_
