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

#ifndef TENCENTCLOUD_AME_V20190916_MODEL_MUSIC_H_
#define TENCENTCLOUD_AME_V20190916_MODEL_MUSIC_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ame
    {
        namespace V20190916
        {
            namespace Model
            {
                /**
                * Music
                */
                class Music : public AbstractModel
                {
                public:
                    Music();
                    ~Music() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取音乐播放链接相对路径，必须通过在音乐版权助手上登记的域名进行拼接。
                     * @return Url 音乐播放链接相对路径，必须通过在音乐版权助手上登记的域名进行拼接。
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置音乐播放链接相对路径，必须通过在音乐版权助手上登记的域名进行拼接。
                     * @param Url 音乐播放链接相对路径，必须通过在音乐版权助手上登记的域名进行拼接。
                     */
                    void SetUrl(const std::string& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     */
                    bool UrlHasBeenSet() const;

                    /**
                     * 获取音频文件大小
                     * @return FileSize 音频文件大小
                     */
                    uint64_t GetFileSize() const;

                    /**
                     * 设置音频文件大小
                     * @param FileSize 音频文件大小
                     */
                    void SetFileSize(const uint64_t& _fileSize);

                    /**
                     * 判断参数 FileSize 是否已赋值
                     * @return FileSize 是否已赋值
                     */
                    bool FileSizeHasBeenSet() const;

                    /**
                     * 获取音频文件类型
                     * @return FileExtension 音频文件类型
                     */
                    std::string GetFileExtension() const;

                    /**
                     * 设置音频文件类型
                     * @param FileExtension 音频文件类型
                     */
                    void SetFileExtension(const std::string& _fileExtension);

                    /**
                     * 判断参数 FileExtension 是否已赋值
                     * @return FileExtension 是否已赋值
                     */
                    bool FileExtensionHasBeenSet() const;

                    /**
                     * 获取Song fragment start.试听片段开始时间，试听时长为auditionEnd-auditionBegin
Unit :ms
                     * @return AuditionBegin Song fragment start.试听片段开始时间，试听时长为auditionEnd-auditionBegin
Unit :ms
                     */
                    uint64_t GetAuditionBegin() const;

                    /**
                     * 设置Song fragment start.试听片段开始时间，试听时长为auditionEnd-auditionBegin
Unit :ms
                     * @param AuditionBegin Song fragment start.试听片段开始时间，试听时长为auditionEnd-auditionBegin
Unit :ms
                     */
                    void SetAuditionBegin(const uint64_t& _auditionBegin);

                    /**
                     * 判断参数 AuditionBegin 是否已赋值
                     * @return AuditionBegin 是否已赋值
                     */
                    bool AuditionBeginHasBeenSet() const;

                    /**
                     * 获取Song fragment end.试听片段结束时间, 试听时长为auditionEnd-auditionBegin
Unit :ms
                     * @return AuditionEnd Song fragment end.试听片段结束时间, 试听时长为auditionEnd-auditionBegin
Unit :ms
                     */
                    uint64_t GetAuditionEnd() const;

                    /**
                     * 设置Song fragment end.试听片段结束时间, 试听时长为auditionEnd-auditionBegin
Unit :ms
                     * @param AuditionEnd Song fragment end.试听片段结束时间, 试听时长为auditionEnd-auditionBegin
Unit :ms
                     */
                    void SetAuditionEnd(const uint64_t& _auditionEnd);

                    /**
                     * 判断参数 AuditionEnd 是否已赋值
                     * @return AuditionEnd 是否已赋值
                     */
                    bool AuditionEndHasBeenSet() const;

                private:

                    /**
                     * 音乐播放链接相对路径，必须通过在音乐版权助手上登记的域名进行拼接。
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * 音频文件大小
                     */
                    uint64_t m_fileSize;
                    bool m_fileSizeHasBeenSet;

                    /**
                     * 音频文件类型
                     */
                    std::string m_fileExtension;
                    bool m_fileExtensionHasBeenSet;

                    /**
                     * Song fragment start.试听片段开始时间，试听时长为auditionEnd-auditionBegin
Unit :ms
                     */
                    uint64_t m_auditionBegin;
                    bool m_auditionBeginHasBeenSet;

                    /**
                     * Song fragment end.试听片段结束时间, 试听时长为auditionEnd-auditionBegin
Unit :ms
                     */
                    uint64_t m_auditionEnd;
                    bool m_auditionEndHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AME_V20190916_MODEL_MUSIC_H_
