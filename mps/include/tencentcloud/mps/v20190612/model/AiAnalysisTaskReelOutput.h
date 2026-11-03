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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_AIANALYSISTASKREELOUTPUT_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_AIANALYSISTASKREELOUTPUT_H_

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
                * AI解说二创结果信息
                */
                class AiAnalysisTaskReelOutput : public AbstractModel
                {
                public:
                    AiAnalysisTaskReelOutput();
                    ~AiAnalysisTaskReelOutput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>解说视频路径。</p>
                     * @return VideoPath <p>解说视频路径。</p>
                     * 
                     */
                    std::string GetVideoPath() const;

                    /**
                     * 设置<p>解说视频路径。</p>
                     * @param _videoPath <p>解说视频路径。</p>
                     * 
                     */
                    void SetVideoPath(const std::string& _videoPath);

                    /**
                     * 判断参数 VideoPath 是否已赋值
                     * @return VideoPath 是否已赋值
                     * 
                     */
                    bool VideoPathHasBeenSet() const;

                    /**
                     * 获取<p>解说视频路径列表。</p><p><strong>注意</strong>：</p><ol><li>当返回一个文件时，<code>VideoPath</code>返回一个文件路径，<code>VideoPaths</code>也会填充同样路径的一个元素。</li><li>当返回多个文件时，<code>VideoPath</code>返回为空字符串，<code>VideoPaths</code>返回多文件路径列表。</li></ol>
                     * @return VideoPaths <p>解说视频路径列表。</p><p><strong>注意</strong>：</p><ol><li>当返回一个文件时，<code>VideoPath</code>返回一个文件路径，<code>VideoPaths</code>也会填充同样路径的一个元素。</li><li>当返回多个文件时，<code>VideoPath</code>返回为空字符串，<code>VideoPaths</code>返回多文件路径列表。</li></ol>
                     * 
                     */
                    std::vector<std::string> GetVideoPaths() const;

                    /**
                     * 设置<p>解说视频路径列表。</p><p><strong>注意</strong>：</p><ol><li>当返回一个文件时，<code>VideoPath</code>返回一个文件路径，<code>VideoPaths</code>也会填充同样路径的一个元素。</li><li>当返回多个文件时，<code>VideoPath</code>返回为空字符串，<code>VideoPaths</code>返回多文件路径列表。</li></ol>
                     * @param _videoPaths <p>解说视频路径列表。</p><p><strong>注意</strong>：</p><ol><li>当返回一个文件时，<code>VideoPath</code>返回一个文件路径，<code>VideoPaths</code>也会填充同样路径的一个元素。</li><li>当返回多个文件时，<code>VideoPath</code>返回为空字符串，<code>VideoPaths</code>返回多文件路径列表。</li></ol>
                     * 
                     */
                    void SetVideoPaths(const std::vector<std::string>& _videoPaths);

                    /**
                     * 判断参数 VideoPaths 是否已赋值
                     * @return VideoPaths 是否已赋值
                     * 
                     */
                    bool VideoPathsHasBeenSet() const;

                    /**
                     * 获取<p>脚本文件路径</p>
                     * @return ScriptPath <p>脚本文件路径</p>
                     * 
                     */
                    std::string GetScriptPath() const;

                    /**
                     * 设置<p>脚本文件路径</p>
                     * @param _scriptPath <p>脚本文件路径</p>
                     * 
                     */
                    void SetScriptPath(const std::string& _scriptPath);

                    /**
                     * 判断参数 ScriptPath 是否已赋值
                     * @return ScriptPath 是否已赋值
                     * 
                     */
                    bool ScriptPathHasBeenSet() const;

                    /**
                     * 获取<p>多个脚本文件路径</p>
                     * @return ScriptPaths <p>多个脚本文件路径</p>
                     * 
                     */
                    std::vector<std::string> GetScriptPaths() const;

                    /**
                     * 设置<p>多个脚本文件路径</p>
                     * @param _scriptPaths <p>多个脚本文件路径</p>
                     * 
                     */
                    void SetScriptPaths(const std::vector<std::string>& _scriptPaths);

                    /**
                     * 判断参数 ScriptPaths 是否已赋值
                     * @return ScriptPaths 是否已赋值
                     * 
                     */
                    bool ScriptPathsHasBeenSet() const;

                    /**
                     * 获取<p>解说视频存储位置。</p>
                     * @return OutputStorage <p>解说视频存储位置。</p>
                     * 
                     */
                    TaskOutputStorage GetOutputStorage() const;

                    /**
                     * 设置<p>解说视频存储位置。</p>
                     * @param _outputStorage <p>解说视频存储位置。</p>
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
                     * 获取<p>输出视频字幕文件</p>
                     * @return OutputSubtitlePath <p>输出视频字幕文件</p>
                     * 
                     */
                    std::string GetOutputSubtitlePath() const;

                    /**
                     * 设置<p>输出视频字幕文件</p>
                     * @param _outputSubtitlePath <p>输出视频字幕文件</p>
                     * 
                     */
                    void SetOutputSubtitlePath(const std::string& _outputSubtitlePath);

                    /**
                     * 判断参数 OutputSubtitlePath 是否已赋值
                     * @return OutputSubtitlePath 是否已赋值
                     * 
                     */
                    bool OutputSubtitlePathHasBeenSet() const;

                    /**
                     * 获取<p>多个输出视频字幕文件，与输出的VideoPaths对应</p>
                     * @return OutputSubtitlePaths <p>多个输出视频字幕文件，与输出的VideoPaths对应</p>
                     * 
                     */
                    std::vector<std::string> GetOutputSubtitlePaths() const;

                    /**
                     * 设置<p>多个输出视频字幕文件，与输出的VideoPaths对应</p>
                     * @param _outputSubtitlePaths <p>多个输出视频字幕文件，与输出的VideoPaths对应</p>
                     * 
                     */
                    void SetOutputSubtitlePaths(const std::vector<std::string>& _outputSubtitlePaths);

                    /**
                     * 判断参数 OutputSubtitlePaths 是否已赋值
                     * @return OutputSubtitlePaths 是否已赋值
                     * 
                     */
                    bool OutputSubtitlePathsHasBeenSet() const;

                private:

                    /**
                     * <p>解说视频路径。</p>
                     */
                    std::string m_videoPath;
                    bool m_videoPathHasBeenSet;

                    /**
                     * <p>解说视频路径列表。</p><p><strong>注意</strong>：</p><ol><li>当返回一个文件时，<code>VideoPath</code>返回一个文件路径，<code>VideoPaths</code>也会填充同样路径的一个元素。</li><li>当返回多个文件时，<code>VideoPath</code>返回为空字符串，<code>VideoPaths</code>返回多文件路径列表。</li></ol>
                     */
                    std::vector<std::string> m_videoPaths;
                    bool m_videoPathsHasBeenSet;

                    /**
                     * <p>脚本文件路径</p>
                     */
                    std::string m_scriptPath;
                    bool m_scriptPathHasBeenSet;

                    /**
                     * <p>多个脚本文件路径</p>
                     */
                    std::vector<std::string> m_scriptPaths;
                    bool m_scriptPathsHasBeenSet;

                    /**
                     * <p>解说视频存储位置。</p>
                     */
                    TaskOutputStorage m_outputStorage;
                    bool m_outputStorageHasBeenSet;

                    /**
                     * <p>输出视频字幕文件</p>
                     */
                    std::string m_outputSubtitlePath;
                    bool m_outputSubtitlePathHasBeenSet;

                    /**
                     * <p>多个输出视频字幕文件，与输出的VideoPaths对应</p>
                     */
                    std::vector<std::string> m_outputSubtitlePaths;
                    bool m_outputSubtitlePathsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_AIANALYSISTASKREELOUTPUT_H_
