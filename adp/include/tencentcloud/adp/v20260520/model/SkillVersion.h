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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_SKILLVERSION_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_SKILLVERSION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/SkillAnalysisInfo.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * SkillVersion Skill 版本信息。
                */
                class SkillVersion : public AbstractModel
                {
                public:
                    SkillVersion();
                    ~SkillVersion() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取检测信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AnalysisInfo 检测信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    SkillAnalysisInfo GetAnalysisInfo() const;

                    /**
                     * 设置检测信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _analysisInfo 检测信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAnalysisInfo(const SkillAnalysisInfo& _analysisInfo);

                    /**
                     * 判断参数 AnalysisInfo 是否已赋值
                     * @return AnalysisInfo 是否已赋值
                     * 
                     */
                    bool AnalysisInfoHasBeenSet() const;

                    /**
                     * 获取当前生效版本号
                     * @return Version 当前生效版本号
                     * 
                     */
                    std::string GetVersion() const;

                    /**
                     * 设置当前生效版本号
                     * @param _version 当前生效版本号
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
                     * 获取当前生效版本ID
                     * @return VersionId 当前生效版本ID
                     * 
                     */
                    std::string GetVersionId() const;

                    /**
                     * 设置当前生效版本ID
                     * @param _versionId 当前生效版本ID
                     * 
                     */
                    void SetVersionId(const std::string& _versionId);

                    /**
                     * 判断参数 VersionId 是否已赋值
                     * @return VersionId 是否已赋值
                     * 
                     */
                    bool VersionIdHasBeenSet() const;

                private:

                    /**
                     * 检测信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    SkillAnalysisInfo m_analysisInfo;
                    bool m_analysisInfoHasBeenSet;

                    /**
                     * 当前生效版本号
                     */
                    std::string m_version;
                    bool m_versionHasBeenSet;

                    /**
                     * 当前生效版本ID
                     */
                    std::string m_versionId;
                    bool m_versionIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_SKILLVERSION_H_
