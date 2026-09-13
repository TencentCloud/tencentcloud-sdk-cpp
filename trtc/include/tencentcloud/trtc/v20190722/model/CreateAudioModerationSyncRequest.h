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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_CREATEAUDIOMODERATIONSYNCREQUEST_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_CREATEAUDIOMODERATIONSYNCREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Trtc
    {
        namespace V20190722
        {
            namespace Model
            {
                /**
                * CreateAudioModerationSync请求参数结构体
                */
                class CreateAudioModerationSyncRequest : public AbstractModel
                {
                public:
                    CreateAudioModerationSyncRequest();
                    ~CreateAudioModerationSyncRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>sdkappid app账号</p>
                     * @return Sdkappid <p>sdkappid app账号</p>
                     * 
                     */
                    int64_t GetSdkappid() const;

                    /**
                     * 设置<p>sdkappid app账号</p>
                     * @param _sdkappid <p>sdkappid app账号</p>
                     * 
                     */
                    void SetSdkappid(const int64_t& _sdkappid);

                    /**
                     * 判断参数 Sdkappid 是否已赋值
                     * @return Sdkappid 是否已赋值
                     * 
                     */
                    bool SdkappidHasBeenSet() const;

                    /**
                     * 获取<p>BizType为策略的具体的编号, GME业务 2_2_3_sdkappid</p>
                     * @return BizType <p>BizType为策略的具体的编号, GME业务 2_2_3_sdkappid</p>
                     * 
                     */
                    std::string GetBizType() const;

                    /**
                     * 设置<p>BizType为策略的具体的编号, GME业务 2_2_3_sdkappid</p>
                     * @param _bizType <p>BizType为策略的具体的编号, GME业务 2_2_3_sdkappid</p>
                     * 
                     */
                    void SetBizType(const std::string& _bizType);

                    /**
                     * 判断参数 BizType 是否已赋值
                     * @return BizType 是否已赋值
                     * 
                     */
                    bool BizTypeHasBeenSet() const;

                    /**
                     * 获取<p>据标识，可以由英文字母、数字、下划线、-、@#组成，不超过64个字符</p>
                     * @return DataId <p>据标识，可以由英文字母、数字、下划线、-、@#组成，不超过64个字符</p>
                     * 
                     */
                    std::string GetDataId() const;

                    /**
                     * 设置<p>据标识，可以由英文字母、数字、下划线、-、@#组成，不超过64个字符</p>
                     * @param _dataId <p>据标识，可以由英文字母、数字、下划线、-、@#组成，不超过64个字符</p>
                     * 
                     */
                    void SetDataId(const std::string& _dataId);

                    /**
                     * 判断参数 DataId 是否已赋值
                     * @return DataId 是否已赋值
                     * 
                     */
                    bool DataIdHasBeenSet() const;

                    /**
                     * 获取<p>音频格式，当FileUrl为空时，必填。音频文件资源格式，当前支持格式：wav、mp3、m4a，请按照实际文件格式填入。 示例值：mp3</p>
                     * @return FileFormat <p>音频格式，当FileUrl为空时，必填。音频文件资源格式，当前支持格式：wav、mp3、m4a，请按照实际文件格式填入。 示例值：mp3</p>
                     * 
                     */
                    std::string GetFileFormat() const;

                    /**
                     * 设置<p>音频格式，当FileUrl为空时，必填。音频文件资源格式，当前支持格式：wav、mp3、m4a，请按照实际文件格式填入。 示例值：mp3</p>
                     * @param _fileFormat <p>音频格式，当FileUrl为空时，必填。音频文件资源格式，当前支持格式：wav、mp3、m4a，请按照实际文件格式填入。 示例值：mp3</p>
                     * 
                     */
                    void SetFileFormat(const std::string& _fileFormat);

                    /**
                     * 判断参数 FileFormat 是否已赋值
                     * @return FileFormat 是否已赋值
                     * 
                     */
                    bool FileFormatHasBeenSet() const;

                    /**
                     * 获取<p>文件名称，可以由英文字母、数字、下划线、-、@#组成，不超过64个字符 示例值：file_name</p>
                     * @return FileName <p>文件名称，可以由英文字母、数字、下划线、-、@#组成，不超过64个字符 示例值：file_name</p>
                     * 
                     */
                    std::string GetFileName() const;

                    /**
                     * 设置<p>文件名称，可以由英文字母、数字、下划线、-、@#组成，不超过64个字符 示例值：file_name</p>
                     * @param _fileName <p>文件名称，可以由英文字母、数字、下划线、-、@#组成，不超过64个字符 示例值：file_name</p>
                     * 
                     */
                    void SetFileName(const std::string& _fileName);

                    /**
                     * 判断参数 FileName 是否已赋值
                     * @return FileName 是否已赋值
                     * 
                     */
                    bool FileNameHasBeenSet() const;

                    /**
                     * 获取<p>数据Base64编码，短音频同步接口仅传入可音频内容； 支持范围：文件大小不能超过5M，时长不可超过60s； 支持格式：wav (PCM编码)、mp3、m4a (采样率：16kHz~48kHz，位深：16bit 小端，声道数：单声道/双声道，建议格式：16kHz/16bit/单声道)。 示例值：1</p>
                     * @return FileContent <p>数据Base64编码，短音频同步接口仅传入可音频内容； 支持范围：文件大小不能超过5M，时长不可超过60s； 支持格式：wav (PCM编码)、mp3、m4a (采样率：16kHz~48kHz，位深：16bit 小端，声道数：单声道/双声道，建议格式：16kHz/16bit/单声道)。 示例值：1</p>
                     * 
                     */
                    std::string GetFileContent() const;

                    /**
                     * 设置<p>数据Base64编码，短音频同步接口仅传入可音频内容； 支持范围：文件大小不能超过5M，时长不可超过60s； 支持格式：wav (PCM编码)、mp3、m4a (采样率：16kHz~48kHz，位深：16bit 小端，声道数：单声道/双声道，建议格式：16kHz/16bit/单声道)。 示例值：1</p>
                     * @param _fileContent <p>数据Base64编码，短音频同步接口仅传入可音频内容； 支持范围：文件大小不能超过5M，时长不可超过60s； 支持格式：wav (PCM编码)、mp3、m4a (采样率：16kHz~48kHz，位深：16bit 小端，声道数：单声道/双声道，建议格式：16kHz/16bit/单声道)。 示例值：1</p>
                     * 
                     */
                    void SetFileContent(const std::string& _fileContent);

                    /**
                     * 判断参数 FileContent 是否已赋值
                     * @return FileContent 是否已赋值
                     * 
                     */
                    bool FileContentHasBeenSet() const;

                    /**
                     * 获取<p>音频资源访问链接，与FileContent参数必须二选一输入； 支持范围及格式：同FileContent；</p>
                     * @return FileUrl <p>音频资源访问链接，与FileContent参数必须二选一输入； 支持范围及格式：同FileContent；</p>
                     * 
                     */
                    std::string GetFileUrl() const;

                    /**
                     * 设置<p>音频资源访问链接，与FileContent参数必须二选一输入； 支持范围及格式：同FileContent；</p>
                     * @param _fileUrl <p>音频资源访问链接，与FileContent参数必须二选一输入； 支持范围及格式：同FileContent；</p>
                     * 
                     */
                    void SetFileUrl(const std::string& _fileUrl);

                    /**
                     * 判断参数 FileUrl 是否已赋值
                     * @return FileUrl 是否已赋值
                     * 
                     */
                    bool FileUrlHasBeenSet() const;

                private:

                    /**
                     * <p>sdkappid app账号</p>
                     */
                    int64_t m_sdkappid;
                    bool m_sdkappidHasBeenSet;

                    /**
                     * <p>BizType为策略的具体的编号, GME业务 2_2_3_sdkappid</p>
                     */
                    std::string m_bizType;
                    bool m_bizTypeHasBeenSet;

                    /**
                     * <p>据标识，可以由英文字母、数字、下划线、-、@#组成，不超过64个字符</p>
                     */
                    std::string m_dataId;
                    bool m_dataIdHasBeenSet;

                    /**
                     * <p>音频格式，当FileUrl为空时，必填。音频文件资源格式，当前支持格式：wav、mp3、m4a，请按照实际文件格式填入。 示例值：mp3</p>
                     */
                    std::string m_fileFormat;
                    bool m_fileFormatHasBeenSet;

                    /**
                     * <p>文件名称，可以由英文字母、数字、下划线、-、@#组成，不超过64个字符 示例值：file_name</p>
                     */
                    std::string m_fileName;
                    bool m_fileNameHasBeenSet;

                    /**
                     * <p>数据Base64编码，短音频同步接口仅传入可音频内容； 支持范围：文件大小不能超过5M，时长不可超过60s； 支持格式：wav (PCM编码)、mp3、m4a (采样率：16kHz~48kHz，位深：16bit 小端，声道数：单声道/双声道，建议格式：16kHz/16bit/单声道)。 示例值：1</p>
                     */
                    std::string m_fileContent;
                    bool m_fileContentHasBeenSet;

                    /**
                     * <p>音频资源访问链接，与FileContent参数必须二选一输入； 支持范围及格式：同FileContent；</p>
                     */
                    std::string m_fileUrl;
                    bool m_fileUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_CREATEAUDIOMODERATIONSYNCREQUEST_H_
