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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_LIVESTREAMRECORDRESULTINFO_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_LIVESTREAMRECORDRESULTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
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
                * 直播流录制结果
                */
                class LiveStreamRecordResultInfo : public AbstractModel
                {
                public:
                    LiveStreamRecordResultInfo();
                    ~LiveStreamRecordResultInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取录制是否结束。
0：录制未结束，返回单个文件结果
1：录制结束，返回所有录制文件结果
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RecordOver 录制是否结束。
0：录制未结束，返回单个文件结果
1：录制结束，返回所有录制文件结果
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetRecordOver() const;

                    /**
                     * 设置录制是否结束。
0：录制未结束，返回单个文件结果
1：录制结束，返回所有录制文件结果
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _recordOver 录制是否结束。
0：录制未结束，返回单个文件结果
1：录制结束，返回所有录制文件结果
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRecordOver(const uint64_t& _recordOver);

                    /**
                     * 判断参数 RecordOver 是否已赋值
                     * @return RecordOver 是否已赋值
                     * 
                     */
                    bool RecordOverHasBeenSet() const;

                    /**
                     * 获取文件列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FileResults 文件列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<LiveRecordFile> GetFileResults() const;

                    /**
                     * 设置文件列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _fileResults 文件列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFileResults(const std::vector<LiveRecordFile>& _fileResults);

                    /**
                     * 判断参数 FileResults 是否已赋值
                     * @return FileResults 是否已赋值
                     * 
                     */
                    bool FileResultsHasBeenSet() const;

                private:

                    /**
                     * 录制是否结束。
0：录制未结束，返回单个文件结果
1：录制结束，返回所有录制文件结果
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_recordOver;
                    bool m_recordOverHasBeenSet;

                    /**
                     * 文件列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<LiveRecordFile> m_fileResults;
                    bool m_fileResultsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_LIVESTREAMRECORDRESULTINFO_H_
