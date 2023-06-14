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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_SNAPSHOTBYTIMEOFFSETTASK2017_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_SNAPSHOTBYTIMEOFFSETTASK2017_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/SnapshotByTimeOffset2017.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * 视频指定时间点截图任务信息，该结构仅用于 2017 版[指定时间点截图](https://cloud.tencent.com/document/product/266/8102)接口发起的任务。
                */
                class SnapshotByTimeOffsetTask2017 : public AbstractModel
                {
                public:
                    SnapshotByTimeOffsetTask2017();
                    ~SnapshotByTimeOffsetTask2017() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取截图任务 ID。
                     * @return TaskId 截图任务 ID。
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置截图任务 ID。
                     * @param _taskId 截图任务 ID。
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
                     * 获取截图文件 ID。
                     * @return FileId 截图文件 ID。
                     * 
                     */
                    std::string GetFileId() const;

                    /**
                     * 设置截图文件 ID。
                     * @param _fileId 截图文件 ID。
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
                     * 获取截图规格，参见[指定时间点截图参数模板](https://cloud.tencent.com/document/product/266/33480#.E6.97.B6.E9.97.B4.E7.82.B9.E6.88.AA.E5.9B.BE.E6.A8.A1.E6.9D.BF)。
                     * @return Definition 截图规格，参见[指定时间点截图参数模板](https://cloud.tencent.com/document/product/266/33480#.E6.97.B6.E9.97.B4.E7.82.B9.E6.88.AA.E5.9B.BE.E6.A8.A1.E6.9D.BF)。
                     * 
                     */
                    int64_t GetDefinition() const;

                    /**
                     * 设置截图规格，参见[指定时间点截图参数模板](https://cloud.tencent.com/document/product/266/33480#.E6.97.B6.E9.97.B4.E7.82.B9.E6.88.AA.E5.9B.BE.E6.A8.A1.E6.9D.BF)。
                     * @param _definition 截图规格，参见[指定时间点截图参数模板](https://cloud.tencent.com/document/product/266/33480#.E6.97.B6.E9.97.B4.E7.82.B9.E6.88.AA.E5.9B.BE.E6.A8.A1.E6.9D.BF)。
                     * 
                     */
                    void SetDefinition(const int64_t& _definition);

                    /**
                     * 判断参数 Definition 是否已赋值
                     * @return Definition 是否已赋值
                     * 
                     */
                    bool DefinitionHasBeenSet() const;

                    /**
                     * 获取截图结果信息。
                     * @return SnapshotInfoSet 截图结果信息。
                     * 
                     */
                    std::vector<SnapshotByTimeOffset2017> GetSnapshotInfoSet() const;

                    /**
                     * 设置截图结果信息。
                     * @param _snapshotInfoSet 截图结果信息。
                     * 
                     */
                    void SetSnapshotInfoSet(const std::vector<SnapshotByTimeOffset2017>& _snapshotInfoSet);

                    /**
                     * 判断参数 SnapshotInfoSet 是否已赋值
                     * @return SnapshotInfoSet 是否已赋值
                     * 
                     */
                    bool SnapshotInfoSetHasBeenSet() const;

                private:

                    /**
                     * 截图任务 ID。
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 截图文件 ID。
                     */
                    std::string m_fileId;
                    bool m_fileIdHasBeenSet;

                    /**
                     * 截图规格，参见[指定时间点截图参数模板](https://cloud.tencent.com/document/product/266/33480#.E6.97.B6.E9.97.B4.E7.82.B9.E6.88.AA.E5.9B.BE.E6.A8.A1.E6.9D.BF)。
                     */
                    int64_t m_definition;
                    bool m_definitionHasBeenSet;

                    /**
                     * 截图结果信息。
                     */
                    std::vector<SnapshotByTimeOffset2017> m_snapshotInfoSet;
                    bool m_snapshotInfoSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_SNAPSHOTBYTIMEOFFSETTASK2017_H_
