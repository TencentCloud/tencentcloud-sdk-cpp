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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_REPLYCONTENT_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_REPLYCONTENT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/ConversationFileCollection.h>
#include <tencentcloud/adp/v20260520/model/ConversationWidget.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * 回复内容的详情
                */
                class ReplyContent : public AbstractModel
                {
                public:
                    ReplyContent();
                    ~ReplyContent() = default;
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
                     * 获取<p>选项卡信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OptionCardList <p>选项卡信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetOptionCardList() const;

                    /**
                     * 设置<p>选项卡信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _optionCardList <p>选项卡信息</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>文件收集信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FileCollection <p>文件收集信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ConversationFileCollection GetFileCollection() const;

                    /**
                     * 设置<p>文件收集信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _fileCollection <p>文件收集信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFileCollection(const ConversationFileCollection& _fileCollection);

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
                    ConversationWidget GetWidget() const;

                    /**
                     * 设置<p>Widget信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _widget <p>Widget信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetWidget(const ConversationWidget& _widget);

                    /**
                     * 判断参数 Widget 是否已赋值
                     * @return Widget 是否已赋值
                     * 
                     */
                    bool WidgetHasBeenSet() const;

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
                     * <p>选项卡信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_optionCardList;
                    bool m_optionCardListHasBeenSet;

                    /**
                     * <p>文件收集信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ConversationFileCollection m_fileCollection;
                    bool m_fileCollectionHasBeenSet;

                    /**
                     * <p>Widget信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ConversationWidget m_widget;
                    bool m_widgetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_REPLYCONTENT_H_
