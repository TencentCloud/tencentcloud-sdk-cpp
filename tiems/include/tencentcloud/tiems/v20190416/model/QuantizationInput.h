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

#ifndef TENCENTCLOUD_TIEMS_V20190416_MODEL_QUANTIZATIONINPUT_H_
#define TENCENTCLOUD_TIEMS_V20190416_MODEL_QUANTIZATIONINPUT_H_

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
                * 量化输入
                */
                class QuantizationInput : public AbstractModel
                {
                public:
                    QuantizationInput();
                    ~QuantizationInput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取量化输入路径
                     * @return InputPath 量化输入路径
                     * 
                     */
                    std::string GetInputPath() const;

                    /**
                     * 设置量化输入路径
                     * @param _inputPath 量化输入路径
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
                     * 获取量化输出路径
                     * @return OutputPath 量化输出路径
                     * 
                     */
                    std::string GetOutputPath() const;

                    /**
                     * 设置量化输出路径
                     * @param _outputPath 量化输出路径
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
                     * 获取量化批大小
                     * @return BatchSize 量化批大小
                     * 
                     */
                    uint64_t GetBatchSize() const;

                    /**
                     * 设置量化批大小
                     * @param _batchSize 量化批大小
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
                     * 获取量化精度，支持：FP32，FP16，INT8
                     * @return Precision 量化精度，支持：FP32，FP16，INT8
                     * 
                     */
                    std::string GetPrecision() const;

                    /**
                     * 设置量化精度，支持：FP32，FP16，INT8
                     * @param _precision 量化精度，支持：FP32，FP16，INT8
                     * 
                     */
                    void SetPrecision(const std::string& _precision);

                    /**
                     * 判断参数 Precision 是否已赋值
                     * @return Precision 是否已赋值
                     * 
                     */
                    bool PrecisionHasBeenSet() const;

                    /**
                     * 获取转换类型
                     * @return ConvertType 转换类型
                     * 
                     */
                    std::string GetConvertType() const;

                    /**
                     * 设置转换类型
                     * @param _convertType 转换类型
                     * 
                     */
                    void SetConvertType(const std::string& _convertType);

                    /**
                     * 判断参数 ConvertType 是否已赋值
                     * @return ConvertType 是否已赋值
                     * 
                     */
                    bool ConvertTypeHasBeenSet() const;

                private:

                    /**
                     * 量化输入路径
                     */
                    std::string m_inputPath;
                    bool m_inputPathHasBeenSet;

                    /**
                     * 量化输出路径
                     */
                    std::string m_outputPath;
                    bool m_outputPathHasBeenSet;

                    /**
                     * 量化批大小
                     */
                    uint64_t m_batchSize;
                    bool m_batchSizeHasBeenSet;

                    /**
                     * 量化精度，支持：FP32，FP16，INT8
                     */
                    std::string m_precision;
                    bool m_precisionHasBeenSet;

                    /**
                     * 转换类型
                     */
                    std::string m_convertType;
                    bool m_convertTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIEMS_V20190416_MODEL_QUANTIZATIONINPUT_H_
