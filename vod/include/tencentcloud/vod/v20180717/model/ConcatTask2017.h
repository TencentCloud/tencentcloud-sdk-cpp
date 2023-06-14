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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_CONCATTASK2017_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_CONCATTASK2017_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/ConcatFileInfo2017.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * 视频拼接任务信息，该结构仅用于对 2017 版[视频拼接](https://cloud.tencent.com/document/product/266/7821)接口发起的任务。
                */
                class ConcatTask2017 : public AbstractModel
                {
                public:
                    ConcatTask2017();
                    ~ConcatTask2017() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取视频拼接任务 ID。
                     * @return TaskId 视频拼接任务 ID。
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置视频拼接任务 ID。
                     * @param _taskId 视频拼接任务 ID。
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
                     * 获取视频拼接源文件信息。
                     * @return FileInfoSet 视频拼接源文件信息。
                     * 
                     */
                    std::vector<ConcatFileInfo2017> GetFileInfoSet() const;

                    /**
                     * 设置视频拼接源文件信息。
                     * @param _fileInfoSet 视频拼接源文件信息。
                     * 
                     */
                    void SetFileInfoSet(const std::vector<ConcatFileInfo2017>& _fileInfoSet);

                    /**
                     * 判断参数 FileInfoSet 是否已赋值
                     * @return FileInfoSet 是否已赋值
                     * 
                     */
                    bool FileInfoSetHasBeenSet() const;

                private:

                    /**
                     * 视频拼接任务 ID。
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 视频拼接源文件信息。
                     */
                    std::vector<ConcatFileInfo2017> m_fileInfoSet;
                    bool m_fileInfoSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_CONCATTASK2017_H_
