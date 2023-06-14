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

#ifndef TENCENTCLOUD_AMS_V20201229_MODEL_CREATEAUDIOMODERATIONSYNCTASKREQUEST_H_
#define TENCENTCLOUD_AMS_V20201229_MODEL_CREATEAUDIOMODERATIONSYNCTASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ams
    {
        namespace V20201229
        {
            namespace Model
            {
                /**
                * CreateAudioModerationSyncTask请求参数结构体
                */
                class CreateAudioModerationSyncTaskRequest : public AbstractModel
                {
                public:
                    CreateAudioModerationSyncTaskRequest();
                    ~CreateAudioModerationSyncTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Biztype为策略的具体的编号，用于接口调度，在内容安全控制台中可配置。不同Biztype关联不同的业务场景与识别能力策略，调用前请确认正确的Biztype。Biztype仅为数字、字母与下划线的组合，长度为3-32个字符；调用时不传入Biztype代表采用默认的识别策略。
                     * @return BizType Biztype为策略的具体的编号，用于接口调度，在内容安全控制台中可配置。不同Biztype关联不同的业务场景与识别能力策略，调用前请确认正确的Biztype。Biztype仅为数字、字母与下划线的组合，长度为3-32个字符；调用时不传入Biztype代表采用默认的识别策略。
                     * 
                     */
                    std::string GetBizType() const;

                    /**
                     * 设置Biztype为策略的具体的编号，用于接口调度，在内容安全控制台中可配置。不同Biztype关联不同的业务场景与识别能力策略，调用前请确认正确的Biztype。Biztype仅为数字、字母与下划线的组合，长度为3-32个字符；调用时不传入Biztype代表采用默认的识别策略。
                     * @param _bizType Biztype为策略的具体的编号，用于接口调度，在内容安全控制台中可配置。不同Biztype关联不同的业务场景与识别能力策略，调用前请确认正确的Biztype。Biztype仅为数字、字母与下划线的组合，长度为3-32个字符；调用时不传入Biztype代表采用默认的识别策略。
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
                     * 获取数据标识，可以由英文字母、数字、下划线、-、@#组成，不超过64个字符
                     * @return DataId 数据标识，可以由英文字母、数字、下划线、-、@#组成，不超过64个字符
                     * 
                     */
                    std::string GetDataId() const;

                    /**
                     * 设置数据标识，可以由英文字母、数字、下划线、-、@#组成，不超过64个字符
                     * @param _dataId 数据标识，可以由英文字母、数字、下划线、-、@#组成，不超过64个字符
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
                     * 获取音频文件资源格式，当前支持格式：wav、mp3、m4a，请按照实际文件格式填入。
                     * @return FileFormat 音频文件资源格式，当前支持格式：wav、mp3、m4a，请按照实际文件格式填入。
                     * 
                     */
                    std::string GetFileFormat() const;

                    /**
                     * 设置音频文件资源格式，当前支持格式：wav、mp3、m4a，请按照实际文件格式填入。
                     * @param _fileFormat 音频文件资源格式，当前支持格式：wav、mp3、m4a，请按照实际文件格式填入。
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
                     * 获取文件名称，可以由英文字母、数字、下划线、-、@#组成，不超过64个字符
                     * @return Name 文件名称，可以由英文字母、数字、下划线、-、@#组成，不超过64个字符
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置文件名称，可以由英文字母、数字、下划线、-、@#组成，不超过64个字符
                     * @param _name 文件名称，可以由英文字母、数字、下划线、-、@#组成，不超过64个字符
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取数据Base64编码，短音频同步接口仅传入可音频内容；
支持范围：文件大小不能超过5M，时长不可超过60s；
支持格式：wav (PCM编码)、mp3、m4a (采样率：16kHz~48kHz，位深：16bit 小端，声道数：单声道/双声道，建议格式：16kHz/16bit/单声道)。
                     * @return FileContent 数据Base64编码，短音频同步接口仅传入可音频内容；
支持范围：文件大小不能超过5M，时长不可超过60s；
支持格式：wav (PCM编码)、mp3、m4a (采样率：16kHz~48kHz，位深：16bit 小端，声道数：单声道/双声道，建议格式：16kHz/16bit/单声道)。
                     * 
                     */
                    std::string GetFileContent() const;

                    /**
                     * 设置数据Base64编码，短音频同步接口仅传入可音频内容；
支持范围：文件大小不能超过5M，时长不可超过60s；
支持格式：wav (PCM编码)、mp3、m4a (采样率：16kHz~48kHz，位深：16bit 小端，声道数：单声道/双声道，建议格式：16kHz/16bit/单声道)。
                     * @param _fileContent 数据Base64编码，短音频同步接口仅传入可音频内容；
支持范围：文件大小不能超过5M，时长不可超过60s；
支持格式：wav (PCM编码)、mp3、m4a (采样率：16kHz~48kHz，位深：16bit 小端，声道数：单声道/双声道，建议格式：16kHz/16bit/单声道)。
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
                     * 获取音频资源访问链接，与FileContent参数必须二选一输入；
支持范围及格式：同FileContent；
                     * @return FileUrl 音频资源访问链接，与FileContent参数必须二选一输入；
支持范围及格式：同FileContent；
                     * 
                     */
                    std::string GetFileUrl() const;

                    /**
                     * 设置音频资源访问链接，与FileContent参数必须二选一输入；
支持范围及格式：同FileContent；
                     * @param _fileUrl 音频资源访问链接，与FileContent参数必须二选一输入；
支持范围及格式：同FileContent；
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
                     * Biztype为策略的具体的编号，用于接口调度，在内容安全控制台中可配置。不同Biztype关联不同的业务场景与识别能力策略，调用前请确认正确的Biztype。Biztype仅为数字、字母与下划线的组合，长度为3-32个字符；调用时不传入Biztype代表采用默认的识别策略。
                     */
                    std::string m_bizType;
                    bool m_bizTypeHasBeenSet;

                    /**
                     * 数据标识，可以由英文字母、数字、下划线、-、@#组成，不超过64个字符
                     */
                    std::string m_dataId;
                    bool m_dataIdHasBeenSet;

                    /**
                     * 音频文件资源格式，当前支持格式：wav、mp3、m4a，请按照实际文件格式填入。
                     */
                    std::string m_fileFormat;
                    bool m_fileFormatHasBeenSet;

                    /**
                     * 文件名称，可以由英文字母、数字、下划线、-、@#组成，不超过64个字符
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 数据Base64编码，短音频同步接口仅传入可音频内容；
支持范围：文件大小不能超过5M，时长不可超过60s；
支持格式：wav (PCM编码)、mp3、m4a (采样率：16kHz~48kHz，位深：16bit 小端，声道数：单声道/双声道，建议格式：16kHz/16bit/单声道)。
                     */
                    std::string m_fileContent;
                    bool m_fileContentHasBeenSet;

                    /**
                     * 音频资源访问链接，与FileContent参数必须二选一输入；
支持范围及格式：同FileContent；
                     */
                    std::string m_fileUrl;
                    bool m_fileUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AMS_V20201229_MODEL_CREATEAUDIOMODERATIONSYNCTASKREQUEST_H_
