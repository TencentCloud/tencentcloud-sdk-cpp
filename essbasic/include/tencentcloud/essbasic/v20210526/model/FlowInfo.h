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

#ifndef TENCENTCLOUD_ESSBASIC_V20210526_MODEL_FLOWINFO_H_
#define TENCENTCLOUD_ESSBASIC_V20210526_MODEL_FLOWINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/essbasic/v20210526/model/FlowApproverInfo.h>
#include <tencentcloud/essbasic/v20210526/model/FormField.h>
#include <tencentcloud/essbasic/v20210526/model/CcInfo.h>


namespace TencentCloud
{
    namespace Essbasic
    {
        namespace V20210526
        {
            namespace Model
            {
                /**
                * 此结构体 (FlowInfo) 用于描述签署流程信息。

【数据表格传参说明】
当模板的 ComponentType='DYNAMIC_TABLE'时（ 第三方应用集成或集成版），FormField.ComponentValue需要传递json格式的字符串参数，用于确定表头&填充数据表格（支持内容的单元格合并）
输入示例1：

```
{
    "headers":[
        {
            "content":"head1"
        },
        {
            "content":"head2"
        },
        {
            "content":"head3"
        }
    ],
    "rowCount":3,
    "body":{
        "cells":[
            {
                "rowStart":1,
                "rowEnd":1,
                "columnStart":1,
                "columnEnd":1,
                "content":"123"
            },
            {
                "rowStart":2,
                "rowEnd":3,
                "columnStart":1,
                "columnEnd":2,
                "content":"456"
            },
            {
                "rowStart":3,
                "rowEnd":3,
                "columnStart":3,
                "columnEnd":3,
                "content":"789"
            }
        ]
    }
}

```

输入示例2（表格表头宽度比例配置）：

```
{
    "headers":[
        {
            "content":"head1",
            "widthPercent": 30
        },
        {
            "content":"head2",
            "widthPercent": 30
        },
        {
            "content":"head3",
            "widthPercent": 40
        }
    ],
    "rowCount":3,
    "body":{
        "cells":[
            {
                "rowStart":1,
                "rowEnd":1,
                "columnStart":1,
                "columnEnd":1,
                "content":"123"
            },
            {
                "rowStart":2,
                "rowEnd":3,
                "columnStart":1,
                "columnEnd":2,
                "content":"456"
            },
            {
                "rowStart":3,
                "rowEnd":3,
                "columnStart":3,
                "columnEnd":3,
                "content":"789"
            }
        ]
    }
}

```
表格参数说明

| 名称                | 类型    | 描述                                              |
| ------------------- | ------- | ------------------------------------------------- |
| headers             | Array   | 表头：不超过10列，不支持单元格合并，字数不超过100 |
| rowCount            | Integer | 表格内容最大行数                                  |
| cells.N.rowStart    | Integer | 单元格坐标：行起始index                           |
| cells.N.rowEnd      | Integer | 单元格坐标：行结束index                           |
| cells.N.columnStart | Integer | 单元格坐标：列起始index                           |
| cells.N.columnEnd   | Integer | 单元格坐标：列结束index                           |
| cells.N.content     | String  | 单元格内容，字数不超过100                         |

表格参数headers说明

| 名称                | 类型    | 描述                                              |
| ------------------- | ------- | ------------------------------------------------- |
| widthPercent   | Integer | 表头单元格列占总表头的比例，例如1：30表示 此列占表头的30%，不填写时列宽度平均拆分；例如2：总2列，某一列填写40，剩余列可以为空，按照60计算。；例如3：总3列，某一列填写30，剩余2列可以为空，分别为(100-30)/2=35                    |
| content    | String  | 表头单元格内容，字数不超过100                         |
                */
                class FlowInfo : public AbstractModel
                {
                public:
                    FlowInfo();
                    ~FlowInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取合同名字，最大长度200个字符
                     * @return FlowName 合同名字，最大长度200个字符
                     */
                    std::string GetFlowName() const;

                    /**
                     * 设置合同名字，最大长度200个字符
                     * @param FlowName 合同名字，最大长度200个字符
                     */
                    void SetFlowName(const std::string& _flowName);

                    /**
                     * 判断参数 FlowName 是否已赋值
                     * @return FlowName 是否已赋值
                     */
                    bool FlowNameHasBeenSet() const;

                    /**
                     * 获取签署截止时间戳，超过有效签署时间则该签署流程失败，默认一年
                     * @return Deadline 签署截止时间戳，超过有效签署时间则该签署流程失败，默认一年
                     */
                    int64_t GetDeadline() const;

                    /**
                     * 设置签署截止时间戳，超过有效签署时间则该签署流程失败，默认一年
                     * @param Deadline 签署截止时间戳，超过有效签署时间则该签署流程失败，默认一年
                     */
                    void SetDeadline(const int64_t& _deadline);

                    /**
                     * 判断参数 Deadline 是否已赋值
                     * @return Deadline 是否已赋值
                     */
                    bool DeadlineHasBeenSet() const;

                    /**
                     * 获取模板ID
                     * @return TemplateId 模板ID
                     */
                    std::string GetTemplateId() const;

                    /**
                     * 设置模板ID
                     * @param TemplateId 模板ID
                     */
                    void SetTemplateId(const std::string& _templateId);

                    /**
                     * 判断参数 TemplateId 是否已赋值
                     * @return TemplateId 是否已赋值
                     */
                    bool TemplateIdHasBeenSet() const;

                    /**
                     * 获取多个签署人信息，最大支持50个签署方
                     * @return FlowApprovers 多个签署人信息，最大支持50个签署方
                     */
                    std::vector<FlowApproverInfo> GetFlowApprovers() const;

                    /**
                     * 设置多个签署人信息，最大支持50个签署方
                     * @param FlowApprovers 多个签署人信息，最大支持50个签署方
                     */
                    void SetFlowApprovers(const std::vector<FlowApproverInfo>& _flowApprovers);

                    /**
                     * 判断参数 FlowApprovers 是否已赋值
                     * @return FlowApprovers 是否已赋值
                     */
                    bool FlowApproversHasBeenSet() const;

                    /**
                     * 获取表单K-V对列表
                     * @return FormFields 表单K-V对列表
                     */
                    std::vector<FormField> GetFormFields() const;

                    /**
                     * 设置表单K-V对列表
                     * @param FormFields 表单K-V对列表
                     */
                    void SetFormFields(const std::vector<FormField>& _formFields);

                    /**
                     * 判断参数 FormFields 是否已赋值
                     * @return FormFields 是否已赋值
                     */
                    bool FormFieldsHasBeenSet() const;

                    /**
                     * 获取回调地址，最大长度1000个字符
                     * @return CallbackUrl 回调地址，最大长度1000个字符
                     */
                    std::string GetCallbackUrl() const;

                    /**
                     * 设置回调地址，最大长度1000个字符
                     * @param CallbackUrl 回调地址，最大长度1000个字符
                     */
                    void SetCallbackUrl(const std::string& _callbackUrl);

                    /**
                     * 判断参数 CallbackUrl 是否已赋值
                     * @return CallbackUrl 是否已赋值
                     */
                    bool CallbackUrlHasBeenSet() const;

                    /**
                     * 获取合同类型，如：1. “劳务”；2. “销售”；3. “租赁”；4. “其他”，最大长度200个字符
                     * @return FlowType 合同类型，如：1. “劳务”；2. “销售”；3. “租赁”；4. “其他”，最大长度200个字符
                     */
                    std::string GetFlowType() const;

                    /**
                     * 设置合同类型，如：1. “劳务”；2. “销售”；3. “租赁”；4. “其他”，最大长度200个字符
                     * @param FlowType 合同类型，如：1. “劳务”；2. “销售”；3. “租赁”；4. “其他”，最大长度200个字符
                     */
                    void SetFlowType(const std::string& _flowType);

                    /**
                     * 判断参数 FlowType 是否已赋值
                     * @return FlowType 是否已赋值
                     */
                    bool FlowTypeHasBeenSet() const;

                    /**
                     * 获取合同描述，最大长度1000个字符
                     * @return FlowDescription 合同描述，最大长度1000个字符
                     */
                    std::string GetFlowDescription() const;

                    /**
                     * 设置合同描述，最大长度1000个字符
                     * @param FlowDescription 合同描述，最大长度1000个字符
                     */
                    void SetFlowDescription(const std::string& _flowDescription);

                    /**
                     * 判断参数 FlowDescription 是否已赋值
                     * @return FlowDescription 是否已赋值
                     */
                    bool FlowDescriptionHasBeenSet() const;

                    /**
                     * 获取 第三方应用平台的业务信息，最大长度1000个字符。
                     * @return CustomerData  第三方应用平台的业务信息，最大长度1000个字符。
                     */
                    std::string GetCustomerData() const;

                    /**
                     * 设置 第三方应用平台的业务信息，最大长度1000个字符。
                     * @param CustomerData  第三方应用平台的业务信息，最大长度1000个字符。
                     */
                    void SetCustomerData(const std::string& _customerData);

                    /**
                     * 判断参数 CustomerData 是否已赋值
                     * @return CustomerData 是否已赋值
                     */
                    bool CustomerDataHasBeenSet() const;

                    /**
                     * 获取合同显示的页卡模板，说明：只支持{合同名称}, {发起方企业}, {发起方姓名}, {签署方N企业}, {签署方N姓名}，且N不能超过签署人的数量，N从1开始
                     * @return CustomShowMap 合同显示的页卡模板，说明：只支持{合同名称}, {发起方企业}, {发起方姓名}, {签署方N企业}, {签署方N姓名}，且N不能超过签署人的数量，N从1开始
                     */
                    std::string GetCustomShowMap() const;

                    /**
                     * 设置合同显示的页卡模板，说明：只支持{合同名称}, {发起方企业}, {发起方姓名}, {签署方N企业}, {签署方N姓名}，且N不能超过签署人的数量，N从1开始
                     * @param CustomShowMap 合同显示的页卡模板，说明：只支持{合同名称}, {发起方企业}, {发起方姓名}, {签署方N企业}, {签署方N姓名}，且N不能超过签署人的数量，N从1开始
                     */
                    void SetCustomShowMap(const std::string& _customShowMap);

                    /**
                     * 判断参数 CustomShowMap 是否已赋值
                     * @return CustomShowMap 是否已赋值
                     */
                    bool CustomShowMapHasBeenSet() const;

                    /**
                     * 获取被抄送人的信息列表，抄送功能暂不开放
                     * @return CcInfos 被抄送人的信息列表，抄送功能暂不开放
                     */
                    std::vector<CcInfo> GetCcInfos() const;

                    /**
                     * 设置被抄送人的信息列表，抄送功能暂不开放
                     * @param CcInfos 被抄送人的信息列表，抄送功能暂不开放
                     */
                    void SetCcInfos(const std::vector<CcInfo>& _ccInfos);

                    /**
                     * 判断参数 CcInfos 是否已赋值
                     * @return CcInfos 是否已赋值
                     */
                    bool CcInfosHasBeenSet() const;

                    /**
                     * 获取发起方企业的签署人进行签署操作是否需要企业内部审批。
若设置为true,审核结果需通过接口 ChannelCreateFlowSignReview 通知电子签，审核通过后，发起方企业签署人方可进行签署操作，否则会阻塞其签署操作。

注：企业可以通过此功能与企业内部的审批流程进行关联，支持手动、静默签署合同。
                     * @return NeedSignReview 发起方企业的签署人进行签署操作是否需要企业内部审批。
若设置为true,审核结果需通过接口 ChannelCreateFlowSignReview 通知电子签，审核通过后，发起方企业签署人方可进行签署操作，否则会阻塞其签署操作。

注：企业可以通过此功能与企业内部的审批流程进行关联，支持手动、静默签署合同。
                     */
                    bool GetNeedSignReview() const;

                    /**
                     * 设置发起方企业的签署人进行签署操作是否需要企业内部审批。
若设置为true,审核结果需通过接口 ChannelCreateFlowSignReview 通知电子签，审核通过后，发起方企业签署人方可进行签署操作，否则会阻塞其签署操作。

注：企业可以通过此功能与企业内部的审批流程进行关联，支持手动、静默签署合同。
                     * @param NeedSignReview 发起方企业的签署人进行签署操作是否需要企业内部审批。
若设置为true,审核结果需通过接口 ChannelCreateFlowSignReview 通知电子签，审核通过后，发起方企业签署人方可进行签署操作，否则会阻塞其签署操作。

注：企业可以通过此功能与企业内部的审批流程进行关联，支持手动、静默签署合同。
                     */
                    void SetNeedSignReview(const bool& _needSignReview);

                    /**
                     * 判断参数 NeedSignReview 是否已赋值
                     * @return NeedSignReview 是否已赋值
                     */
                    bool NeedSignReviewHasBeenSet() const;

                    /**
                     * 获取给关注人发送短信通知的类型，0-合同发起时通知 1-签署完成后通知
                     * @return CcNotifyType 给关注人发送短信通知的类型，0-合同发起时通知 1-签署完成后通知
                     */
                    int64_t GetCcNotifyType() const;

                    /**
                     * 设置给关注人发送短信通知的类型，0-合同发起时通知 1-签署完成后通知
                     * @param CcNotifyType 给关注人发送短信通知的类型，0-合同发起时通知 1-签署完成后通知
                     */
                    void SetCcNotifyType(const int64_t& _ccNotifyType);

                    /**
                     * 判断参数 CcNotifyType 是否已赋值
                     * @return CcNotifyType 是否已赋值
                     */
                    bool CcNotifyTypeHasBeenSet() const;

                    /**
                     * 获取个人自动签场景。发起自动签署时，需设置对应自动签署场景，目前仅支持场景：处方单-E_PRESCRIPTION_AUTO_SIGN
                     * @return AutoSignScene 个人自动签场景。发起自动签署时，需设置对应自动签署场景，目前仅支持场景：处方单-E_PRESCRIPTION_AUTO_SIGN
                     */
                    std::string GetAutoSignScene() const;

                    /**
                     * 设置个人自动签场景。发起自动签署时，需设置对应自动签署场景，目前仅支持场景：处方单-E_PRESCRIPTION_AUTO_SIGN
                     * @param AutoSignScene 个人自动签场景。发起自动签署时，需设置对应自动签署场景，目前仅支持场景：处方单-E_PRESCRIPTION_AUTO_SIGN
                     */
                    void SetAutoSignScene(const std::string& _autoSignScene);

                    /**
                     * 判断参数 AutoSignScene 是否已赋值
                     * @return AutoSignScene 是否已赋值
                     */
                    bool AutoSignSceneHasBeenSet() const;

                private:

                    /**
                     * 合同名字，最大长度200个字符
                     */
                    std::string m_flowName;
                    bool m_flowNameHasBeenSet;

                    /**
                     * 签署截止时间戳，超过有效签署时间则该签署流程失败，默认一年
                     */
                    int64_t m_deadline;
                    bool m_deadlineHasBeenSet;

                    /**
                     * 模板ID
                     */
                    std::string m_templateId;
                    bool m_templateIdHasBeenSet;

                    /**
                     * 多个签署人信息，最大支持50个签署方
                     */
                    std::vector<FlowApproverInfo> m_flowApprovers;
                    bool m_flowApproversHasBeenSet;

                    /**
                     * 表单K-V对列表
                     */
                    std::vector<FormField> m_formFields;
                    bool m_formFieldsHasBeenSet;

                    /**
                     * 回调地址，最大长度1000个字符
                     */
                    std::string m_callbackUrl;
                    bool m_callbackUrlHasBeenSet;

                    /**
                     * 合同类型，如：1. “劳务”；2. “销售”；3. “租赁”；4. “其他”，最大长度200个字符
                     */
                    std::string m_flowType;
                    bool m_flowTypeHasBeenSet;

                    /**
                     * 合同描述，最大长度1000个字符
                     */
                    std::string m_flowDescription;
                    bool m_flowDescriptionHasBeenSet;

                    /**
                     *  第三方应用平台的业务信息，最大长度1000个字符。
                     */
                    std::string m_customerData;
                    bool m_customerDataHasBeenSet;

                    /**
                     * 合同显示的页卡模板，说明：只支持{合同名称}, {发起方企业}, {发起方姓名}, {签署方N企业}, {签署方N姓名}，且N不能超过签署人的数量，N从1开始
                     */
                    std::string m_customShowMap;
                    bool m_customShowMapHasBeenSet;

                    /**
                     * 被抄送人的信息列表，抄送功能暂不开放
                     */
                    std::vector<CcInfo> m_ccInfos;
                    bool m_ccInfosHasBeenSet;

                    /**
                     * 发起方企业的签署人进行签署操作是否需要企业内部审批。
若设置为true,审核结果需通过接口 ChannelCreateFlowSignReview 通知电子签，审核通过后，发起方企业签署人方可进行签署操作，否则会阻塞其签署操作。

注：企业可以通过此功能与企业内部的审批流程进行关联，支持手动、静默签署合同。
                     */
                    bool m_needSignReview;
                    bool m_needSignReviewHasBeenSet;

                    /**
                     * 给关注人发送短信通知的类型，0-合同发起时通知 1-签署完成后通知
                     */
                    int64_t m_ccNotifyType;
                    bool m_ccNotifyTypeHasBeenSet;

                    /**
                     * 个人自动签场景。发起自动签署时，需设置对应自动签署场景，目前仅支持场景：处方单-E_PRESCRIPTION_AUTO_SIGN
                     */
                    std::string m_autoSignScene;
                    bool m_autoSignSceneHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20210526_MODEL_FLOWINFO_H_
