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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_SAMPLESNAPSHOTTASKINPUT_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_SAMPLESNAPSHOTTASKINPUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/WatermarkInput.h>
#include <tencentcloud/mps/v20190612/model/TaskOutputStorage.h>
#include <tencentcloud/mps/v20190612/model/NumberFormat.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * 对视频做采样截图任务输入参数类型。
                */
                class SampleSnapshotTaskInput : public AbstractModel
                {
                public:
                    SampleSnapshotTaskInput();
                    ~SampleSnapshotTaskInput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取采样截图模板 ID。
                     * @return Definition 采样截图模板 ID。
                     * 
                     */
                    uint64_t GetDefinition() const;

                    /**
                     * 设置采样截图模板 ID。
                     * @param _definition 采样截图模板 ID。
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
                     * 获取水印列表，支持多张图片或文字水印，最大可支持 10 张。
                     * @return WatermarkSet 水印列表，支持多张图片或文字水印，最大可支持 10 张。
                     * 
                     */
                    std::vector<WatermarkInput> GetWatermarkSet() const;

                    /**
                     * 设置水印列表，支持多张图片或文字水印，最大可支持 10 张。
                     * @param _watermarkSet 水印列表，支持多张图片或文字水印，最大可支持 10 张。
                     * 
                     */
                    void SetWatermarkSet(const std::vector<WatermarkInput>& _watermarkSet);

                    /**
                     * 判断参数 WatermarkSet 是否已赋值
                     * @return WatermarkSet 是否已赋值
                     * 
                     */
                    bool WatermarkSetHasBeenSet() const;

                    /**
                     * 获取采样截图后文件的目标存储，不填则继承上层的 OutputStorage 值。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OutputStorage 采样截图后文件的目标存储，不填则继承上层的 OutputStorage 值。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    TaskOutputStorage GetOutputStorage() const;

                    /**
                     * 设置采样截图后文件的目标存储，不填则继承上层的 OutputStorage 值。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _outputStorage 采样截图后文件的目标存储，不填则继承上层的 OutputStorage 值。
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
                     * 获取采样截图后图片文件的输出路径，可以为相对路径或者绝对路径。
若需定义输出路径，路径需以`.{format}`结尾。变量名请参考 [文件名变量说明](https://cloud.tencent.com/document/product/862/37039)。
相对路径示例：
<li>文件名_{变量名}.{format}</li>
<li>文件名.{format}</li>
绝对路径示例：
<li>/自定义路径/文件名_{变量名}.{format}</li>
如果不填，则默认为相对路径：`{inputName}_sampleSnapshot_{definition}_{number}.{format}`。

                     * @return OutputObjectPath 采样截图后图片文件的输出路径，可以为相对路径或者绝对路径。
若需定义输出路径，路径需以`.{format}`结尾。变量名请参考 [文件名变量说明](https://cloud.tencent.com/document/product/862/37039)。
相对路径示例：
<li>文件名_{变量名}.{format}</li>
<li>文件名.{format}</li>
绝对路径示例：
<li>/自定义路径/文件名_{变量名}.{format}</li>
如果不填，则默认为相对路径：`{inputName}_sampleSnapshot_{definition}_{number}.{format}`。

                     * 
                     */
                    std::string GetOutputObjectPath() const;

                    /**
                     * 设置采样截图后图片文件的输出路径，可以为相对路径或者绝对路径。
若需定义输出路径，路径需以`.{format}`结尾。变量名请参考 [文件名变量说明](https://cloud.tencent.com/document/product/862/37039)。
相对路径示例：
<li>文件名_{变量名}.{format}</li>
<li>文件名.{format}</li>
绝对路径示例：
<li>/自定义路径/文件名_{变量名}.{format}</li>
如果不填，则默认为相对路径：`{inputName}_sampleSnapshot_{definition}_{number}.{format}`。

                     * @param _outputObjectPath 采样截图后图片文件的输出路径，可以为相对路径或者绝对路径。
若需定义输出路径，路径需以`.{format}`结尾。变量名请参考 [文件名变量说明](https://cloud.tencent.com/document/product/862/37039)。
相对路径示例：
<li>文件名_{变量名}.{format}</li>
<li>文件名.{format}</li>
绝对路径示例：
<li>/自定义路径/文件名_{变量名}.{format}</li>
如果不填，则默认为相对路径：`{inputName}_sampleSnapshot_{definition}_{number}.{format}`。

                     * 
                     */
                    void SetOutputObjectPath(const std::string& _outputObjectPath);

                    /**
                     * 判断参数 OutputObjectPath 是否已赋值
                     * @return OutputObjectPath 是否已赋值
                     * 
                     */
                    bool OutputObjectPathHasBeenSet() const;

                    /**
                     * 获取采样截图后输出路径中的`{number}`变量的规则。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ObjectNumberFormat 采样截图后输出路径中的`{number}`变量的规则。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    NumberFormat GetObjectNumberFormat() const;

                    /**
                     * 设置采样截图后输出路径中的`{number}`变量的规则。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _objectNumberFormat 采样截图后输出路径中的`{number}`变量的规则。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetObjectNumberFormat(const NumberFormat& _objectNumberFormat);

                    /**
                     * 判断参数 ObjectNumberFormat 是否已赋值
                     * @return ObjectNumberFormat 是否已赋值
                     * 
                     */
                    bool ObjectNumberFormatHasBeenSet() const;

                private:

                    /**
                     * 采样截图模板 ID。
                     */
                    uint64_t m_definition;
                    bool m_definitionHasBeenSet;

                    /**
                     * 水印列表，支持多张图片或文字水印，最大可支持 10 张。
                     */
                    std::vector<WatermarkInput> m_watermarkSet;
                    bool m_watermarkSetHasBeenSet;

                    /**
                     * 采样截图后文件的目标存储，不填则继承上层的 OutputStorage 值。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    TaskOutputStorage m_outputStorage;
                    bool m_outputStorageHasBeenSet;

                    /**
                     * 采样截图后图片文件的输出路径，可以为相对路径或者绝对路径。
若需定义输出路径，路径需以`.{format}`结尾。变量名请参考 [文件名变量说明](https://cloud.tencent.com/document/product/862/37039)。
相对路径示例：
<li>文件名_{变量名}.{format}</li>
<li>文件名.{format}</li>
绝对路径示例：
<li>/自定义路径/文件名_{变量名}.{format}</li>
如果不填，则默认为相对路径：`{inputName}_sampleSnapshot_{definition}_{number}.{format}`。

                     */
                    std::string m_outputObjectPath;
                    bool m_outputObjectPathHasBeenSet;

                    /**
                     * 采样截图后输出路径中的`{number}`变量的规则。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    NumberFormat m_objectNumberFormat;
                    bool m_objectNumberFormatHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_SAMPLESNAPSHOTTASKINPUT_H_
