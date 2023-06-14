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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_TRANSCODETASK2017_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_TRANSCODETASK2017_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/TranscodePlayInfo2017.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * 视频转码任务信息，该结构仅用于对 2017 版[视频转码](https://cloud.tencent.com/document/product/266/7822)接口发起的任务。
                */
                class TranscodeTask2017 : public AbstractModel
                {
                public:
                    TranscodeTask2017();
                    ~TranscodeTask2017() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取转码任务 ID。
                     * @return TaskId 转码任务 ID。
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置转码任务 ID。
                     * @param _taskId 转码任务 ID。
                     * 
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取错误码
<li>0：成功；</li>
<li>其他值：失败。</li>
                     * @return ErrCode 错误码
<li>0：成功；</li>
<li>其他值：失败。</li>
                     * 
                     */
                    int64_t GetErrCode() const;

                    /**
                     * 设置错误码
<li>0：成功；</li>
<li>其他值：失败。</li>
                     * @param _errCode 错误码
<li>0：成功；</li>
<li>其他值：失败。</li>
                     * 
                     */
                    void SetErrCode(const int64_t& _errCode);

                    /**
                     * 判断参数 ErrCode 是否已赋值
                     * @return ErrCode 是否已赋值
                     * 
                     */
                    bool ErrCodeHasBeenSet() const;

                    /**
                     * 获取错误信息。
                     * @return Message 错误信息。
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置错误信息。
                     * @param _message 错误信息。
                     * 
                     */
                    void SetMessage(const std::string& _message);

                    /**
                     * 判断参数 Message 是否已赋值
                     * @return Message 是否已赋值
                     * 
                     */
                    bool MessageHasBeenSet() const;

                    /**
                     * 获取被转码文件 ID。
                     * @return FileId 被转码文件 ID。
                     * 
                     */
                    std::string GetFileId() const;

                    /**
                     * 设置被转码文件 ID。
                     * @param _fileId 被转码文件 ID。
                     * 
                     */
                    void SetFileId(const std::string& _fileId);

                    /**
                     * 判断参数 FileId 是否已赋值
                     * @return FileId 是否已赋值
                     * 
                     */
                    bool FileIdHasBeenSet() const;

                    /**
                     * 获取被转码文件名称。
                     * @return FileName 被转码文件名称。
                     * 
                     */
                    std::string GetFileName() const;

                    /**
                     * 设置被转码文件名称。
                     * @param _fileName 被转码文件名称。
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
                     * 获取视频时长，单位：秒。
                     * @return Duration 视频时长，单位：秒。
                     * 
                     */
                    uint64_t GetDuration() const;

                    /**
                     * 设置视频时长，单位：秒。
                     * @param _duration 视频时长，单位：秒。
                     * 
                     */
                    void SetDuration(const uint64_t& _duration);

                    /**
                     * 判断参数 Duration 是否已赋值
                     * @return Duration 是否已赋值
                     * 
                     */
                    bool DurationHasBeenSet() const;

                    /**
                     * 获取封面地址。
                     * @return CoverUrl 封面地址。
                     * 
                     */
                    std::string GetCoverUrl() const;

                    /**
                     * 设置封面地址。
                     * @param _coverUrl 封面地址。
                     * 
                     */
                    void SetCoverUrl(const std::string& _coverUrl);

                    /**
                     * 判断参数 CoverUrl 是否已赋值
                     * @return CoverUrl 是否已赋值
                     * 
                     */
                    bool CoverUrlHasBeenSet() const;

                    /**
                     * 获取视频转码后生成的播放信息。
                     * @return PlayInfoSet 视频转码后生成的播放信息。
                     * 
                     */
                    std::vector<TranscodePlayInfo2017> GetPlayInfoSet() const;

                    /**
                     * 设置视频转码后生成的播放信息。
                     * @param _playInfoSet 视频转码后生成的播放信息。
                     * 
                     */
                    void SetPlayInfoSet(const std::vector<TranscodePlayInfo2017>& _playInfoSet);

                    /**
                     * 判断参数 PlayInfoSet 是否已赋值
                     * @return PlayInfoSet 是否已赋值
                     * 
                     */
                    bool PlayInfoSetHasBeenSet() const;

                private:

                    /**
                     * 转码任务 ID。
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 错误码
<li>0：成功；</li>
<li>其他值：失败。</li>
                     */
                    int64_t m_errCode;
                    bool m_errCodeHasBeenSet;

                    /**
                     * 错误信息。
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                    /**
                     * 被转码文件 ID。
                     */
                    std::string m_fileId;
                    bool m_fileIdHasBeenSet;

                    /**
                     * 被转码文件名称。
                     */
                    std::string m_fileName;
                    bool m_fileNameHasBeenSet;

                    /**
                     * 视频时长，单位：秒。
                     */
                    uint64_t m_duration;
                    bool m_durationHasBeenSet;

                    /**
                     * 封面地址。
                     */
                    std::string m_coverUrl;
                    bool m_coverUrlHasBeenSet;

                    /**
                     * 视频转码后生成的播放信息。
                     */
                    std::vector<TranscodePlayInfo2017> m_playInfoSet;
                    bool m_playInfoSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_TRANSCODETASK2017_H_
