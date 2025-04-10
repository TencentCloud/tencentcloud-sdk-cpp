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

#ifndef TENCENTCLOUD_ES_V20180416_MODEL_COSSNAPSHOTINFO_H_
#define TENCENTCLOUD_ES_V20180416_MODEL_COSSNAPSHOTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/es/v20180416/model/CommonIndexInfo.h>
#include <tencentcloud/es/v20180416/model/DataStreamInfo.h>


namespace TencentCloud
{
    namespace Es
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * 无
                */
                class CosSnapShotInfo : public AbstractModel
                {
                public:
                    CosSnapShotInfo();
                    ~CosSnapShotInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取cos 桶名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CosBucket cos 桶名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCosBucket() const;

                    /**
                     * 设置cos 桶名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cosBucket cos 桶名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCosBucket(const std::string& _cosBucket);

                    /**
                     * 判断参数 CosBucket 是否已赋值
                     * @return CosBucket 是否已赋值
                     * 
                     */
                    bool CosBucketHasBeenSet() const;

                    /**
                     * 获取base path
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BasePath base path
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBasePath() const;

                    /**
                     * 设置base path
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _basePath base path
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBasePath(const std::string& _basePath);

                    /**
                     * 判断参数 BasePath 是否已赋值
                     * @return BasePath 是否已赋值
                     * 
                     */
                    bool BasePathHasBeenSet() const;

                    /**
                     * 获取快照名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SnapshotName 快照名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSnapshotName() const;

                    /**
                     * 设置快照名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _snapshotName 快照名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSnapshotName(const std::string& _snapshotName);

                    /**
                     * 判断参数 SnapshotName 是否已赋值
                     * @return SnapshotName 是否已赋值
                     * 
                     */
                    bool SnapshotNameHasBeenSet() const;

                    /**
                     * 获取状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @return State 状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetState() const;

                    /**
                     * 设置状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _state 状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetState(const std::string& _state);

                    /**
                     * 判断参数 State 是否已赋值
                     * @return State 是否已赋值
                     * 
                     */
                    bool StateHasBeenSet() const;

                    /**
                     * 获取快照版本
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Version 快照版本
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetVersion() const;

                    /**
                     * 设置快照版本
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _version 快照版本
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetVersion(const std::string& _version);

                    /**
                     * 判断参数 Version 是否已赋值
                     * @return Version 是否已赋值
                     * 
                     */
                    bool VersionHasBeenSet() const;

                    /**
                     * 获取普通[{"DataStreamName":"ilm-history-5","Is索引信息列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CommonIndexArr 普通[{"DataStreamName":"ilm-history-5","Is索引信息列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<CommonIndexInfo> GetCommonIndexArr() const;

                    /**
                     * 设置普通[{"DataStreamName":"ilm-history-5","Is索引信息列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _commonIndexArr 普通[{"DataStreamName":"ilm-history-5","Is索引信息列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCommonIndexArr(const std::vector<CommonIndexInfo>& _commonIndexArr);

                    /**
                     * 判断参数 CommonIndexArr 是否已赋值
                     * @return CommonIndexArr 是否已赋值
                     * 
                     */
                    bool CommonIndexArrHasBeenSet() const;

                    /**
                     * 获取自治索引信息列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DataStreamArr 自治索引信息列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<DataStreamInfo> GetDataStreamArr() const;

                    /**
                     * 设置自治索引信息列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dataStreamArr 自治索引信息列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDataStreamArr(const std::vector<DataStreamInfo>& _dataStreamArr);

                    /**
                     * 判断参数 DataStreamArr 是否已赋值
                     * @return DataStreamArr 是否已赋值
                     * 
                     */
                    bool DataStreamArrHasBeenSet() const;

                private:

                    /**
                     * cos 桶名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_cosBucket;
                    bool m_cosBucketHasBeenSet;

                    /**
                     * base path
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_basePath;
                    bool m_basePathHasBeenSet;

                    /**
                     * 快照名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_snapshotName;
                    bool m_snapshotNameHasBeenSet;

                    /**
                     * 状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * 快照版本
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_version;
                    bool m_versionHasBeenSet;

                    /**
                     * 普通[{"DataStreamName":"ilm-history-5","Is索引信息列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<CommonIndexInfo> m_commonIndexArr;
                    bool m_commonIndexArrHasBeenSet;

                    /**
                     * 自治索引信息列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<DataStreamInfo> m_dataStreamArr;
                    bool m_dataStreamArrHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20180416_MODEL_COSSNAPSHOTINFO_H_
