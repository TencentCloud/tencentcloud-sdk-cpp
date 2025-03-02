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

#ifndef TENCENTCLOUD_ESSBASIC_V20210526_MODEL_INTENTIONQUESTIONRESULT_H_
#define TENCENTCLOUD_ESSBASIC_V20210526_MODEL_INTENTIONQUESTIONRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Essbasic
    {
        namespace V20210526
        {
            namespace Model
            {
                /**
                * 意愿核身问答模式结果。若未使用该意愿核身功能，该字段返回值可以不处理。
                */
                class IntentionQuestionResult : public AbstractModel
                {
                public:
                    IntentionQuestionResult();
                    ~IntentionQuestionResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取视频base64（其中包含全程问题和回答音频，mp4格式）

注：`需进行base64解码获取视频文件`
                     * @return Video 视频base64（其中包含全程问题和回答音频，mp4格式）

注：`需进行base64解码获取视频文件`
                     * 
                     */
                    std::string GetVideo() const;

                    /**
                     * 设置视频base64（其中包含全程问题和回答音频，mp4格式）

注：`需进行base64解码获取视频文件`
                     * @param _video 视频base64（其中包含全程问题和回答音频，mp4格式）

注：`需进行base64解码获取视频文件`
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
                     * 获取 和答案匹配结果列表
                     * @return ResultCode  和答案匹配结果列表
                     * 
                     */
                    std::vector<std::string> GetResultCode() const;

                    /**
                     * 设置 和答案匹配结果列表
                     * @param _resultCode  和答案匹配结果列表
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
                     * 获取回答问题语音识别结果列表
                     * @return AsrResult 回答问题语音识别结果列表
                     * 
                     */
                    std::vector<std::string> GetAsrResult() const;

                    /**
                     * 设置回答问题语音识别结果列表
                     * @param _asrResult 回答问题语音识别结果列表
                     * 
                     */
                    void SetAsrResult(const std::vector<std::string>& _asrResult);

                    /**
                     * 判断参数 AsrResult 是否已赋值
                     * @return AsrResult 是否已赋值
                     * 
                     */
                    bool AsrResultHasBeenSet() const;

                private:

                    /**
                     * 视频base64（其中包含全程问题和回答音频，mp4格式）

注：`需进行base64解码获取视频文件`
                     */
                    std::string m_video;
                    bool m_videoHasBeenSet;

                    /**
                     *  和答案匹配结果列表
                     */
                    std::vector<std::string> m_resultCode;
                    bool m_resultCodeHasBeenSet;

                    /**
                     * 回答问题语音识别结果列表
                     */
                    std::vector<std::string> m_asrResult;
                    bool m_asrResultHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20210526_MODEL_INTENTIONQUESTIONRESULT_H_
