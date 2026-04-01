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

#ifndef TENCENTCLOUD_FACEID_V20180301_MODEL_INTENTIONVERIFYDATA_H_
#define TENCENTCLOUD_FACEID_V20180301_MODEL_INTENTIONVERIFYDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Faceid
    {
        namespace V20180301
        {
            namespace Model
            {
                /**
                * 意愿核身朗读模式相关结果。
                */
                class IntentionVerifyData : public AbstractModel
                {
                public:
                    IntentionVerifyData();
                    ~IntentionVerifyData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>意愿确认环节中录制的视频（base64）。</p><ul><li>若不存在则为空字符串。</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IntentionVerifyVideo <p>意愿确认环节中录制的视频（base64）。</p><ul><li>若不存在则为空字符串。</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetIntentionVerifyVideo() const;

                    /**
                     * 设置<p>意愿确认环节中录制的视频（base64）。</p><ul><li>若不存在则为空字符串。</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _intentionVerifyVideo <p>意愿确认环节中录制的视频（base64）。</p><ul><li>若不存在则为空字符串。</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIntentionVerifyVideo(const std::string& _intentionVerifyVideo);

                    /**
                     * 判断参数 IntentionVerifyVideo 是否已赋值
                     * @return IntentionVerifyVideo 是否已赋值
                     * 
                     */
                    bool IntentionVerifyVideoHasBeenSet() const;

                    /**
                     * 获取<p>意愿确认环节中用户语音转文字的识别结果。</p><ul><li>若不存在则为空字符串。</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AsrResult <p>意愿确认环节中用户语音转文字的识别结果。</p><ul><li>若不存在则为空字符串。</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAsrResult() const;

                    /**
                     * 设置<p>意愿确认环节中用户语音转文字的识别结果。</p><ul><li>若不存在则为空字符串。</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _asrResult <p>意愿确认环节中用户语音转文字的识别结果。</p><ul><li>若不存在则为空字符串。</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAsrResult(const std::string& _asrResult);

                    /**
                     * 判断参数 AsrResult 是否已赋值
                     * @return AsrResult 是否已赋值
                     * 
                     */
                    bool AsrResultHasBeenSet() const;

                    /**
                     * 获取<p>意愿确认环节（朗读模式）的结果码。取值范围：<br>0: &quot;成功&quot;<br>-1: &quot;系统异常&quot;<br>-2: &quot;参数错误&quot;<br>-3:&quot;业务繁忙，请重试&quot;<br>-4：&quot;后端服务异常，请重试&quot;<br>-5：&quot;后端服务进房异常，请重试&quot;<br>-6：&quot;后端服务录制异常，请重试&quot;<br>-7：&quot;文件存储异常，请重试&quot;<br>-8：&quot;后端服务重复进房，请重试&quot;<br>-9：&quot;实时视频流异常，请重试&quot;<br>-10：&quot;语音识别失败，请重试&quot;<br>-11：&quot;流程已中断，请重试&quot;<br>-12：&quot;流程未完成，请重试&quot;<br>-13：&quot;token校验不通过，请重试&quot;<br>-14：&quot;流程已结束&quot;<br>-15:&quot;超过预设重试次数&quot;<br>-16:&quot;系统未知错误，请联系人工核实&quot;<br>-17:&quot;未检测到用户声音&quot;<br>3001:&quot;请保持人脸在框内&quot;<br>3002:&quot;检测到多张人脸&quot;<br>3003:&quot;人脸检测失败&quot;<br>3011:&quot;人脸比对相似度低&quot;<br>3012:&quot;人脸比对失败&quot;<br>-800: &quot;前端不兼容错误&quot;<br>-801: &quot;用户未授权摄像头和麦克风权限&quot;<br>-802: &quot;核验流程异常中断，请勿切屏或进行其他操作&quot;<br>-803: &quot;用户主动关闭链接/异常断开链接&quot;</p><p>说明：若在人脸核身过程失败、未进入意愿确认过程，则该参数返回为空，请参考人脸核身错误码结果（DetectInfoText.ErrCode）注意：此字段可能返回 null，表示取不到有效值。<br>示例值：0</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ErrorCode <p>意愿确认环节（朗读模式）的结果码。取值范围：<br>0: &quot;成功&quot;<br>-1: &quot;系统异常&quot;<br>-2: &quot;参数错误&quot;<br>-3:&quot;业务繁忙，请重试&quot;<br>-4：&quot;后端服务异常，请重试&quot;<br>-5：&quot;后端服务进房异常，请重试&quot;<br>-6：&quot;后端服务录制异常，请重试&quot;<br>-7：&quot;文件存储异常，请重试&quot;<br>-8：&quot;后端服务重复进房，请重试&quot;<br>-9：&quot;实时视频流异常，请重试&quot;<br>-10：&quot;语音识别失败，请重试&quot;<br>-11：&quot;流程已中断，请重试&quot;<br>-12：&quot;流程未完成，请重试&quot;<br>-13：&quot;token校验不通过，请重试&quot;<br>-14：&quot;流程已结束&quot;<br>-15:&quot;超过预设重试次数&quot;<br>-16:&quot;系统未知错误，请联系人工核实&quot;<br>-17:&quot;未检测到用户声音&quot;<br>3001:&quot;请保持人脸在框内&quot;<br>3002:&quot;检测到多张人脸&quot;<br>3003:&quot;人脸检测失败&quot;<br>3011:&quot;人脸比对相似度低&quot;<br>3012:&quot;人脸比对失败&quot;<br>-800: &quot;前端不兼容错误&quot;<br>-801: &quot;用户未授权摄像头和麦克风权限&quot;<br>-802: &quot;核验流程异常中断，请勿切屏或进行其他操作&quot;<br>-803: &quot;用户主动关闭链接/异常断开链接&quot;</p><p>说明：若在人脸核身过程失败、未进入意愿确认过程，则该参数返回为空，请参考人脸核身错误码结果（DetectInfoText.ErrCode）注意：此字段可能返回 null，表示取不到有效值。<br>示例值：0</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetErrorCode() const;

                    /**
                     * 设置<p>意愿确认环节（朗读模式）的结果码。取值范围：<br>0: &quot;成功&quot;<br>-1: &quot;系统异常&quot;<br>-2: &quot;参数错误&quot;<br>-3:&quot;业务繁忙，请重试&quot;<br>-4：&quot;后端服务异常，请重试&quot;<br>-5：&quot;后端服务进房异常，请重试&quot;<br>-6：&quot;后端服务录制异常，请重试&quot;<br>-7：&quot;文件存储异常，请重试&quot;<br>-8：&quot;后端服务重复进房，请重试&quot;<br>-9：&quot;实时视频流异常，请重试&quot;<br>-10：&quot;语音识别失败，请重试&quot;<br>-11：&quot;流程已中断，请重试&quot;<br>-12：&quot;流程未完成，请重试&quot;<br>-13：&quot;token校验不通过，请重试&quot;<br>-14：&quot;流程已结束&quot;<br>-15:&quot;超过预设重试次数&quot;<br>-16:&quot;系统未知错误，请联系人工核实&quot;<br>-17:&quot;未检测到用户声音&quot;<br>3001:&quot;请保持人脸在框内&quot;<br>3002:&quot;检测到多张人脸&quot;<br>3003:&quot;人脸检测失败&quot;<br>3011:&quot;人脸比对相似度低&quot;<br>3012:&quot;人脸比对失败&quot;<br>-800: &quot;前端不兼容错误&quot;<br>-801: &quot;用户未授权摄像头和麦克风权限&quot;<br>-802: &quot;核验流程异常中断，请勿切屏或进行其他操作&quot;<br>-803: &quot;用户主动关闭链接/异常断开链接&quot;</p><p>说明：若在人脸核身过程失败、未进入意愿确认过程，则该参数返回为空，请参考人脸核身错误码结果（DetectInfoText.ErrCode）注意：此字段可能返回 null，表示取不到有效值。<br>示例值：0</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _errorCode <p>意愿确认环节（朗读模式）的结果码。取值范围：<br>0: &quot;成功&quot;<br>-1: &quot;系统异常&quot;<br>-2: &quot;参数错误&quot;<br>-3:&quot;业务繁忙，请重试&quot;<br>-4：&quot;后端服务异常，请重试&quot;<br>-5：&quot;后端服务进房异常，请重试&quot;<br>-6：&quot;后端服务录制异常，请重试&quot;<br>-7：&quot;文件存储异常，请重试&quot;<br>-8：&quot;后端服务重复进房，请重试&quot;<br>-9：&quot;实时视频流异常，请重试&quot;<br>-10：&quot;语音识别失败，请重试&quot;<br>-11：&quot;流程已中断，请重试&quot;<br>-12：&quot;流程未完成，请重试&quot;<br>-13：&quot;token校验不通过，请重试&quot;<br>-14：&quot;流程已结束&quot;<br>-15:&quot;超过预设重试次数&quot;<br>-16:&quot;系统未知错误，请联系人工核实&quot;<br>-17:&quot;未检测到用户声音&quot;<br>3001:&quot;请保持人脸在框内&quot;<br>3002:&quot;检测到多张人脸&quot;<br>3003:&quot;人脸检测失败&quot;<br>3011:&quot;人脸比对相似度低&quot;<br>3012:&quot;人脸比对失败&quot;<br>-800: &quot;前端不兼容错误&quot;<br>-801: &quot;用户未授权摄像头和麦克风权限&quot;<br>-802: &quot;核验流程异常中断，请勿切屏或进行其他操作&quot;<br>-803: &quot;用户主动关闭链接/异常断开链接&quot;</p><p>说明：若在人脸核身过程失败、未进入意愿确认过程，则该参数返回为空，请参考人脸核身错误码结果（DetectInfoText.ErrCode）注意：此字段可能返回 null，表示取不到有效值。<br>示例值：0</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetErrorCode(const int64_t& _errorCode);

                    /**
                     * 判断参数 ErrorCode 是否已赋值
                     * @return ErrorCode 是否已赋值
                     * 
                     */
                    bool ErrorCodeHasBeenSet() const;

                    /**
                     * 获取<p>意愿确认环节的结果信息。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ErrorMessage <p>意愿确认环节的结果信息。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetErrorMessage() const;

                    /**
                     * 设置<p>意愿确认环节的结果信息。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _errorMessage <p>意愿确认环节的结果信息。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetErrorMessage(const std::string& _errorMessage);

                    /**
                     * 判断参数 ErrorMessage 是否已赋值
                     * @return ErrorMessage 是否已赋值
                     * 
                     */
                    bool ErrorMessageHasBeenSet() const;

                    /**
                     * 获取<p>意愿确认环节中录制视频的最佳帧（base64）。</p><ul><li>若不存在则为空字符串。</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IntentionVerifyBestFrame <p>意愿确认环节中录制视频的最佳帧（base64）。</p><ul><li>若不存在则为空字符串。</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetIntentionVerifyBestFrame() const;

                    /**
                     * 设置<p>意愿确认环节中录制视频的最佳帧（base64）。</p><ul><li>若不存在则为空字符串。</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _intentionVerifyBestFrame <p>意愿确认环节中录制视频的最佳帧（base64）。</p><ul><li>若不存在则为空字符串。</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIntentionVerifyBestFrame(const std::string& _intentionVerifyBestFrame);

                    /**
                     * 判断参数 IntentionVerifyBestFrame 是否已赋值
                     * @return IntentionVerifyBestFrame 是否已赋值
                     * 
                     */
                    bool IntentionVerifyBestFrameHasBeenSet() const;

                    /**
                     * 获取<p>本次流程用户语音与传入文本比对的相似度分值，取值范围 [0.00, 100.00]。只有配置了相似度阈值后才进行语音校验并返回相似度分值。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AsrResultSimilarity <p>本次流程用户语音与传入文本比对的相似度分值，取值范围 [0.00, 100.00]。只有配置了相似度阈值后才进行语音校验并返回相似度分值。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @deprecated
                     */
                    std::string GetAsrResultSimilarity() const;

                    /**
                     * 设置<p>本次流程用户语音与传入文本比对的相似度分值，取值范围 [0.00, 100.00]。只有配置了相似度阈值后才进行语音校验并返回相似度分值。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _asrResultSimilarity <p>本次流程用户语音与传入文本比对的相似度分值，取值范围 [0.00, 100.00]。只有配置了相似度阈值后才进行语音校验并返回相似度分值。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @deprecated
                     */
                    void SetAsrResultSimilarity(const std::string& _asrResultSimilarity);

                    /**
                     * 判断参数 AsrResultSimilarity 是否已赋值
                     * @return AsrResultSimilarity 是否已赋值
                     * @deprecated
                     */
                    bool AsrResultSimilarityHasBeenSet() const;

                    /**
                     * 获取<p>意愿确认环节中录制的音频（base64）。</p><ul><li>若不存在则为空字符串。</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IntentionVerifyAudio <p>意愿确认环节中录制的音频（base64）。</p><ul><li>若不存在则为空字符串。</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetIntentionVerifyAudio() const;

                    /**
                     * 设置<p>意愿确认环节中录制的音频（base64）。</p><ul><li>若不存在则为空字符串。</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _intentionVerifyAudio <p>意愿确认环节中录制的音频（base64）。</p><ul><li>若不存在则为空字符串。</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIntentionVerifyAudio(const std::string& _intentionVerifyAudio);

                    /**
                     * 判断参数 IntentionVerifyAudio 是否已赋值
                     * @return IntentionVerifyAudio 是否已赋值
                     * 
                     */
                    bool IntentionVerifyAudioHasBeenSet() const;

                private:

                    /**
                     * <p>意愿确认环节中录制的视频（base64）。</p><ul><li>若不存在则为空字符串。</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_intentionVerifyVideo;
                    bool m_intentionVerifyVideoHasBeenSet;

                    /**
                     * <p>意愿确认环节中用户语音转文字的识别结果。</p><ul><li>若不存在则为空字符串。</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_asrResult;
                    bool m_asrResultHasBeenSet;

                    /**
                     * <p>意愿确认环节（朗读模式）的结果码。取值范围：<br>0: &quot;成功&quot;<br>-1: &quot;系统异常&quot;<br>-2: &quot;参数错误&quot;<br>-3:&quot;业务繁忙，请重试&quot;<br>-4：&quot;后端服务异常，请重试&quot;<br>-5：&quot;后端服务进房异常，请重试&quot;<br>-6：&quot;后端服务录制异常，请重试&quot;<br>-7：&quot;文件存储异常，请重试&quot;<br>-8：&quot;后端服务重复进房，请重试&quot;<br>-9：&quot;实时视频流异常，请重试&quot;<br>-10：&quot;语音识别失败，请重试&quot;<br>-11：&quot;流程已中断，请重试&quot;<br>-12：&quot;流程未完成，请重试&quot;<br>-13：&quot;token校验不通过，请重试&quot;<br>-14：&quot;流程已结束&quot;<br>-15:&quot;超过预设重试次数&quot;<br>-16:&quot;系统未知错误，请联系人工核实&quot;<br>-17:&quot;未检测到用户声音&quot;<br>3001:&quot;请保持人脸在框内&quot;<br>3002:&quot;检测到多张人脸&quot;<br>3003:&quot;人脸检测失败&quot;<br>3011:&quot;人脸比对相似度低&quot;<br>3012:&quot;人脸比对失败&quot;<br>-800: &quot;前端不兼容错误&quot;<br>-801: &quot;用户未授权摄像头和麦克风权限&quot;<br>-802: &quot;核验流程异常中断，请勿切屏或进行其他操作&quot;<br>-803: &quot;用户主动关闭链接/异常断开链接&quot;</p><p>说明：若在人脸核身过程失败、未进入意愿确认过程，则该参数返回为空，请参考人脸核身错误码结果（DetectInfoText.ErrCode）注意：此字段可能返回 null，表示取不到有效值。<br>示例值：0</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_errorCode;
                    bool m_errorCodeHasBeenSet;

                    /**
                     * <p>意愿确认环节的结果信息。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_errorMessage;
                    bool m_errorMessageHasBeenSet;

                    /**
                     * <p>意愿确认环节中录制视频的最佳帧（base64）。</p><ul><li>若不存在则为空字符串。</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_intentionVerifyBestFrame;
                    bool m_intentionVerifyBestFrameHasBeenSet;

                    /**
                     * <p>本次流程用户语音与传入文本比对的相似度分值，取值范围 [0.00, 100.00]。只有配置了相似度阈值后才进行语音校验并返回相似度分值。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_asrResultSimilarity;
                    bool m_asrResultSimilarityHasBeenSet;

                    /**
                     * <p>意愿确认环节中录制的音频（base64）。</p><ul><li>若不存在则为空字符串。</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_intentionVerifyAudio;
                    bool m_intentionVerifyAudioHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEID_V20180301_MODEL_INTENTIONVERIFYDATA_H_
