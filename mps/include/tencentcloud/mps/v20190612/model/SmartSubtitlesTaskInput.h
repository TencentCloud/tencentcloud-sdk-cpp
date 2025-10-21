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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_SMARTSUBTITLESTASKINPUT_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_SMARTSUBTITLESTASKINPUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/RawSmartSubtitleParameter.h>
#include <tencentcloud/mps/v20190612/model/TaskOutputStorage.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * 智能字幕输入结构体
                */
                class SmartSubtitlesTaskInput : public AbstractModel
                {
                public:
                    SmartSubtitlesTaskInput();
                    ~SmartSubtitlesTaskInput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取智能字幕模板 ID 。	
                     * @return Definition 智能字幕模板 ID 。	
                     * 
                     */
                    uint64_t GetDefinition() const;

                    /**
                     * 设置智能字幕模板 ID 。	
                     * @param _definition 智能字幕模板 ID 。	
                     * 
                     */
                    void SetDefinition(const uint64_t& _definition);

                    /**
                     * 判断参数 Definition 是否已赋值
                     * @return Definition 是否已赋值
                     * 
                     */
                    bool DefinitionHasBeenSet() const;

                    /**
                     * 获取用户扩展字段，一般场景不用填。
                     * @return UserExtPara 用户扩展字段，一般场景不用填。
                     * 
                     */
                    std::string GetUserExtPara() const;

                    /**
                     * 设置用户扩展字段，一般场景不用填。
                     * @param _userExtPara 用户扩展字段，一般场景不用填。
                     * 
                     */
                    void SetUserExtPara(const std::string& _userExtPara);

                    /**
                     * 判断参数 UserExtPara 是否已赋值
                     * @return UserExtPara 是否已赋值
                     * 
                     */
                    bool UserExtParaHasBeenSet() const;

                    /**
                     * 获取智能字幕自定义参数，当 Definition 填 0 时有效。 该参数用于高度定制场景，建议您优先使用 Definition 指定智能字幕参数。	
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RawParameter 智能字幕自定义参数，当 Definition 填 0 时有效。 该参数用于高度定制场景，建议您优先使用 Definition 指定智能字幕参数。	
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    RawSmartSubtitleParameter GetRawParameter() const;

                    /**
                     * 设置智能字幕自定义参数，当 Definition 填 0 时有效。 该参数用于高度定制场景，建议您优先使用 Definition 指定智能字幕参数。	
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _rawParameter 智能字幕自定义参数，当 Definition 填 0 时有效。 该参数用于高度定制场景，建议您优先使用 Definition 指定智能字幕参数。	
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRawParameter(const RawSmartSubtitleParameter& _rawParameter);

                    /**
                     * 判断参数 RawParameter 是否已赋值
                     * @return RawParameter 是否已赋值
                     * 
                     */
                    bool RawParameterHasBeenSet() const;

                    /**
                     * 获取媒体处理输出文件的目标存储。不填则继承 InputInfo 中的存储位置。 
**注意**：当InputInfo.Type为URL时，该参数是必填项。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OutputStorage 媒体处理输出文件的目标存储。不填则继承 InputInfo 中的存储位置。 
**注意**：当InputInfo.Type为URL时，该参数是必填项。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    TaskOutputStorage GetOutputStorage() const;

                    /**
                     * 设置媒体处理输出文件的目标存储。不填则继承 InputInfo 中的存储位置。 
**注意**：当InputInfo.Type为URL时，该参数是必填项。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _outputStorage 媒体处理输出文件的目标存储。不填则继承 InputInfo 中的存储位置。 
**注意**：当InputInfo.Type为URL时，该参数是必填项。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOutputStorage(const TaskOutputStorage& _outputStorage);

                    /**
                     * 判断参数 OutputStorage 是否已赋值
                     * @return OutputStorage 是否已赋值
                     * 
                     */
                    bool OutputStorageHasBeenSet() const;

                    /**
                     * 获取生成字幕文件的输出路径，可以为相对路径或者绝对路径。
若需定义输出路径，路径需以`.{format}`结尾。变量名请参考 [文件名变量说明](https://cloud.tencent.com/document/product/862/37039)。

相对路径示例:
- 文件名_{变量名}.{format}
- 文件名.{format}

绝对路径示例：
- /自定义路径/文件名_{变量名}.{format}

如果不填，则默认为相对路径: `{inputName}_smartsubtitle_{definition}.{format}`。
                     * @return OutputObjectPath 生成字幕文件的输出路径，可以为相对路径或者绝对路径。
若需定义输出路径，路径需以`.{format}`结尾。变量名请参考 [文件名变量说明](https://cloud.tencent.com/document/product/862/37039)。

相对路径示例:
- 文件名_{变量名}.{format}
- 文件名.{format}

绝对路径示例：
- /自定义路径/文件名_{变量名}.{format}

如果不填，则默认为相对路径: `{inputName}_smartsubtitle_{definition}.{format}`。
                     * 
                     */
                    std::string GetOutputObjectPath() const;

                    /**
                     * 设置生成字幕文件的输出路径，可以为相对路径或者绝对路径。
若需定义输出路径，路径需以`.{format}`结尾。变量名请参考 [文件名变量说明](https://cloud.tencent.com/document/product/862/37039)。

相对路径示例:
- 文件名_{变量名}.{format}
- 文件名.{format}

绝对路径示例：
- /自定义路径/文件名_{变量名}.{format}

如果不填，则默认为相对路径: `{inputName}_smartsubtitle_{definition}.{format}`。
                     * @param _outputObjectPath 生成字幕文件的输出路径，可以为相对路径或者绝对路径。
若需定义输出路径，路径需以`.{format}`结尾。变量名请参考 [文件名变量说明](https://cloud.tencent.com/document/product/862/37039)。

相对路径示例:
- 文件名_{变量名}.{format}
- 文件名.{format}

绝对路径示例：
- /自定义路径/文件名_{变量名}.{format}

如果不填，则默认为相对路径: `{inputName}_smartsubtitle_{definition}.{format}`。
                     * 
                     */
                    void SetOutputObjectPath(const std::string& _outputObjectPath);

                    /**
                     * 判断参数 OutputObjectPath 是否已赋值
                     * @return OutputObjectPath 是否已赋值
                     * 
                     */
                    bool OutputObjectPathHasBeenSet() const;

                private:

                    /**
                     * 智能字幕模板 ID 。	
                     */
                    uint64_t m_definition;
                    bool m_definitionHasBeenSet;

                    /**
                     * 用户扩展字段，一般场景不用填。
                     */
                    std::string m_userExtPara;
                    bool m_userExtParaHasBeenSet;

                    /**
                     * 智能字幕自定义参数，当 Definition 填 0 时有效。 该参数用于高度定制场景，建议您优先使用 Definition 指定智能字幕参数。	
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    RawSmartSubtitleParameter m_rawParameter;
                    bool m_rawParameterHasBeenSet;

                    /**
                     * 媒体处理输出文件的目标存储。不填则继承 InputInfo 中的存储位置。 
**注意**：当InputInfo.Type为URL时，该参数是必填项。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    TaskOutputStorage m_outputStorage;
                    bool m_outputStorageHasBeenSet;

                    /**
                     * 生成字幕文件的输出路径，可以为相对路径或者绝对路径。
若需定义输出路径，路径需以`.{format}`结尾。变量名请参考 [文件名变量说明](https://cloud.tencent.com/document/product/862/37039)。

相对路径示例:
- 文件名_{变量名}.{format}
- 文件名.{format}

绝对路径示例：
- /自定义路径/文件名_{变量名}.{format}

如果不填，则默认为相对路径: `{inputName}_smartsubtitle_{definition}.{format}`。
                     */
                    std::string m_outputObjectPath;
                    bool m_outputObjectPathHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_SMARTSUBTITLESTASKINPUT_H_
