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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_SMARTERASETASKINPUT_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_SMARTERASETASKINPUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/RawSmartEraseParameter.h>
#include <tencentcloud/mps/v20190612/model/OverrideEraseParameter.h>
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
                * 智能擦除任务
                */
                class SmartEraseTaskInput : public AbstractModel
                {
                public:
                    SmartEraseTaskInput();
                    ~SmartEraseTaskInput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取智能擦除模板id。
                     * @return Definition 智能擦除模板id。
                     * 
                     */
                    int64_t GetDefinition() const;

                    /**
                     * 设置智能擦除模板id。
                     * @param _definition 智能擦除模板id。
                     * 
                     */
                    void SetDefinition(const int64_t& _definition);

                    /**
                     * 判断参数 Definition 是否已赋值
                     * @return Definition 是否已赋值
                     * 
                     */
                    bool DefinitionHasBeenSet() const;

                    /**
                     * 获取智能擦除自定义参数，当 Definition 填 0 时有效。 该参数用于高度定制场景，建议您优先使用 Definition 指定智能擦除参数。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RawParameter 智能擦除自定义参数，当 Definition 填 0 时有效。 该参数用于高度定制场景，建议您优先使用 Definition 指定智能擦除参数。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    RawSmartEraseParameter GetRawParameter() const;

                    /**
                     * 设置智能擦除自定义参数，当 Definition 填 0 时有效。 该参数用于高度定制场景，建议您优先使用 Definition 指定智能擦除参数。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _rawParameter 智能擦除自定义参数，当 Definition 填 0 时有效。 该参数用于高度定制场景，建议您优先使用 Definition 指定智能擦除参数。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRawParameter(const RawSmartEraseParameter& _rawParameter);

                    /**
                     * 判断参数 RawParameter 是否已赋值
                     * @return RawParameter 是否已赋值
                     * 
                     */
                    bool RawParameterHasBeenSet() const;

                    /**
                     * 获取智能擦除自定义参数，当 Definition 不填 0 时有效。 当填写了该结构中的部分擦除参数时，将使用填写的参数覆盖智能擦除模板中的参数。 该参数用于高度定制场景，建议您仅使用 Definition 指定智能擦除参数。
                     * @return OverrideParameter 智能擦除自定义参数，当 Definition 不填 0 时有效。 当填写了该结构中的部分擦除参数时，将使用填写的参数覆盖智能擦除模板中的参数。 该参数用于高度定制场景，建议您仅使用 Definition 指定智能擦除参数。
                     * 
                     */
                    OverrideEraseParameter GetOverrideParameter() const;

                    /**
                     * 设置智能擦除自定义参数，当 Definition 不填 0 时有效。 当填写了该结构中的部分擦除参数时，将使用填写的参数覆盖智能擦除模板中的参数。 该参数用于高度定制场景，建议您仅使用 Definition 指定智能擦除参数。
                     * @param _overrideParameter 智能擦除自定义参数，当 Definition 不填 0 时有效。 当填写了该结构中的部分擦除参数时，将使用填写的参数覆盖智能擦除模板中的参数。 该参数用于高度定制场景，建议您仅使用 Definition 指定智能擦除参数。
                     * 
                     */
                    void SetOverrideParameter(const OverrideEraseParameter& _overrideParameter);

                    /**
                     * 判断参数 OverrideParameter 是否已赋值
                     * @return OverrideParameter 是否已赋值
                     * 
                     */
                    bool OverrideParameterHasBeenSet() const;

                    /**
                     * 获取文件的目标存储，不填则继承上层的 OutputStorage 值。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OutputStorage 文件的目标存储，不填则继承上层的 OutputStorage 值。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    TaskOutputStorage GetOutputStorage() const;

                    /**
                     * 设置文件的目标存储，不填则继承上层的 OutputStorage 值。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _outputStorage 文件的目标存储，不填则继承上层的 OutputStorage 值。
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
                     * 获取文件的输出路径，可以为相对路径或者绝对路径。
若需定义输出路径，路径需以`.{format}`结尾。变量名请参考 [文件名变量说明](https://cloud.tencent.com/document/product/862/37039)。
相对路径示例：
<li>文件名_{变量名}.{format}</li>
<li>文件名.{format}</li>
绝对路径示例：
<li>/自定义路径/文件名_{变量名}.{format}</li>

**注意**：目前不支持`BatchProcessMedia`接口。
                     * @return OutputObjectPath 文件的输出路径，可以为相对路径或者绝对路径。
若需定义输出路径，路径需以`.{format}`结尾。变量名请参考 [文件名变量说明](https://cloud.tencent.com/document/product/862/37039)。
相对路径示例：
<li>文件名_{变量名}.{format}</li>
<li>文件名.{format}</li>
绝对路径示例：
<li>/自定义路径/文件名_{变量名}.{format}</li>

**注意**：目前不支持`BatchProcessMedia`接口。
                     * 
                     */
                    std::string GetOutputObjectPath() const;

                    /**
                     * 设置文件的输出路径，可以为相对路径或者绝对路径。
若需定义输出路径，路径需以`.{format}`结尾。变量名请参考 [文件名变量说明](https://cloud.tencent.com/document/product/862/37039)。
相对路径示例：
<li>文件名_{变量名}.{format}</li>
<li>文件名.{format}</li>
绝对路径示例：
<li>/自定义路径/文件名_{变量名}.{format}</li>

**注意**：目前不支持`BatchProcessMedia`接口。
                     * @param _outputObjectPath 文件的输出路径，可以为相对路径或者绝对路径。
若需定义输出路径，路径需以`.{format}`结尾。变量名请参考 [文件名变量说明](https://cloud.tencent.com/document/product/862/37039)。
相对路径示例：
<li>文件名_{变量名}.{format}</li>
<li>文件名.{format}</li>
绝对路径示例：
<li>/自定义路径/文件名_{变量名}.{format}</li>

**注意**：目前不支持`BatchProcessMedia`接口。
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
                     * 智能擦除模板id。
                     */
                    int64_t m_definition;
                    bool m_definitionHasBeenSet;

                    /**
                     * 智能擦除自定义参数，当 Definition 填 0 时有效。 该参数用于高度定制场景，建议您优先使用 Definition 指定智能擦除参数。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    RawSmartEraseParameter m_rawParameter;
                    bool m_rawParameterHasBeenSet;

                    /**
                     * 智能擦除自定义参数，当 Definition 不填 0 时有效。 当填写了该结构中的部分擦除参数时，将使用填写的参数覆盖智能擦除模板中的参数。 该参数用于高度定制场景，建议您仅使用 Definition 指定智能擦除参数。
                     */
                    OverrideEraseParameter m_overrideParameter;
                    bool m_overrideParameterHasBeenSet;

                    /**
                     * 文件的目标存储，不填则继承上层的 OutputStorage 值。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    TaskOutputStorage m_outputStorage;
                    bool m_outputStorageHasBeenSet;

                    /**
                     * 文件的输出路径，可以为相对路径或者绝对路径。
若需定义输出路径，路径需以`.{format}`结尾。变量名请参考 [文件名变量说明](https://cloud.tencent.com/document/product/862/37039)。
相对路径示例：
<li>文件名_{变量名}.{format}</li>
<li>文件名.{format}</li>
绝对路径示例：
<li>/自定义路径/文件名_{变量名}.{format}</li>

**注意**：目前不支持`BatchProcessMedia`接口。
                     */
                    std::string m_outputObjectPath;
                    bool m_outputObjectPathHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_SMARTERASETASKINPUT_H_
