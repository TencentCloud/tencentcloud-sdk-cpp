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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_EDITMEDIATASKOUTPUT_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_EDITMEDIATASKOUTPUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/TaskOutputStorage.h>
#include <tencentcloud/mps/v20190612/model/MediaMetaData.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * 编辑视频任务的输出
                */
                class EditMediaTaskOutput : public AbstractModel
                {
                public:
                    EditMediaTaskOutput();
                    ~EditMediaTaskOutput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取编辑后文件的目标存储。
                     * @return OutputStorage 编辑后文件的目标存储。
                     * 
                     */
                    TaskOutputStorage GetOutputStorage() const;

                    /**
                     * 设置编辑后文件的目标存储。
                     * @param _outputStorage 编辑后文件的目标存储。
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
                     * 获取编辑后的视频文件路径。
                     * @return Path 编辑后的视频文件路径。
                     * 
                     */
                    std::string GetPath() const;

                    /**
                     * 设置编辑后的视频文件路径。
                     * @param _path 编辑后的视频文件路径。
                     * 
                     */
                    void SetPath(const std::string& _path);

                    /**
                     * 判断参数 Path 是否已赋值
                     * @return Path 是否已赋值
                     * 
                     */
                    bool PathHasBeenSet() const;

                    /**
                     * 获取编辑后的视频文件元信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MetaData 编辑后的视频文件元信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    MediaMetaData GetMetaData() const;

                    /**
                     * 设置编辑后的视频文件元信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _metaData 编辑后的视频文件元信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMetaData(const MediaMetaData& _metaData);

                    /**
                     * 判断参数 MetaData 是否已赋值
                     * @return MetaData 是否已赋值
                     * 
                     */
                    bool MetaDataHasBeenSet() const;

                private:

                    /**
                     * 编辑后文件的目标存储。
                     */
                    TaskOutputStorage m_outputStorage;
                    bool m_outputStorageHasBeenSet;

                    /**
                     * 编辑后的视频文件路径。
                     */
                    std::string m_path;
                    bool m_pathHasBeenSet;

                    /**
                     * 编辑后的视频文件元信息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    MediaMetaData m_metaData;
                    bool m_metaDataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_EDITMEDIATASKOUTPUT_H_
