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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_FACERECOGNITIONTASK_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_FACERECOGNITIONTASK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/FaceRecognitionOutputFileInfo.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * 人脸识别任务
                */
                class FaceRecognitionTask : public AbstractModel
                {
                public:
                    FaceRecognitionTask();
                    ~FaceRecognitionTask() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>人脸识别模板编号</p>
                     * @return Definition <p>人脸识别模板编号</p>
                     * 
                     */
                    int64_t GetDefinition() const;

                    /**
                     * 设置<p>人脸识别模板编号</p>
                     * @param _definition <p>人脸识别模板编号</p>
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
                     * 获取<p>输出文件信息</p>
                     * @return OutputFile <p>输出文件信息</p>
                     * 
                     */
                    std::vector<FaceRecognitionOutputFileInfo> GetOutputFile() const;

                    /**
                     * 设置<p>输出文件信息</p>
                     * @param _outputFile <p>输出文件信息</p>
                     * 
                     */
                    void SetOutputFile(const std::vector<FaceRecognitionOutputFileInfo>& _outputFile);

                    /**
                     * 判断参数 OutputFile 是否已赋值
                     * @return OutputFile 是否已赋值
                     * 
                     */
                    bool OutputFileHasBeenSet() const;

                private:

                    /**
                     * <p>人脸识别模板编号</p>
                     */
                    int64_t m_definition;
                    bool m_definitionHasBeenSet;

                    /**
                     * <p>输出文件信息</p>
                     */
                    std::vector<FaceRecognitionOutputFileInfo> m_outputFile;
                    bool m_outputFileHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_FACERECOGNITIONTASK_H_
