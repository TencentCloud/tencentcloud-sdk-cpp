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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_CONVERSATIONCONTENT_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_CONVERSATIONCONTENT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/ConversationQuoteInfo.h>
#include <tencentcloud/adp/v20260520/model/ConversationReference.h>
#include <tencentcloud/adp/v20260520/model/ConversationAgentTask.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * Content 消息内容信息
                */
                class ConversationContent : public AbstractModel
                {
                public:
                    ConversationContent();
                    ~ConversationContent() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>文本内容</p>
                     * @return Text <p>文本内容</p>
                     * 
                     */
                    std::string GetText() const;

                    /**
                     * 设置<p>文本内容</p>
                     * @param _text <p>文本内容</p>
                     * 
                     */
                    void SetText(const std::string& _text);

                    /**
                     * 判断参数 Text 是否已赋值
                     * @return Text 是否已赋值
                     * 
                     */
                    bool TextHasBeenSet() const;

                    /**
                     * 获取<p>内容类型, text：文本,image：图片,file：文件,custom_variables：自定义输入参数信息,widget_action：widget动作信息</p>
                     * @return Type <p>内容类型, text：文本,image：图片,file：文件,custom_variables：自定义输入参数信息,widget_action：widget动作信息</p>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>内容类型, text：文本,image：图片,file：文件,custom_variables：自定义输入参数信息,widget_action：widget动作信息</p>
                     * @param _type <p>内容类型, text：文本,image：图片,file：文件,custom_variables：自定义输入参数信息,widget_action：widget动作信息</p>
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取<p>自定义参数数据</p>
                     * @return CustomParamList <p>自定义参数数据</p>
                     * 
                     */
                    std::vector<std::string> GetCustomParamList() const;

                    /**
                     * 设置<p>自定义参数数据</p>
                     * @param _customParamList <p>自定义参数数据</p>
                     * 
                     */
                    void SetCustomParamList(const std::vector<std::string>& _customParamList);

                    /**
                     * 判断参数 CustomParamList 是否已赋值
                     * @return CustomParamList 是否已赋值
                     * 
                     */
                    bool CustomParamListHasBeenSet() const;

                    /**
                     * 获取<p>自定义参数数据</p>
                     * @return CustomParams <p>自定义参数数据</p>
                     * 
                     */
                    std::vector<std::string> GetCustomParams() const;

                    /**
                     * 设置<p>自定义参数数据</p>
                     * @param _customParams <p>自定义参数数据</p>
                     * 
                     */
                    void SetCustomParams(const std::vector<std::string>& _customParams);

                    /**
                     * 判断参数 CustomParams 是否已赋值
                     * @return CustomParams 是否已赋值
                     * 
                     */
                    bool CustomParamsHasBeenSet() const;

                    /**
                     * 获取<p>自定义变量数据</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CustomVariablesData <p>自定义变量数据</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCustomVariablesData() const;

                    /**
                     * 设置<p>自定义变量数据</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _customVariablesData <p>自定义变量数据</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCustomVariablesData(const std::string& _customVariablesData);

                    /**
                     * 判断参数 CustomVariablesData 是否已赋值
                     * @return CustomVariablesData 是否已赋值
                     * 
                     */
                    bool CustomVariablesDataHasBeenSet() const;

                    /**
                     * 获取<p>企业表单</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EnterpriseCharts <p>企业表单</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEnterpriseCharts() const;

                    /**
                     * 设置<p>企业表单</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _enterpriseCharts <p>企业表单</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEnterpriseCharts(const std::string& _enterpriseCharts);

                    /**
                     * 判断参数 EnterpriseCharts 是否已赋值
                     * @return EnterpriseCharts 是否已赋值
                     * 
                     */
                    bool EnterpriseChartsHasBeenSet() const;

                    /**
                     * 获取<p>选项卡列表</p>
                     * @return OptionCardList <p>选项卡列表</p>
                     * 
                     */
                    std::vector<std::string> GetOptionCardList() const;

                    /**
                     * 设置<p>选项卡列表</p>
                     * @param _optionCardList <p>选项卡列表</p>
                     * 
                     */
                    void SetOptionCardList(const std::vector<std::string>& _optionCardList);

                    /**
                     * 判断参数 OptionCardList 是否已赋值
                     * @return OptionCardList 是否已赋值
                     * 
                     */
                    bool OptionCardListHasBeenSet() const;

                    /**
                     * 获取<p>选项卡列表</p>
                     * @return OptionCards <p>选项卡列表</p>
                     * 
                     */
                    std::vector<std::string> GetOptionCards() const;

                    /**
                     * 设置<p>选项卡列表</p>
                     * @param _optionCards <p>选项卡列表</p>
                     * 
                     */
                    void SetOptionCards(const std::vector<std::string>& _optionCards);

                    /**
                     * 判断参数 OptionCards 是否已赋值
                     * @return OptionCards 是否已赋值
                     * 
                     */
                    bool OptionCardsHasBeenSet() const;

                    /**
                     * 获取<p>选项卡模式 枚举值: 0-OPTION_MODE_SINGLE(单选), 1-OPTION_MODE_MULTI(多选)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OptionMode <p>选项卡模式 枚举值: 0-OPTION_MODE_SINGLE(单选), 1-OPTION_MODE_MULTI(多选)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetOptionMode() const;

                    /**
                     * 设置<p>选项卡模式 枚举值: 0-OPTION_MODE_SINGLE(单选), 1-OPTION_MODE_MULTI(多选)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _optionMode <p>选项卡模式 枚举值: 0-OPTION_MODE_SINGLE(单选), 1-OPTION_MODE_MULTI(多选)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOptionMode(const int64_t& _optionMode);

                    /**
                     * 判断参数 OptionMode 是否已赋值
                     * @return OptionMode 是否已赋值
                     * 
                     */
                    bool OptionModeHasBeenSet() const;

                    /**
                     * 获取<p>引用角标信息列表</p>
                     * @return QuoteInfoList <p>引用角标信息列表</p>
                     * 
                     */
                    std::vector<ConversationQuoteInfo> GetQuoteInfoList() const;

                    /**
                     * 设置<p>引用角标信息列表</p>
                     * @param _quoteInfoList <p>引用角标信息列表</p>
                     * 
                     */
                    void SetQuoteInfoList(const std::vector<ConversationQuoteInfo>& _quoteInfoList);

                    /**
                     * 判断参数 QuoteInfoList 是否已赋值
                     * @return QuoteInfoList 是否已赋值
                     * 
                     */
                    bool QuoteInfoListHasBeenSet() const;

                    /**
                     * 获取<p>引用角标信息列表</p>
                     * @return QuoteInfos <p>引用角标信息列表</p>
                     * 
                     */
                    std::vector<ConversationQuoteInfo> GetQuoteInfos() const;

                    /**
                     * 设置<p>引用角标信息列表</p>
                     * @param _quoteInfos <p>引用角标信息列表</p>
                     * 
                     */
                    void SetQuoteInfos(const std::vector<ConversationQuoteInfo>& _quoteInfos);

                    /**
                     * 判断参数 QuoteInfos 是否已赋值
                     * @return QuoteInfos 是否已赋值
                     * 
                     */
                    bool QuoteInfosHasBeenSet() const;

                    /**
                     * 获取<p>参考来源列表</p>
                     * @return ReferenceList <p>参考来源列表</p>
                     * 
                     */
                    std::vector<ConversationReference> GetReferenceList() const;

                    /**
                     * 设置<p>参考来源列表</p>
                     * @param _referenceList <p>参考来源列表</p>
                     * 
                     */
                    void SetReferenceList(const std::vector<ConversationReference>& _referenceList);

                    /**
                     * 判断参数 ReferenceList 是否已赋值
                     * @return ReferenceList 是否已赋值
                     * 
                     */
                    bool ReferenceListHasBeenSet() const;

                    /**
                     * 获取<p>参考来源列表</p>
                     * @return References <p>参考来源列表</p>
                     * 
                     */
                    std::vector<ConversationReference> GetReferences() const;

                    /**
                     * 设置<p>参考来源列表</p>
                     * @param _references <p>参考来源列表</p>
                     * 
                     */
                    void SetReferences(const std::vector<ConversationReference>& _references);

                    /**
                     * 判断参数 References 是否已赋值
                     * @return References 是否已赋值
                     * 
                     */
                    bool ReferencesHasBeenSet() const;

                    /**
                     * 获取<p>关联记录 ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RelatedRecordId <p>关联记录 ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRelatedRecordId() const;

                    /**
                     * 设置<p>关联记录 ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _relatedRecordId <p>关联记录 ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRelatedRecordId(const std::string& _relatedRecordId);

                    /**
                     * 判断参数 RelatedRecordId 是否已赋值
                     * @return RelatedRecordId 是否已赋值
                     * 
                     */
                    bool RelatedRecordIdHasBeenSet() const;

                    /**
                     * 获取<p>智能体任务列表</p>
                     * @return TaskList <p>智能体任务列表</p>
                     * 
                     */
                    std::vector<ConversationAgentTask> GetTaskList() const;

                    /**
                     * 设置<p>智能体任务列表</p>
                     * @param _taskList <p>智能体任务列表</p>
                     * 
                     */
                    void SetTaskList(const std::vector<ConversationAgentTask>& _taskList);

                    /**
                     * 判断参数 TaskList 是否已赋值
                     * @return TaskList 是否已赋值
                     * 
                     */
                    bool TaskListHasBeenSet() const;

                    /**
                     * 获取<p>智能体任务列表</p>
                     * @return Tasks <p>智能体任务列表</p>
                     * 
                     */
                    std::vector<ConversationAgentTask> GetTasks() const;

                    /**
                     * 设置<p>智能体任务列表</p>
                     * @param _tasks <p>智能体任务列表</p>
                     * 
                     */
                    void SetTasks(const std::vector<ConversationAgentTask>& _tasks);

                    /**
                     * 判断参数 Tasks 是否已赋值
                     * @return Tasks 是否已赋值
                     * 
                     */
                    bool TasksHasBeenSet() const;

                    /**
                     * 获取<p>工作流输入参数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WorkflowInput <p>工作流输入参数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetWorkflowInput() const;

                    /**
                     * 设置<p>工作流输入参数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _workflowInput <p>工作流输入参数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetWorkflowInput(const std::string& _workflowInput);

                    /**
                     * 判断参数 WorkflowInput 是否已赋值
                     * @return WorkflowInput 是否已赋值
                     * 
                     */
                    bool WorkflowInputHasBeenSet() const;

                private:

                    /**
                     * <p>文本内容</p>
                     */
                    std::string m_text;
                    bool m_textHasBeenSet;

                    /**
                     * <p>内容类型, text：文本,image：图片,file：文件,custom_variables：自定义输入参数信息,widget_action：widget动作信息</p>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>自定义参数数据</p>
                     */
                    std::vector<std::string> m_customParamList;
                    bool m_customParamListHasBeenSet;

                    /**
                     * <p>自定义参数数据</p>
                     */
                    std::vector<std::string> m_customParams;
                    bool m_customParamsHasBeenSet;

                    /**
                     * <p>自定义变量数据</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_customVariablesData;
                    bool m_customVariablesDataHasBeenSet;

                    /**
                     * <p>企业表单</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_enterpriseCharts;
                    bool m_enterpriseChartsHasBeenSet;

                    /**
                     * <p>选项卡列表</p>
                     */
                    std::vector<std::string> m_optionCardList;
                    bool m_optionCardListHasBeenSet;

                    /**
                     * <p>选项卡列表</p>
                     */
                    std::vector<std::string> m_optionCards;
                    bool m_optionCardsHasBeenSet;

                    /**
                     * <p>选项卡模式 枚举值: 0-OPTION_MODE_SINGLE(单选), 1-OPTION_MODE_MULTI(多选)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_optionMode;
                    bool m_optionModeHasBeenSet;

                    /**
                     * <p>引用角标信息列表</p>
                     */
                    std::vector<ConversationQuoteInfo> m_quoteInfoList;
                    bool m_quoteInfoListHasBeenSet;

                    /**
                     * <p>引用角标信息列表</p>
                     */
                    std::vector<ConversationQuoteInfo> m_quoteInfos;
                    bool m_quoteInfosHasBeenSet;

                    /**
                     * <p>参考来源列表</p>
                     */
                    std::vector<ConversationReference> m_referenceList;
                    bool m_referenceListHasBeenSet;

                    /**
                     * <p>参考来源列表</p>
                     */
                    std::vector<ConversationReference> m_references;
                    bool m_referencesHasBeenSet;

                    /**
                     * <p>关联记录 ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_relatedRecordId;
                    bool m_relatedRecordIdHasBeenSet;

                    /**
                     * <p>智能体任务列表</p>
                     */
                    std::vector<ConversationAgentTask> m_taskList;
                    bool m_taskListHasBeenSet;

                    /**
                     * <p>智能体任务列表</p>
                     */
                    std::vector<ConversationAgentTask> m_tasks;
                    bool m_tasksHasBeenSet;

                    /**
                     * <p>工作流输入参数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_workflowInput;
                    bool m_workflowInputHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_CONVERSATIONCONTENT_H_
