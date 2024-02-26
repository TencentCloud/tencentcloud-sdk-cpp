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

#ifndef TENCENTCLOUD_ESSBASIC_V20210526_MODEL_CHANNELBILLUSAGEDETAIL_H_
#define TENCENTCLOUD_ESSBASIC_V20210526_MODEL_CHANNELBILLUSAGEDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Essbasic
    {
        namespace V20210526
        {
            namespace Model
            {
                /**
                * 用户计费使用情况详情
                */
                class ChannelBillUsageDetail : public AbstractModel
                {
                public:
                    ChannelBillUsageDetail();
                    ~ChannelBillUsageDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取合同流程ID，为32位字符串。
                     * @return FlowId 合同流程ID，为32位字符串。
                     * 
                     */
                    std::string GetFlowId() const;

                    /**
                     * 设置合同流程ID，为32位字符串。
                     * @param _flowId 合同流程ID，为32位字符串。
                     * 
                     */
                    void SetFlowId(const std::string& _flowId);

                    /**
                     * 判断参数 FlowId 是否已赋值
                     * @return FlowId 是否已赋值
                     * 
                     */
                    bool FlowIdHasBeenSet() const;

                    /**
                     * 获取合同经办人名称
如果有多个经办人用分号隔开。
                     * @return OperatorName 合同经办人名称
如果有多个经办人用分号隔开。
                     * 
                     */
                    std::string GetOperatorName() const;

                    /**
                     * 设置合同经办人名称
如果有多个经办人用分号隔开。
                     * @param _operatorName 合同经办人名称
如果有多个经办人用分号隔开。
                     * 
                     */
                    void SetOperatorName(const std::string& _operatorName);

                    /**
                     * 判断参数 OperatorName 是否已赋值
                     * @return OperatorName 是否已赋值
                     * 
                     */
                    bool OperatorNameHasBeenSet() const;

                    /**
                     * 获取发起方组织机构名称
                     * @return CreateOrganizationName 发起方组织机构名称
                     * 
                     */
                    std::string GetCreateOrganizationName() const;

                    /**
                     * 设置发起方组织机构名称
                     * @param _createOrganizationName 发起方组织机构名称
                     * 
                     */
                    void SetCreateOrganizationName(const std::string& _createOrganizationName);

                    /**
                     * 判断参数 CreateOrganizationName 是否已赋值
                     * @return CreateOrganizationName 是否已赋值
                     * 
                     */
                    bool CreateOrganizationNameHasBeenSet() const;

                    /**
                     * 获取合同流程的名称。
                     * @return FlowName 合同流程的名称。
                     * 
                     */
                    std::string GetFlowName() const;

                    /**
                     * 设置合同流程的名称。
                     * @param _flowName 合同流程的名称。
                     * 
                     */
                    void SetFlowName(const std::string& _flowName);

                    /**
                     * 判断参数 FlowName 是否已赋值
                     * @return FlowName 是否已赋值
                     * 
                     */
                    bool FlowNameHasBeenSet() const;

                    /**
                     * 获取合同流程当前的签署状态, 会存在下列的状态值
<ul>
<li>**INIT**: 合同创建</li>
<li>**PART**: 合同签署中(至少有一个签署方已经签署)</li>
<li>**REJECT**: 合同拒签</li>
<li>**ALL**: 合同签署完成</li>
<li>**DEADLINE**: 合同流签(合同过期)</li>
<li>**CANCEL**: 合同撤回</li>
<li>**RELIEVED**: 解除协议（已解除）</li>
<li>**WILLEXPIRE**: 合同即将过期</li>
<li>**EXCEPTION**: 合同异常</li>
</ul>
                     * @return FlowStatus 合同流程当前的签署状态, 会存在下列的状态值
<ul>
<li>**INIT**: 合同创建</li>
<li>**PART**: 合同签署中(至少有一个签署方已经签署)</li>
<li>**REJECT**: 合同拒签</li>
<li>**ALL**: 合同签署完成</li>
<li>**DEADLINE**: 合同流签(合同过期)</li>
<li>**CANCEL**: 合同撤回</li>
<li>**RELIEVED**: 解除协议（已解除）</li>
<li>**WILLEXPIRE**: 合同即将过期</li>
<li>**EXCEPTION**: 合同异常</li>
</ul>
                     * 
                     */
                    std::string GetFlowStatus() const;

                    /**
                     * 设置合同流程当前的签署状态, 会存在下列的状态值
<ul>
<li>**INIT**: 合同创建</li>
<li>**PART**: 合同签署中(至少有一个签署方已经签署)</li>
<li>**REJECT**: 合同拒签</li>
<li>**ALL**: 合同签署完成</li>
<li>**DEADLINE**: 合同流签(合同过期)</li>
<li>**CANCEL**: 合同撤回</li>
<li>**RELIEVED**: 解除协议（已解除）</li>
<li>**WILLEXPIRE**: 合同即将过期</li>
<li>**EXCEPTION**: 合同异常</li>
</ul>
                     * @param _flowStatus 合同流程当前的签署状态, 会存在下列的状态值
<ul>
<li>**INIT**: 合同创建</li>
<li>**PART**: 合同签署中(至少有一个签署方已经签署)</li>
<li>**REJECT**: 合同拒签</li>
<li>**ALL**: 合同签署完成</li>
<li>**DEADLINE**: 合同流签(合同过期)</li>
<li>**CANCEL**: 合同撤回</li>
<li>**RELIEVED**: 解除协议（已解除）</li>
<li>**WILLEXPIRE**: 合同即将过期</li>
<li>**EXCEPTION**: 合同异常</li>
</ul>
                     * 
                     */
                    void SetFlowStatus(const std::string& _flowStatus);

                    /**
                     * 判断参数 FlowStatus 是否已赋值
                     * @return FlowStatus 是否已赋值
                     * 
                     */
                    bool FlowStatusHasBeenSet() const;

                    /**
                     * 获取查询的套餐类型
对应关系如下:
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
</ul>
                     * @return QuotaType 查询的套餐类型
对应关系如下:
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
</ul>
                     * 
                     */
                    std::string GetQuotaType() const;

                    /**
                     * 设置查询的套餐类型
对应关系如下:
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
</ul>
                     * @param _quotaType 查询的套餐类型
对应关系如下:
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
                     * 获取合同使用量
注: `如果消耗类型是撤销返还，此值为负值代表返还的合同数量`
                     * @return UseCount 合同使用量
注: `如果消耗类型是撤销返还，此值为负值代表返还的合同数量`
                     * 
                     */
                    int64_t GetUseCount() const;

                    /**
                     * 设置合同使用量
注: `如果消耗类型是撤销返还，此值为负值代表返还的合同数量`
                     * @param _useCount 合同使用量
注: `如果消耗类型是撤销返还，此值为负值代表返还的合同数量`
                     * 
                     */
                    void SetUseCount(const int64_t& _useCount);

                    /**
                     * 判断参数 UseCount 是否已赋值
                     * @return UseCount 是否已赋值
                     * 
                     */
                    bool UseCountHasBeenSet() const;

                    /**
                     * 获取消耗的时间戳，格式为Unix标准时间戳（秒）。
                     * @return CostTime 消耗的时间戳，格式为Unix标准时间戳（秒）。
                     * 
                     */
                    int64_t GetCostTime() const;

                    /**
                     * 设置消耗的时间戳，格式为Unix标准时间戳（秒）。
                     * @param _costTime 消耗的时间戳，格式为Unix标准时间戳（秒）。
                     * 
                     */
                    void SetCostTime(const int64_t& _costTime);

                    /**
                     * 判断参数 CostTime 是否已赋值
                     * @return CostTime 是否已赋值
                     * 
                     */
                    bool CostTimeHasBeenSet() const;

                    /**
                     * 获取消耗的套餐名称
                     * @return QuotaName 消耗的套餐名称
                     * 
                     */
                    std::string GetQuotaName() const;

                    /**
                     * 设置消耗的套餐名称
                     * @param _quotaName 消耗的套餐名称
                     * 
                     */
                    void SetQuotaName(const std::string& _quotaName);

                    /**
                     * 判断参数 QuotaName 是否已赋值
                     * @return QuotaName 是否已赋值
                     * 
                     */
                    bool QuotaNameHasBeenSet() const;

                    /**
                     * 获取消耗类型
**1**.扣费 
**2**.撤销返还
                     * @return CostType 消耗类型
**1**.扣费 
**2**.撤销返还
                     * 
                     */
                    int64_t GetCostType() const;

                    /**
                     * 设置消耗类型
**1**.扣费 
**2**.撤销返还
                     * @param _costType 消耗类型
**1**.扣费 
**2**.撤销返还
                     * 
                     */
                    void SetCostType(const int64_t& _costType);

                    /**
                     * 判断参数 CostType 是否已赋值
                     * @return CostType 是否已赋值
                     * 
                     */
                    bool CostTypeHasBeenSet() const;

                    /**
                     * 获取备注
                     * @return Remark 备注
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置备注
                     * @param _remark 备注
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                private:

                    /**
                     * 合同流程ID，为32位字符串。
                     */
                    std::string m_flowId;
                    bool m_flowIdHasBeenSet;

                    /**
                     * 合同经办人名称
如果有多个经办人用分号隔开。
                     */
                    std::string m_operatorName;
                    bool m_operatorNameHasBeenSet;

                    /**
                     * 发起方组织机构名称
                     */
                    std::string m_createOrganizationName;
                    bool m_createOrganizationNameHasBeenSet;

                    /**
                     * 合同流程的名称。
                     */
                    std::string m_flowName;
                    bool m_flowNameHasBeenSet;

                    /**
                     * 合同流程当前的签署状态, 会存在下列的状态值
<ul>
<li>**INIT**: 合同创建</li>
<li>**PART**: 合同签署中(至少有一个签署方已经签署)</li>
<li>**REJECT**: 合同拒签</li>
<li>**ALL**: 合同签署完成</li>
<li>**DEADLINE**: 合同流签(合同过期)</li>
<li>**CANCEL**: 合同撤回</li>
<li>**RELIEVED**: 解除协议（已解除）</li>
<li>**WILLEXPIRE**: 合同即将过期</li>
<li>**EXCEPTION**: 合同异常</li>
</ul>
                     */
                    std::string m_flowStatus;
                    bool m_flowStatusHasBeenSet;

                    /**
                     * 查询的套餐类型
对应关系如下:
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
</ul>
                     */
                    std::string m_quotaType;
                    bool m_quotaTypeHasBeenSet;

                    /**
                     * 合同使用量
注: `如果消耗类型是撤销返还，此值为负值代表返还的合同数量`
                     */
                    int64_t m_useCount;
                    bool m_useCountHasBeenSet;

                    /**
                     * 消耗的时间戳，格式为Unix标准时间戳（秒）。
                     */
                    int64_t m_costTime;
                    bool m_costTimeHasBeenSet;

                    /**
                     * 消耗的套餐名称
                     */
                    std::string m_quotaName;
                    bool m_quotaNameHasBeenSet;

                    /**
                     * 消耗类型
**1**.扣费 
**2**.撤销返还
                     */
                    int64_t m_costType;
                    bool m_costTypeHasBeenSet;

                    /**
                     * 备注
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20210526_MODEL_CHANNELBILLUSAGEDETAIL_H_
