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

#ifndef TENCENTCLOUD_OMICS_V20221128_MODEL_NFOPTION_H_
#define TENCENTCLOUD_OMICS_V20221128_MODEL_NFOPTION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Omics
    {
        namespace V20221128
        {
            namespace Model
            {
                /**
                * Nextflow选项。
                */
                class NFOption : public AbstractModel
                {
                public:
                    NFOption();
                    ~NFOption() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Config。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Config Config。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetConfig() const;

                    /**
                     * 设置Config。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _config Config。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetConfig(const std::string& _config);

                    /**
                     * 判断参数 Config 是否已赋值
                     * @return Config 是否已赋值
                     * 
                     */
                    bool ConfigHasBeenSet() const;

                    /**
                     * 获取Profile。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Profile Profile。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetProfile() const;

                    /**
                     * 设置Profile。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _profile Profile。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetProfile(const std::string& _profile);

                    /**
                     * 判断参数 Profile 是否已赋值
                     * @return Profile 是否已赋值
                     * 
                     */
                    bool ProfileHasBeenSet() const;

                    /**
                     * 获取Report。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Report Report。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetReport() const;

                    /**
                     * 设置Report。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _report Report。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetReport(const bool& _report);

                    /**
                     * 判断参数 Report 是否已赋值
                     * @return Report 是否已赋值
                     * 
                     */
                    bool ReportHasBeenSet() const;

                    /**
                     * 获取Resume。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Resume Resume。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetResume() const;

                    /**
                     * 设置Resume。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _resume Resume。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetResume(const bool& _resume);

                    /**
                     * 判断参数 Resume 是否已赋值
                     * @return Resume 是否已赋值
                     * 
                     */
                    bool ResumeHasBeenSet() const;

                    /**
                     * 获取Nextflow引擎版本，取值范围：
- 22.10.7
- 23.10.1
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NFVersion Nextflow引擎版本，取值范围：
- 22.10.7
- 23.10.1
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetNFVersion() const;

                    /**
                     * 设置Nextflow引擎版本，取值范围：
- 22.10.7
- 23.10.1
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _nFVersion Nextflow引擎版本，取值范围：
- 22.10.7
- 23.10.1
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNFVersion(const std::string& _nFVersion);

                    /**
                     * 判断参数 NFVersion 是否已赋值
                     * @return NFVersion 是否已赋值
                     * 
                     */
                    bool NFVersionHasBeenSet() const;

                    /**
                     * 获取启动路径。可填写指定缓存卷内的绝对路径，nextflow run 命令将在此路径执行。当WorkDir为COS路径时必填；当WorkDir为缓存卷路径时选填，不填默认使用WorkDir作为LaunchDir。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LaunchDir 启动路径。可填写指定缓存卷内的绝对路径，nextflow run 命令将在此路径执行。当WorkDir为COS路径时必填；当WorkDir为缓存卷路径时选填，不填默认使用WorkDir作为LaunchDir。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLaunchDir() const;

                    /**
                     * 设置启动路径。可填写指定缓存卷内的绝对路径，nextflow run 命令将在此路径执行。当WorkDir为COS路径时必填；当WorkDir为缓存卷路径时选填，不填默认使用WorkDir作为LaunchDir。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _launchDir 启动路径。可填写指定缓存卷内的绝对路径，nextflow run 命令将在此路径执行。当WorkDir为COS路径时必填；当WorkDir为缓存卷路径时选填，不填默认使用WorkDir作为LaunchDir。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLaunchDir(const std::string& _launchDir);

                    /**
                     * 判断参数 LaunchDir 是否已赋值
                     * @return LaunchDir 是否已赋值
                     * 
                     */
                    bool LaunchDirHasBeenSet() const;

                private:

                    /**
                     * Config。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_config;
                    bool m_configHasBeenSet;

                    /**
                     * Profile。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_profile;
                    bool m_profileHasBeenSet;

                    /**
                     * Report。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_report;
                    bool m_reportHasBeenSet;

                    /**
                     * Resume。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_resume;
                    bool m_resumeHasBeenSet;

                    /**
                     * Nextflow引擎版本，取值范围：
- 22.10.7
- 23.10.1
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_nFVersion;
                    bool m_nFVersionHasBeenSet;

                    /**
                     * 启动路径。可填写指定缓存卷内的绝对路径，nextflow run 命令将在此路径执行。当WorkDir为COS路径时必填；当WorkDir为缓存卷路径时选填，不填默认使用WorkDir作为LaunchDir。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_launchDir;
                    bool m_launchDirHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OMICS_V20221128_MODEL_NFOPTION_H_
