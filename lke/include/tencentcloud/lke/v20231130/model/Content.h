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
                     * 获取消息内容类型
text：文本
image：图片
file：文件
option_cards：选项卡
custom_params：用户自定义业务参数
sandbox：云桌面
custom_variables：自定义输入参数
web_search: 网页搜索内容
file_collection：文件收集信息
widget：widget信息
widget_action：用户端widget动作信息
                     * @return Type 消息内容类型
text：文本
image：图片
file：文件
option_cards：选项卡
custom_params：用户自定义业务参数
sandbox：云桌面
custom_variables：自定义输入参数
web_search: 网页搜索内容
file_collection：文件收集信息
widget：widget信息
widget_action：用户端widget动作信息
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置消息内容类型
text：文本
image：图片
file：文件
option_cards：选项卡
custom_params：用户自定义业务参数
sandbox：云桌面
custom_variables：自定义输入参数
web_search: 网页搜索内容
file_collection：文件收集信息
widget：widget信息
widget_action：用户端widget动作信息
                     * @param _type 消息内容类型
text：文本
image：图片
file：文件
option_cards：选项卡
custom_params：用户自定义业务参数
sandbox：云桌面
custom_variables：自定义输入参数
web_search: 网页搜索内容
file_collection：文件收集信息
widget：widget信息
widget_action：用户端widget动作信息
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
                     * 获取文本内容
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Text 文本内容
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetText() const;

                    /**
                     * 设置文本内容
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _text 文本内容
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
                     * 获取引用信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return QuoteInfos 引用信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<QuoteInfo> GetQuoteInfos() const;

                    /**
                     * 设置引用信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _quoteInfos 引用信息
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
                     * 获取参考文献信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return References 参考文献信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<ContentReference> GetReferences() const;

                    /**
                     * 设置参考文献信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _references 参考文献信息
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
                     * 获取图片信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Image 图片信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ImageInfoContent GetImage() const;

                    /**
                     * 设置图片信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _image 图片信息
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
                     * 获取文件信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return File 文件信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    FileInfoContent GetFile() const;

                    /**
                     * 设置文件信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _file 文件信息
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
                     * 获取选项卡信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OptionCards 选项卡信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetOptionCards() const;

                    /**
                     * 设置选项卡信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _optionCards 选项卡信息
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
                     * 获取用户自定义业务参数信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CustomParams 用户自定义业务参数信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetCustomParams() const;

                    /**
                     * 设置用户自定义业务参数信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _customParams 用户自定义业务参数信息
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
                     * 获取自定义变量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CustomVariables 自定义变量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetCustomVariables() const;

                    /**
                     * 设置自定义变量
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _customVariables 自定义变量
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
                     * 获取沙盒信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Sandbox 沙盒信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    SandboxContent GetSandbox() const;

                    /**
                     * 设置沙盒信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sandbox 沙盒信息
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
                     * 获取网页搜索内容
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WebSearch 网页搜索内容
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    WebSearchContent GetWebSearch() const;

                    /**
                     * 设置网页搜索内容
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _webSearch 网页搜索内容
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
                     * 获取文件收集信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FileCollection 文件收集信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    FileCollection GetFileCollection() const;

                    /**
                     * 设置文件收集信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _fileCollection 文件收集信息
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
                     * 获取Widget信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Widget Widget信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    Widget GetWidget() const;

                    /**
                     * 设置Widget信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _widget Widget信息
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
                     * 获取Widget动作信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WidgetAction Widget动作信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    WidgetAction GetWidgetAction() const;

                    /**
                     * 设置Widget动作信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _widgetAction Widget动作信息
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

                private:

                    /**
                     * 消息内容类型
text：文本
image：图片
file：文件
option_cards：选项卡
custom_params：用户自定义业务参数
sandbox：云桌面
custom_variables：自定义输入参数
web_search: 网页搜索内容
file_collection：文件收集信息
widget：widget信息
widget_action：用户端widget动作信息
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 文本内容
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_text;
                    bool m_textHasBeenSet;

                    /**
                     * 引用信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<QuoteInfo> m_quoteInfos;
                    bool m_quoteInfosHasBeenSet;

                    /**
                     * 参考文献信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ContentReference> m_references;
                    bool m_referencesHasBeenSet;

                    /**
                     * 图片信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ImageInfoContent m_image;
                    bool m_imageHasBeenSet;

                    /**
                     * 文件信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    FileInfoContent m_file;
                    bool m_fileHasBeenSet;

                    /**
                     * 选项卡信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_optionCards;
                    bool m_optionCardsHasBeenSet;

                    /**
                     * 用户自定义业务参数信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_customParams;
                    bool m_customParamsHasBeenSet;

                    /**
                     * 自定义变量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_customVariables;
                    bool m_customVariablesHasBeenSet;

                    /**
                     * 沙盒信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    SandboxContent m_sandbox;
                    bool m_sandboxHasBeenSet;

                    /**
                     * 网页搜索内容
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    WebSearchContent m_webSearch;
                    bool m_webSearchHasBeenSet;

                    /**
                     * 文件收集信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    FileCollection m_fileCollection;
                    bool m_fileCollectionHasBeenSet;

                    /**
                     * Widget信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Widget m_widget;
                    bool m_widgetHasBeenSet;

                    /**
                     * Widget动作信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    WidgetAction m_widgetAction;
                    bool m_widgetActionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_CONTENT_H_
