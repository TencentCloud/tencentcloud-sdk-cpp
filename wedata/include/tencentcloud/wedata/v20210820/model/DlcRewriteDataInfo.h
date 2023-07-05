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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DLCREWRITEDATAINFO_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DLCREWRITEDATAINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * 数据排布治理项
                */
                class DlcRewriteDataInfo : public AbstractModel
                {
                public:
                    DlcRewriteDataInfo();
                    ~DlcRewriteDataInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取是否启用数据重排布治理项：enable（启动）、disable（不启用，默认）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RewriteDataEnable 是否启用数据重排布治理项：enable（启动）、disable（不启用，默认）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRewriteDataEnable() const;

                    /**
                     * 设置是否启用数据重排布治理项：enable（启动）、disable（不启用，默认）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _rewriteDataEnable 是否启用数据重排布治理项：enable（启动）、disable（不启用，默认）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRewriteDataEnable(const std::string& _rewriteDataEnable);

                    /**
                     * 判断参数 RewriteDataEnable 是否已赋值
                     * @return RewriteDataEnable 是否已赋值
                     * 
                     */
                    bool RewriteDataEnableHasBeenSet() const;

                    /**
                     * 获取用于运行数据重排布治理项的引擎名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Engine 用于运行数据重排布治理项的引擎名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEngine() const;

                    /**
                     * 设置用于运行数据重排布治理项的引擎名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _engine 用于运行数据重排布治理项的引擎名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEngine(const std::string& _engine);

                    /**
                     * 判断参数 Engine 是否已赋值
                     * @return Engine 是否已赋值
                     * 
                     */
                    bool EngineHasBeenSet() const;

                    /**
                     * 获取重排布任务执行的文件个数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MinInputFiles 重排布任务执行的文件个数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetMinInputFiles() const;

                    /**
                     * 设置重排布任务执行的文件个数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _minInputFiles 重排布任务执行的文件个数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMinInputFiles(const uint64_t& _minInputFiles);

                    /**
                     * 判断参数 MinInputFiles 是否已赋值
                     * @return MinInputFiles 是否已赋值
                     * 
                     */
                    bool MinInputFilesHasBeenSet() const;

                    /**
                     * 获取数据重排布写后的数据文件大小，单位为字节
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TargetFileSizeBytes 数据重排布写后的数据文件大小，单位为字节
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetTargetFileSizeBytes() const;

                    /**
                     * 设置数据重排布写后的数据文件大小，单位为字节
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _targetFileSizeBytes 数据重排布写后的数据文件大小，单位为字节
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTargetFileSizeBytes(const uint64_t& _targetFileSizeBytes);

                    /**
                     * 判断参数 TargetFileSizeBytes 是否已赋值
                     * @return TargetFileSizeBytes 是否已赋值
                     * 
                     */
                    bool TargetFileSizeBytesHasBeenSet() const;

                    /**
                     * 获取数据重排布治理运行周期，单位为分钟
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IntervalMin 数据重排布治理运行周期，单位为分钟
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetIntervalMin() const;

                    /**
                     * 设置数据重排布治理运行周期，单位为分钟
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _intervalMin 数据重排布治理运行周期，单位为分钟
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIntervalMin(const uint64_t& _intervalMin);

                    /**
                     * 判断参数 IntervalMin 是否已赋值
                     * @return IntervalMin 是否已赋值
                     * 
                     */
                    bool IntervalMinHasBeenSet() const;

                private:

                    /**
                     * 是否启用数据重排布治理项：enable（启动）、disable（不启用，默认）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_rewriteDataEnable;
                    bool m_rewriteDataEnableHasBeenSet;

                    /**
                     * 用于运行数据重排布治理项的引擎名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_engine;
                    bool m_engineHasBeenSet;

                    /**
                     * 重排布任务执行的文件个数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_minInputFiles;
                    bool m_minInputFilesHasBeenSet;

                    /**
                     * 数据重排布写后的数据文件大小，单位为字节
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_targetFileSizeBytes;
                    bool m_targetFileSizeBytesHasBeenSet;

                    /**
                     * 数据重排布治理运行周期，单位为分钟
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_intervalMin;
                    bool m_intervalMinHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DLCREWRITEDATAINFO_H_
