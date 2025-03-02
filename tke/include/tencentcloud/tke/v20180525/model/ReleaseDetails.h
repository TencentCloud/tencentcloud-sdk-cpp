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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_RELEASEDETAILS_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_RELEASEDETAILS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * 应用市场的安装应用详情
                */
                class ReleaseDetails : public AbstractModel
                {
                public:
                    ReleaseDetails();
                    ~ReleaseDetails() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取应用名称
                     * @return Name 应用名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置应用名称
                     * @param _name 应用名称
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取应用所在命名空间
                     * @return Namespace 应用所在命名空间
                     * 
                     */
                    std::string GetNamespace() const;

                    /**
                     * 设置应用所在命名空间
                     * @param _namespace 应用所在命名空间
                     * 
                     */
                    void SetNamespace(const std::string& _namespace);

                    /**
                     * 判断参数 Namespace 是否已赋值
                     * @return Namespace 是否已赋值
                     * 
                     */
                    bool NamespaceHasBeenSet() const;

                    /**
                     * 获取应用当前版本
                     * @return Version 应用当前版本
                     * 
                     */
                    uint64_t GetVersion() const;

                    /**
                     * 设置应用当前版本
                     * @param _version 应用当前版本
                     * 
                     */
                    void SetVersion(const uint64_t& _version);

                    /**
                     * 判断参数 Version 是否已赋值
                     * @return Version 是否已赋值
                     * 
                     */
                    bool VersionHasBeenSet() const;

                    /**
                     * 获取应用状态
                     * @return Status 应用状态
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置应用状态
                     * @param _status 应用状态
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
                     * 获取应用描述
                     * @return Description 应用描述
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置应用描述
                     * @param _description 应用描述
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取应用提示
                     * @return Notes 应用提示
                     * 
                     */
                    std::string GetNotes() const;

                    /**
                     * 设置应用提示
                     * @param _notes 应用提示
                     * 
                     */
                    void SetNotes(const std::string& _notes);

                    /**
                     * 判断参数 Notes 是否已赋值
                     * @return Notes 是否已赋值
                     * 
                     */
                    bool NotesHasBeenSet() const;

                    /**
                     * 获取用户自定义参数
                     * @return Config 用户自定义参数
                     * 
                     */
                    std::string GetConfig() const;

                    /**
                     * 设置用户自定义参数
                     * @param _config 用户自定义参数
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
                     * 获取应用资源详情
                     * @return Manifest 应用资源详情
                     * 
                     */
                    std::string GetManifest() const;

                    /**
                     * 设置应用资源详情
                     * @param _manifest 应用资源详情
                     * 
                     */
                    void SetManifest(const std::string& _manifest);

                    /**
                     * 判断参数 Manifest 是否已赋值
                     * @return Manifest 是否已赋值
                     * 
                     */
                    bool ManifestHasBeenSet() const;

                    /**
                     * 获取应用制品版本
                     * @return ChartVersion 应用制品版本
                     * 
                     */
                    std::string GetChartVersion() const;

                    /**
                     * 设置应用制品版本
                     * @param _chartVersion 应用制品版本
                     * 
                     */
                    void SetChartVersion(const std::string& _chartVersion);

                    /**
                     * 判断参数 ChartVersion 是否已赋值
                     * @return ChartVersion 是否已赋值
                     * 
                     */
                    bool ChartVersionHasBeenSet() const;

                    /**
                     * 获取应用制品名称
                     * @return ChartName 应用制品名称
                     * 
                     */
                    std::string GetChartName() const;

                    /**
                     * 设置应用制品名称
                     * @param _chartName 应用制品名称
                     * 
                     */
                    void SetChartName(const std::string& _chartName);

                    /**
                     * 判断参数 ChartName 是否已赋值
                     * @return ChartName 是否已赋值
                     * 
                     */
                    bool ChartNameHasBeenSet() const;

                    /**
                     * 获取应用制品描述
                     * @return ChartDescription 应用制品描述
                     * 
                     */
                    std::string GetChartDescription() const;

                    /**
                     * 设置应用制品描述
                     * @param _chartDescription 应用制品描述
                     * 
                     */
                    void SetChartDescription(const std::string& _chartDescription);

                    /**
                     * 判断参数 ChartDescription 是否已赋值
                     * @return ChartDescription 是否已赋值
                     * 
                     */
                    bool ChartDescriptionHasBeenSet() const;

                    /**
                     * 获取应用制品app版本
                     * @return AppVersion 应用制品app版本
                     * 
                     */
                    std::string GetAppVersion() const;

                    /**
                     * 设置应用制品app版本
                     * @param _appVersion 应用制品app版本
                     * 
                     */
                    void SetAppVersion(const std::string& _appVersion);

                    /**
                     * 判断参数 AppVersion 是否已赋值
                     * @return AppVersion 是否已赋值
                     * 
                     */
                    bool AppVersionHasBeenSet() const;

                    /**
                     * 获取应用首次部署时间
                     * @return FirstDeployedTime 应用首次部署时间
                     * 
                     */
                    std::string GetFirstDeployedTime() const;

                    /**
                     * 设置应用首次部署时间
                     * @param _firstDeployedTime 应用首次部署时间
                     * 
                     */
                    void SetFirstDeployedTime(const std::string& _firstDeployedTime);

                    /**
                     * 判断参数 FirstDeployedTime 是否已赋值
                     * @return FirstDeployedTime 是否已赋值
                     * 
                     */
                    bool FirstDeployedTimeHasBeenSet() const;

                    /**
                     * 获取应用最近部署时间
                     * @return LastDeployedTime 应用最近部署时间
                     * 
                     */
                    std::string GetLastDeployedTime() const;

                    /**
                     * 设置应用最近部署时间
                     * @param _lastDeployedTime 应用最近部署时间
                     * 
                     */
                    void SetLastDeployedTime(const std::string& _lastDeployedTime);

                    /**
                     * 判断参数 LastDeployedTime 是否已赋值
                     * @return LastDeployedTime 是否已赋值
                     * 
                     */
                    bool LastDeployedTimeHasBeenSet() const;

                    /**
                     * 获取应用参数
                     * @return ComputedValues 应用参数
                     * 
                     */
                    std::string GetComputedValues() const;

                    /**
                     * 设置应用参数
                     * @param _computedValues 应用参数
                     * 
                     */
                    void SetComputedValues(const std::string& _computedValues);

                    /**
                     * 判断参数 ComputedValues 是否已赋值
                     * @return ComputedValues 是否已赋值
                     * 
                     */
                    bool ComputedValuesHasBeenSet() const;

                    /**
                     * 获取chart 的来源， tke-market, others
                     * @return ChartFrom chart 的来源， tke-market, others
                     * 
                     */
                    std::string GetChartFrom() const;

                    /**
                     * 设置chart 的来源， tke-market, others
                     * @param _chartFrom chart 的来源， tke-market, others
                     * 
                     */
                    void SetChartFrom(const std::string& _chartFrom);

                    /**
                     * 判断参数 ChartFrom 是否已赋值
                     * @return ChartFrom 是否已赋值
                     * 
                     */
                    bool ChartFromHasBeenSet() const;

                    /**
                     * 获取第三方chart 的安装地址
                     * @return ChartURL 第三方chart 的安装地址
                     * 
                     */
                    std::string GetChartURL() const;

                    /**
                     * 设置第三方chart 的安装地址
                     * @param _chartURL 第三方chart 的安装地址
                     * 
                     */
                    void SetChartURL(const std::string& _chartURL);

                    /**
                     * 判断参数 ChartURL 是否已赋值
                     * @return ChartURL 是否已赋值
                     * 
                     */
                    bool ChartURLHasBeenSet() const;

                    /**
                     * 获取通过chart 创建的资源
                     * @return Resources 通过chart 创建的资源
                     * 
                     */
                    std::string GetResources() const;

                    /**
                     * 设置通过chart 创建的资源
                     * @param _resources 通过chart 创建的资源
                     * 
                     */
                    void SetResources(const std::string& _resources);

                    /**
                     * 判断参数 Resources 是否已赋值
                     * @return Resources 是否已赋值
                     * 
                     */
                    bool ResourcesHasBeenSet() const;

                private:

                    /**
                     * 应用名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 应用所在命名空间
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                    /**
                     * 应用当前版本
                     */
                    uint64_t m_version;
                    bool m_versionHasBeenSet;

                    /**
                     * 应用状态
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 应用描述
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 应用提示
                     */
                    std::string m_notes;
                    bool m_notesHasBeenSet;

                    /**
                     * 用户自定义参数
                     */
                    std::string m_config;
                    bool m_configHasBeenSet;

                    /**
                     * 应用资源详情
                     */
                    std::string m_manifest;
                    bool m_manifestHasBeenSet;

                    /**
                     * 应用制品版本
                     */
                    std::string m_chartVersion;
                    bool m_chartVersionHasBeenSet;

                    /**
                     * 应用制品名称
                     */
                    std::string m_chartName;
                    bool m_chartNameHasBeenSet;

                    /**
                     * 应用制品描述
                     */
                    std::string m_chartDescription;
                    bool m_chartDescriptionHasBeenSet;

                    /**
                     * 应用制品app版本
                     */
                    std::string m_appVersion;
                    bool m_appVersionHasBeenSet;

                    /**
                     * 应用首次部署时间
                     */
                    std::string m_firstDeployedTime;
                    bool m_firstDeployedTimeHasBeenSet;

                    /**
                     * 应用最近部署时间
                     */
                    std::string m_lastDeployedTime;
                    bool m_lastDeployedTimeHasBeenSet;

                    /**
                     * 应用参数
                     */
                    std::string m_computedValues;
                    bool m_computedValuesHasBeenSet;

                    /**
                     * chart 的来源， tke-market, others
                     */
                    std::string m_chartFrom;
                    bool m_chartFromHasBeenSet;

                    /**
                     * 第三方chart 的安装地址
                     */
                    std::string m_chartURL;
                    bool m_chartURLHasBeenSet;

                    /**
                     * 通过chart 创建的资源
                     */
                    std::string m_resources;
                    bool m_resourcesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_RELEASEDETAILS_H_
