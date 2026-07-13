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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_AIGCVIDEOTASKOUTPUT_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_AIGCVIDEOTASKOUTPUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/AigcVideoTaskOutputFileInfo.h>
#include <tencentcloud/vod/v20180717/model/AigcVideoTaskUsage.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * AIGC 生视频任务的输出信息。
                */
                class AigcVideoTaskOutput : public AbstractModel
                {
                public:
                    AigcVideoTaskOutput();
                    ~AigcVideoTaskOutput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>AIGC 生视频任务的输出文件信息。</p>
                     * @return FileInfos <p>AIGC 生视频任务的输出文件信息。</p>
                     * 
                     */
                    std::vector<AigcVideoTaskOutputFileInfo> GetFileInfos() const;

                    /**
                     * 设置<p>AIGC 生视频任务的输出文件信息。</p>
                     * @param _fileInfos <p>AIGC 生视频任务的输出文件信息。</p>
                     * 
                     */
                    void SetFileInfos(const std::vector<AigcVideoTaskOutputFileInfo>& _fileInfos);

                    /**
                     * 判断参数 FileInfos 是否已赋值
                     * @return FileInfos 是否已赋值
                     * 
                     */
                    bool FileInfosHasBeenSet() const;

                    /**
                     * 获取<p>任务类型为 Procedure 的任务 ID。若发起<a href="https://cloud.tencent.com/document/product/266/126239">创建 AIGC 生视频任务</a>时指定了任务流模板(Procedure)，当该任务流模板指定了 MediaProcessTask、AiAnalysisTask、AiRecognitionTask 中的一个或多个时发起该任务。</p>
                     * @return ProcedureTaskIds <p>任务类型为 Procedure 的任务 ID。若发起<a href="https://cloud.tencent.com/document/product/266/126239">创建 AIGC 生视频任务</a>时指定了任务流模板(Procedure)，当该任务流模板指定了 MediaProcessTask、AiAnalysisTask、AiRecognitionTask 中的一个或多个时发起该任务。</p>
                     * 
                     */
                    std::vector<std::string> GetProcedureTaskIds() const;

                    /**
                     * 设置<p>任务类型为 Procedure 的任务 ID。若发起<a href="https://cloud.tencent.com/document/product/266/126239">创建 AIGC 生视频任务</a>时指定了任务流模板(Procedure)，当该任务流模板指定了 MediaProcessTask、AiAnalysisTask、AiRecognitionTask 中的一个或多个时发起该任务。</p>
                     * @param _procedureTaskIds <p>任务类型为 Procedure 的任务 ID。若发起<a href="https://cloud.tencent.com/document/product/266/126239">创建 AIGC 生视频任务</a>时指定了任务流模板(Procedure)，当该任务流模板指定了 MediaProcessTask、AiAnalysisTask、AiRecognitionTask 中的一个或多个时发起该任务。</p>
                     * 
                     */
                    void SetProcedureTaskIds(const std::vector<std::string>& _procedureTaskIds);

                    /**
                     * 判断参数 ProcedureTaskIds 是否已赋值
                     * @return ProcedureTaskIds 是否已赋值
                     * 
                     */
                    bool ProcedureTaskIdsHasBeenSet() const;

                    /**
                     * 获取<p>AIGC 生视频任务的用量信息。</p>
                     * @return Usage <p>AIGC 生视频任务的用量信息。</p>
                     * 
                     */
                    AigcVideoTaskUsage GetUsage() const;

                    /**
                     * 设置<p>AIGC 生视频任务的用量信息。</p>
                     * @param _usage <p>AIGC 生视频任务的用量信息。</p>
                     * 
                     */
                    void SetUsage(const AigcVideoTaskUsage& _usage);

                    /**
                     * 判断参数 Usage 是否已赋值
                     * @return Usage 是否已赋值
                     * 
                     */
                    bool UsageHasBeenSet() const;

                private:

                    /**
                     * <p>AIGC 生视频任务的输出文件信息。</p>
                     */
                    std::vector<AigcVideoTaskOutputFileInfo> m_fileInfos;
                    bool m_fileInfosHasBeenSet;

                    /**
                     * <p>任务类型为 Procedure 的任务 ID。若发起<a href="https://cloud.tencent.com/document/product/266/126239">创建 AIGC 生视频任务</a>时指定了任务流模板(Procedure)，当该任务流模板指定了 MediaProcessTask、AiAnalysisTask、AiRecognitionTask 中的一个或多个时发起该任务。</p>
                     */
                    std::vector<std::string> m_procedureTaskIds;
                    bool m_procedureTaskIdsHasBeenSet;

                    /**
                     * <p>AIGC 生视频任务的用量信息。</p>
                     */
                    AigcVideoTaskUsage m_usage;
                    bool m_usageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_AIGCVIDEOTASKOUTPUT_H_
