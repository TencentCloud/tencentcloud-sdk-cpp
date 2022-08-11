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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_IMAGEVIRUSINFO_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_IMAGEVIRUSINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * 容器安全镜像病毒信息
                */
                class ImageVirusInfo : public AbstractModel
                {
                public:
                    ImageVirusInfo();
                    ~ImageVirusInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取路径
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Path 路径
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetPath() const;

                    /**
                     * 设置路径
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Path 路径
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetPath(const std::string& _path);

                    /**
                     * 判断参数 Path 是否已赋值
                     * @return Path 是否已赋值
                     */
                    bool PathHasBeenSet() const;

                    /**
                     * 获取风险等级
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RiskLevel 风险等级
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetRiskLevel() const;

                    /**
                     * 设置风险等级
注意：此字段可能返回 null，表示取不到有效值。
                     * @param RiskLevel 风险等级
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetRiskLevel(const uint64_t& _riskLevel);

                    /**
                     * 判断参数 RiskLevel 是否已赋值
                     * @return RiskLevel 是否已赋值
                     */
                    bool RiskLevelHasBeenSet() const;

                    /**
                     * 获取病毒名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VirusName 病毒名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetVirusName() const;

                    /**
                     * 设置病毒名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param VirusName 病毒名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetVirusName(const std::string& _virusName);

                    /**
                     * 判断参数 VirusName 是否已赋值
                     * @return VirusName 是否已赋值
                     */
                    bool VirusNameHasBeenSet() const;

                    /**
                     * 获取标签
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Tags 标签
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> GetTags() const;

                    /**
                     * 设置标签
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Tags 标签
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetTags(const std::vector<std::string>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Desc 描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetDesc() const;

                    /**
                     * 设置描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Desc 描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDesc(const std::string& _desc);

                    /**
                     * 判断参数 Desc 是否已赋值
                     * @return Desc 是否已赋值
                     */
                    bool DescHasBeenSet() const;

                    /**
                     * 获取修护建议
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Solution 修护建议
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetSolution() const;

                    /**
                     * 设置修护建议
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Solution 修护建议
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetSolution(const std::string& _solution);

                    /**
                     * 判断参数 Solution 是否已赋值
                     * @return Solution 是否已赋值
                     */
                    bool SolutionHasBeenSet() const;

                    /**
                     * 获取大小
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Size 大小
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetSize() const;

                    /**
                     * 设置大小
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Size 大小
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetSize(const uint64_t& _size);

                    /**
                     * 判断参数 Size 是否已赋值
                     * @return Size 是否已赋值
                     */
                    bool SizeHasBeenSet() const;

                    /**
                     * 获取首次发现时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FirstScanTime 首次发现时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetFirstScanTime() const;

                    /**
                     * 设置首次发现时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param FirstScanTime 首次发现时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetFirstScanTime(const std::string& _firstScanTime);

                    /**
                     * 判断参数 FirstScanTime 是否已赋值
                     * @return FirstScanTime 是否已赋值
                     */
                    bool FirstScanTimeHasBeenSet() const;

                    /**
                     * 获取最近扫描时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LatestScanTime 最近扫描时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetLatestScanTime() const;

                    /**
                     * 设置最近扫描时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param LatestScanTime 最近扫描时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetLatestScanTime(const std::string& _latestScanTime);

                    /**
                     * 判断参数 LatestScanTime 是否已赋值
                     * @return LatestScanTime 是否已赋值
                     */
                    bool LatestScanTimeHasBeenSet() const;

                    /**
                     * 获取文件md5
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Md5 文件md5
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetMd5() const;

                    /**
                     * 设置文件md5
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Md5 文件md5
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetMd5(const std::string& _md5);

                    /**
                     * 判断参数 Md5 是否已赋值
                     * @return Md5 是否已赋值
                     */
                    bool Md5HasBeenSet() const;

                    /**
                     * 获取文件名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FileName 文件名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetFileName() const;

                    /**
                     * 设置文件名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param FileName 文件名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetFileName(const std::string& _fileName);

                    /**
                     * 判断参数 FileName 是否已赋值
                     * @return FileName 是否已赋值
                     */
                    bool FileNameHasBeenSet() const;

                    /**
                     * 获取检测平台
1: 云查杀引擎
2: tav
3: binaryAi
4: 异常行为
5: 威胁情报
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CheckPlatform 检测平台
1: 云查杀引擎
2: tav
3: binaryAi
4: 异常行为
5: 威胁情报
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> GetCheckPlatform() const;

                    /**
                     * 设置检测平台
1: 云查杀引擎
2: tav
3: binaryAi
4: 异常行为
5: 威胁情报
注意：此字段可能返回 null，表示取不到有效值。
                     * @param CheckPlatform 检测平台
1: 云查杀引擎
2: tav
3: binaryAi
4: 异常行为
5: 威胁情报
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCheckPlatform(const std::vector<std::string>& _checkPlatform);

                    /**
                     * 判断参数 CheckPlatform 是否已赋值
                     * @return CheckPlatform 是否已赋值
                     */
                    bool CheckPlatformHasBeenSet() const;

                private:

                    /**
                     * 路径
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_path;
                    bool m_pathHasBeenSet;

                    /**
                     * 风险等级
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_riskLevel;
                    bool m_riskLevelHasBeenSet;

                    /**
                     * 病毒名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_virusName;
                    bool m_virusNameHasBeenSet;

                    /**
                     * 标签
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_desc;
                    bool m_descHasBeenSet;

                    /**
                     * 修护建议
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_solution;
                    bool m_solutionHasBeenSet;

                    /**
                     * 大小
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_size;
                    bool m_sizeHasBeenSet;

                    /**
                     * 首次发现时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_firstScanTime;
                    bool m_firstScanTimeHasBeenSet;

                    /**
                     * 最近扫描时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_latestScanTime;
                    bool m_latestScanTimeHasBeenSet;

                    /**
                     * 文件md5
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_md5;
                    bool m_md5HasBeenSet;

                    /**
                     * 文件名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_fileName;
                    bool m_fileNameHasBeenSet;

                    /**
                     * 检测平台
1: 云查杀引擎
2: tav
3: binaryAi
4: 异常行为
5: 威胁情报
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_checkPlatform;
                    bool m_checkPlatformHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_IMAGEVIRUSINFO_H_
