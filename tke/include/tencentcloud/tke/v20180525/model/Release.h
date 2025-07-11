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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_RELEASE_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_RELEASE_H_

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
                * 应用市场部署的应用结构
                */
                class Release : public AbstractModel
                {
                public:
                    Release();
                    ~Release() = default;
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
                     * 获取应用命名空间
                     * @return Namespace 应用命名空间
                     * 
                     */
                    std::string GetNamespace() const;

                    /**
                     * 设置应用命名空间
                     * @param _namespace 应用命名空间
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
                     * @return Revision 应用当前版本
                     * 
                     */
                    std::string GetRevision() const;

                    /**
                     * 设置应用当前版本
                     * @param _revision 应用当前版本
                     * 
                     */
                    void SetRevision(const std::string& _revision);

                    /**
                     * 判断参数 Revision 是否已赋值
                     * @return Revision 是否已赋值
                     * 
                     */
                    bool RevisionHasBeenSet() const;

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
                     * 获取制品名称
                     * @return ChartName 制品名称
                     * 
                     */
                    std::string GetChartName() const;

                    /**
                     * 设置制品名称
                     * @param _chartName 制品名称
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
                     * 获取制品版本
                     * @return ChartVersion 制品版本
                     * 
                     */
                    std::string GetChartVersion() const;

                    /**
                     * 设置制品版本
                     * @param _chartVersion 制品版本
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
                     * 获取制品应用版本
                     * @return AppVersion 制品应用版本
                     * 
                     */
                    std::string GetAppVersion() const;

                    /**
                     * 设置制品应用版本
                     * @param _appVersion 制品应用版本
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
                     * 获取更新时间
                     * @return UpdatedTime 更新时间
                     * 
                     */
                    std::string GetUpdatedTime() const;

                    /**
                     * 设置更新时间
                     * @param _updatedTime 更新时间
                     * 
                     */
                    void SetUpdatedTime(const std::string& _updatedTime);

                    /**
                     * 判断参数 UpdatedTime 是否已赋值
                     * @return UpdatedTime 是否已赋值
                     * 
                     */
                    bool UpdatedTimeHasBeenSet() const;

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

                private:

                    /**
                     * 应用名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 应用命名空间
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                    /**
                     * 应用当前版本
                     */
                    std::string m_revision;
                    bool m_revisionHasBeenSet;

                    /**
                     * 应用状态
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 制品名称
                     */
                    std::string m_chartName;
                    bool m_chartNameHasBeenSet;

                    /**
                     * 制品版本
                     */
                    std::string m_chartVersion;
                    bool m_chartVersionHasBeenSet;

                    /**
                     * 制品应用版本
                     */
                    std::string m_appVersion;
                    bool m_appVersionHasBeenSet;

                    /**
                     * 更新时间
                     */
                    std::string m_updatedTime;
                    bool m_updatedTimeHasBeenSet;

                    /**
                     * 应用描述
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_RELEASE_H_
