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

#ifndef TENCENTCLOUD_TIEMS_V20190416_MODEL_PREDICTINPUT_H_
#define TENCENTCLOUD_TIEMS_V20190416_MODEL_PREDICTINPUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tiems
    {
        namespace V20190416
        {
            namespace Model
            {
                /**
                * 预测输入
                */
                class PredictInput : public AbstractModel
                {
                public:
                    PredictInput();
                    ~PredictInput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取输入路径，支持 cos 格式路径文件夹或文件
                     * @return InputPath 输入路径，支持 cos 格式路径文件夹或文件
                     * 
                     */
                    std::string GetInputPath() const;

                    /**
                     * 设置输入路径，支持 cos 格式路径文件夹或文件
                     * @param _inputPath 输入路径，支持 cos 格式路径文件夹或文件
                     * 
                     */
                    void SetInputPath(const std::string& _inputPath);

                    /**
                     * 判断参数 InputPath 是否已赋值
                     * @return InputPath 是否已赋值
                     * 
                     */
                    bool InputPathHasBeenSet() const;

                    /**
                     * 获取输出路径，支持 cos 格式路径
                     * @return OutputPath 输出路径，支持 cos 格式路径
                     * 
                     */
                    std::string GetOutputPath() const;

                    /**
                     * 设置输出路径，支持 cos 格式路径
                     * @param _outputPath 输出路径，支持 cos 格式路径
                     * 
                     */
                    void SetOutputPath(const std::string& _outputPath);

                    /**
                     * 判断参数 OutputPath 是否已赋值
                     * @return OutputPath 是否已赋值
                     * 
                     */
                    bool OutputPathHasBeenSet() const;

                    /**
                     * 获取输入数据格式，目前支持：JSON
                     * @return InputDataFormat 输入数据格式，目前支持：JSON
                     * 
                     */
                    std::string GetInputDataFormat() const;

                    /**
                     * 设置输入数据格式，目前支持：JSON
                     * @param _inputDataFormat 输入数据格式，目前支持：JSON
                     * 
                     */
                    void SetInputDataFormat(const std::string& _inputDataFormat);

                    /**
                     * 判断参数 InputDataFormat 是否已赋值
                     * @return InputDataFormat 是否已赋值
                     * 
                     */
                    bool InputDataFormatHasBeenSet() const;

                    /**
                     * 获取输出数据格式，目前支持：JSON
                     * @return OutputDataFormat 输出数据格式，目前支持：JSON
                     * 
                     */
                    std::string GetOutputDataFormat() const;

                    /**
                     * 设置输出数据格式，目前支持：JSON
                     * @param _outputDataFormat 输出数据格式，目前支持：JSON
                     * 
                     */
                    void SetOutputDataFormat(const std::string& _outputDataFormat);

                    /**
                     * 判断参数 OutputDataFormat 是否已赋值
                     * @return OutputDataFormat 是否已赋值
                     * 
                     */
                    bool OutputDataFormatHasBeenSet() const;

                    /**
                     * 获取预测批大小，默认为 64
                     * @return BatchSize 预测批大小，默认为 64
                     * 
                     */
                    uint64_t GetBatchSize() const;

                    /**
                     * 设置预测批大小，默认为 64
                     * @param _batchSize 预测批大小，默认为 64
                     * 
                     */
                    void SetBatchSize(const uint64_t& _batchSize);

                    /**
                     * 判断参数 BatchSize 是否已赋值
                     * @return BatchSize 是否已赋值
                     * 
                     */
                    bool BatchSizeHasBeenSet() const;

                    /**
                     * 获取模型签名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SignatureName 模型签名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSignatureName() const;

                    /**
                     * 设置模型签名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _signatureName 模型签名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSignatureName(const std::string& _signatureName);

                    /**
                     * 判断参数 SignatureName 是否已赋值
                     * @return SignatureName 是否已赋值
                     * 
                     */
                    bool SignatureNameHasBeenSet() const;

                private:

                    /**
                     * 输入路径，支持 cos 格式路径文件夹或文件
                     */
                    std::string m_inputPath;
                    bool m_inputPathHasBeenSet;

                    /**
                     * 输出路径，支持 cos 格式路径
                     */
                    std::string m_outputPath;
                    bool m_outputPathHasBeenSet;

                    /**
                     * 输入数据格式，目前支持：JSON
                     */
                    std::string m_inputDataFormat;
                    bool m_inputDataFormatHasBeenSet;

                    /**
                     * 输出数据格式，目前支持：JSON
                     */
                    std::string m_outputDataFormat;
                    bool m_outputDataFormatHasBeenSet;

                    /**
                     * 预测批大小，默认为 64
                     */
                    uint64_t m_batchSize;
                    bool m_batchSizeHasBeenSet;

                    /**
                     * 模型签名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_signatureName;
                    bool m_signatureNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIEMS_V20190416_MODEL_PREDICTINPUT_H_
