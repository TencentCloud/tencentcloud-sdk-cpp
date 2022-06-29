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
                     * 获取语音段唯一标识，一段完整语音使用一个SessionId，不同语音段的评测需要使用不同的SessionId。一般使用uuid(通用唯一识别码)来作为它的值，要尽量保证SessionId的唯一性。
                     * @return SessionId 语音段唯一标识，一段完整语音使用一个SessionId，不同语音段的评测需要使用不同的SessionId。一般使用uuid(通用唯一识别码)来作为它的值，要尽量保证SessionId的唯一性。
                     */
                    std::string GetSessionId() const;

                    /**
                     * 设置语音段唯一标识，一段完整语音使用一个SessionId，不同语音段的评测需要使用不同的SessionId。一般使用uuid(通用唯一识别码)来作为它的值，要尽量保证SessionId的唯一性。
                     * @param SessionId 语音段唯一标识，一段完整语音使用一个SessionId，不同语音段的评测需要使用不同的SessionId。一般使用uuid(通用唯一识别码)来作为它的值，要尽量保证SessionId的唯一性。
                     */
                    void SetSessionId(const std::string& _sessionId);

                    /**
                     * 判断参数 SessionId 是否已赋值
                     * @return SessionId 是否已赋值
                     */
                    bool SessionIdHasBeenSet() const;

                    /**
                     * 获取被评估语音对应的文本，仅支持中文和英文。
句子模式下不超过个 30 单词或者中文文字，段落模式不超过 120 单词或者中文文字，中文评估使用 utf-8 编码，自由说模式RefText可以不填。
关于RefText的文本键入要求，请参考[评测模式介绍](https://cloud.tencent.com/document/product/884/56131)。
如需要在评测模式下使用自定义注音（支持中英文），可以通过设置「TextMode」参数实现，设置方式请参考[音素标注](https://cloud.tencent.com/document/product/884/33698)。
                     * @return RefText 被评估语音对应的文本，仅支持中文和英文。
句子模式下不超过个 30 单词或者中文文字，段落模式不超过 120 单词或者中文文字，中文评估使用 utf-8 编码，自由说模式RefText可以不填。
关于RefText的文本键入要求，请参考[评测模式介绍](https://cloud.tencent.com/document/product/884/56131)。
如需要在评测模式下使用自定义注音（支持中英文），可以通过设置「TextMode」参数实现，设置方式请参考[音素标注](https://cloud.tencent.com/document/product/884/33698)。
                     */
                    std::string GetRefText() const;

                    /**
                     * 设置被评估语音对应的文本，仅支持中文和英文。
句子模式下不超过个 30 单词或者中文文字，段落模式不超过 120 单词或者中文文字，中文评估使用 utf-8 编码，自由说模式RefText可以不填。
关于RefText的文本键入要求，请参考[评测模式介绍](https://cloud.tencent.com/document/product/884/56131)。
如需要在评测模式下使用自定义注音（支持中英文），可以通过设置「TextMode」参数实现，设置方式请参考[音素标注](https://cloud.tencent.com/document/product/884/33698)。
                     * @param RefText 被评估语音对应的文本，仅支持中文和英文。
句子模式下不超过个 30 单词或者中文文字，段落模式不超过 120 单词或者中文文字，中文评估使用 utf-8 编码，自由说模式RefText可以不填。
关于RefText的文本键入要求，请参考[评测模式介绍](https://cloud.tencent.com/document/product/884/56131)。
如需要在评测模式下使用自定义注音（支持中英文），可以通过设置「TextMode」参数实现，设置方式请参考[音素标注](https://cloud.tencent.com/document/product/884/33698)。
                     */
                    void SetRefText(const std::string& _refText);

                    /**
                     * 判断参数 RefText 是否已赋值
                     * @return RefText 是否已赋值
                     */
                    bool RefTextHasBeenSet() const;

                    /**
                     * 获取语音输入模式
0：流式分片
1：非流式一次性评估
推荐使用流式分片传输。
                     * @return WorkMode 语音输入模式
0：流式分片
1：非流式一次性评估
推荐使用流式分片传输。
                     */
                    int64_t GetWorkMode() const;

                    /**
                     * 设置语音输入模式
0：流式分片
1：非流式一次性评估
推荐使用流式分片传输。
                     * @param WorkMode 语音输入模式
0：流式分片
1：非流式一次性评估
推荐使用流式分片传输。
                     */
                    void SetWorkMode(const int64_t& _workMode);

                    /**
                     * 判断参数 WorkMode 是否已赋值
                     * @return WorkMode 是否已赋值
                     */
                    bool WorkModeHasBeenSet() const;

                    /**
                     * 获取评测模式
0：单词/单字模式（中文评测模式下为单字模式）
1：句子模式
2：段落模式
3：自由说模式
4：单词音素纠错模式
5：情景评测模式
6：句子多分支评测模式
7：单词实时评测模式
8：拼音评测模式
关于每种评测模式的详细介绍，以及适用场景，请参考[评测模式介绍](https://cloud.tencent.com/document/product/884/56131)。
                     * @return EvalMode 评测模式
0：单词/单字模式（中文评测模式下为单字模式）
1：句子模式
2：段落模式
3：自由说模式
4：单词音素纠错模式
5：情景评测模式
6：句子多分支评测模式
7：单词实时评测模式
8：拼音评测模式
关于每种评测模式的详细介绍，以及适用场景，请参考[评测模式介绍](https://cloud.tencent.com/document/product/884/56131)。
                     */
                    int64_t GetEvalMode() const;

                    /**
                     * 设置评测模式
0：单词/单字模式（中文评测模式下为单字模式）
1：句子模式
2：段落模式
3：自由说模式
4：单词音素纠错模式
5：情景评测模式
6：句子多分支评测模式
7：单词实时评测模式
8：拼音评测模式
关于每种评测模式的详细介绍，以及适用场景，请参考[评测模式介绍](https://cloud.tencent.com/document/product/884/56131)。
                     * @param EvalMode 评测模式
0：单词/单字模式（中文评测模式下为单字模式）
1：句子模式
2：段落模式
3：自由说模式
4：单词音素纠错模式
5：情景评测模式
6：句子多分支评测模式
7：单词实时评测模式
8：拼音评测模式
关于每种评测模式的详细介绍，以及适用场景，请参考[评测模式介绍](https://cloud.tencent.com/document/product/884/56131)。
                     */
                    void SetEvalMode(const int64_t& _evalMode);

                    /**
                     * 判断参数 EvalMode 是否已赋值
                     * @return EvalMode 是否已赋值
                     */
                    bool EvalModeHasBeenSet() const;

                    /**
                     * 获取评价苛刻指数。取值为[1.0 - 4.0]范围内的浮点数，用于平滑不同年龄段的分数。
1.0：适用于最小年龄段用户，一般对应儿童应用场景；
4.0：适用于最高年龄段用户，一般对应成人严格打分场景。
                     * @return ScoreCoeff 评价苛刻指数。取值为[1.0 - 4.0]范围内的浮点数，用于平滑不同年龄段的分数。
1.0：适用于最小年龄段用户，一般对应儿童应用场景；
4.0：适用于最高年龄段用户，一般对应成人严格打分场景。
                     */
                    double GetScoreCoeff() const;

                    /**
                     * 设置评价苛刻指数。取值为[1.0 - 4.0]范围内的浮点数，用于平滑不同年龄段的分数。
1.0：适用于最小年龄段用户，一般对应儿童应用场景；
4.0：适用于最高年龄段用户，一般对应成人严格打分场景。
                     * @param ScoreCoeff 评价苛刻指数。取值为[1.0 - 4.0]范围内的浮点数，用于平滑不同年龄段的分数。
1.0：适用于最小年龄段用户，一般对应儿童应用场景；
4.0：适用于最高年龄段用户，一般对应成人严格打分场景。
                     */
                    void SetScoreCoeff(const double& _scoreCoeff);

                    /**
                     * 判断参数 ScoreCoeff 是否已赋值
                     * @return ScoreCoeff 是否已赋值
                     */
                    bool ScoreCoeffHasBeenSet() const;

                    /**
                     * 获取业务应用ID，与账号应用APPID无关，是用来方便客户管理服务的参数，新的 SoeAppId 可以在[控制台](https://console.cloud.tencent.com/soe)【应用管理】下新建。如果没有新建SoeAppId，请勿填入该参数，否则会报欠费错误。
                     * @return SoeAppId 业务应用ID，与账号应用APPID无关，是用来方便客户管理服务的参数，新的 SoeAppId 可以在[控制台](https://console.cloud.tencent.com/soe)【应用管理】下新建。如果没有新建SoeAppId，请勿填入该参数，否则会报欠费错误。
                     */
                    std::string GetSoeAppId() const;

                    /**
                     * 设置业务应用ID，与账号应用APPID无关，是用来方便客户管理服务的参数，新的 SoeAppId 可以在[控制台](https://console.cloud.tencent.com/soe)【应用管理】下新建。如果没有新建SoeAppId，请勿填入该参数，否则会报欠费错误。
                     * @param SoeAppId 业务应用ID，与账号应用APPID无关，是用来方便客户管理服务的参数，新的 SoeAppId 可以在[控制台](https://console.cloud.tencent.com/soe)【应用管理】下新建。如果没有新建SoeAppId，请勿填入该参数，否则会报欠费错误。
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
                     * 获取音频存储模式，此参数已废弃，无需设置，设置与否都默认为0不存储；
注：有存储需求的用户建议自行存储至腾讯云COS[对象存储](https://cloud.tencent.com/product/cos)使用。
                     * @return StorageMode 音频存储模式，此参数已废弃，无需设置，设置与否都默认为0不存储；
注：有存储需求的用户建议自行存储至腾讯云COS[对象存储](https://cloud.tencent.com/product/cos)使用。
                     */
                    int64_t GetStorageMode() const;

                    /**
                     * 设置音频存储模式，此参数已废弃，无需设置，设置与否都默认为0不存储；
注：有存储需求的用户建议自行存储至腾讯云COS[对象存储](https://cloud.tencent.com/product/cos)使用。
                     * @param StorageMode 音频存储模式，此参数已废弃，无需设置，设置与否都默认为0不存储；
注：有存储需求的用户建议自行存储至腾讯云COS[对象存储](https://cloud.tencent.com/product/cos)使用。
                     */
                    void SetStorageMode(const int64_t& _storageMode);

                    /**
                     * 判断参数 StorageMode 是否已赋值
                     * @return StorageMode 是否已赋值
                     */
                    bool StorageModeHasBeenSet() const;

                    /**
                     * 获取输出断句中间结果标识
0：不输出
1：输出，通过设置该参数
可以在评估过程中的分片传输请求中，返回已经评估断句的中间结果，中间结果可用于客户端 UI 更新，输出结果为TransmitOralProcess请求返回结果 SentenceInfoSet 字段。
                     * @return SentenceInfoEnabled 输出断句中间结果标识
0：不输出
1：输出，通过设置该参数
可以在评估过程中的分片传输请求中，返回已经评估断句的中间结果，中间结果可用于客户端 UI 更新，输出结果为TransmitOralProcess请求返回结果 SentenceInfoSet 字段。
                     */
                    int64_t GetSentenceInfoEnabled() const;

                    /**
                     * 设置输出断句中间结果标识
0：不输出
1：输出，通过设置该参数
可以在评估过程中的分片传输请求中，返回已经评估断句的中间结果，中间结果可用于客户端 UI 更新，输出结果为TransmitOralProcess请求返回结果 SentenceInfoSet 字段。
                     * @param SentenceInfoEnabled 输出断句中间结果标识
0：不输出
1：输出，通过设置该参数
可以在评估过程中的分片传输请求中，返回已经评估断句的中间结果，中间结果可用于客户端 UI 更新，输出结果为TransmitOralProcess请求返回结果 SentenceInfoSet 字段。
                     */
                    void SetSentenceInfoEnabled(const int64_t& _sentenceInfoEnabled);

                    /**
                     * 判断参数 SentenceInfoEnabled 是否已赋值
                     * @return SentenceInfoEnabled 是否已赋值
                     */
                    bool SentenceInfoEnabledHasBeenSet() const;

                    /**
                     * 获取评估语言
0：英文
1：中文
ServerType不填默认为0
                     * @return ServerType 评估语言
0：英文
1：中文
ServerType不填默认为0
                     */
                    int64_t GetServerType() const;

                    /**
                     * 设置评估语言
0：英文
1：中文
ServerType不填默认为0
                     * @param ServerType 评估语言
0：英文
1：中文
ServerType不填默认为0
                     */
                    void SetServerType(const int64_t& _serverType);

                    /**
                     * 判断参数 ServerType 是否已赋值
                     * @return ServerType 是否已赋值
                     */
                    bool ServerTypeHasBeenSet() const;

                    /**
                     * 获取异步模式标识
0：同步模式
1：异步模式（一般情况不建议使用异步模式）
可选值参考[服务模式](https://cloud.tencent.com/document/product/884/33697)。
                     * @return IsAsync 异步模式标识
0：同步模式
1：异步模式（一般情况不建议使用异步模式）
可选值参考[服务模式](https://cloud.tencent.com/document/product/884/33697)。
                     */
                    int64_t GetIsAsync() const;

                    /**
                     * 设置异步模式标识
0：同步模式
1：异步模式（一般情况不建议使用异步模式）
可选值参考[服务模式](https://cloud.tencent.com/document/product/884/33697)。
                     * @param IsAsync 异步模式标识
0：同步模式
1：异步模式（一般情况不建议使用异步模式）
可选值参考[服务模式](https://cloud.tencent.com/document/product/884/33697)。
                     */
                    void SetIsAsync(const int64_t& _isAsync);

                    /**
                     * 判断参数 IsAsync 是否已赋值
                     * @return IsAsync 是否已赋值
                     */
                    bool IsAsyncHasBeenSet() const;

                    /**
                     * 获取输入文本模式
0: 普通文本
1：[音素结构](https://cloud.tencent.com/document/product/884/33698)文本
2：音素注册模式（提工单注册需要使用音素的单词）。
                     * @return TextMode 输入文本模式
0: 普通文本
1：[音素结构](https://cloud.tencent.com/document/product/884/33698)文本
2：音素注册模式（提工单注册需要使用音素的单词）。
                     */
                    int64_t GetTextMode() const;

                    /**
                     * 设置输入文本模式
0: 普通文本
1：[音素结构](https://cloud.tencent.com/document/product/884/33698)文本
2：音素注册模式（提工单注册需要使用音素的单词）。
                     * @param TextMode 输入文本模式
0: 普通文本
1：[音素结构](https://cloud.tencent.com/document/product/884/33698)文本
2：音素注册模式（提工单注册需要使用音素的单词）。
                     */
                    void SetTextMode(const int64_t& _textMode);

                    /**
                     * 判断参数 TextMode 是否已赋值
                     * @return TextMode 是否已赋值
                     */
                    bool TextModeHasBeenSet() const;

                private:

                    /**
                     * 语音段唯一标识，一段完整语音使用一个SessionId，不同语音段的评测需要使用不同的SessionId。一般使用uuid(通用唯一识别码)来作为它的值，要尽量保证SessionId的唯一性。
                     */
                    std::string m_sessionId;
                    bool m_sessionIdHasBeenSet;

                    /**
                     * 被评估语音对应的文本，仅支持中文和英文。
句子模式下不超过个 30 单词或者中文文字，段落模式不超过 120 单词或者中文文字，中文评估使用 utf-8 编码，自由说模式RefText可以不填。
关于RefText的文本键入要求，请参考[评测模式介绍](https://cloud.tencent.com/document/product/884/56131)。
如需要在评测模式下使用自定义注音（支持中英文），可以通过设置「TextMode」参数实现，设置方式请参考[音素标注](https://cloud.tencent.com/document/product/884/33698)。
                     */
                    std::string m_refText;
                    bool m_refTextHasBeenSet;

                    /**
                     * 语音输入模式
0：流式分片
1：非流式一次性评估
推荐使用流式分片传输。
                     */
                    int64_t m_workMode;
                    bool m_workModeHasBeenSet;

                    /**
                     * 评测模式
0：单词/单字模式（中文评测模式下为单字模式）
1：句子模式
2：段落模式
3：自由说模式
4：单词音素纠错模式
5：情景评测模式
6：句子多分支评测模式
7：单词实时评测模式
8：拼音评测模式
关于每种评测模式的详细介绍，以及适用场景，请参考[评测模式介绍](https://cloud.tencent.com/document/product/884/56131)。
                     */
                    int64_t m_evalMode;
                    bool m_evalModeHasBeenSet;

                    /**
                     * 评价苛刻指数。取值为[1.0 - 4.0]范围内的浮点数，用于平滑不同年龄段的分数。
1.0：适用于最小年龄段用户，一般对应儿童应用场景；
4.0：适用于最高年龄段用户，一般对应成人严格打分场景。
                     */
                    double m_scoreCoeff;
                    bool m_scoreCoeffHasBeenSet;

                    /**
                     * 业务应用ID，与账号应用APPID无关，是用来方便客户管理服务的参数，新的 SoeAppId 可以在[控制台](https://console.cloud.tencent.com/soe)【应用管理】下新建。如果没有新建SoeAppId，请勿填入该参数，否则会报欠费错误。
                     */
                    std::string m_soeAppId;
                    bool m_soeAppIdHasBeenSet;

                    /**
                     * 长效session标识，当该参数为1时，session的持续时间为300s，但会一定程度上影响第一个数据包的返回速度，且TransmitOralProcess必须同时为1才可生效。
                     */
                    int64_t m_isLongLifeSession;
                    bool m_isLongLifeSessionHasBeenSet;

                    /**
                     * 音频存储模式，此参数已废弃，无需设置，设置与否都默认为0不存储；
注：有存储需求的用户建议自行存储至腾讯云COS[对象存储](https://cloud.tencent.com/product/cos)使用。
                     */
                    int64_t m_storageMode;
                    bool m_storageModeHasBeenSet;

                    /**
                     * 输出断句中间结果标识
0：不输出
1：输出，通过设置该参数
可以在评估过程中的分片传输请求中，返回已经评估断句的中间结果，中间结果可用于客户端 UI 更新，输出结果为TransmitOralProcess请求返回结果 SentenceInfoSet 字段。
                     */
                    int64_t m_sentenceInfoEnabled;
                    bool m_sentenceInfoEnabledHasBeenSet;

                    /**
                     * 评估语言
0：英文
1：中文
ServerType不填默认为0
                     */
                    int64_t m_serverType;
                    bool m_serverTypeHasBeenSet;

                    /**
                     * 异步模式标识
0：同步模式
1：异步模式（一般情况不建议使用异步模式）
可选值参考[服务模式](https://cloud.tencent.com/document/product/884/33697)。
                     */
                    int64_t m_isAsync;
                    bool m_isAsyncHasBeenSet;

                    /**
                     * 输入文本模式
0: 普通文本
1：[音素结构](https://cloud.tencent.com/document/product/884/33698)文本
2：音素注册模式（提工单注册需要使用音素的单词）。
                     */
                    int64_t m_textMode;
                    bool m_textModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SOE_V20180724_MODEL_INITORALPROCESSREQUEST_H_
