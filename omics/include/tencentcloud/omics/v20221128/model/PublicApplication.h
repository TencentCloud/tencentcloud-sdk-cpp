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

#ifndef TENCENTCLOUD_OMICS_V20221128_MODEL_PUBLICAPPLICATION_H_
#define TENCENTCLOUD_OMICS_V20221128_MODEL_PUBLICAPPLICATION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/omics/v20221128/model/ToolRepoTag.h>


namespace TencentCloud
{
    namespace Omics
    {
        namespace V20221128
        {
            namespace Model
            {
                /**
                * 公共应用。
                */
                class PublicApplication : public AbstractModel
                {
                public:
                    PublicApplication();
                    ~PublicApplication() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>应用ID。</p>
                     * @return ApplicationId <p>应用ID。</p>
                     * 
                     */
                    std::string GetApplicationId() const;

                    /**
                     * 设置<p>应用ID。</p>
                     * @param _applicationId <p>应用ID。</p>
                     * 
                     */
                    void SetApplicationId(const std::string& _applicationId);

                    /**
                     * 判断参数 ApplicationId 是否已赋值
                     * @return ApplicationId 是否已赋值
                     * 
                     */
                    bool ApplicationIdHasBeenSet() const;

                    /**
                     * 获取<p>名称。</p>
                     * @return Name <p>名称。</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>名称。</p>
                     * @param _name <p>名称。</p>
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
                     * 获取<p>类型。</p>
                     * @return Type <p>类型。</p>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>类型。</p>
                     * @param _type <p>类型。</p>
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取<p>应用标记</p><p>枚举值：</p><ul><li>SUB_APP： 子应用</li><li>APP_COLLECTION： 合集</li><li>STANDALONE_APP： 独立应用</li></ul>
                     * @return AppGroupType <p>应用标记</p><p>枚举值：</p><ul><li>SUB_APP： 子应用</li><li>APP_COLLECTION： 合集</li><li>STANDALONE_APP： 独立应用</li></ul>
                     * 
                     */
                    std::string GetAppGroupType() const;

                    /**
                     * 设置<p>应用标记</p><p>枚举值：</p><ul><li>SUB_APP： 子应用</li><li>APP_COLLECTION： 合集</li><li>STANDALONE_APP： 独立应用</li></ul>
                     * @param _appGroupType <p>应用标记</p><p>枚举值：</p><ul><li>SUB_APP： 子应用</li><li>APP_COLLECTION： 合集</li><li>STANDALONE_APP： 独立应用</li></ul>
                     * 
                     */
                    void SetAppGroupType(const std::string& _appGroupType);

                    /**
                     * 判断参数 AppGroupType 是否已赋值
                     * @return AppGroupType 是否已赋值
                     * 
                     */
                    bool AppGroupTypeHasBeenSet() const;

                    /**
                     * 获取<p>Nextflow版本</p>
                     * @return NextflowVersion <p>Nextflow版本</p>
                     * 
                     */
                    std::vector<std::string> GetNextflowVersion() const;

                    /**
                     * 设置<p>Nextflow版本</p>
                     * @param _nextflowVersion <p>Nextflow版本</p>
                     * 
                     */
                    void SetNextflowVersion(const std::vector<std::string>& _nextflowVersion);

                    /**
                     * 判断参数 NextflowVersion 是否已赋值
                     * @return NextflowVersion 是否已赋值
                     * 
                     */
                    bool NextflowVersionHasBeenSet() const;

                    /**
                     * 获取<p>应用分类</p>
                     * @return AppTags <p>应用分类</p>
                     * 
                     */
                    std::vector<ToolRepoTag> GetAppTags() const;

                    /**
                     * 设置<p>应用分类</p>
                     * @param _appTags <p>应用分类</p>
                     * 
                     */
                    void SetAppTags(const std::vector<ToolRepoTag>& _appTags);

                    /**
                     * 判断参数 AppTags 是否已赋值
                     * @return AppTags 是否已赋值
                     * 
                     */
                    bool AppTagsHasBeenSet() const;

                    /**
                     * 获取<p>应用标识</p>
                     * @return AppId <p>应用标识</p>
                     * 
                     */
                    std::string GetAppId() const;

                    /**
                     * 设置<p>应用标识</p>
                     * @param _appId <p>应用标识</p>
                     * 
                     */
                    void SetAppId(const std::string& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                private:

                    /**
                     * <p>应用ID。</p>
                     */
                    std::string m_applicationId;
                    bool m_applicationIdHasBeenSet;

                    /**
                     * <p>名称。</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>类型。</p>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>应用标记</p><p>枚举值：</p><ul><li>SUB_APP： 子应用</li><li>APP_COLLECTION： 合集</li><li>STANDALONE_APP： 独立应用</li></ul>
                     */
                    std::string m_appGroupType;
                    bool m_appGroupTypeHasBeenSet;

                    /**
                     * <p>Nextflow版本</p>
                     */
                    std::vector<std::string> m_nextflowVersion;
                    bool m_nextflowVersionHasBeenSet;

                    /**
                     * <p>应用分类</p>
                     */
                    std::vector<ToolRepoTag> m_appTags;
                    bool m_appTagsHasBeenSet;

                    /**
                     * <p>应用标识</p>
                     */
                    std::string m_appId;
                    bool m_appIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OMICS_V20221128_MODEL_PUBLICAPPLICATION_H_
