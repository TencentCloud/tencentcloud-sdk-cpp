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

#ifndef TENCENTCLOUD_ES_V20180416_MODEL_DATASTREAMINFO_H_
#define TENCENTCLOUD_ES_V20180416_MODEL_DATASTREAMINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Es
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * 自治索引信息
                */
                class DataStreamInfo : public AbstractModel
                {
                public:
                    DataStreamInfo();
                    ~DataStreamInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取自治索引名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DataStreamName 自治索引名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDataStreamName() const;

                    /**
                     * 设置自治索引名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dataStreamName 自治索引名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDataStreamName(const std::string& _dataStreamName);

                    /**
                     * 判断参数 DataStreamName 是否已赋值
                     * @return DataStreamName 是否已赋值
                     * 
                     */
                    bool DataStreamNameHasBeenSet() const;

                    /**
                     * 获取分片状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsShardComplete 分片状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetIsShardComplete() const;

                    /**
                     * 设置分片状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isShardComplete 分片状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIsShardComplete(const int64_t& _isShardComplete);

                    /**
                     * 判断参数 IsShardComplete 是否已赋值
                     * @return IsShardComplete 是否已赋值
                     * 
                     */
                    bool IsShardCompleteHasBeenSet() const;

                private:

                    /**
                     * 自治索引名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_dataStreamName;
                    bool m_dataStreamNameHasBeenSet;

                    /**
                     * 分片状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_isShardComplete;
                    bool m_isShardCompleteHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20180416_MODEL_DATASTREAMINFO_H_
