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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_BATCHSUBTASKRESULT_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_BATCHSUBTASKRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/MediaInputInfo.h>
#include <tencentcloud/mps/v20190612/model/MediaMetaData.h>
#include <tencentcloud/mps/v20190612/model/BatchSmartSubtitlesResult.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * 批量任务子任务结果
                */
                class BatchSubTaskResult : public AbstractModel
                {
                public:
                    BatchSubTaskResult();
                    ~BatchSubTaskResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取批量任务输入信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InputInfos 批量任务输入信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<MediaInputInfo> GetInputInfos() const;

                    /**
                     * 设置批量任务输入信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _inputInfos 批量任务输入信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInputInfos(const std::vector<MediaInputInfo>& _inputInfos);

                    /**
                     * 判断参数 InputInfos 是否已赋值
                     * @return InputInfos 是否已赋值
                     * 
                     */
                    bool InputInfosHasBeenSet() const;

                    /**
                     * 获取原始视频的元信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Metadatas 原始视频的元信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<MediaMetaData> GetMetadatas() const;

                    /**
                     * 设置原始视频的元信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _metadatas 原始视频的元信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMetadatas(const std::vector<MediaMetaData>& _metadatas);

                    /**
                     * 判断参数 Metadatas 是否已赋值
                     * @return Metadatas 是否已赋值
                     * 
                     */
                    bool MetadatasHasBeenSet() const;

                    /**
                     * 获取智能字幕任务的执行结果
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SmartSubtitlesTaskResult 智能字幕任务的执行结果
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    BatchSmartSubtitlesResult GetSmartSubtitlesTaskResult() const;

                    /**
                     * 设置智能字幕任务的执行结果
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _smartSubtitlesTaskResult 智能字幕任务的执行结果
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSmartSubtitlesTaskResult(const BatchSmartSubtitlesResult& _smartSubtitlesTaskResult);

                    /**
                     * 判断参数 SmartSubtitlesTaskResult 是否已赋值
                     * @return SmartSubtitlesTaskResult 是否已赋值
                     * 
                     */
                    bool SmartSubtitlesTaskResultHasBeenSet() const;

                private:

                    /**
                     * 批量任务输入信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<MediaInputInfo> m_inputInfos;
                    bool m_inputInfosHasBeenSet;

                    /**
                     * 原始视频的元信息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<MediaMetaData> m_metadatas;
                    bool m_metadatasHasBeenSet;

                    /**
                     * 智能字幕任务的执行结果
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    BatchSmartSubtitlesResult m_smartSubtitlesTaskResult;
                    bool m_smartSubtitlesTaskResultHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_BATCHSUBTASKRESULT_H_
