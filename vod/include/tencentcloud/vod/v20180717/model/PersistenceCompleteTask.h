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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_PERSISTENCECOMPLETETASK_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_PERSISTENCECOMPLETETASK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * 剪辑固化任务信息。
                */
                class PersistenceCompleteTask : public AbstractModel
                {
                public:
                    PersistenceCompleteTask();
                    ~PersistenceCompleteTask() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取固化生成的媒体 ID。
                     * @return FileId 固化生成的媒体 ID。
                     * 
                     */
                    std::string GetFileId() const;

                    /**
                     * 设置固化生成的媒体 ID。
                     * @param _fileId 固化生成的媒体 ID。
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
                     * 获取剪辑固化的来源，有以下三种。
<li>SimpleHlsClip：来自简单 HLS 剪辑；</li>
<li>FastEditMedia：来自快速媒体编辑；</li>
<li>LiveRealTimeClip:来自直播即时剪辑。</li>
                     * @return PersistenceSource 剪辑固化的来源，有以下三种。
<li>SimpleHlsClip：来自简单 HLS 剪辑；</li>
<li>FastEditMedia：来自快速媒体编辑；</li>
<li>LiveRealTimeClip:来自直播即时剪辑。</li>
                     * 
                     */
                    std::string GetPersistenceSource() const;

                    /**
                     * 设置剪辑固化的来源，有以下三种。
<li>SimpleHlsClip：来自简单 HLS 剪辑；</li>
<li>FastEditMedia：来自快速媒体编辑；</li>
<li>LiveRealTimeClip:来自直播即时剪辑。</li>
                     * @param _persistenceSource 剪辑固化的来源，有以下三种。
<li>SimpleHlsClip：来自简单 HLS 剪辑；</li>
<li>FastEditMedia：来自快速媒体编辑；</li>
<li>LiveRealTimeClip:来自直播即时剪辑。</li>
                     * 
                     */
                    void SetPersistenceSource(const std::string& _persistenceSource);

                    /**
                     * 判断参数 PersistenceSource 是否已赋值
                     * @return PersistenceSource 是否已赋值
                     * 
                     */
                    bool PersistenceSourceHasBeenSet() const;

                private:

                    /**
                     * 固化生成的媒体 ID。
                     */
                    std::string m_fileId;
                    bool m_fileIdHasBeenSet;

                    /**
                     * 剪辑固化的来源，有以下三种。
<li>SimpleHlsClip：来自简单 HLS 剪辑；</li>
<li>FastEditMedia：来自快速媒体编辑；</li>
<li>LiveRealTimeClip:来自直播即时剪辑。</li>
                     */
                    std::string m_persistenceSource;
                    bool m_persistenceSourceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_PERSISTENCECOMPLETETASK_H_
