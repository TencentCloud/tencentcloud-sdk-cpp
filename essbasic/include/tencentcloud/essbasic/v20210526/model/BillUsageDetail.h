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

#ifndef TENCENTCLOUD_ESSBASIC_V20210526_MODEL_BILLUSAGEDETAIL_H_
#define TENCENTCLOUD_ESSBASIC_V20210526_MODEL_BILLUSAGEDETAIL_H_

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
                class BillUsageDetail : public AbstractModel
                {
                public:
                    BillUsageDetail();
                    ~BillUsageDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取合同流程ID，为32位字符串。
建议开发者妥善保存此流程ID，以便于顺利进行后续操作。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FlowId 合同流程ID，为32位字符串。
建议开发者妥善保存此流程ID，以便于顺利进行后续操作。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFlowId() const;

                    /**
                     * 设置合同流程ID，为32位字符串。
建议开发者妥善保存此流程ID，以便于顺利进行后续操作。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _flowId 合同流程ID，为32位字符串。
建议开发者妥善保存此流程ID，以便于顺利进行后续操作。
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OperatorName 合同经办人名称
如果有多个经办人用分号隔开。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOperatorName() const;

                    /**
                     * 设置合同经办人名称
如果有多个经办人用分号隔开。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _operatorName 合同经办人名称
如果有多个经办人用分号隔开。
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateOrganizationName 发起方组织机构名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreateOrganizationName() const;

                    /**
                     * 设置发起方组织机构名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createOrganizationName 发起方组织机构名称
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取合同流程的名称（可自定义此名称），长度不能超过200，只能由中文、字母、数字和下划线组成。
该名称还将用于合同签署完成后的下载文件名。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FlowName 合同流程的名称（可自定义此名称），长度不能超过200，只能由中文、字母、数字和下划线组成。
该名称还将用于合同签署完成后的下载文件名。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFlowName() const;

                    /**
                     * 设置合同流程的名称（可自定义此名称），长度不能超过200，只能由中文、字母、数字和下划线组成。
该名称还将用于合同签署完成后的下载文件名。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _flowName 合同流程的名称（可自定义此名称），长度不能超过200，只能由中文、字母、数字和下划线组成。
该名称还将用于合同签署完成后的下载文件名。
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取当前合同状态,如下是状态码对应的状态。
0-还没有发起
1-等待签署
2-部分签署 
3-拒签
4-已签署 
5-已过期 
6-已撤销 
7-还没有预发起
8-等待填写
9-部分填写 
10-拒填
11-已解除
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status 当前合同状态,如下是状态码对应的状态。
0-还没有发起
1-等待签署
2-部分签署 
3-拒签
4-已签署 
5-已过期 
6-已撤销 
7-还没有预发起
8-等待填写
9-部分填写 
10-拒填
11-已解除
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置当前合同状态,如下是状态码对应的状态。
0-还没有发起
1-等待签署
2-部分签署 
3-拒签
4-已签署 
5-已过期 
6-已撤销 
7-还没有预发起
8-等待填写
9-部分填写 
10-拒填
11-已解除
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _status 当前合同状态,如下是状态码对应的状态。
0-还没有发起
1-等待签署
2-部分签署 
3-拒签
4-已签署 
5-已过期 
6-已撤销 
7-还没有预发起
8-等待填写
9-部分填写 
10-拒填
11-已解除
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取套餐类型
对应关系如下
CloudEnterprise-企业版合同
SingleSignature-单方签章
CloudProve-签署报告
CloudOnlineSign-腾讯会议在线签约
ChannelWeCard-微工卡
SignFlow-合同套餐
SignFace-签署意愿（人脸识别）
SignPassword-签署意愿（密码）
SignSMS-签署意愿（短信）
PersonalEssAuth-签署人实名（腾讯电子签认证）
PersonalThirdAuth-签署人实名（信任第三方认证）
OrgEssAuth-签署企业实名
FlowNotify-短信通知
AuthService-企业工商信息查询
注意：此字段可能返回 null，表示取不到有效值。
                     * @return QuotaType 套餐类型
对应关系如下
CloudEnterprise-企业版合同
SingleSignature-单方签章
CloudProve-签署报告
CloudOnlineSign-腾讯会议在线签约
ChannelWeCard-微工卡
SignFlow-合同套餐
SignFace-签署意愿（人脸识别）
SignPassword-签署意愿（密码）
SignSMS-签署意愿（短信）
PersonalEssAuth-签署人实名（腾讯电子签认证）
PersonalThirdAuth-签署人实名（信任第三方认证）
OrgEssAuth-签署企业实名
FlowNotify-短信通知
AuthService-企业工商信息查询
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetQuotaType() const;

                    /**
                     * 设置套餐类型
对应关系如下
CloudEnterprise-企业版合同
SingleSignature-单方签章
CloudProve-签署报告
CloudOnlineSign-腾讯会议在线签约
ChannelWeCard-微工卡
SignFlow-合同套餐
SignFace-签署意愿（人脸识别）
SignPassword-签署意愿（密码）
SignSMS-签署意愿（短信）
PersonalEssAuth-签署人实名（腾讯电子签认证）
PersonalThirdAuth-签署人实名（信任第三方认证）
OrgEssAuth-签署企业实名
FlowNotify-短信通知
AuthService-企业工商信息查询
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _quotaType 套餐类型
对应关系如下
CloudEnterprise-企业版合同
SingleSignature-单方签章
CloudProve-签署报告
CloudOnlineSign-腾讯会议在线签约
ChannelWeCard-微工卡
SignFlow-合同套餐
SignFace-签署意愿（人脸识别）
SignPassword-签署意愿（密码）
SignSMS-签署意愿（短信）
PersonalEssAuth-签署人实名（腾讯电子签认证）
PersonalThirdAuth-签署人实名（信任第三方认证）
OrgEssAuth-签署企业实名
FlowNotify-短信通知
AuthService-企业工商信息查询
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UseCount 合同使用量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetUseCount() const;

                    /**
                     * 设置合同使用量
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _useCount 合同使用量
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CostTime 消耗的时间戳，格式为Unix标准时间戳（秒）。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetCostTime() const;

                    /**
                     * 设置消耗的时间戳，格式为Unix标准时间戳（秒）。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _costTime 消耗的时间戳，格式为Unix标准时间戳（秒）。
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return QuotaName 消耗的套餐名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetQuotaName() const;

                    /**
                     * 设置消耗的套餐名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _quotaName 消耗的套餐名称
注意：此字段可能返回 null，表示取不到有效值。
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
1.扣费 2.撤销返还
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CostType 消耗类型
1.扣费 2.撤销返还
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetCostType() const;

                    /**
                     * 设置消耗类型
1.扣费 2.撤销返还
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _costType 消耗类型
1.扣费 2.撤销返还
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Remark 备注
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置备注
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _remark 备注
注意：此字段可能返回 null，表示取不到有效值。
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
建议开发者妥善保存此流程ID，以便于顺利进行后续操作。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_flowId;
                    bool m_flowIdHasBeenSet;

                    /**
                     * 合同经办人名称
如果有多个经办人用分号隔开。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_operatorName;
                    bool m_operatorNameHasBeenSet;

                    /**
                     * 发起方组织机构名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createOrganizationName;
                    bool m_createOrganizationNameHasBeenSet;

                    /**
                     * 合同流程的名称（可自定义此名称），长度不能超过200，只能由中文、字母、数字和下划线组成。
该名称还将用于合同签署完成后的下载文件名。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_flowName;
                    bool m_flowNameHasBeenSet;

                    /**
                     * 当前合同状态,如下是状态码对应的状态。
0-还没有发起
1-等待签署
2-部分签署 
3-拒签
4-已签署 
5-已过期 
6-已撤销 
7-还没有预发起
8-等待填写
9-部分填写 
10-拒填
11-已解除
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 套餐类型
对应关系如下
CloudEnterprise-企业版合同
SingleSignature-单方签章
CloudProve-签署报告
CloudOnlineSign-腾讯会议在线签约
ChannelWeCard-微工卡
SignFlow-合同套餐
SignFace-签署意愿（人脸识别）
SignPassword-签署意愿（密码）
SignSMS-签署意愿（短信）
PersonalEssAuth-签署人实名（腾讯电子签认证）
PersonalThirdAuth-签署人实名（信任第三方认证）
OrgEssAuth-签署企业实名
FlowNotify-短信通知
AuthService-企业工商信息查询
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_quotaType;
                    bool m_quotaTypeHasBeenSet;

                    /**
                     * 合同使用量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_useCount;
                    bool m_useCountHasBeenSet;

                    /**
                     * 消耗的时间戳，格式为Unix标准时间戳（秒）。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_costTime;
                    bool m_costTimeHasBeenSet;

                    /**
                     * 消耗的套餐名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_quotaName;
                    bool m_quotaNameHasBeenSet;

                    /**
                     * 消耗类型
1.扣费 2.撤销返还
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_costType;
                    bool m_costTypeHasBeenSet;

                    /**
                     * 备注
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20210526_MODEL_BILLUSAGEDETAIL_H_
