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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_AIANALYSISTASKVIDEOREMAKEOUTPUT_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_AIANALYSISTASKVIDEOREMAKEOUTPUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
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
                * 视频去重结果信息
                */
                class AiAnalysisTaskVideoRemakeOutput : public AbstractModel
                {
                public:
                    AiAnalysisTaskVideoRemakeOutput();
                    ~AiAnalysisTaskVideoRemakeOutput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取视频智能去重文件路径
                     * @return Path 视频智能去重文件路径
                     * 
                     */
                    std::string GetPath() const;

                    /**
                     * 设置视频智能去重文件路径
                     * @param _path 视频智能去重文件路径
                     * 
                     */
                    void SetPath(const std::string& _path);

                    /**
                     * 判断参数 Path 是否已赋值
                     * @return Path 是否已赋值
                     * 
                     */
                    bool PathHasBeenSet() const;

                    /**
                     * 获取智能视频去重的存储位置
                     * @return OutputStorage 智能视频去重的存储位置
                     * 
                     */
                    TaskOutputStorage GetOutputStorage() const;

                    /**
                     * 设置智能视频去重的存储位置
                     * @param _outputStorage 智能视频去重的存储位置
                     * 
                     */
                    void SetOutputStorage(const TaskOutputStorage& _outputStorage);

                    /**
                     * 判断参数 OutputStorage 是否已赋值
                     * @return OutputStorage 是否已赋值
                     * 
                     */
                    bool OutputStorageHasBeenSet() const;

                private:

                    /**
                     * 视频智能去重文件路径
                     */
                    std::string m_path;
                    bool m_pathHasBeenSet;

                    /**
                     * 智能视频去重的存储位置
                     */
                    TaskOutputStorage m_outputStorage;
                    bool m_outputStorageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_AIANALYSISTASKVIDEOREMAKEOUTPUT_H_
