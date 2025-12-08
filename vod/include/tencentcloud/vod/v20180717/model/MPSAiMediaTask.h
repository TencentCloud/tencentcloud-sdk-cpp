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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_MPSAIMEDIATASK_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_MPSAIMEDIATASK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/MPSOutputFileInfo.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * MPS智能任务
                */
                class MPSAiMediaTask : public AbstractModel
                {
                public:
                    MPSAiMediaTask();
                    ~MPSAiMediaTask() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取MPS智能任务的模板 ID
                     * @return Definition MPS智能任务的模板 ID
                     * 
                     */
                    int64_t GetDefinition() const;

                    /**
                     * 设置MPS智能任务的模板 ID
                     * @param _definition MPS智能任务的模板 ID
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
                     * 获取MPS智能任务输出文件集合
                     * @return OutputFile MPS智能任务输出文件集合
                     * 
                     */
                    std::vector<MPSOutputFileInfo> GetOutputFile() const;

                    /**
                     * 设置MPS智能任务输出文件集合
                     * @param _outputFile MPS智能任务输出文件集合
                     * 
                     */
                    void SetOutputFile(const std::vector<MPSOutputFileInfo>& _outputFile);

                    /**
                     * 判断参数 OutputFile 是否已赋值
                     * @return OutputFile 是否已赋值
                     * 
                     */
                    bool OutputFileHasBeenSet() const;

                    /**
                     * 获取MPS智能任务输出
                     * @return OutputText MPS智能任务输出
                     * 
                     */
                    std::string GetOutputText() const;

                    /**
                     * 设置MPS智能任务输出
                     * @param _outputText MPS智能任务输出
                     * 
                     */
                    void SetOutputText(const std::string& _outputText);

                    /**
                     * 判断参数 OutputText 是否已赋值
                     * @return OutputText 是否已赋值
                     * 
                     */
                    bool OutputTextHasBeenSet() const;

                private:

                    /**
                     * MPS智能任务的模板 ID
                     */
                    int64_t m_definition;
                    bool m_definitionHasBeenSet;

                    /**
                     * MPS智能任务输出文件集合
                     */
                    std::vector<MPSOutputFileInfo> m_outputFile;
                    bool m_outputFileHasBeenSet;

                    /**
                     * MPS智能任务输出
                     */
                    std::string m_outputText;
                    bool m_outputTextHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_MPSAIMEDIATASK_H_
