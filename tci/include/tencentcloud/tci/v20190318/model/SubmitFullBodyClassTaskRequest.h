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

#ifndef TENCENTCLOUD_TCI_V20190318_MODEL_SUBMITFULLBODYCLASSTASKREQUEST_H_
#define TENCENTCLOUD_TCI_V20190318_MODEL_SUBMITFULLBODYCLASSTASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tci
    {
        namespace V20190318
        {
            namespace Model
            {
                /**
                * SubmitFullBodyClassTask请求参数结构体
                */
                class SubmitFullBodyClassTaskRequest : public AbstractModel
                {
                public:
                    SubmitFullBodyClassTaskRequest();
                    ~SubmitFullBodyClassTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取输入分析对象内容，输入数据格式参考FileType参数释义
                     * @return FileContent 输入分析对象内容，输入数据格式参考FileType参数释义
                     * 
                     */
                    std::string GetFileContent() const;

                    /**
                     * 设置输入分析对象内容，输入数据格式参考FileType参数释义
                     * @param _fileContent 输入分析对象内容，输入数据格式参考FileType参数释义
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
                     * 获取输入分析对象类型，picture_url:图片地址，vod_url:视频地址，live_url：直播地址，picture: 图片二进制数据的BASE64编码
                     * @return FileType 输入分析对象类型，picture_url:图片地址，vod_url:视频地址，live_url：直播地址，picture: 图片二进制数据的BASE64编码
                     * 
                     */
                    std::string GetFileType() const;

                    /**
                     * 设置输入分析对象类型，picture_url:图片地址，vod_url:视频地址，live_url：直播地址，picture: 图片二进制数据的BASE64编码
                     * @param _fileType 输入分析对象类型，picture_url:图片地址，vod_url:视频地址，live_url：直播地址，picture: 图片二进制数据的BASE64编码
                     * 
                     */
                    void SetFileType(const std::string& _fileType);

                    /**
                     * 判断参数 FileType 是否已赋值
                     * @return FileType 是否已赋值
                     * 
                     */
                    bool FileTypeHasBeenSet() const;

                    /**
                     * 获取音频源的语言，默认0为英文，1为中文
                     * @return Lang 音频源的语言，默认0为英文，1为中文
                     * 
                     */
                    int64_t GetLang() const;

                    /**
                     * 设置音频源的语言，默认0为英文，1为中文
                     * @param _lang 音频源的语言，默认0为英文，1为中文
                     * 
                     */
                    void SetLang(const int64_t& _lang);

                    /**
                     * 判断参数 Lang 是否已赋值
                     * @return Lang 是否已赋值
                     * 
                     */
                    bool LangHasBeenSet() const;

                    /**
                     * 获取查询人员库列表，可填写老师的注册照所在人员库
                     * @return LibrarySet 查询人员库列表，可填写老师的注册照所在人员库
                     * 
                     */
                    std::vector<std::string> GetLibrarySet() const;

                    /**
                     * 设置查询人员库列表，可填写老师的注册照所在人员库
                     * @param _librarySet 查询人员库列表，可填写老师的注册照所在人员库
                     * 
                     */
                    void SetLibrarySet(const std::vector<std::string>& _librarySet);

                    /**
                     * 判断参数 LibrarySet 是否已赋值
                     * @return LibrarySet 是否已赋值
                     * 
                     */
                    bool LibrarySetHasBeenSet() const;

                    /**
                     * 获取视频评估时间，单位秒，点播场景默认值为2小时（无法探测长度时）或完整视频，直播场景默认值为10分钟或直播提前结束
                     * @return MaxVideoDuration 视频评估时间，单位秒，点播场景默认值为2小时（无法探测长度时）或完整视频，直播场景默认值为10分钟或直播提前结束
                     * 
                     */
                    int64_t GetMaxVideoDuration() const;

                    /**
                     * 设置视频评估时间，单位秒，点播场景默认值为2小时（无法探测长度时）或完整视频，直播场景默认值为10分钟或直播提前结束
                     * @param _maxVideoDuration 视频评估时间，单位秒，点播场景默认值为2小时（无法探测长度时）或完整视频，直播场景默认值为10分钟或直播提前结束
                     * 
                     */
                    void SetMaxVideoDuration(const int64_t& _maxVideoDuration);

                    /**
                     * 判断参数 MaxVideoDuration 是否已赋值
                     * @return MaxVideoDuration 是否已赋值
                     * 
                     */
                    bool MaxVideoDurationHasBeenSet() const;

                    /**
                     * 获取识别词库名列表，这些词汇库用来维护关键词，评估老师授课过程中，对这些关键词的使用情况
                     * @return VocabLibNameList 识别词库名列表，这些词汇库用来维护关键词，评估老师授课过程中，对这些关键词的使用情况
                     * 
                     */
                    std::vector<std::string> GetVocabLibNameList() const;

                    /**
                     * 设置识别词库名列表，这些词汇库用来维护关键词，评估老师授课过程中，对这些关键词的使用情况
                     * @param _vocabLibNameList 识别词库名列表，这些词汇库用来维护关键词，评估老师授课过程中，对这些关键词的使用情况
                     * 
                     */
                    void SetVocabLibNameList(const std::vector<std::string>& _vocabLibNameList);

                    /**
                     * 判断参数 VocabLibNameList 是否已赋值
                     * @return VocabLibNameList 是否已赋值
                     * 
                     */
                    bool VocabLibNameListHasBeenSet() const;

                    /**
                     * 获取语音编码类型 1:pcm，当FileType为vod_url或live_url时为必填
                     * @return VoiceEncodeType 语音编码类型 1:pcm，当FileType为vod_url或live_url时为必填
                     * 
                     */
                    int64_t GetVoiceEncodeType() const;

                    /**
                     * 设置语音编码类型 1:pcm，当FileType为vod_url或live_url时为必填
                     * @param _voiceEncodeType 语音编码类型 1:pcm，当FileType为vod_url或live_url时为必填
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
                     * 获取语音文件类型 10:视频（三种音频格式目前仅支持16k采样率16bit），当FileType为vod_url或live_url时为必填
                     * @return VoiceFileType 语音文件类型 10:视频（三种音频格式目前仅支持16k采样率16bit），当FileType为vod_url或live_url时为必填
                     * 
                     */
                    int64_t GetVoiceFileType() const;

                    /**
                     * 设置语音文件类型 10:视频（三种音频格式目前仅支持16k采样率16bit），当FileType为vod_url或live_url时为必填
                     * @param _voiceFileType 语音文件类型 10:视频（三种音频格式目前仅支持16k采样率16bit），当FileType为vod_url或live_url时为必填
                     * 
                     */
                    void SetVoiceFileType(const int64_t& _voiceFileType);

                    /**
                     * 判断参数 VoiceFileType 是否已赋值
                     * @return VoiceFileType 是否已赋值
                     * 
                     */
                    bool VoiceFileTypeHasBeenSet() const;

                private:

                    /**
                     * 输入分析对象内容，输入数据格式参考FileType参数释义
                     */
                    std::string m_fileContent;
                    bool m_fileContentHasBeenSet;

                    /**
                     * 输入分析对象类型，picture_url:图片地址，vod_url:视频地址，live_url：直播地址，picture: 图片二进制数据的BASE64编码
                     */
                    std::string m_fileType;
                    bool m_fileTypeHasBeenSet;

                    /**
                     * 音频源的语言，默认0为英文，1为中文
                     */
                    int64_t m_lang;
                    bool m_langHasBeenSet;

                    /**
                     * 查询人员库列表，可填写老师的注册照所在人员库
                     */
                    std::vector<std::string> m_librarySet;
                    bool m_librarySetHasBeenSet;

                    /**
                     * 视频评估时间，单位秒，点播场景默认值为2小时（无法探测长度时）或完整视频，直播场景默认值为10分钟或直播提前结束
                     */
                    int64_t m_maxVideoDuration;
                    bool m_maxVideoDurationHasBeenSet;

                    /**
                     * 识别词库名列表，这些词汇库用来维护关键词，评估老师授课过程中，对这些关键词的使用情况
                     */
                    std::vector<std::string> m_vocabLibNameList;
                    bool m_vocabLibNameListHasBeenSet;

                    /**
                     * 语音编码类型 1:pcm，当FileType为vod_url或live_url时为必填
                     */
                    int64_t m_voiceEncodeType;
                    bool m_voiceEncodeTypeHasBeenSet;

                    /**
                     * 语音文件类型 10:视频（三种音频格式目前仅支持16k采样率16bit），当FileType为vod_url或live_url时为必填
                     */
                    int64_t m_voiceFileType;
                    bool m_voiceFileTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCI_V20190318_MODEL_SUBMITFULLBODYCLASSTASKREQUEST_H_
