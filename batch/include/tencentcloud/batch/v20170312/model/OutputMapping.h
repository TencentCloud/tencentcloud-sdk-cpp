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

#ifndef TENCENTCLOUD_BATCH_V20170312_MODEL_OUTPUTMAPPING_H_
#define TENCENTCLOUD_BATCH_V20170312_MODEL_OUTPUTMAPPING_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/batch/v20170312/model/OutputMappingOption.h>


namespace TencentCloud
{
    namespace Batch
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * 输出映射
                */
                class OutputMapping : public AbstractModel
                {
                public:
                    OutputMapping();
                    ~OutputMapping() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取源端路径
                     * @return SourcePath 源端路径
                     * 
                     */
                    std::string GetSourcePath() const;

                    /**
                     * 设置源端路径
                     * @param _sourcePath 源端路径
                     * 
                     */
                    void SetSourcePath(const std::string& _sourcePath);

                    /**
                     * 判断参数 SourcePath 是否已赋值
                     * @return SourcePath 是否已赋值
                     * 
                     */
                    bool SourcePathHasBeenSet() const;

                    /**
                     * 获取目的端路径
                     * @return DestinationPath 目的端路径
                     * 
                     */
                    std::string GetDestinationPath() const;

                    /**
                     * 设置目的端路径
                     * @param _destinationPath 目的端路径
                     * 
                     */
                    void SetDestinationPath(const std::string& _destinationPath);

                    /**
                     * 判断参数 DestinationPath 是否已赋值
                     * @return DestinationPath 是否已赋值
                     * 
                     */
                    bool DestinationPathHasBeenSet() const;

                    /**
                     * 获取输出映射选项
                     * @return OutputMappingOption 输出映射选项
                     * 
                     */
                    OutputMappingOption GetOutputMappingOption() const;

                    /**
                     * 设置输出映射选项
                     * @param _outputMappingOption 输出映射选项
                     * 
                     */
                    void SetOutputMappingOption(const OutputMappingOption& _outputMappingOption);

                    /**
                     * 判断参数 OutputMappingOption 是否已赋值
                     * @return OutputMappingOption 是否已赋值
                     * 
                     */
                    bool OutputMappingOptionHasBeenSet() const;

                private:

                    /**
                     * 源端路径
                     */
                    std::string m_sourcePath;
                    bool m_sourcePathHasBeenSet;

                    /**
                     * 目的端路径
                     */
                    std::string m_destinationPath;
                    bool m_destinationPathHasBeenSet;

                    /**
                     * 输出映射选项
                     */
                    OutputMappingOption m_outputMappingOption;
                    bool m_outputMappingOptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BATCH_V20170312_MODEL_OUTPUTMAPPING_H_
