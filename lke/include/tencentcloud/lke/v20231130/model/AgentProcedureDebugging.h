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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_AGENTPROCEDUREDEBUGGING_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_AGENTPROCEDUREDEBUGGING_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lke/v20231130/model/QuoteInfo.h>
#include <tencentcloud/lke/v20231130/model/AgentReference.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * Agent思考过程调试信息
                */
                class AgentProcedureDebugging : public AbstractModel
                {
                public:
                    AgentProcedureDebugging();
                    ~AgentProcedureDebugging() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取模型思考内容
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Content 模型思考内容
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetContent() const;

                    /**
                     * 设置模型思考内容
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _content 模型思考内容
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetContent(const std::string& _content);

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     * 
                     */
                    bool ContentHasBeenSet() const;

                    /**
                     * 获取展示的具体文本内容
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DisplayContent 展示的具体文本内容
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDisplayContent() const;

                    /**
                     * 设置展示的具体文本内容
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _displayContent 展示的具体文本内容
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDisplayContent(const std::string& _displayContent);

                    /**
                     * 判断参数 DisplayContent 是否已赋值
                     * @return DisplayContent 是否已赋值
                     * 
                     */
                    bool DisplayContentHasBeenSet() const;

                    /**
                     * 获取展示类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DisplayType 展示类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetDisplayType() const;

                    /**
                     * 设置展示类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _displayType 展示类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDisplayType(const uint64_t& _displayType);

                    /**
                     * 判断参数 DisplayType 是否已赋值
                     * @return DisplayType 是否已赋值
                     * 
                     */
                    bool DisplayTypeHasBeenSet() const;

                    /**
                     * 获取搜索引擎展示的索引
注意：此字段可能返回 null，表示取不到有效值。
                     * @return QuoteInfos 搜索引擎展示的索引
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<QuoteInfo> GetQuoteInfos() const;

                    /**
                     * 设置搜索引擎展示的索引
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _quoteInfos 搜索引擎展示的索引
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
                     * 获取具体的参考来源
注意：此字段可能返回 null，表示取不到有效值。
                     * @return References 具体的参考来源
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<AgentReference> GetReferences() const;

                    /**
                     * 设置具体的参考来源
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _references 具体的参考来源
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetReferences(const std::vector<AgentReference>& _references);

                    /**
                     * 判断参数 References 是否已赋值
                     * @return References 是否已赋值
                     * 
                     */
                    bool ReferencesHasBeenSet() const;

                    /**
                     * 获取展示正在执行的状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DisplayStatus 展示正在执行的状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDisplayStatus() const;

                    /**
                     * 设置展示正在执行的状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _displayStatus 展示正在执行的状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDisplayStatus(const std::string& _displayStatus);

                    /**
                     * 判断参数 DisplayStatus 是否已赋值
                     * @return DisplayStatus 是否已赋值
                     * 
                     */
                    bool DisplayStatusHasBeenSet() const;

                    /**
                     * 获取云桌面的URL地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SandboxUrl 云桌面的URL地址
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSandboxUrl() const;

                    /**
                     * 设置云桌面的URL地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sandboxUrl 云桌面的URL地址
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSandboxUrl(const std::string& _sandboxUrl);

                    /**
                     * 判断参数 SandboxUrl 是否已赋值
                     * @return SandboxUrl 是否已赋值
                     * 
                     */
                    bool SandboxUrlHasBeenSet() const;

                    /**
                     * 获取云桌面里面通过浏览器打开的URL地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DisplayUrl 云桌面里面通过浏览器打开的URL地址
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDisplayUrl() const;

                    /**
                     * 设置云桌面里面通过浏览器打开的URL地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _displayUrl 云桌面里面通过浏览器打开的URL地址
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDisplayUrl(const std::string& _displayUrl);

                    /**
                     * 判断参数 DisplayUrl 是否已赋值
                     * @return DisplayUrl 是否已赋值
                     * 
                     */
                    bool DisplayUrlHasBeenSet() const;

                private:

                    /**
                     * 模型思考内容
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * 展示的具体文本内容
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_displayContent;
                    bool m_displayContentHasBeenSet;

                    /**
                     * 展示类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_displayType;
                    bool m_displayTypeHasBeenSet;

                    /**
                     * 搜索引擎展示的索引
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<QuoteInfo> m_quoteInfos;
                    bool m_quoteInfosHasBeenSet;

                    /**
                     * 具体的参考来源
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<AgentReference> m_references;
                    bool m_referencesHasBeenSet;

                    /**
                     * 展示正在执行的状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_displayStatus;
                    bool m_displayStatusHasBeenSet;

                    /**
                     * 云桌面的URL地址
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_sandboxUrl;
                    bool m_sandboxUrlHasBeenSet;

                    /**
                     * 云桌面里面通过浏览器打开的URL地址
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_displayUrl;
                    bool m_displayUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_AGENTPROCEDUREDEBUGGING_H_
