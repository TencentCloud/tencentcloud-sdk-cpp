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

#ifndef TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_ENVIRONMENT_H_
#define TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_ENVIRONMENT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Apigateway
    {
        namespace V20180808
        {
            namespace Model
            {
                /**
                * 服务发布的环境信息。
                */
                class Environment : public AbstractModel
                {
                public:
                    Environment();
                    ~Environment() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取环境名称。
                     * @return EnvironmentName 环境名称。
                     * 
                     */
                    std::string GetEnvironmentName() const;

                    /**
                     * 设置环境名称。
                     * @param _environmentName 环境名称。
                     * 
                     */
                    void SetEnvironmentName(const std::string& _environmentName);

                    /**
                     * 判断参数 EnvironmentName 是否已赋值
                     * @return EnvironmentName 是否已赋值
                     * 
                     */
                    bool EnvironmentNameHasBeenSet() const;

                    /**
                     * 获取访问路径。
                     * @return Url 访问路径。
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置访问路径。
                     * @param _url 访问路径。
                     * 
                     */
                    void SetUrl(const std::string& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     * 
                     */
                    bool UrlHasBeenSet() const;

                    /**
                     * 获取发布状态，1 表示已发布，0 表示未发布。
                     * @return Status 发布状态，1 表示已发布，0 表示未发布。
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置发布状态，1 表示已发布，0 表示未发布。
                     * @param _status 发布状态，1 表示已发布，0 表示未发布。
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取运行版本。
                     * @return VersionName 运行版本。
                     * 
                     */
                    std::string GetVersionName() const;

                    /**
                     * 设置运行版本。
                     * @param _versionName 运行版本。
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
                     * 获取创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateTime 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createTime 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                private:

                    /**
                     * 环境名称。
                     */
                    std::string m_environmentName;
                    bool m_environmentNameHasBeenSet;

                    /**
                     * 访问路径。
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * 发布状态，1 表示已发布，0 表示未发布。
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 运行版本。
                     */
                    std::string m_versionName;
                    bool m_versionNameHasBeenSet;

                    /**
                     * 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_ENVIRONMENT_H_
