/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_DATABUDDY_V20260715_MODEL_FILEARRIVALCONFIG_H_
#define TENCENTCLOUD_DATABUDDY_V20260715_MODEL_FILEARRIVALCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Databuddy
    {
        namespace V20260715
        {
            namespace Model
            {
                /**
                * 文件到达触发信息
                */
                class FileArrivalConfig : public AbstractModel
                {
                public:
                    FileArrivalConfig();
                    ~FileArrivalConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>运行命中的文件所在COS桶名</p><p>举例：dlc-sh-store-139153****</p><p>入参不填，如果填写则忽略；</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CosBucket <p>运行命中的文件所在COS桶名</p><p>举例：dlc-sh-store-139153****</p><p>入参不填，如果填写则忽略；</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCosBucket() const;

                    /**
                     * 设置<p>运行命中的文件所在COS桶名</p><p>举例：dlc-sh-store-139153****</p><p>入参不填，如果填写则忽略；</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cosBucket <p>运行命中的文件所在COS桶名</p><p>举例：dlc-sh-store-139153****</p><p>入参不填，如果填写则忽略；</p>
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
                     * 获取<p>运行命中的文件所在COS地域</p><p>举例：ap-shanghai</p><p>入参不填，如果填写则忽略；</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CosRegion <p>运行命中的文件所在COS地域</p><p>举例：ap-shanghai</p><p>入参不填，如果填写则忽略；</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCosRegion() const;

                    /**
                     * 设置<p>运行命中的文件所在COS地域</p><p>举例：ap-shanghai</p><p>入参不填，如果填写则忽略；</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cosRegion <p>运行命中的文件所在COS地域</p><p>举例：ap-shanghai</p><p>入参不填，如果填写则忽略；</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCosRegion(const std::string& _cosRegion);

                    /**
                     * 判断参数 CosRegion 是否已赋值
                     * @return CosRegion 是否已赋值
                     * 
                     */
                    bool CosRegionHasBeenSet() const;

                    /**
                     * 获取<p>文件存储路径</p><p>举例：cosn://dlc-sh-store-139153**** /test/</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FileStoragePath <p>文件存储路径</p><p>举例：cosn://dlc-sh-store-139153**** /test/</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFileStoragePath() const;

                    /**
                     * 设置<p>文件存储路径</p><p>举例：cosn://dlc-sh-store-139153**** /test/</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _fileStoragePath <p>文件存储路径</p><p>举例：cosn://dlc-sh-store-139153**** /test/</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFileStoragePath(const std::string& _fileStoragePath);

                    /**
                     * 判断参数 FileStoragePath 是否已赋值
                     * @return FileStoragePath 是否已赋值
                     * 
                     */
                    bool FileStoragePathHasBeenSet() const;

                    /**
                     * 获取<p>文件名匹配规则</p><p>举例：</p><ul><li>空: 当前监听范围内的全部文件</li><li><code>*.csv: 任意以 .csv 结尾的文件名</code></li><li><code>orders_*.csv: orders_ 开头且以 .csv 结尾的文件名</code></li><li>orders.csv: 精确匹配 orders.csv</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FileNamePattern <p>文件名匹配规则</p><p>举例：</p><ul><li>空: 当前监听范围内的全部文件</li><li><code>*.csv: 任意以 .csv 结尾的文件名</code></li><li><code>orders_*.csv: orders_ 开头且以 .csv 结尾的文件名</code></li><li>orders.csv: 精确匹配 orders.csv</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFileNamePattern() const;

                    /**
                     * 设置<p>文件名匹配规则</p><p>举例：</p><ul><li>空: 当前监听范围内的全部文件</li><li><code>*.csv: 任意以 .csv 结尾的文件名</code></li><li><code>orders_*.csv: orders_ 开头且以 .csv 结尾的文件名</code></li><li>orders.csv: 精确匹配 orders.csv</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _fileNamePattern <p>文件名匹配规则</p><p>举例：</p><ul><li>空: 当前监听范围内的全部文件</li><li><code>*.csv: 任意以 .csv 结尾的文件名</code></li><li><code>orders_*.csv: orders_ 开头且以 .csv 结尾的文件名</code></li><li>orders.csv: 精确匹配 orders.csv</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFileNamePattern(const std::string& _fileNamePattern);

                    /**
                     * 判断参数 FileNamePattern 是否已赋值
                     * @return FileNamePattern 是否已赋值
                     * 
                     */
                    bool FileNamePatternHasBeenSet() const;

                    /**
                     * 获取<p>是否包含子目录</p><p>默认值：false</p><p>是否递归匹配子目录，默认 false</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Recursive <p>是否包含子目录</p><p>默认值：false</p><p>是否递归匹配子目录，默认 false</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetRecursive() const;

                    /**
                     * 设置<p>是否包含子目录</p><p>默认值：false</p><p>是否递归匹配子目录，默认 false</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _recursive <p>是否包含子目录</p><p>默认值：false</p><p>是否递归匹配子目录，默认 false</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRecursive(const bool& _recursive);

                    /**
                     * 判断参数 Recursive 是否已赋值
                     * @return Recursive 是否已赋值
                     * 
                     */
                    bool RecursiveHasBeenSet() const;

                    /**
                     * 获取<p>最小触发间隔时间</p><p>参数格式：数字</p><p>默认值：300</p><p>单位：秒；默认 300秒（5 分钟）；60-86400 秒（1–1440 分钟）；两次触发之间的最小间隔。期间内到达的文件，需等待该时间结束后才会触发运行。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MinTriggerIntervalTime <p>最小触发间隔时间</p><p>参数格式：数字</p><p>默认值：300</p><p>单位：秒；默认 300秒（5 分钟）；60-86400 秒（1–1440 分钟）；两次触发之间的最小间隔。期间内到达的文件，需等待该时间结束后才会触发运行。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMinTriggerIntervalTime() const;

                    /**
                     * 设置<p>最小触发间隔时间</p><p>参数格式：数字</p><p>默认值：300</p><p>单位：秒；默认 300秒（5 分钟）；60-86400 秒（1–1440 分钟）；两次触发之间的最小间隔。期间内到达的文件，需等待该时间结束后才会触发运行。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _minTriggerIntervalTime <p>最小触发间隔时间</p><p>参数格式：数字</p><p>默认值：300</p><p>单位：秒；默认 300秒（5 分钟）；60-86400 秒（1–1440 分钟）；两次触发之间的最小间隔。期间内到达的文件，需等待该时间结束后才会触发运行。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMinTriggerIntervalTime(const std::string& _minTriggerIntervalTime);

                    /**
                     * 判断参数 MinTriggerIntervalTime 是否已赋值
                     * @return MinTriggerIntervalTime 是否已赋值
                     * 
                     */
                    bool MinTriggerIntervalTimeHasBeenSet() const;

                    /**
                     * 获取<p>批次等待时间</p><p>参数格式：数字</p><p>默认值：120</p><p>单位：秒；默认 120秒（2 分钟）；60-3600 秒（1–60 分钟）；文件到达后等待该时长才触发运行。若等待期间再次有新文件到达，则重新开始计时。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BatchWaitTime <p>批次等待时间</p><p>参数格式：数字</p><p>默认值：120</p><p>单位：秒；默认 120秒（2 分钟）；60-3600 秒（1–60 分钟）；文件到达后等待该时长才触发运行。若等待期间再次有新文件到达，则重新开始计时。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBatchWaitTime() const;

                    /**
                     * 设置<p>批次等待时间</p><p>参数格式：数字</p><p>默认值：120</p><p>单位：秒；默认 120秒（2 分钟）；60-3600 秒（1–60 分钟）；文件到达后等待该时长才触发运行。若等待期间再次有新文件到达，则重新开始计时。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _batchWaitTime <p>批次等待时间</p><p>参数格式：数字</p><p>默认值：120</p><p>单位：秒；默认 120秒（2 分钟）；60-3600 秒（1–60 分钟）；文件到达后等待该时长才触发运行。若等待期间再次有新文件到达，则重新开始计时。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBatchWaitTime(const std::string& _batchWaitTime);

                    /**
                     * 判断参数 BatchWaitTime 是否已赋值
                     * @return BatchWaitTime 是否已赋值
                     * 
                     */
                    bool BatchWaitTimeHasBeenSet() const;

                private:

                    /**
                     * <p>运行命中的文件所在COS桶名</p><p>举例：dlc-sh-store-139153****</p><p>入参不填，如果填写则忽略；</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_cosBucket;
                    bool m_cosBucketHasBeenSet;

                    /**
                     * <p>运行命中的文件所在COS地域</p><p>举例：ap-shanghai</p><p>入参不填，如果填写则忽略；</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_cosRegion;
                    bool m_cosRegionHasBeenSet;

                    /**
                     * <p>文件存储路径</p><p>举例：cosn://dlc-sh-store-139153**** /test/</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_fileStoragePath;
                    bool m_fileStoragePathHasBeenSet;

                    /**
                     * <p>文件名匹配规则</p><p>举例：</p><ul><li>空: 当前监听范围内的全部文件</li><li><code>*.csv: 任意以 .csv 结尾的文件名</code></li><li><code>orders_*.csv: orders_ 开头且以 .csv 结尾的文件名</code></li><li>orders.csv: 精确匹配 orders.csv</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_fileNamePattern;
                    bool m_fileNamePatternHasBeenSet;

                    /**
                     * <p>是否包含子目录</p><p>默认值：false</p><p>是否递归匹配子目录，默认 false</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_recursive;
                    bool m_recursiveHasBeenSet;

                    /**
                     * <p>最小触发间隔时间</p><p>参数格式：数字</p><p>默认值：300</p><p>单位：秒；默认 300秒（5 分钟）；60-86400 秒（1–1440 分钟）；两次触发之间的最小间隔。期间内到达的文件，需等待该时间结束后才会触发运行。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_minTriggerIntervalTime;
                    bool m_minTriggerIntervalTimeHasBeenSet;

                    /**
                     * <p>批次等待时间</p><p>参数格式：数字</p><p>默认值：120</p><p>单位：秒；默认 120秒（2 分钟）；60-3600 秒（1–60 分钟）；文件到达后等待该时长才触发运行。若等待期间再次有新文件到达，则重新开始计时。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_batchWaitTime;
                    bool m_batchWaitTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATABUDDY_V20260715_MODEL_FILEARRIVALCONFIG_H_
