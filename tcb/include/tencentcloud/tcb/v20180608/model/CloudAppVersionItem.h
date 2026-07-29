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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_CLOUDAPPVERSIONITEM_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_CLOUDAPPVERSIONITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcb/v20180608/model/StaticConfig.h>
#include <tencentcloud/tcb/v20180608/model/BuildStepStatus.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * 服务版本信息
                */
                class CloudAppVersionItem : public AbstractModel
                {
                public:
                    CloudAppVersionItem();
                    ~CloudAppVersionItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>版本名</p>
                     * @return VersionName <p>版本名</p>
                     * 
                     */
                    std::string GetVersionName() const;

                    /**
                     * 设置<p>版本名</p>
                     * @param _versionName <p>版本名</p>
                     * 
                     */
                    void SetVersionName(const std::string& _versionName);

                    /**
                     * 判断参数 VersionName 是否已赋值
                     * @return VersionName 是否已赋值
                     * 
                     */
                    bool VersionNameHasBeenSet() const;

                    /**
                     * 获取<p>构建方式</p>
                     * @return BuildType <p>构建方式</p>
                     * 
                     */
                    std::string GetBuildType() const;

                    /**
                     * 设置<p>构建方式</p>
                     * @param _buildType <p>构建方式</p>
                     * 
                     */
                    void SetBuildType(const std::string& _buildType);

                    /**
                     * 判断参数 BuildType 是否已赋值
                     * @return BuildType 是否已赋值
                     * 
                     */
                    bool BuildTypeHasBeenSet() const;

                    /**
                     * 获取<p>构建Id</p>
                     * @return BuildId <p>构建Id</p>
                     * 
                     */
                    std::string GetBuildId() const;

                    /**
                     * 设置<p>构建Id</p>
                     * @param _buildId <p>构建Id</p>
                     * 
                     */
                    void SetBuildId(const std::string& _buildId);

                    /**
                     * 判断参数 BuildId 是否已赋值
                     * @return BuildId 是否已赋值
                     * 
                     */
                    bool BuildIdHasBeenSet() const;

                    /**
                     * 获取<p>构建状态</p>
                     * @return Status <p>构建状态</p>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>构建状态</p>
                     * @param _status <p>构建状态</p>
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>框架名</p>
                     * @return Framework <p>框架名</p>
                     * 
                     */
                    std::string GetFramework() const;

                    /**
                     * 设置<p>框架名</p>
                     * @param _framework <p>框架名</p>
                     * 
                     */
                    void SetFramework(const std::string& _framework);

                    /**
                     * 判断参数 Framework 是否已赋值
                     * @return Framework 是否已赋值
                     * 
                     */
                    bool FrameworkHasBeenSet() const;

                    /**
                     * 获取<p>构建配置</p>
                     * @return StaticConfig <p>构建配置</p>
                     * 
                     */
                    StaticConfig GetStaticConfig() const;

                    /**
                     * 设置<p>构建配置</p>
                     * @param _staticConfig <p>构建配置</p>
                     * 
                     */
                    void SetStaticConfig(const StaticConfig& _staticConfig);

                    /**
                     * 判断参数 StaticConfig 是否已赋值
                     * @return StaticConfig 是否已赋值
                     * 
                     */
                    bool StaticConfigHasBeenSet() const;

                    /**
                     * 获取<p>构建时间</p>
                     * @return BuildTime <p>构建时间</p>
                     * 
                     */
                    std::string GetBuildTime() const;

                    /**
                     * 设置<p>构建时间</p>
                     * @param _buildTime <p>构建时间</p>
                     * 
                     */
                    void SetBuildTime(const std::string& _buildTime);

                    /**
                     * 判断参数 BuildTime 是否已赋值
                     * @return BuildTime 是否已赋值
                     * 
                     */
                    bool BuildTimeHasBeenSet() const;

                    /**
                     * 获取<p>构建步骤</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Steps <p>构建步骤</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<BuildStepStatus> GetSteps() const;

                    /**
                     * 设置<p>构建步骤</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _steps <p>构建步骤</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSteps(const std::vector<BuildStepStatus>& _steps);

                    /**
                     * 判断参数 Steps 是否已赋值
                     * @return Steps 是否已赋值
                     * 
                     */
                    bool StepsHasBeenSet() const;

                private:

                    /**
                     * <p>版本名</p>
                     */
                    std::string m_versionName;
                    bool m_versionNameHasBeenSet;

                    /**
                     * <p>构建方式</p>
                     */
                    std::string m_buildType;
                    bool m_buildTypeHasBeenSet;

                    /**
                     * <p>构建Id</p>
                     */
                    std::string m_buildId;
                    bool m_buildIdHasBeenSet;

                    /**
                     * <p>构建状态</p>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>框架名</p>
                     */
                    std::string m_framework;
                    bool m_frameworkHasBeenSet;

                    /**
                     * <p>构建配置</p>
                     */
                    StaticConfig m_staticConfig;
                    bool m_staticConfigHasBeenSet;

                    /**
                     * <p>构建时间</p>
                     */
                    std::string m_buildTime;
                    bool m_buildTimeHasBeenSet;

                    /**
                     * <p>构建步骤</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<BuildStepStatus> m_steps;
                    bool m_stepsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_CLOUDAPPVERSIONITEM_H_
