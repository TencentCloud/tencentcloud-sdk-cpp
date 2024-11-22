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

#ifndef TENCENTCLOUD_FACEID_V20180301_MODEL_INTENTIONQUESTIONRESULT_H_
#define TENCENTCLOUD_FACEID_V20180301_MODEL_INTENTIONQUESTIONRESULT_H_

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
                * 意愿核身问答模式结果。
                */
                class IntentionQuestionResult : public AbstractModel
                {
                public:
                    IntentionQuestionResult();
                    ~IntentionQuestionResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取意愿核身错误码。
- 取值范围：
    0: "成功"       
    -1: "参数错误"    
    -2: "系统异常"    
    -101: "请保持人脸在框内"    
    -102: "检测到多张人脸"   
    -103: "人脸检测失败"   
    -104: "人脸检测不完整"   
    -105: "请勿遮挡眼睛"    
    -106: "请勿遮挡嘴巴"     
    -107: "请勿遮挡鼻子"     
    -201: "人脸比对相似度低"    
    -202: "人脸比对失败"    
    -301: "意愿核验不通过"       
    -302: "用户回答阶段未检测到张嘴动作"  
    -800: "前端不兼容错误"    
    -801: "用户未授权摄像头和麦克风权限"   
    -802: "核验流程异常中断，请勿切屏或进行其他操作"   
    -803: "用户主动关闭链接/异常断开链接"   
    -804: "用户当前网络不稳定，请重试"
    -998: "系统数据异常"   
    -999: "系统未知错误，请联系人工核实"   
- 若在人脸核身过程失败、未进入意愿确认过程，则该参数返回为空，请参考人脸核身错误码结果（DetectInfoText.ErrCode)
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FinalResultDetailCode 意愿核身错误码。
- 取值范围：
    0: "成功"       
    -1: "参数错误"    
    -2: "系统异常"    
    -101: "请保持人脸在框内"    
    -102: "检测到多张人脸"   
    -103: "人脸检测失败"   
    -104: "人脸检测不完整"   
    -105: "请勿遮挡眼睛"    
    -106: "请勿遮挡嘴巴"     
    -107: "请勿遮挡鼻子"     
    -201: "人脸比对相似度低"    
    -202: "人脸比对失败"    
    -301: "意愿核验不通过"       
    -302: "用户回答阶段未检测到张嘴动作"  
    -800: "前端不兼容错误"    
    -801: "用户未授权摄像头和麦克风权限"   
    -802: "核验流程异常中断，请勿切屏或进行其他操作"   
    -803: "用户主动关闭链接/异常断开链接"   
    -804: "用户当前网络不稳定，请重试"
    -998: "系统数据异常"   
    -999: "系统未知错误，请联系人工核实"   
- 若在人脸核身过程失败、未进入意愿确认过程，则该参数返回为空，请参考人脸核身错误码结果（DetectInfoText.ErrCode)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetFinalResultDetailCode() const;

                    /**
                     * 设置意愿核身错误码。
- 取值范围：
    0: "成功"       
    -1: "参数错误"    
    -2: "系统异常"    
    -101: "请保持人脸在框内"    
    -102: "检测到多张人脸"   
    -103: "人脸检测失败"   
    -104: "人脸检测不完整"   
    -105: "请勿遮挡眼睛"    
    -106: "请勿遮挡嘴巴"     
    -107: "请勿遮挡鼻子"     
    -201: "人脸比对相似度低"    
    -202: "人脸比对失败"    
    -301: "意愿核验不通过"       
    -302: "用户回答阶段未检测到张嘴动作"  
    -800: "前端不兼容错误"    
    -801: "用户未授权摄像头和麦克风权限"   
    -802: "核验流程异常中断，请勿切屏或进行其他操作"   
    -803: "用户主动关闭链接/异常断开链接"   
    -804: "用户当前网络不稳定，请重试"
    -998: "系统数据异常"   
    -999: "系统未知错误，请联系人工核实"   
- 若在人脸核身过程失败、未进入意愿确认过程，则该参数返回为空，请参考人脸核身错误码结果（DetectInfoText.ErrCode)
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _finalResultDetailCode 意愿核身错误码。
- 取值范围：
    0: "成功"       
    -1: "参数错误"    
    -2: "系统异常"    
    -101: "请保持人脸在框内"    
    -102: "检测到多张人脸"   
    -103: "人脸检测失败"   
    -104: "人脸检测不完整"   
    -105: "请勿遮挡眼睛"    
    -106: "请勿遮挡嘴巴"     
    -107: "请勿遮挡鼻子"     
    -201: "人脸比对相似度低"    
    -202: "人脸比对失败"    
    -301: "意愿核验不通过"       
    -302: "用户回答阶段未检测到张嘴动作"  
    -800: "前端不兼容错误"    
    -801: "用户未授权摄像头和麦克风权限"   
    -802: "核验流程异常中断，请勿切屏或进行其他操作"   
    -803: "用户主动关闭链接/异常断开链接"   
    -804: "用户当前网络不稳定，请重试"
    -998: "系统数据异常"   
    -999: "系统未知错误，请联系人工核实"   
- 若在人脸核身过程失败、未进入意愿确认过程，则该参数返回为空，请参考人脸核身错误码结果（DetectInfoText.ErrCode)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFinalResultDetailCode(const int64_t& _finalResultDetailCode);

                    /**
                     * 判断参数 FinalResultDetailCode 是否已赋值
                     * @return FinalResultDetailCode 是否已赋值
                     * 
                     */
                    bool FinalResultDetailCodeHasBeenSet() const;

                    /**
                     * 获取意愿核身错误信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FinalResultMessage 意愿核身错误信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFinalResultMessage() const;

                    /**
                     * 设置意愿核身错误信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _finalResultMessage 意愿核身错误信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFinalResultMessage(const std::string& _finalResultMessage);

                    /**
                     * 判断参数 FinalResultMessage 是否已赋值
                     * @return FinalResultMessage 是否已赋值
                     * 
                     */
                    bool FinalResultMessageHasBeenSet() const;

                    /**
                     * 获取视频base64。
- 其中包含全程问题和回答音频，mp4格式。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Video 视频base64。
- 其中包含全程问题和回答音频，mp4格式。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetVideo() const;

                    /**
                     * 设置视频base64。
- 其中包含全程问题和回答音频，mp4格式。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _video 视频base64。
- 其中包含全程问题和回答音频，mp4格式。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetVideo(const std::string& _video);

                    /**
                     * 判断参数 Video 是否已赋值
                     * @return Video 是否已赋值
                     * 
                     */
                    bool VideoHasBeenSet() const;

                    /**
                     * 获取屏幕截图base64列表。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ScreenShot 屏幕截图base64列表。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetScreenShot() const;

                    /**
                     * 设置屏幕截图base64列表。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _screenShot 屏幕截图base64列表。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetScreenShot(const std::vector<std::string>& _screenShot);

                    /**
                     * 判断参数 ScreenShot 是否已赋值
                     * @return ScreenShot 是否已赋值
                     * 
                     */
                    bool ScreenShotHasBeenSet() const;

                    /**
                     * 获取和答案匹配结果列表。
- 取值范围（0：成功；-1：不匹配）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResultCode 和答案匹配结果列表。
- 取值范围（0：成功；-1：不匹配）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetResultCode() const;

                    /**
                     * 设置和答案匹配结果列表。
- 取值范围（0：成功；-1：不匹配）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _resultCode 和答案匹配结果列表。
- 取值范围（0：成功；-1：不匹配）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetResultCode(const std::vector<std::string>& _resultCode);

                    /**
                     * 判断参数 ResultCode 是否已赋值
                     * @return ResultCode 是否已赋值
                     * 
                     */
                    bool ResultCodeHasBeenSet() const;

                    /**
                     * 获取回答问题语音识别结果列表。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AsrResult 回答问题语音识别结果列表。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetAsrResult() const;

                    /**
                     * 设置回答问题语音识别结果列表。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _asrResult 回答问题语音识别结果列表。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAsrResult(const std::vector<std::string>& _asrResult);

                    /**
                     * 判断参数 AsrResult 是否已赋值
                     * @return AsrResult 是否已赋值
                     * 
                     */
                    bool AsrResultHasBeenSet() const;

                    /**
                     * 获取答案录音音频。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Audios 答案录音音频。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetAudios() const;

                    /**
                     * 设置答案录音音频。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _audios 答案录音音频。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAudios(const std::vector<std::string>& _audios);

                    /**
                     * 判断参数 Audios 是否已赋值
                     * @return Audios 是否已赋值
                     * 
                     */
                    bool AudiosHasBeenSet() const;

                    /**
                     * 获取意愿核身最终结果。
- 取值范围：
0：认证通过。
-1：认证未通过。
-2：浏览器内核不兼容，无法进行意愿校验。
- 建议使用“FinalResultDetailCode”参数获取详细的错误码信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FinalResultCode 意愿核身最终结果。
- 取值范围：
0：认证通过。
-1：认证未通过。
-2：浏览器内核不兼容，无法进行意愿校验。
- 建议使用“FinalResultDetailCode”参数获取详细的错误码信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFinalResultCode() const;

                    /**
                     * 设置意愿核身最终结果。
- 取值范围：
0：认证通过。
-1：认证未通过。
-2：浏览器内核不兼容，无法进行意愿校验。
- 建议使用“FinalResultDetailCode”参数获取详细的错误码信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _finalResultCode 意愿核身最终结果。
- 取值范围：
0：认证通过。
-1：认证未通过。
-2：浏览器内核不兼容，无法进行意愿校验。
- 建议使用“FinalResultDetailCode”参数获取详细的错误码信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFinalResultCode(const std::string& _finalResultCode);

                    /**
                     * 判断参数 FinalResultCode 是否已赋值
                     * @return FinalResultCode 是否已赋值
                     * 
                     */
                    bool FinalResultCodeHasBeenSet() const;

                private:

                    /**
                     * 意愿核身错误码。
- 取值范围：
    0: "成功"       
    -1: "参数错误"    
    -2: "系统异常"    
    -101: "请保持人脸在框内"    
    -102: "检测到多张人脸"   
    -103: "人脸检测失败"   
    -104: "人脸检测不完整"   
    -105: "请勿遮挡眼睛"    
    -106: "请勿遮挡嘴巴"     
    -107: "请勿遮挡鼻子"     
    -201: "人脸比对相似度低"    
    -202: "人脸比对失败"    
    -301: "意愿核验不通过"       
    -302: "用户回答阶段未检测到张嘴动作"  
    -800: "前端不兼容错误"    
    -801: "用户未授权摄像头和麦克风权限"   
    -802: "核验流程异常中断，请勿切屏或进行其他操作"   
    -803: "用户主动关闭链接/异常断开链接"   
    -804: "用户当前网络不稳定，请重试"
    -998: "系统数据异常"   
    -999: "系统未知错误，请联系人工核实"   
- 若在人脸核身过程失败、未进入意愿确认过程，则该参数返回为空，请参考人脸核身错误码结果（DetectInfoText.ErrCode)
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_finalResultDetailCode;
                    bool m_finalResultDetailCodeHasBeenSet;

                    /**
                     * 意愿核身错误信息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_finalResultMessage;
                    bool m_finalResultMessageHasBeenSet;

                    /**
                     * 视频base64。
- 其中包含全程问题和回答音频，mp4格式。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_video;
                    bool m_videoHasBeenSet;

                    /**
                     * 屏幕截图base64列表。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_screenShot;
                    bool m_screenShotHasBeenSet;

                    /**
                     * 和答案匹配结果列表。
- 取值范围（0：成功；-1：不匹配）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_resultCode;
                    bool m_resultCodeHasBeenSet;

                    /**
                     * 回答问题语音识别结果列表。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_asrResult;
                    bool m_asrResultHasBeenSet;

                    /**
                     * 答案录音音频。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_audios;
                    bool m_audiosHasBeenSet;

                    /**
                     * 意愿核身最终结果。
- 取值范围：
0：认证通过。
-1：认证未通过。
-2：浏览器内核不兼容，无法进行意愿校验。
- 建议使用“FinalResultDetailCode”参数获取详细的错误码信息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_finalResultCode;
                    bool m_finalResultCodeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEID_V20180301_MODEL_INTENTIONQUESTIONRESULT_H_
