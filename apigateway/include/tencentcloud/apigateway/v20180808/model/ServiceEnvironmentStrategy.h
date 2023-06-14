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

#ifndef TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_SERVICEENVIRONMENTSTRATEGY_H_
#define TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_SERVICEENVIRONMENTSTRATEGY_H_

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
                * 服务环境策略
                */
                class ServiceEnvironmentStrategy : public AbstractModel
                {
                public:
                    ServiceEnvironmentStrategy();
                    ~ServiceEnvironmentStrategy() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取环境名。
                     * @return EnvironmentName 环境名。
                     * 
                     */
                    std::string GetEnvironmentName() const;

                    /**
                     * 设置环境名。
                     * @param _environmentName 环境名。
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
                     * 获取访问服务对应环境的url。
                     * @return Url 访问服务对应环境的url。
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置访问服务对应环境的url。
                     * @param _url 访问服务对应环境的url。
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
                     * 获取发布状态。
                     * @return Status 发布状态。
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置发布状态。
                     * @param _status 发布状态。
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取发布的版本号。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VersionName 发布的版本号。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetVersionName() const;

                    /**
                     * 设置发布的版本号。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _versionName 发布的版本号。
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取限流值。
                     * @return Strategy 限流值。
                     * 
                     */
                    int64_t GetStrategy() const;

                    /**
                     * 设置限流值。
                     * @param _strategy 限流值。
                     * 
                     */
                    void SetStrategy(const int64_t& _strategy);

                    /**
                     * 判断参数 Strategy 是否已赋值
                     * @return Strategy 是否已赋值
                     * 
                     */
                    bool StrategyHasBeenSet() const;

                    /**
                     * 获取最大限流值
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MaxStrategy 最大限流值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetMaxStrategy() const;

                    /**
                     * 设置最大限流值
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _maxStrategy 最大限流值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMaxStrategy(const int64_t& _maxStrategy);

                    /**
                     * 判断参数 MaxStrategy 是否已赋值
                     * @return MaxStrategy 是否已赋值
                     * 
                     */
                    bool MaxStrategyHasBeenSet() const;

                private:

                    /**
                     * 环境名。
                     */
                    std::string m_environmentName;
                    bool m_environmentNameHasBeenSet;

                    /**
                     * 访问服务对应环境的url。
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * 发布状态。
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 发布的版本号。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_versionName;
                    bool m_versionNameHasBeenSet;

                    /**
                     * 限流值。
                     */
                    int64_t m_strategy;
                    bool m_strategyHasBeenSet;

                    /**
                     * 最大限流值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_maxStrategy;
                    bool m_maxStrategyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_SERVICEENVIRONMENTSTRATEGY_H_
