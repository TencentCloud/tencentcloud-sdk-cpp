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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_USAGESUMMARY_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_USAGESUMMARY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/ModelUsageSummary.h>
#include <tencentcloud/adp/v20260520/model/PlatformUsageSummary.h>
#include <tencentcloud/adp/v20260520/model/PluginUsageSummary.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * 资源用量聚合明细
                */
                class UsageSummary : public AbstractModel
                {
                public:
                    UsageSummary();
                    ~UsageSummary() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>MODEL 域专属</p>
                     * @return Model <p>MODEL 域专属</p>
                     * 
                     */
                    ModelUsageSummary GetModel() const;

                    /**
                     * 设置<p>MODEL 域专属</p>
                     * @param _model <p>MODEL 域专属</p>
                     * 
                     */
                    void SetModel(const ModelUsageSummary& _model);

                    /**
                     * 判断参数 Model 是否已赋值
                     * @return Model 是否已赋值
                     * 
                     */
                    bool ModelHasBeenSet() const;

                    /**
                     * 获取<p>PLATFORM 域专属</p>
                     * @return Platform <p>PLATFORM 域专属</p>
                     * 
                     */
                    PlatformUsageSummary GetPlatform() const;

                    /**
                     * 设置<p>PLATFORM 域专属</p>
                     * @param _platform <p>PLATFORM 域专属</p>
                     * 
                     */
                    void SetPlatform(const PlatformUsageSummary& _platform);

                    /**
                     * 判断参数 Platform 是否已赋值
                     * @return Platform 是否已赋值
                     * 
                     */
                    bool PlatformHasBeenSet() const;

                    /**
                     * 获取<p>PLUGIN 域专属</p>
                     * @return Plugin <p>PLUGIN 域专属</p>
                     * 
                     */
                    PluginUsageSummary GetPlugin() const;

                    /**
                     * 设置<p>PLUGIN 域专属</p>
                     * @param _plugin <p>PLUGIN 域专属</p>
                     * 
                     */
                    void SetPlugin(const PluginUsageSummary& _plugin);

                    /**
                     * 判断参数 Plugin 是否已赋值
                     * @return Plugin 是否已赋值
                     * 
                     */
                    bool PluginHasBeenSet() const;

                    /**
                     * 获取<p>来源 ID；CORP 视图=space_id（企业视图按 space 分组），SPACE 视图=app_id（uint64 字符串），APP 视图=app_id</p>
                     * @return SourceId <p>来源 ID；CORP 视图=space_id（企业视图按 space 分组），SPACE 视图=app_id（uint64 字符串），APP 视图=app_id</p>
                     * 
                     */
                    std::string GetSourceId() const;

                    /**
                     * 设置<p>来源 ID；CORP 视图=space_id（企业视图按 space 分组），SPACE 视图=app_id（uint64 字符串），APP 视图=app_id</p>
                     * @param _sourceId <p>来源 ID；CORP 视图=space_id（企业视图按 space 分组），SPACE 视图=app_id（uint64 字符串），APP 视图=app_id</p>
                     * 
                     */
                    void SetSourceId(const std::string& _sourceId);

                    /**
                     * 判断参数 SourceId 是否已赋值
                     * @return SourceId 是否已赋值
                     * 
                     */
                    bool SourceIdHasBeenSet() const;

                    /**
                     * 获取<p>来源名称；CORP 视图=space_name，SPACE 视图=app_name，APP 视图=app_name</p>
                     * @return SourceName <p>来源名称；CORP 视图=space_name，SPACE 视图=app_name，APP 视图=app_name</p>
                     * 
                     */
                    std::string GetSourceName() const;

                    /**
                     * 设置<p>来源名称；CORP 视图=space_name，SPACE 视图=app_name，APP 视图=app_name</p>
                     * @param _sourceName <p>来源名称；CORP 视图=space_name，SPACE 视图=app_name，APP 视图=app_name</p>
                     * 
                     */
                    void SetSourceName(const std::string& _sourceName);

                    /**
                     * 判断参数 SourceName 是否已赋值
                     * @return SourceName 是否已赋值
                     * 
                     */
                    bool SourceNameHasBeenSet() const;

                    /**
                     * 获取<p>视图类型，决定 SourceId/SourceName 的业务含义</p><table><tbody><tr><td>枚举项</td><td>枚举值</td><td>描述</td></tr><tr><td>VIEW_TYPE_UNSPECIFIED</td><td>0</td><td>未指定（无效值，请求勿传）</td></tr><tr><td>VIEW_TYPE_CORP</td><td>1</td><td>企业视图</td></tr><tr><td>VIEW_TYPE_SPACE</td><td>2</td><td>空间视图</td></tr><tr><td>VIEW_TYPE_APP</td><td>3</td><td>应用视图</td></tr></tbody></table>
                     * @return ViewType <p>视图类型，决定 SourceId/SourceName 的业务含义</p><table><tbody><tr><td>枚举项</td><td>枚举值</td><td>描述</td></tr><tr><td>VIEW_TYPE_UNSPECIFIED</td><td>0</td><td>未指定（无效值，请求勿传）</td></tr><tr><td>VIEW_TYPE_CORP</td><td>1</td><td>企业视图</td></tr><tr><td>VIEW_TYPE_SPACE</td><td>2</td><td>空间视图</td></tr><tr><td>VIEW_TYPE_APP</td><td>3</td><td>应用视图</td></tr></tbody></table>
                     * 
                     */
                    int64_t GetViewType() const;

                    /**
                     * 设置<p>视图类型，决定 SourceId/SourceName 的业务含义</p><table><tbody><tr><td>枚举项</td><td>枚举值</td><td>描述</td></tr><tr><td>VIEW_TYPE_UNSPECIFIED</td><td>0</td><td>未指定（无效值，请求勿传）</td></tr><tr><td>VIEW_TYPE_CORP</td><td>1</td><td>企业视图</td></tr><tr><td>VIEW_TYPE_SPACE</td><td>2</td><td>空间视图</td></tr><tr><td>VIEW_TYPE_APP</td><td>3</td><td>应用视图</td></tr></tbody></table>
                     * @param _viewType <p>视图类型，决定 SourceId/SourceName 的业务含义</p><table><tbody><tr><td>枚举项</td><td>枚举值</td><td>描述</td></tr><tr><td>VIEW_TYPE_UNSPECIFIED</td><td>0</td><td>未指定（无效值，请求勿传）</td></tr><tr><td>VIEW_TYPE_CORP</td><td>1</td><td>企业视图</td></tr><tr><td>VIEW_TYPE_SPACE</td><td>2</td><td>空间视图</td></tr><tr><td>VIEW_TYPE_APP</td><td>3</td><td>应用视图</td></tr></tbody></table>
                     * 
                     */
                    void SetViewType(const int64_t& _viewType);

                    /**
                     * 判断参数 ViewType 是否已赋值
                     * @return ViewType 是否已赋值
                     * 
                     */
                    bool ViewTypeHasBeenSet() const;

                private:

                    /**
                     * <p>MODEL 域专属</p>
                     */
                    ModelUsageSummary m_model;
                    bool m_modelHasBeenSet;

                    /**
                     * <p>PLATFORM 域专属</p>
                     */
                    PlatformUsageSummary m_platform;
                    bool m_platformHasBeenSet;

                    /**
                     * <p>PLUGIN 域专属</p>
                     */
                    PluginUsageSummary m_plugin;
                    bool m_pluginHasBeenSet;

                    /**
                     * <p>来源 ID；CORP 视图=space_id（企业视图按 space 分组），SPACE 视图=app_id（uint64 字符串），APP 视图=app_id</p>
                     */
                    std::string m_sourceId;
                    bool m_sourceIdHasBeenSet;

                    /**
                     * <p>来源名称；CORP 视图=space_name，SPACE 视图=app_name，APP 视图=app_name</p>
                     */
                    std::string m_sourceName;
                    bool m_sourceNameHasBeenSet;

                    /**
                     * <p>视图类型，决定 SourceId/SourceName 的业务含义</p><table><tbody><tr><td>枚举项</td><td>枚举值</td><td>描述</td></tr><tr><td>VIEW_TYPE_UNSPECIFIED</td><td>0</td><td>未指定（无效值，请求勿传）</td></tr><tr><td>VIEW_TYPE_CORP</td><td>1</td><td>企业视图</td></tr><tr><td>VIEW_TYPE_SPACE</td><td>2</td><td>空间视图</td></tr><tr><td>VIEW_TYPE_APP</td><td>3</td><td>应用视图</td></tr></tbody></table>
                     */
                    int64_t m_viewType;
                    bool m_viewTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_USAGESUMMARY_H_
