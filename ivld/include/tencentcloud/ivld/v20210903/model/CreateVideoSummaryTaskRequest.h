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

#ifndef TENCENTCLOUD_IVLD_V20210903_MODEL_CREATEVIDEOSUMMARYTASKREQUEST_H_
#define TENCENTCLOUD_IVLD_V20210903_MODEL_CREATEVIDEOSUMMARYTASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ivld/v20210903/model/VideoRotationMode.h>
#include <tencentcloud/ivld/v20210903/model/TTSMode.h>
#include <tencentcloud/ivld/v20210903/model/AsrResult.h>
#include <tencentcloud/ivld/v20210903/model/ShotInfo.h>


namespace TencentCloud
{
    namespace Ivld
    {
        namespace V20210903
        {
            namespace Model
            {
                /**
                * CreateVideoSummaryTask请求参数结构体
                */
                class CreateVideoSummaryTaskRequest : public AbstractModel
                {
                public:
                    CreateVideoSummaryTaskRequest();
                    ~CreateVideoSummaryTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取目前只支持 1，表示新闻缩编。
                     * @return SummaryType 目前只支持 1，表示新闻缩编。
                     * 
                     */
                    int64_t GetSummaryType() const;

                    /**
                     * 设置目前只支持 1，表示新闻缩编。
                     * @param _summaryType 目前只支持 1，表示新闻缩编。
                     * 
                     */
                    void SetSummaryType(const int64_t& _summaryType);

                    /**
                     * 判断参数 SummaryType 是否已赋值
                     * @return SummaryType 是否已赋值
                     * 
                     */
                    bool SummaryTypeHasBeenSet() const;

                    /**
                     * 获取待处理的视频的URL，目前只支持*不带签名的*COS地址，长度最长1KB
                     * @return VideoURL 待处理的视频的URL，目前只支持*不带签名的*COS地址，长度最长1KB
                     * 
                     */
                    std::string GetVideoURL() const;

                    /**
                     * 设置待处理的视频的URL，目前只支持*不带签名的*COS地址，长度最长1KB
                     * @param _videoURL 待处理的视频的URL，目前只支持*不带签名的*COS地址，长度最长1KB
                     * 
                     */
                    void SetVideoURL(const std::string& _videoURL);

                    /**
                     * 判断参数 VideoURL 是否已赋值
                     * @return VideoURL 是否已赋值
                     * 
                     */
                    bool VideoURLHasBeenSet() const;

                    /**
                     * 获取任务处理完成的回调地址。
                     * @return CallbackURL 任务处理完成的回调地址。
                     * 
                     */
                    std::string GetCallbackURL() const;

                    /**
                     * 设置任务处理完成的回调地址。
                     * @param _callbackURL 任务处理完成的回调地址。
                     * 
                     */
                    void SetCallbackURL(const std::string& _callbackURL);

                    /**
                     * 判断参数 CallbackURL 是否已赋值
                     * @return CallbackURL 是否已赋值
                     * 
                     */
                    bool CallbackURLHasBeenSet() const;

                    /**
                     * 获取如果需要你输出 TTS 或者视频，该字段为转存的cos桶地址且不可为空; 示例：https://${Bucket}-${AppId}.cos.${Region}.myqcloud.com/${PathPrefix}/  (注意，cos路径需要以/分隔符结尾)。

                     * @return WriteBackCosPath 如果需要你输出 TTS 或者视频，该字段为转存的cos桶地址且不可为空; 示例：https://${Bucket}-${AppId}.cos.${Region}.myqcloud.com/${PathPrefix}/  (注意，cos路径需要以/分隔符结尾)。

                     * 
                     */
                    std::string GetWriteBackCosPath() const;

                    /**
                     * 设置如果需要你输出 TTS 或者视频，该字段为转存的cos桶地址且不可为空; 示例：https://${Bucket}-${AppId}.cos.${Region}.myqcloud.com/${PathPrefix}/  (注意，cos路径需要以/分隔符结尾)。

                     * @param _writeBackCosPath 如果需要你输出 TTS 或者视频，该字段为转存的cos桶地址且不可为空; 示例：https://${Bucket}-${AppId}.cos.${Region}.myqcloud.com/${PathPrefix}/  (注意，cos路径需要以/分隔符结尾)。

                     * 
                     */
                    void SetWriteBackCosPath(const std::string& _writeBackCosPath);

                    /**
                     * 判断参数 WriteBackCosPath 是否已赋值
                     * @return WriteBackCosPath 是否已赋值
                     * 
                     */
                    bool WriteBackCosPathHasBeenSet() const;

                    /**
                     * 获取是否开启结果视频生成功能，如果开启，需要指定WriteBackCosPath 参数
                     * @return ActiveVideoGenerate 是否开启结果视频生成功能，如果开启，需要指定WriteBackCosPath 参数
                     * 
                     */
                    bool GetActiveVideoGenerate() const;

                    /**
                     * 设置是否开启结果视频生成功能，如果开启，需要指定WriteBackCosPath 参数
                     * @param _activeVideoGenerate 是否开启结果视频生成功能，如果开启，需要指定WriteBackCosPath 参数
                     * 
                     */
                    void SetActiveVideoGenerate(const bool& _activeVideoGenerate);

                    /**
                     * 判断参数 ActiveVideoGenerate 是否已赋值
                     * @return ActiveVideoGenerate 是否已赋值
                     * 
                     */
                    bool ActiveVideoGenerateHasBeenSet() const;

                    /**
                     * 获取生成结果视频的时候，控制生成的结果视频的横转竖参数。如果 ActiveVideoGenerate 为 false, 该参数无效。
                     * @return VideoRotationMode 生成结果视频的时候，控制生成的结果视频的横转竖参数。如果 ActiveVideoGenerate 为 false, 该参数无效。
                     * 
                     */
                    VideoRotationMode GetVideoRotationMode() const;

                    /**
                     * 设置生成结果视频的时候，控制生成的结果视频的横转竖参数。如果 ActiveVideoGenerate 为 false, 该参数无效。
                     * @param _videoRotationMode 生成结果视频的时候，控制生成的结果视频的横转竖参数。如果 ActiveVideoGenerate 为 false, 该参数无效。
                     * 
                     */
                    void SetVideoRotationMode(const VideoRotationMode& _videoRotationMode);

                    /**
                     * 判断参数 VideoRotationMode 是否已赋值
                     * @return VideoRotationMode 是否已赋值
                     * 
                     */
                    bool VideoRotationModeHasBeenSet() const;

                    /**
                     * 获取语音合成相关的控制参数
                     * @return TTSMode 语音合成相关的控制参数
                     * 
                     */
                    TTSMode GetTTSMode() const;

                    /**
                     * 设置语音合成相关的控制参数
                     * @param _tTSMode 语音合成相关的控制参数
                     * 
                     */
                    void SetTTSMode(const TTSMode& _tTSMode);

                    /**
                     * 判断参数 TTSMode 是否已赋值
                     * @return TTSMode 是否已赋值
                     * 
                     */
                    bool TTSModeHasBeenSet() const;

                    /**
                     * 获取是否输出合成好的语音列表。
                     * @return ActiveTTSOutput 是否输出合成好的语音列表。
                     * 
                     */
                    bool GetActiveTTSOutput() const;

                    /**
                     * 设置是否输出合成好的语音列表。
                     * @param _activeTTSOutput 是否输出合成好的语音列表。
                     * 
                     */
                    void SetActiveTTSOutput(const bool& _activeTTSOutput);

                    /**
                     * 判断参数 ActiveTTSOutput 是否已赋值
                     * @return ActiveTTSOutput 是否已赋值
                     * 
                     */
                    bool ActiveTTSOutputHasBeenSet() const;

                    /**
                     * 获取用户指定的精确的 asr 结果列表 
                     * @return ExactAsrSet 用户指定的精确的 asr 结果列表 
                     * 
                     */
                    std::vector<AsrResult> GetExactAsrSet() const;

                    /**
                     * 设置用户指定的精确的 asr 结果列表 
                     * @param _exactAsrSet 用户指定的精确的 asr 结果列表 
                     * 
                     */
                    void SetExactAsrSet(const std::vector<AsrResult>& _exactAsrSet);

                    /**
                     * 判断参数 ExactAsrSet 是否已赋值
                     * @return ExactAsrSet 是否已赋值
                     * 
                     */
                    bool ExactAsrSetHasBeenSet() const;

                    /**
                     * 获取用户指定的精确的文本摘要
                     * @return ExactTextSummary 用户指定的精确的文本摘要
                     * 
                     */
                    std::string GetExactTextSummary() const;

                    /**
                     * 设置用户指定的精确的文本摘要
                     * @param _exactTextSummary 用户指定的精确的文本摘要
                     * 
                     */
                    void SetExactTextSummary(const std::string& _exactTextSummary);

                    /**
                     * 判断参数 ExactTextSummary 是否已赋值
                     * @return ExactTextSummary 是否已赋值
                     * 
                     */
                    bool ExactTextSummaryHasBeenSet() const;

                    /**
                     * 获取用户指定的精确的文本摘要分割结果
                     * @return ExactTextSegSet 用户指定的精确的文本摘要分割结果
                     * 
                     */
                    std::vector<std::string> GetExactTextSegSet() const;

                    /**
                     * 设置用户指定的精确的文本摘要分割结果
                     * @param _exactTextSegSet 用户指定的精确的文本摘要分割结果
                     * 
                     */
                    void SetExactTextSegSet(const std::vector<std::string>& _exactTextSegSet);

                    /**
                     * 判断参数 ExactTextSegSet 是否已赋值
                     * @return ExactTextSegSet 是否已赋值
                     * 
                     */
                    bool ExactTextSegSetHasBeenSet() const;

                    /**
                     * 获取用户指定的精确的镜头分割结果
                     * @return ExactShotSegSet 用户指定的精确的镜头分割结果
                     * 
                     */
                    std::vector<ShotInfo> GetExactShotSegSet() const;

                    /**
                     * 设置用户指定的精确的镜头分割结果
                     * @param _exactShotSegSet 用户指定的精确的镜头分割结果
                     * 
                     */
                    void SetExactShotSegSet(const std::vector<ShotInfo>& _exactShotSegSet);

                    /**
                     * 判断参数 ExactShotSegSet 是否已赋值
                     * @return ExactShotSegSet 是否已赋值
                     * 
                     */
                    bool ExactShotSegSetHasBeenSet() const;

                private:

                    /**
                     * 目前只支持 1，表示新闻缩编。
                     */
                    int64_t m_summaryType;
                    bool m_summaryTypeHasBeenSet;

                    /**
                     * 待处理的视频的URL，目前只支持*不带签名的*COS地址，长度最长1KB
                     */
                    std::string m_videoURL;
                    bool m_videoURLHasBeenSet;

                    /**
                     * 任务处理完成的回调地址。
                     */
                    std::string m_callbackURL;
                    bool m_callbackURLHasBeenSet;

                    /**
                     * 如果需要你输出 TTS 或者视频，该字段为转存的cos桶地址且不可为空; 示例：https://${Bucket}-${AppId}.cos.${Region}.myqcloud.com/${PathPrefix}/  (注意，cos路径需要以/分隔符结尾)。

                     */
                    std::string m_writeBackCosPath;
                    bool m_writeBackCosPathHasBeenSet;

                    /**
                     * 是否开启结果视频生成功能，如果开启，需要指定WriteBackCosPath 参数
                     */
                    bool m_activeVideoGenerate;
                    bool m_activeVideoGenerateHasBeenSet;

                    /**
                     * 生成结果视频的时候，控制生成的结果视频的横转竖参数。如果 ActiveVideoGenerate 为 false, 该参数无效。
                     */
                    VideoRotationMode m_videoRotationMode;
                    bool m_videoRotationModeHasBeenSet;

                    /**
                     * 语音合成相关的控制参数
                     */
                    TTSMode m_tTSMode;
                    bool m_tTSModeHasBeenSet;

                    /**
                     * 是否输出合成好的语音列表。
                     */
                    bool m_activeTTSOutput;
                    bool m_activeTTSOutputHasBeenSet;

                    /**
                     * 用户指定的精确的 asr 结果列表 
                     */
                    std::vector<AsrResult> m_exactAsrSet;
                    bool m_exactAsrSetHasBeenSet;

                    /**
                     * 用户指定的精确的文本摘要
                     */
                    std::string m_exactTextSummary;
                    bool m_exactTextSummaryHasBeenSet;

                    /**
                     * 用户指定的精确的文本摘要分割结果
                     */
                    std::vector<std::string> m_exactTextSegSet;
                    bool m_exactTextSegSetHasBeenSet;

                    /**
                     * 用户指定的精确的镜头分割结果
                     */
                    std::vector<ShotInfo> m_exactShotSegSet;
                    bool m_exactShotSegSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IVLD_V20210903_MODEL_CREATEVIDEOSUMMARYTASKREQUEST_H_
