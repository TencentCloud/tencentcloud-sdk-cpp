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

#ifndef TENCENTCLOUD_SOE_V20180724_MODEL_TRANSMITORALPROCESSREQUEST_H_
#define TENCENTCLOUD_SOE_V20180724_MODEL_TRANSMITORALPROCESSREQUEST_H_

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
                * TransmitOralProcess请求参数结构体
                */
                class TransmitOralProcessRequest : public AbstractModel
                {
                public:
                    TransmitOralProcessRequest();
                    ~TransmitOralProcessRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取流式数据包的序号，从1开始，当IsEnd字段为1后后续序号无意义，当IsLongLifeSession不为1且为非流式模式时无意义。
注意：序号上限为3000，不能超过上限。
                     * @return SeqId 流式数据包的序号，从1开始，当IsEnd字段为1后后续序号无意义，当IsLongLifeSession不为1且为非流式模式时无意义。
注意：序号上限为3000，不能超过上限。
                     * 
                     */
                    int64_t GetSeqId() const;

                    /**
                     * 设置流式数据包的序号，从1开始，当IsEnd字段为1后后续序号无意义，当IsLongLifeSession不为1且为非流式模式时无意义。
注意：序号上限为3000，不能超过上限。
                     * @param _seqId 流式数据包的序号，从1开始，当IsEnd字段为1后后续序号无意义，当IsLongLifeSession不为1且为非流式模式时无意义。
注意：序号上限为3000，不能超过上限。
                     * 
                     */
                    void SetSeqId(const int64_t& _seqId);

                    /**
                     * 判断参数 SeqId 是否已赋值
                     * @return SeqId 是否已赋值
                     * 
                     */
                    bool SeqIdHasBeenSet() const;

                    /**
                     * 获取是否传输完毕标志，若为0表示未完毕，若为1则传输完毕开始评估，非流式模式下无意义。
                     * @return IsEnd 是否传输完毕标志，若为0表示未完毕，若为1则传输完毕开始评估，非流式模式下无意义。
                     * 
                     */
                    int64_t GetIsEnd() const;

                    /**
                     * 设置是否传输完毕标志，若为0表示未完毕，若为1则传输完毕开始评估，非流式模式下无意义。
                     * @param _isEnd 是否传输完毕标志，若为0表示未完毕，若为1则传输完毕开始评估，非流式模式下无意义。
                     * 
                     */
                    void SetIsEnd(const int64_t& _isEnd);

                    /**
                     * 判断参数 IsEnd 是否已赋值
                     * @return IsEnd 是否已赋值
                     * 
                     */
                    bool IsEndHasBeenSet() const;

                    /**
                     * 获取1: raw/pcm
2: wav
3: mp3
4: speex
[音频上传格式](https://cloud.tencent.com/document/product/884/56132)
                     * @return VoiceFileType 1: raw/pcm
2: wav
3: mp3
4: speex
[音频上传格式](https://cloud.tencent.com/document/product/884/56132)
                     * 
                     */
                    int64_t GetVoiceFileType() const;

                    /**
                     * 设置1: raw/pcm
2: wav
3: mp3
4: speex
[音频上传格式](https://cloud.tencent.com/document/product/884/56132)
                     * @param _voiceFileType 1: raw/pcm
2: wav
3: mp3
4: speex
[音频上传格式](https://cloud.tencent.com/document/product/884/56132)
                     * 
                     */
                    void SetVoiceFileType(const int64_t& _voiceFileType);

                    /**
                     * 判断参数 VoiceFileType 是否已赋值
                     * @return VoiceFileType 是否已赋值
                     * 
                     */
                    bool VoiceFileTypeHasBeenSet() const;

                    /**
                     * 获取语音编码类型
1:pcm
                     * @return VoiceEncodeType 语音编码类型
1:pcm
                     * 
                     */
                    int64_t GetVoiceEncodeType() const;

                    /**
                     * 设置语音编码类型
1:pcm
                     * @param _voiceEncodeType 语音编码类型
1:pcm
                     * 
                     */
                    void SetVoiceEncodeType(const int64_t& _voiceEncodeType);

                    /**
                     * 判断参数 VoiceEncodeType 是否已赋值
                     * @return VoiceEncodeType 是否已赋值
                     * 
                     */
                    bool VoiceEncodeTypeHasBeenSet() const;

                    /**
                     * 获取当前语音数据, 编码格式要求为BASE64且必须保证分片帧完整（16bit的数据必须保证音频长度为偶数）。格式要求参考[音频上传格式](https://cloud.tencent.com/document/product/884/56132)
流式模式下需要将语音数据进行分片处理，参考：[分片大小设置](https://cloud.tencent.com/document/product/884/78985#.E5.88.86.E7.89.87.E5.A4.A7.E5.B0.8F.E8.AE.BE.E7.BD.AE.E4.B8.BA.E5.A4.9A.E5.A4.A7.E6.AF.94.E8.BE.83.E5.90.88.E9.80.82.3F)
如何进行流式分片参考：[流式评测](https://cloud.tencent.com/document/product/884/78824#.E6.B5.81.E5.BC.8F.E8.AF.84.E6.B5.8B)
                     * @return UserVoiceData 当前语音数据, 编码格式要求为BASE64且必须保证分片帧完整（16bit的数据必须保证音频长度为偶数）。格式要求参考[音频上传格式](https://cloud.tencent.com/document/product/884/56132)
流式模式下需要将语音数据进行分片处理，参考：[分片大小设置](https://cloud.tencent.com/document/product/884/78985#.E5.88.86.E7.89.87.E5.A4.A7.E5.B0.8F.E8.AE.BE.E7.BD.AE.E4.B8.BA.E5.A4.9A.E5.A4.A7.E6.AF.94.E8.BE.83.E5.90.88.E9.80.82.3F)
如何进行流式分片参考：[流式评测](https://cloud.tencent.com/document/product/884/78824#.E6.B5.81.E5.BC.8F.E8.AF.84.E6.B5.8B)
                     * 
                     */
                    std::string GetUserVoiceData() const;

                    /**
                     * 设置当前语音数据, 编码格式要求为BASE64且必须保证分片帧完整（16bit的数据必须保证音频长度为偶数）。格式要求参考[音频上传格式](https://cloud.tencent.com/document/product/884/56132)
流式模式下需要将语音数据进行分片处理，参考：[分片大小设置](https://cloud.tencent.com/document/product/884/78985#.E5.88.86.E7.89.87.E5.A4.A7.E5.B0.8F.E8.AE.BE.E7.BD.AE.E4.B8.BA.E5.A4.9A.E5.A4.A7.E6.AF.94.E8.BE.83.E5.90.88.E9.80.82.3F)
如何进行流式分片参考：[流式评测](https://cloud.tencent.com/document/product/884/78824#.E6.B5.81.E5.BC.8F.E8.AF.84.E6.B5.8B)
                     * @param _userVoiceData 当前语音数据, 编码格式要求为BASE64且必须保证分片帧完整（16bit的数据必须保证音频长度为偶数）。格式要求参考[音频上传格式](https://cloud.tencent.com/document/product/884/56132)
流式模式下需要将语音数据进行分片处理，参考：[分片大小设置](https://cloud.tencent.com/document/product/884/78985#.E5.88.86.E7.89.87.E5.A4.A7.E5.B0.8F.E8.AE.BE.E7.BD.AE.E4.B8.BA.E5.A4.9A.E5.A4.A7.E6.AF.94.E8.BE.83.E5.90.88.E9.80.82.3F)
如何进行流式分片参考：[流式评测](https://cloud.tencent.com/document/product/884/78824#.E6.B5.81.E5.BC.8F.E8.AF.84.E6.B5.8B)
                     * 
                     */
                    void SetUserVoiceData(const std::string& _userVoiceData);

                    /**
                     * 判断参数 UserVoiceData 是否已赋值
                     * @return UserVoiceData 是否已赋值
                     * 
                     */
                    bool UserVoiceDataHasBeenSet() const;

                    /**
                     * 获取语音段唯一标识，一段完整语音使用一个SessionId，不同语音段的评测需要使用不同的SessionId。
一般使用uuid(通用唯一识别码)来作为它的值，要尽量保证SessionId的唯一性。
                     * @return SessionId 语音段唯一标识，一段完整语音使用一个SessionId，不同语音段的评测需要使用不同的SessionId。
一般使用uuid(通用唯一识别码)来作为它的值，要尽量保证SessionId的唯一性。
                     * 
                     */
                    std::string GetSessionId() const;

                    /**
                     * 设置语音段唯一标识，一段完整语音使用一个SessionId，不同语音段的评测需要使用不同的SessionId。
一般使用uuid(通用唯一识别码)来作为它的值，要尽量保证SessionId的唯一性。
                     * @param _sessionId 语音段唯一标识，一段完整语音使用一个SessionId，不同语音段的评测需要使用不同的SessionId。
一般使用uuid(通用唯一识别码)来作为它的值，要尽量保证SessionId的唯一性。
                     * 
                     */
                    void SetSessionId(const std::string& _sessionId);

                    /**
                     * 判断参数 SessionId 是否已赋值
                     * @return SessionId 是否已赋值
                     * 
                     */
                    bool SessionIdHasBeenSet() const;

                    /**
                     * 获取业务应用ID，与账号应用APPID无关，是用来方便客户管理服务的参数，新的 SoeAppId 可以在[控制台](https://console.cloud.tencent.com/soe)【应用管理】下新建。如果没有新建SoeAppId，请勿填入该参数，否则会报欠费错误。使用指南：[业务应用](https://cloud.tencent.com/document/product/884/78824#.E4.B8.9A.E5.8A.A1.E5.BA.94.E7.94.A8)
                     * @return SoeAppId 业务应用ID，与账号应用APPID无关，是用来方便客户管理服务的参数，新的 SoeAppId 可以在[控制台](https://console.cloud.tencent.com/soe)【应用管理】下新建。如果没有新建SoeAppId，请勿填入该参数，否则会报欠费错误。使用指南：[业务应用](https://cloud.tencent.com/document/product/884/78824#.E4.B8.9A.E5.8A.A1.E5.BA.94.E7.94.A8)
                     * 
                     */
                    std::string GetSoeAppId() const;

                    /**
                     * 设置业务应用ID，与账号应用APPID无关，是用来方便客户管理服务的参数，新的 SoeAppId 可以在[控制台](https://console.cloud.tencent.com/soe)【应用管理】下新建。如果没有新建SoeAppId，请勿填入该参数，否则会报欠费错误。使用指南：[业务应用](https://cloud.tencent.com/document/product/884/78824#.E4.B8.9A.E5.8A.A1.E5.BA.94.E7.94.A8)
                     * @param _soeAppId 业务应用ID，与账号应用APPID无关，是用来方便客户管理服务的参数，新的 SoeAppId 可以在[控制台](https://console.cloud.tencent.com/soe)【应用管理】下新建。如果没有新建SoeAppId，请勿填入该参数，否则会报欠费错误。使用指南：[业务应用](https://cloud.tencent.com/document/product/884/78824#.E4.B8.9A.E5.8A.A1.E5.BA.94.E7.94.A8)
                     * 
                     */
                    void SetSoeAppId(const std::string& _soeAppId);

                    /**
                     * 判断参数 SoeAppId 是否已赋值
                     * @return SoeAppId 是否已赋值
                     * 
                     */
                    bool SoeAppIdHasBeenSet() const;

                    /**
                     * 获取长效session标识，当该参数为1时，session的持续时间为300s，但会一定程度上影响第一个数据包的返回速度。当InitOralProcess接口和TransmitOralProcess接口的IsLongLifeSession均为1时，才可生效。
                     * @return IsLongLifeSession 长效session标识，当该参数为1时，session的持续时间为300s，但会一定程度上影响第一个数据包的返回速度。当InitOralProcess接口和TransmitOralProcess接口的IsLongLifeSession均为1时，才可生效。
                     * 
                     */
                    int64_t GetIsLongLifeSession() const;

                    /**
                     * 设置长效session标识，当该参数为1时，session的持续时间为300s，但会一定程度上影响第一个数据包的返回速度。当InitOralProcess接口和TransmitOralProcess接口的IsLongLifeSession均为1时，才可生效。
                     * @param _isLongLifeSession 长效session标识，当该参数为1时，session的持续时间为300s，但会一定程度上影响第一个数据包的返回速度。当InitOralProcess接口和TransmitOralProcess接口的IsLongLifeSession均为1时，才可生效。
                     * 
                     */
                    void SetIsLongLifeSession(const int64_t& _isLongLifeSession);

                    /**
                     * 判断参数 IsLongLifeSession 是否已赋值
                     * @return IsLongLifeSession 是否已赋值
                     * 
                     */
                    bool IsLongLifeSessionHasBeenSet() const;

                    /**
                     * 获取查询标识，当该参数为1时，该请求为查询请求，请求返回该 Session 的评估结果。
                     * @return IsQuery 查询标识，当该参数为1时，该请求为查询请求，请求返回该 Session 的评估结果。
                     * 
                     */
                    int64_t GetIsQuery() const;

                    /**
                     * 设置查询标识，当该参数为1时，该请求为查询请求，请求返回该 Session 的评估结果。
                     * @param _isQuery 查询标识，当该参数为1时，该请求为查询请求，请求返回该 Session 的评估结果。
                     * 
                     */
                    void SetIsQuery(const int64_t& _isQuery);

                    /**
                     * 判断参数 IsQuery 是否已赋值
                     * @return IsQuery 是否已赋值
                     * 
                     */
                    bool IsQueryHasBeenSet() const;

                private:

                    /**
                     * 流式数据包的序号，从1开始，当IsEnd字段为1后后续序号无意义，当IsLongLifeSession不为1且为非流式模式时无意义。
注意：序号上限为3000，不能超过上限。
                     */
                    int64_t m_seqId;
                    bool m_seqIdHasBeenSet;

                    /**
                     * 是否传输完毕标志，若为0表示未完毕，若为1则传输完毕开始评估，非流式模式下无意义。
                     */
                    int64_t m_isEnd;
                    bool m_isEndHasBeenSet;

                    /**
                     * 1: raw/pcm
2: wav
3: mp3
4: speex
[音频上传格式](https://cloud.tencent.com/document/product/884/56132)
                     */
                    int64_t m_voiceFileType;
                    bool m_voiceFileTypeHasBeenSet;

                    /**
                     * 语音编码类型
1:pcm
                     */
                    int64_t m_voiceEncodeType;
                    bool m_voiceEncodeTypeHasBeenSet;

                    /**
                     * 当前语音数据, 编码格式要求为BASE64且必须保证分片帧完整（16bit的数据必须保证音频长度为偶数）。格式要求参考[音频上传格式](https://cloud.tencent.com/document/product/884/56132)
流式模式下需要将语音数据进行分片处理，参考：[分片大小设置](https://cloud.tencent.com/document/product/884/78985#.E5.88.86.E7.89.87.E5.A4.A7.E5.B0.8F.E8.AE.BE.E7.BD.AE.E4.B8.BA.E5.A4.9A.E5.A4.A7.E6.AF.94.E8.BE.83.E5.90.88.E9.80.82.3F)
如何进行流式分片参考：[流式评测](https://cloud.tencent.com/document/product/884/78824#.E6.B5.81.E5.BC.8F.E8.AF.84.E6.B5.8B)
                     */
                    std::string m_userVoiceData;
                    bool m_userVoiceDataHasBeenSet;

                    /**
                     * 语音段唯一标识，一段完整语音使用一个SessionId，不同语音段的评测需要使用不同的SessionId。
一般使用uuid(通用唯一识别码)来作为它的值，要尽量保证SessionId的唯一性。
                     */
                    std::string m_sessionId;
                    bool m_sessionIdHasBeenSet;

                    /**
                     * 业务应用ID，与账号应用APPID无关，是用来方便客户管理服务的参数，新的 SoeAppId 可以在[控制台](https://console.cloud.tencent.com/soe)【应用管理】下新建。如果没有新建SoeAppId，请勿填入该参数，否则会报欠费错误。使用指南：[业务应用](https://cloud.tencent.com/document/product/884/78824#.E4.B8.9A.E5.8A.A1.E5.BA.94.E7.94.A8)
                     */
                    std::string m_soeAppId;
                    bool m_soeAppIdHasBeenSet;

                    /**
                     * 长效session标识，当该参数为1时，session的持续时间为300s，但会一定程度上影响第一个数据包的返回速度。当InitOralProcess接口和TransmitOralProcess接口的IsLongLifeSession均为1时，才可生效。
                     */
                    int64_t m_isLongLifeSession;
                    bool m_isLongLifeSessionHasBeenSet;

                    /**
                     * 查询标识，当该参数为1时，该请求为查询请求，请求返回该 Session 的评估结果。
                     */
                    int64_t m_isQuery;
                    bool m_isQueryHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SOE_V20180724_MODEL_TRANSMITORALPROCESSREQUEST_H_
