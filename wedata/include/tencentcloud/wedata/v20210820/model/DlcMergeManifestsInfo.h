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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DLCMERGEMANIFESTSINFO_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DLCMERGEMANIFESTSINFO_H_

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
                * 合并元数据Manifests治理项
                */
                class DlcMergeManifestsInfo : public AbstractModel
                {
                public:
                    DlcMergeManifestsInfo();
                    ~DlcMergeManifestsInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取是否启用合并元数据Manifests文件治理项：enable、none
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MergeManifestsEnable 是否启用合并元数据Manifests文件治理项：enable、none
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMergeManifestsEnable() const;

                    /**
                     * 设置是否启用合并元数据Manifests文件治理项：enable、none
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _mergeManifestsEnable 是否启用合并元数据Manifests文件治理项：enable、none
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMergeManifestsEnable(const std::string& _mergeManifestsEnable);

                    /**
                     * 判断参数 MergeManifestsEnable 是否已赋值
                     * @return MergeManifestsEnable 是否已赋值
                     * 
                     */
                    bool MergeManifestsEnableHasBeenSet() const;

                    /**
                     * 获取用于运行合并元数据Manifests文件治理项的引擎名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Engine 用于运行合并元数据Manifests文件治理项的引擎名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEngine() const;

                    /**
                     * 设置用于运行合并元数据Manifests文件治理项的引擎名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _engine 用于运行合并元数据Manifests文件治理项的引擎名称
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
                     * 获取合并元数据Manifests文件治理运行周期，单位为分钟
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IntervalMin 合并元数据Manifests文件治理运行周期，单位为分钟
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetIntervalMin() const;

                    /**
                     * 设置合并元数据Manifests文件治理运行周期，单位为分钟
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _intervalMin 合并元数据Manifests文件治理运行周期，单位为分钟
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
                     * 是否启用合并元数据Manifests文件治理项：enable、none
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_mergeManifestsEnable;
                    bool m_mergeManifestsEnableHasBeenSet;

                    /**
                     * 用于运行合并元数据Manifests文件治理项的引擎名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_engine;
                    bool m_engineHasBeenSet;

                    /**
                     * 合并元数据Manifests文件治理运行周期，单位为分钟
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_intervalMin;
                    bool m_intervalMinHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DLCMERGEMANIFESTSINFO_H_
