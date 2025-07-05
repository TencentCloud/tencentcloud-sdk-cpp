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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_CLIPTASK2017_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_CLIPTASK2017_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/ClipFileInfo2017.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * 视频剪辑任务信息，该结构仅用于对 2017 版[视频剪辑](https://cloud.tencent.com/document/product/266/10156)接口发起的任务。
                */
                class ClipTask2017 : public AbstractModel
                {
                public:
                    ClipTask2017();
                    ~ClipTask2017() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取视频剪辑任务 ID。
                     * @return TaskId 视频剪辑任务 ID。
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置视频剪辑任务 ID。
                     * @param _taskId 视频剪辑任务 ID。
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
                     * 获取视频剪辑任务源文件 ID。
                     * @return SrcFileId 视频剪辑任务源文件 ID。
                     * 
                     */
                    std::string GetSrcFileId() const;

                    /**
                     * 设置视频剪辑任务源文件 ID。
                     * @param _srcFileId 视频剪辑任务源文件 ID。
                     * 
                     */
                    void SetSrcFileId(const std::string& _srcFileId);

                    /**
                     * 判断参数 SrcFileId 是否已赋值
                     * @return SrcFileId 是否已赋值
                     * 
                     */
                    bool SrcFileIdHasBeenSet() const;

                    /**
                     * 获取视频剪辑输出的文件信息。
                     * @return FileInfo 视频剪辑输出的文件信息。
                     * 
                     */
                    ClipFileInfo2017 GetFileInfo() const;

                    /**
                     * 设置视频剪辑输出的文件信息。
                     * @param _fileInfo 视频剪辑输出的文件信息。
                     * 
                     */
                    void SetFileInfo(const ClipFileInfo2017& _fileInfo);

                    /**
                     * 判断参数 FileInfo 是否已赋值
                     * @return FileInfo 是否已赋值
                     * 
                     */
                    bool FileInfoHasBeenSet() const;

                private:

                    /**
                     * 视频剪辑任务 ID。
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 视频剪辑任务源文件 ID。
                     */
                    std::string m_srcFileId;
                    bool m_srcFileIdHasBeenSet;

                    /**
                     * 视频剪辑输出的文件信息。
                     */
                    ClipFileInfo2017 m_fileInfo;
                    bool m_fileInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_CLIPTASK2017_H_
