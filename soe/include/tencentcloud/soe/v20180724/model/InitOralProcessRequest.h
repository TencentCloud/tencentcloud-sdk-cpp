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

#ifndef TENCENTCLOUD_SOE_V20180724_MODEL_INITORALPROCESSREQUEST_H_
#define TENCENTCLOUD_SOE_V20180724_MODEL_INITORALPROCESSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Soe
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * InitOralProcess请求参数结构体
                */
                class InitOralProcessRequest : public AbstractModel
                {
                public:
                    InitOralProcessRequest();
                    ~InitOralProcessRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取语音段唯一标识，一段语音一个SessionId
                     * @return SessionId 语音段唯一标识，一段语音一个SessionId
                     */
                    std::string GetSessionId() const;

                    /**
                     * 设置语音段唯一标识，一段语音一个SessionId
                     * @param SessionId 语音段唯一标识，一段语音一个SessionId
                     */
                    void SetSessionId(const std::string& _sessionId);

                    /**
                     * 判断参数 SessionId 是否已赋值
                     * @return SessionId 是否已赋值
                     */
                    bool SessionIdHasBeenSet() const;

                    /**
                     * 获取被评估语音对应的文本，句子模式下不超过个 20 单词或者中文文字，段落模式不超过 120 单词或者中文文字，中文评估使用 utf-8 编码，自由说模式该值传空。如需要在单词模式和句子模式下使用自定义音素，可以通过设置 TextMode 使用[音素标注](https://cloud.tencent.com/document/product/884/33698)。
                     * @return RefText 被评估语音对应的文本，句子模式下不超过个 20 单词或者中文文字，段落模式不超过 120 单词或者中文文字，中文评估使用 utf-8 编码，自由说模式该值传空。如需要在单词模式和句子模式下使用自定义音素，可以通过设置 TextMode 使用[音素标注](https://cloud.tencent.com/document/product/884/33698)。
                     */
                    std::string GetRefText() const;

                    /**
                     * 设置被评估语音对应的文本，句子模式下不超过个 20 单词或者中文文字，段落模式不超过 120 单词或者中文文字，中文评估使用 utf-8 编码，自由说模式该值传空。如需要在单词模式和句子模式下使用自定义音素，可以通过设置 TextMode 使用[音素标注](https://cloud.tencent.com/document/product/884/33698)。
                     * @param RefText 被评估语音对应的文本，句子模式下不超过个 20 单词或者中文文字，段落模式不超过 120 单词或者中文文字，中文评估使用 utf-8 编码，自由说模式该值传空。如需要在单词模式和句子模式下使用自定义音素，可以通过设置 TextMode 使用[音素标注](https://cloud.tencent.com/document/product/884/33698)。
                     */
                    void SetRefText(const std::string& _refText);

                    /**
                     * 判断参数 RefText 是否已赋值
                     * @return RefText 是否已赋值
                     */
                    bool RefTextHasBeenSet() const;

                    /**
                     * 获取语音输入模式，0：流式分片，1：非流式一次性评估
                     * @return WorkMode 语音输入模式，0：流式分片，1：非流式一次性评估
                     */
                    int64_t GetWorkMode() const;

                    /**
                     * 设置语音输入模式，0：流式分片，1：非流式一次性评估
                     * @param WorkMode 语音输入模式，0：流式分片，1：非流式一次性评估
                     */
                    void SetWorkMode(const int64_t& _workMode);

                    /**
                     * 判断参数 WorkMode 是否已赋值
                     * @return WorkMode 是否已赋值
                     */
                    bool WorkModeHasBeenSet() const;

                    /**
                     * 获取评估模式，0：词模式（中文评测模式下为文字模式），1：句子模式，2：段落模式，3：自由说模式，当为词模式评估时，能够提供每个音节的评估信息，当为句子模式时，能够提供完整度和流利度信息。4: 英文单词音素诊断评测模式，针对一个单词音素诊断评测。
                     * @return EvalMode 评估模式，0：词模式（中文评测模式下为文字模式），1：句子模式，2：段落模式，3：自由说模式，当为词模式评估时，能够提供每个音节的评估信息，当为句子模式时，能够提供完整度和流利度信息。4: 英文单词音素诊断评测模式，针对一个单词音素诊断评测。
                     */
                    int64_t GetEvalMode() const;

                    /**
                     * 设置评估模式，0：词模式（中文评测模式下为文字模式），1：句子模式，2：段落模式，3：自由说模式，当为词模式评估时，能够提供每个音节的评估信息，当为句子模式时，能够提供完整度和流利度信息。4: 英文单词音素诊断评测模式，针对一个单词音素诊断评测。
                     * @param EvalMode 评估模式，0：词模式（中文评测模式下为文字模式），1：句子模式，2：段落模式，3：自由说模式，当为词模式评估时，能够提供每个音节的评估信息，当为句子模式时，能够提供完整度和流利度信息。4: 英文单词音素诊断评测模式，针对一个单词音素诊断评测。
                     */
                    void SetEvalMode(const int64_t& _evalMode);

                    /**
                     * 判断参数 EvalMode 是否已赋值
                     * @return EvalMode 是否已赋值
                     */
                    bool EvalModeHasBeenSet() const;

                    /**
                     * 获取评价苛刻指数，取值为[1.0 - 4.0]范围内的浮点数，用于平滑不同年龄段的分数，1.0为小年龄段，4.0为最高年龄段
                     * @return ScoreCoeff 评价苛刻指数，取值为[1.0 - 4.0]范围内的浮点数，用于平滑不同年龄段的分数，1.0为小年龄段，4.0为最高年龄段
                     */
                    double GetScoreCoeff() const;

                    /**
                     * 设置评价苛刻指数，取值为[1.0 - 4.0]范围内的浮点数，用于平滑不同年龄段的分数，1.0为小年龄段，4.0为最高年龄段
                     * @param ScoreCoeff 评价苛刻指数，取值为[1.0 - 4.0]范围内的浮点数，用于平滑不同年龄段的分数，1.0为小年龄段，4.0为最高年龄段
                     */
                    void SetScoreCoeff(const double& _scoreCoeff);

                    /**
                     * 判断参数 ScoreCoeff 是否已赋值
                     * @return ScoreCoeff 是否已赋值
                     */
                    bool ScoreCoeffHasBeenSet() const;

                    /**
                     * 获取业务应用ID，与账号应用APPID无关，是用来方便客户管理服务的参数，新的 SoeAppId 可以在[控制台](https://console.cloud.tencent.com/soe)【应用管理】下新建。
                     * @return SoeAppId 业务应用ID，与账号应用APPID无关，是用来方便客户管理服务的参数，新的 SoeAppId 可以在[控制台](https://console.cloud.tencent.com/soe)【应用管理】下新建。
                     */
                    std::string GetSoeAppId() const;

                    /**
                     * 设置业务应用ID，与账号应用APPID无关，是用来方便客户管理服务的参数，新的 SoeAppId 可以在[控制台](https://console.cloud.tencent.com/soe)【应用管理】下新建。
                     * @param SoeAppId 业务应用ID，与账号应用APPID无关，是用来方便客户管理服务的参数，新的 SoeAppId 可以在[控制台](https://console.cloud.tencent.com/soe)【应用管理】下新建。
                     */
                    void SetSoeAppId(const std::string& _soeAppId);

                    /**
                     * 判断参数 SoeAppId 是否已赋值
                     * @return SoeAppId 是否已赋值
                     */
                    bool SoeAppIdHasBeenSet() const;

                    /**
                     * 获取长效session标识，当该参数为1时，session的持续时间为300s，但会一定程度上影响第一个数据包的返回速度，且TransmitOralProcess必须同时为1才可生效。
                     * @return IsLongLifeSession 长效session标识，当该参数为1时，session的持续时间为300s，但会一定程度上影响第一个数据包的返回速度，且TransmitOralProcess必须同时为1才可生效。
                     */
                    int64_t GetIsLongLifeSession() const;

                    /**
                     * 设置长效session标识，当该参数为1时，session的持续时间为300s，但会一定程度上影响第一个数据包的返回速度，且TransmitOralProcess必须同时为1才可生效。
                     * @param IsLongLifeSession 长效session标识，当该参数为1时，session的持续时间为300s，但会一定程度上影响第一个数据包的返回速度，且TransmitOralProcess必须同时为1才可生效。
                     */
                    void SetIsLongLifeSession(const int64_t& _isLongLifeSession);

                    /**
                     * 判断参数 IsLongLifeSession 是否已赋值
                     * @return IsLongLifeSession 是否已赋值
                     */
                    bool IsLongLifeSessionHasBeenSet() const;

                    /**
                     * 获取音频存储模式，0：不存储，1：存储到公共对象存储，输出结果为该会话最后一个分片TransmitOralProcess 返回结果 AudioUrl 字段，2：永久存储音频，需要提工单申请，会产生一定存储费用，3：自定义存储，将音频存储到自定义的腾讯云[对象存储](https://cloud.tencent.com/product/cos)中，需要提工单登记存储信息。
                     * @return StorageMode 音频存储模式，0：不存储，1：存储到公共对象存储，输出结果为该会话最后一个分片TransmitOralProcess 返回结果 AudioUrl 字段，2：永久存储音频，需要提工单申请，会产生一定存储费用，3：自定义存储，将音频存储到自定义的腾讯云[对象存储](https://cloud.tencent.com/product/cos)中，需要提工单登记存储信息。
                     */
                    int64_t GetStorageMode() const;

                    /**
                     * 设置音频存储模式，0：不存储，1：存储到公共对象存储，输出结果为该会话最后一个分片TransmitOralProcess 返回结果 AudioUrl 字段，2：永久存储音频，需要提工单申请，会产生一定存储费用，3：自定义存储，将音频存储到自定义的腾讯云[对象存储](https://cloud.tencent.com/product/cos)中，需要提工单登记存储信息。
                     * @param StorageMode 音频存储模式，0：不存储，1：存储到公共对象存储，输出结果为该会话最后一个分片TransmitOralProcess 返回结果 AudioUrl 字段，2：永久存储音频，需要提工单申请，会产生一定存储费用，3：自定义存储，将音频存储到自定义的腾讯云[对象存储](https://cloud.tencent.com/product/cos)中，需要提工单登记存储信息。
                     */
                    void SetStorageMode(const int64_t& _storageMode);

                    /**
                     * 判断参数 StorageMode 是否已赋值
                     * @return StorageMode 是否已赋值
                     */
                    bool StorageModeHasBeenSet() const;

                    /**
                     * 获取输出断句中间结果标识，0：不输出，1：输出，通过设置该参数，可以在评估过程中的分片传输请求中，返回已经评估断句的中间结果，中间结果可用于客户端 UI 更新，输出结果为TransmitOralProcess请求返回结果 SentenceInfoSet 字段。
                     * @return SentenceInfoEnabled 输出断句中间结果标识，0：不输出，1：输出，通过设置该参数，可以在评估过程中的分片传输请求中，返回已经评估断句的中间结果，中间结果可用于客户端 UI 更新，输出结果为TransmitOralProcess请求返回结果 SentenceInfoSet 字段。
                     */
                    int64_t GetSentenceInfoEnabled() const;

                    /**
                     * 设置输出断句中间结果标识，0：不输出，1：输出，通过设置该参数，可以在评估过程中的分片传输请求中，返回已经评估断句的中间结果，中间结果可用于客户端 UI 更新，输出结果为TransmitOralProcess请求返回结果 SentenceInfoSet 字段。
                     * @param SentenceInfoEnabled 输出断句中间结果标识，0：不输出，1：输出，通过设置该参数，可以在评估过程中的分片传输请求中，返回已经评估断句的中间结果，中间结果可用于客户端 UI 更新，输出结果为TransmitOralProcess请求返回结果 SentenceInfoSet 字段。
                     */
                    void SetSentenceInfoEnabled(const int64_t& _sentenceInfoEnabled);

                    /**
                     * 判断参数 SentenceInfoEnabled 是否已赋值
                     * @return SentenceInfoEnabled 是否已赋值
                     */
                    bool SentenceInfoEnabledHasBeenSet() const;

                    /**
                     * 获取评估语言，0：英文，1：中文。
                     * @return ServerType 评估语言，0：英文，1：中文。
                     */
                    int64_t GetServerType() const;

                    /**
                     * 设置评估语言，0：英文，1：中文。
                     * @param ServerType 评估语言，0：英文，1：中文。
                     */
                    void SetServerType(const int64_t& _serverType);

                    /**
                     * 判断参数 ServerType 是否已赋值
                     * @return ServerType 是否已赋值
                     */
                    bool ServerTypeHasBeenSet() const;

                    /**
                     * 获取异步模式标识，0：同步模式，1：异步模式，可选值参考[服务模式](https://cloud.tencent.com/document/product/884/33697)。
                     * @return IsAsync 异步模式标识，0：同步模式，1：异步模式，可选值参考[服务模式](https://cloud.tencent.com/document/product/884/33697)。
                     */
                    int64_t GetIsAsync() const;

                    /**
                     * 设置异步模式标识，0：同步模式，1：异步模式，可选值参考[服务模式](https://cloud.tencent.com/document/product/884/33697)。
                     * @param IsAsync 异步模式标识，0：同步模式，1：异步模式，可选值参考[服务模式](https://cloud.tencent.com/document/product/884/33697)。
                     */
                    void SetIsAsync(const int64_t& _isAsync);

                    /**
                     * 判断参数 IsAsync 是否已赋值
                     * @return IsAsync 是否已赋值
                     */
                    bool IsAsyncHasBeenSet() const;

                    /**
                     * 获取输入文本模式，0: 普通文本，1：[音素结构](https://cloud.tencent.com/document/product/884/33698)文本。2：音素注册模式（提工单注册需要使用音素的单词）。
                     * @return TextMode 输入文本模式，0: 普通文本，1：[音素结构](https://cloud.tencent.com/document/product/884/33698)文本。2：音素注册模式（提工单注册需要使用音素的单词）。
                     */
                    int64_t GetTextMode() const;

                    /**
                     * 设置输入文本模式，0: 普通文本，1：[音素结构](https://cloud.tencent.com/document/product/884/33698)文本。2：音素注册模式（提工单注册需要使用音素的单词）。
                     * @param TextMode 输入文本模式，0: 普通文本，1：[音素结构](https://cloud.tencent.com/document/product/884/33698)文本。2：音素注册模式（提工单注册需要使用音素的单词）。
                     */
                    void SetTextMode(const int64_t& _textMode);

                    /**
                     * 判断参数 TextMode 是否已赋值
                     * @return TextMode 是否已赋值
                     */
                    bool TextModeHasBeenSet() const;

                private:

                    /**
                     * 语音段唯一标识，一段语音一个SessionId
                     */
                    std::string m_sessionId;
                    bool m_sessionIdHasBeenSet;

                    /**
                     * 被评估语音对应的文本，句子模式下不超过个 20 单词或者中文文字，段落模式不超过 120 单词或者中文文字，中文评估使用 utf-8 编码，自由说模式该值传空。如需要在单词模式和句子模式下使用自定义音素，可以通过设置 TextMode 使用[音素标注](https://cloud.tencent.com/document/product/884/33698)。
                     */
                    std::string m_refText;
                    bool m_refTextHasBeenSet;

                    /**
                     * 语音输入模式，0：流式分片，1：非流式一次性评估
                     */
                    int64_t m_workMode;
                    bool m_workModeHasBeenSet;

                    /**
                     * 评估模式，0：词模式（中文评测模式下为文字模式），1：句子模式，2：段落模式，3：自由说模式，当为词模式评估时，能够提供每个音节的评估信息，当为句子模式时，能够提供完整度和流利度信息。4: 英文单词音素诊断评测模式，针对一个单词音素诊断评测。
                     */
                    int64_t m_evalMode;
                    bool m_evalModeHasBeenSet;

                    /**
                     * 评价苛刻指数，取值为[1.0 - 4.0]范围内的浮点数，用于平滑不同年龄段的分数，1.0为小年龄段，4.0为最高年龄段
                     */
                    double m_scoreCoeff;
                    bool m_scoreCoeffHasBeenSet;

                    /**
                     * 业务应用ID，与账号应用APPID无关，是用来方便客户管理服务的参数，新的 SoeAppId 可以在[控制台](https://console.cloud.tencent.com/soe)【应用管理】下新建。
                     */
                    std::string m_soeAppId;
                    bool m_soeAppIdHasBeenSet;

                    /**
                     * 长效session标识，当该参数为1时，session的持续时间为300s，但会一定程度上影响第一个数据包的返回速度，且TransmitOralProcess必须同时为1才可生效。
                     */
                    int64_t m_isLongLifeSession;
                    bool m_isLongLifeSessionHasBeenSet;

                    /**
                     * 音频存储模式，0：不存储，1：存储到公共对象存储，输出结果为该会话最后一个分片TransmitOralProcess 返回结果 AudioUrl 字段，2：永久存储音频，需要提工单申请，会产生一定存储费用，3：自定义存储，将音频存储到自定义的腾讯云[对象存储](https://cloud.tencent.com/product/cos)中，需要提工单登记存储信息。
                     */
                    int64_t m_storageMode;
                    bool m_storageModeHasBeenSet;

                    /**
                     * 输出断句中间结果标识，0：不输出，1：输出，通过设置该参数，可以在评估过程中的分片传输请求中，返回已经评估断句的中间结果，中间结果可用于客户端 UI 更新，输出结果为TransmitOralProcess请求返回结果 SentenceInfoSet 字段。
                     */
                    int64_t m_sentenceInfoEnabled;
                    bool m_sentenceInfoEnabledHasBeenSet;

                    /**
                     * 评估语言，0：英文，1：中文。
                     */
                    int64_t m_serverType;
                    bool m_serverTypeHasBeenSet;

                    /**
                     * 异步模式标识，0：同步模式，1：异步模式，可选值参考[服务模式](https://cloud.tencent.com/document/product/884/33697)。
                     */
                    int64_t m_isAsync;
                    bool m_isAsyncHasBeenSet;

                    /**
                     * 输入文本模式，0: 普通文本，1：[音素结构](https://cloud.tencent.com/document/product/884/33698)文本。2：音素注册模式（提工单注册需要使用音素的单词）。
                     */
                    int64_t m_textMode;
                    bool m_textModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SOE_V20180724_MODEL_INITORALPROCESSREQUEST_H_
