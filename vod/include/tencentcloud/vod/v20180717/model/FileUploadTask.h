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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_FILEUPLOADTASK_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_FILEUPLOADTASK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/MediaBasicInfo.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * 文件上传任务信息
                */
                class FileUploadTask : public AbstractModel
                {
                public:
                    FileUploadTask();
                    ~FileUploadTask() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取文件唯一 ID。
                     * @return FileId 文件唯一 ID。
                     */
                    std::string GetFileId() const;

                    /**
                     * 设置文件唯一 ID。
                     * @param FileId 文件唯一 ID。
                     */
                    void SetFileId(const std::string& _fileId);

                    /**
                     * 判断参数 FileId 是否已赋值
                     * @return FileId 是否已赋值
                     */
                    bool FileIdHasBeenSet() const;

                    /**
                     * 获取上传完成后生成的媒体文件基础信息。
                     * @return MediaBasicInfo 上传完成后生成的媒体文件基础信息。
                     */
                    MediaBasicInfo GetMediaBasicInfo() const;

                    /**
                     * 设置上传完成后生成的媒体文件基础信息。
                     * @param MediaBasicInfo 上传完成后生成的媒体文件基础信息。
                     */
                    void SetMediaBasicInfo(const MediaBasicInfo& _mediaBasicInfo);

                    /**
                     * 判断参数 MediaBasicInfo 是否已赋值
                     * @return MediaBasicInfo 是否已赋值
                     */
                    bool MediaBasicInfoHasBeenSet() const;

                    /**
                     * 获取若视频上传时指定了视频处理流程，则该字段为流程任务 ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProcedureTaskId 若视频上传时指定了视频处理流程，则该字段为流程任务 ID。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetProcedureTaskId() const;

                    /**
                     * 设置若视频上传时指定了视频处理流程，则该字段为流程任务 ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ProcedureTaskId 若视频上传时指定了视频处理流程，则该字段为流程任务 ID。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetProcedureTaskId(const std::string& _procedureTaskId);

                    /**
                     * 判断参数 ProcedureTaskId 是否已赋值
                     * @return ProcedureTaskId 是否已赋值
                     */
                    bool ProcedureTaskIdHasBeenSet() const;

                private:

                    /**
                     * 文件唯一 ID。
                     */
                    std::string m_fileId;
                    bool m_fileIdHasBeenSet;

                    /**
                     * 上传完成后生成的媒体文件基础信息。
                     */
                    MediaBasicInfo m_mediaBasicInfo;
                    bool m_mediaBasicInfoHasBeenSet;

                    /**
                     * 若视频上传时指定了视频处理流程，则该字段为流程任务 ID。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_procedureTaskId;
                    bool m_procedureTaskIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_FILEUPLOADTASK_H_
