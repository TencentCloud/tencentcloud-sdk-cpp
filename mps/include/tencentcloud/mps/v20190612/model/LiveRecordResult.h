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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_LIVERECORDRESULT_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_LIVERECORDRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/TaskOutputStorage.h>
#include <tencentcloud/mps/v20190612/model/LiveRecordFile.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * 直播录制结果
                */
                class LiveRecordResult : public AbstractModel
                {
                public:
                    LiveRecordResult();
                    ~LiveRecordResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取直播录制文件的目标存储。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OutputStorage 直播录制文件的目标存储。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    TaskOutputStorage GetOutputStorage() const;

                    /**
                     * 设置直播录制文件的目标存储。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _outputStorage 直播录制文件的目标存储。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOutputStorage(const TaskOutputStorage& _outputStorage);

                    /**
                     * 判断参数 OutputStorage 是否已赋值
                     * @return OutputStorage 是否已赋值
                     * 
                     */
                    bool OutputStorageHasBeenSet() const;

                    /**
                     * 获取直播录制文件列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FileList 直播录制文件列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<LiveRecordFile> GetFileList() const;

                    /**
                     * 设置直播录制文件列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _fileList 直播录制文件列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFileList(const std::vector<LiveRecordFile>& _fileList);

                    /**
                     * 判断参数 FileList 是否已赋值
                     * @return FileList 是否已赋值
                     * 
                     */
                    bool FileListHasBeenSet() const;

                private:

                    /**
                     * 直播录制文件的目标存储。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    TaskOutputStorage m_outputStorage;
                    bool m_outputStorageHasBeenSet;

                    /**
                     * 直播录制文件列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<LiveRecordFile> m_fileList;
                    bool m_fileListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_LIVERECORDRESULT_H_
