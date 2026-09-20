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

#ifndef TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_VIDEOLIST_H_
#define TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_VIDEOLIST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotexplorer
    {
        namespace V20190423
        {
            namespace Model
            {
                /**
                * 加密云存视频列表数据
                */
                class VideoList : public AbstractModel
                {
                public:
                    VideoList();
                    ~VideoList() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>用于播放加密视频</p>
                     * @return Psign <p>用于播放加密视频</p>
                     * 
                     */
                    std::string GetPsign() const;

                    /**
                     * 设置<p>用于播放加密视频</p>
                     * @param _psign <p>用于播放加密视频</p>
                     * 
                     */
                    void SetPsign(const std::string& _psign);

                    /**
                     * 判断参数 Psign 是否已赋值
                     * @return Psign 是否已赋值
                     * 
                     */
                    bool PsignHasBeenSet() const;

                    /**
                     * 获取<p>开始时间</p>
                     * @return StartTime <p>开始时间</p>
                     * 
                     */
                    uint64_t GetStartTime() const;

                    /**
                     * 设置<p>开始时间</p>
                     * @param _startTime <p>开始时间</p>
                     * 
                     */
                    void SetStartTime(const uint64_t& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取<p>结束时间</p>
                     * @return EndTime <p>结束时间</p>
                     * 
                     */
                    uint64_t GetEndTime() const;

                    /**
                     * 设置<p>结束时间</p>
                     * @param _endTime <p>结束时间</p>
                     * 
                     */
                    void SetEndTime(const uint64_t& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取<p>播放url</p>
                     * @return Url <p>播放url</p>
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置<p>播放url</p>
                     * @param _url <p>播放url</p>
                     * 
                     */
                    void SetUrl(const std::string& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     * 
                     */
                    bool UrlHasBeenSet() const;

                    /**
                     * 获取<p>视频类型</p>
                     * @return StreamType <p>视频类型</p>
                     * 
                     */
                    std::string GetStreamType() const;

                    /**
                     * 设置<p>视频类型</p>
                     * @param _streamType <p>视频类型</p>
                     * 
                     */
                    void SetStreamType(const std::string& _streamType);

                    /**
                     * 判断参数 StreamType 是否已赋值
                     * @return StreamType 是否已赋值
                     * 
                     */
                    bool StreamTypeHasBeenSet() const;

                    /**
                     * 获取<p>点播文件id</p>
                     * @return FileId <p>点播文件id</p>
                     * 
                     */
                    std::string GetFileId() const;

                    /**
                     * 设置<p>点播文件id</p>
                     * @param _fileId <p>点播文件id</p>
                     * 
                     */
                    void SetFileId(const std::string& _fileId);

                    /**
                     * 判断参数 FileId 是否已赋值
                     * @return FileId 是否已赋值
                     * 
                     */
                    bool FileIdHasBeenSet() const;

                private:

                    /**
                     * <p>用于播放加密视频</p>
                     */
                    std::string m_psign;
                    bool m_psignHasBeenSet;

                    /**
                     * <p>开始时间</p>
                     */
                    uint64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>结束时间</p>
                     */
                    uint64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <p>播放url</p>
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * <p>视频类型</p>
                     */
                    std::string m_streamType;
                    bool m_streamTypeHasBeenSet;

                    /**
                     * <p>点播文件id</p>
                     */
                    std::string m_fileId;
                    bool m_fileIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_VIDEOLIST_H_
