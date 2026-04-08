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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_CONTENT_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_CONTENT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lke/v20231130/model/QuoteInfo.h>
#include <tencentcloud/lke/v20231130/model/ContentReference.h>
#include <tencentcloud/lke/v20231130/model/ImageInfoContent.h>
#include <tencentcloud/lke/v20231130/model/FileInfoContent.h>
#include <tencentcloud/lke/v20231130/model/SandboxContent.h>
#include <tencentcloud/lke/v20231130/model/WebSearchContent.h>
#include <tencentcloud/lke/v20231130/model/FileCollection.h>
#include <tencentcloud/lke/v20231130/model/Widget.h>
#include <tencentcloud/lke/v20231130/model/WidgetAction.h>
#include <tencentcloud/lke/v20231130/model/AgentTask.h>
#include <tencentcloud/lke/v20231130/model/Questionnaire.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * 对话记录内容详情
                */
                class Content : public AbstractModel
                {
                public:
                    Content();
                    ~Content() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>消息内容类型<br>text：文本<br>image：图片<br>file：文件<br>option_cards：选项卡<br>custom_params：用户自定义业务参数<br>sandbox：云桌面<br>custom_variables：自定义输入参数<br>web_search: 网页搜索内容<br>file_collection：文件收集信息<br>widget：widget信息<br>widget_action：用户端widget动作信息</p>
                     * @return Type <p>消息内容类型<br>text：文本<br>image：图片<br>file：文件<br>option_cards：选项卡<br>custom_params：用户自定义业务参数<br>sandbox：云桌面<br>custom_variables：自定义输入参数<br>web_search: 网页搜索内容<br>file_collection：文件收集信息<br>widget：widget信息<br>widget_action：用户端widget动作信息</p>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>消息内容类型<br>text：文本<br>image：图片<br>file：文件<br>option_cards：选项卡<br>custom_params：用户自定义业务参数<br>sandbox：云桌面<br>custom_variables：自定义输入参数<br>web_search: 网页搜索内容<br>file_collection：文件收集信息<br>widget：widget信息<br>widget_action：用户端widget动作信息</p>
                     * @param _type <p>消息内容类型<br>text：文本<br>image：图片<br>file：文件<br>option_cards：选项卡<br>custom_params：用户自定义业务参数<br>sandbox：云桌面<br>custom_variables：自定义输入参数<br>web_search: 网页搜索内容<br>file_collection：文件收集信息<br>widget：widget信息<br>widget_action：用户端widget动作信息</p>
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
                     * 获取<p>文本内容</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Text <p>文本内容</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetText() const;

                    /**
                     * 设置<p>文本内容</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _text <p>文本内容</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>引用信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return QuoteInfos <p>引用信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<QuoteInfo> GetQuoteInfos() const;

                    /**
                     * 设置<p>引用信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _quoteInfos <p>引用信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetQuoteInfos(const std::vector<QuoteInfo>& _quoteInfos);

                    /**
                     * 判断参数 QuoteInfos 是否已赋值
                     * @return QuoteInfos 是否已赋值
                     * 
                     */
                    bool QuoteInfosHasBeenSet() const;

                    /**
                     * 获取<p>参考文献信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return References <p>参考文献信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<ContentReference> GetReferences() const;

                    /**
                     * 设置<p>参考文献信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _references <p>参考文献信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetReferences(const std::vector<ContentReference>& _references);

                    /**
                     * 判断参数 References 是否已赋值
                     * @return References 是否已赋值
                     * 
                     */
                    bool ReferencesHasBeenSet() const;

                    /**
                     * 获取<p>图片信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Image <p>图片信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ImageInfoContent GetImage() const;

                    /**
                     * 设置<p>图片信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _image <p>图片信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetImage(const ImageInfoContent& _image);

                    /**
                     * 判断参数 Image 是否已赋值
                     * @return Image 是否已赋值
                     * 
                     */
                    bool ImageHasBeenSet() const;

                    /**
                     * 获取<p>文件信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return File <p>文件信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    FileInfoContent GetFile() const;

                    /**
                     * 设置<p>文件信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _file <p>文件信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFile(const FileInfoContent& _file);

                    /**
                     * 判断参数 File 是否已赋值
                     * @return File 是否已赋值
                     * 
                     */
                    bool FileHasBeenSet() const;

                    /**
                     * 获取<p>选项卡信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OptionCards <p>选项卡信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetOptionCards() const;

                    /**
                     * 设置<p>选项卡信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _optionCards <p>选项卡信息</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>用户自定义业务参数信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CustomParams <p>用户自定义业务参数信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetCustomParams() const;

                    /**
                     * 设置<p>用户自定义业务参数信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _customParams <p>用户自定义业务参数信息</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>自定义变量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CustomVariables <p>自定义变量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetCustomVariables() const;

                    /**
                     * 设置<p>自定义变量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _customVariables <p>自定义变量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCustomVariables(const std::vector<std::string>& _customVariables);

                    /**
                     * 判断参数 CustomVariables 是否已赋值
                     * @return CustomVariables 是否已赋值
                     * 
                     */
                    bool CustomVariablesHasBeenSet() const;

                    /**
                     * 获取<p>沙盒信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Sandbox <p>沙盒信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    SandboxContent GetSandbox() const;

                    /**
                     * 设置<p>沙盒信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sandbox <p>沙盒信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSandbox(const SandboxContent& _sandbox);

                    /**
                     * 判断参数 Sandbox 是否已赋值
                     * @return Sandbox 是否已赋值
                     * 
                     */
                    bool SandboxHasBeenSet() const;

                    /**
                     * 获取<p>网页搜索内容</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WebSearch <p>网页搜索内容</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    WebSearchContent GetWebSearch() const;

                    /**
                     * 设置<p>网页搜索内容</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _webSearch <p>网页搜索内容</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetWebSearch(const WebSearchContent& _webSearch);

                    /**
                     * 判断参数 WebSearch 是否已赋值
                     * @return WebSearch 是否已赋值
                     * 
                     */
                    bool WebSearchHasBeenSet() const;

                    /**
                     * 获取<p>文件收集信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FileCollection <p>文件收集信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    FileCollection GetFileCollection() const;

                    /**
                     * 设置<p>文件收集信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _fileCollection <p>文件收集信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFileCollection(const FileCollection& _fileCollection);

                    /**
                     * 判断参数 FileCollection 是否已赋值
                     * @return FileCollection 是否已赋值
                     * 
                     */
                    bool FileCollectionHasBeenSet() const;

                    /**
                     * 获取<p>Widget信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Widget <p>Widget信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    Widget GetWidget() const;

                    /**
                     * 设置<p>Widget信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _widget <p>Widget信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetWidget(const Widget& _widget);

                    /**
                     * 判断参数 Widget 是否已赋值
                     * @return Widget 是否已赋值
                     * 
                     */
                    bool WidgetHasBeenSet() const;

                    /**
                     * 获取<p>Widget动作信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WidgetAction <p>Widget动作信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    WidgetAction GetWidgetAction() const;

                    /**
                     * 设置<p>Widget动作信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _widgetAction <p>Widget动作信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetWidgetAction(const WidgetAction& _widgetAction);

                    /**
                     * 判断参数 WidgetAction 是否已赋值
                     * @return WidgetAction 是否已赋值
                     * 
                     */
                    bool WidgetActionHasBeenSet() const;

                    /**
                     * 获取<p>任务列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Tasks <p>任务列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<AgentTask> GetTasks() const;

                    /**
                     * 设置<p>任务列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tasks <p>任务列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTasks(const std::vector<AgentTask>& _tasks);

                    /**
                     * 判断参数 Tasks 是否已赋值
                     * @return Tasks 是否已赋值
                     * 
                     */
                    bool TasksHasBeenSet() const;

                    /**
                     * 获取<p>问卷信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Questionnaire <p>问卷信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    Questionnaire GetQuestionnaire() const;

                    /**
                     * 设置<p>问卷信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _questionnaire <p>问卷信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetQuestionnaire(const Questionnaire& _questionnaire);

                    /**
                     * 判断参数 Questionnaire 是否已赋值
                     * @return Questionnaire 是否已赋值
                     * 
                     */
                    bool QuestionnaireHasBeenSet() const;

                    /**
                     * 获取<p>选项卡模式</p>
                     * @return OptionMode <p>选项卡模式</p>
                     * 
                     */
                    int64_t GetOptionMode() const;

                    /**
                     * 设置<p>选项卡模式</p>
                     * @param _optionMode <p>选项卡模式</p>
                     * 
                     */
                    void SetOptionMode(const int64_t& _optionMode);

                    /**
                     * 判断参数 OptionMode 是否已赋值
                     * @return OptionMode 是否已赋值
                     * 
                     */
                    bool OptionModeHasBeenSet() const;

                private:

                    /**
                     * <p>消息内容类型<br>text：文本<br>image：图片<br>file：文件<br>option_cards：选项卡<br>custom_params：用户自定义业务参数<br>sandbox：云桌面<br>custom_variables：自定义输入参数<br>web_search: 网页搜索内容<br>file_collection：文件收集信息<br>widget：widget信息<br>widget_action：用户端widget动作信息</p>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>文本内容</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_text;
                    bool m_textHasBeenSet;

                    /**
                     * <p>引用信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<QuoteInfo> m_quoteInfos;
                    bool m_quoteInfosHasBeenSet;

                    /**
                     * <p>参考文献信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ContentReference> m_references;
                    bool m_referencesHasBeenSet;

                    /**
                     * <p>图片信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ImageInfoContent m_image;
                    bool m_imageHasBeenSet;

                    /**
                     * <p>文件信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    FileInfoContent m_file;
                    bool m_fileHasBeenSet;

                    /**
                     * <p>选项卡信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_optionCards;
                    bool m_optionCardsHasBeenSet;

                    /**
                     * <p>用户自定义业务参数信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_customParams;
                    bool m_customParamsHasBeenSet;

                    /**
                     * <p>自定义变量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_customVariables;
                    bool m_customVariablesHasBeenSet;

                    /**
                     * <p>沙盒信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    SandboxContent m_sandbox;
                    bool m_sandboxHasBeenSet;

                    /**
                     * <p>网页搜索内容</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    WebSearchContent m_webSearch;
                    bool m_webSearchHasBeenSet;

                    /**
                     * <p>文件收集信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    FileCollection m_fileCollection;
                    bool m_fileCollectionHasBeenSet;

                    /**
                     * <p>Widget信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Widget m_widget;
                    bool m_widgetHasBeenSet;

                    /**
                     * <p>Widget动作信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    WidgetAction m_widgetAction;
                    bool m_widgetActionHasBeenSet;

                    /**
                     * <p>任务列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<AgentTask> m_tasks;
                    bool m_tasksHasBeenSet;

                    /**
                     * <p>问卷信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Questionnaire m_questionnaire;
                    bool m_questionnaireHasBeenSet;

                    /**
                     * <p>选项卡模式</p>
                     */
                    int64_t m_optionMode;
                    bool m_optionModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_CONTENT_H_
