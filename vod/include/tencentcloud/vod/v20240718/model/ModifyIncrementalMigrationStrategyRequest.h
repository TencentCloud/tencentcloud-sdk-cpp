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

#ifndef TENCENTCLOUD_VOD_V20240718_MODEL_MODIFYINCREMENTALMIGRATIONSTRATEGYREQUEST_H_
#define TENCENTCLOUD_VOD_V20240718_MODEL_MODIFYINCREMENTALMIGRATIONSTRATEGYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20240718/model/IncrementalMigrationHttpOriginConfig.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20240718
        {
            namespace Model
            {
                /**
                * ModifyIncrementalMigrationStrategy请求参数结构体
                */
                class ModifyIncrementalMigrationStrategyRequest : public AbstractModel
                {
                public:
                    ModifyIncrementalMigrationStrategyRequest();
                    ~ModifyIncrementalMigrationStrategyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<b>点播[专业版](/document/product/266/115396)[应用](/document/product/266/14574) ID。</b>
                     * @return SubAppId <b>点播[专业版](/document/product/266/115396)[应用](/document/product/266/14574) ID。</b>
                     * 
                     */
                    uint64_t GetSubAppId() const;

                    /**
                     * 设置<b>点播[专业版](/document/product/266/115396)[应用](/document/product/266/14574) ID。</b>
                     * @param _subAppId <b>点播[专业版](/document/product/266/115396)[应用](/document/product/266/14574) ID。</b>
                     * 
                     */
                    void SetSubAppId(const uint64_t& _subAppId);

                    /**
                     * 判断参数 SubAppId 是否已赋值
                     * @return SubAppId 是否已赋值
                     * 
                     */
                    bool SubAppIdHasBeenSet() const;

                    /**
                     * 获取策略生效的存储桶 ID。
                     * @return BucketId 策略生效的存储桶 ID。
                     * 
                     */
                    std::string GetBucketId() const;

                    /**
                     * 设置策略生效的存储桶 ID。
                     * @param _bucketId 策略生效的存储桶 ID。
                     * 
                     */
                    void SetBucketId(const std::string& _bucketId);

                    /**
                     * 判断参数 BucketId 是否已赋值
                     * @return BucketId 是否已赋值
                     * 
                     */
                    bool BucketIdHasBeenSet() const;

                    /**
                     * 获取增量迁移策略 ID。
                     * @return StrategyId 增量迁移策略 ID。
                     * 
                     */
                    std::string GetStrategyId() const;

                    /**
                     * 设置增量迁移策略 ID。
                     * @param _strategyId 增量迁移策略 ID。
                     * 
                     */
                    void SetStrategyId(const std::string& _strategyId);

                    /**
                     * 判断参数 StrategyId 是否已赋值
                     * @return StrategyId 是否已赋值
                     * 
                     */
                    bool StrategyIdHasBeenSet() const;

                    /**
                     * 获取策略名称。若不填充或填充空字符串，则不修改。
                     * @return StrategyName 策略名称。若不填充或填充空字符串，则不修改。
                     * 
                     */
                    std::string GetStrategyName() const;

                    /**
                     * 设置策略名称。若不填充或填充空字符串，则不修改。
                     * @param _strategyName 策略名称。若不填充或填充空字符串，则不修改。
                     * 
                     */
                    void SetStrategyName(const std::string& _strategyName);

                    /**
                     * 判断参数 StrategyName 是否已赋值
                     * @return StrategyName 是否已赋值
                     * 
                     */
                    bool StrategyNameHasBeenSet() const;

                    /**
                     * 获取源站类型。取值有：<li>HTTP：HTTP 源。</li>若不填或填充空字符串，则不修改。
                     * @return OriginType 源站类型。取值有：<li>HTTP：HTTP 源。</li>若不填或填充空字符串，则不修改。
                     * 
                     */
                    std::string GetOriginType() const;

                    /**
                     * 设置源站类型。取值有：<li>HTTP：HTTP 源。</li>若不填或填充空字符串，则不修改。
                     * @param _originType 源站类型。取值有：<li>HTTP：HTTP 源。</li>若不填或填充空字符串，则不修改。
                     * 
                     */
                    void SetOriginType(const std::string& _originType);

                    /**
                     * 判断参数 OriginType 是否已赋值
                     * @return OriginType 是否已赋值
                     * 
                     */
                    bool OriginTypeHasBeenSet() const;

                    /**
                     * 获取HTTP 回源源站配置，若不填则默认不修改。
                     * @return HttpOriginConfig HTTP 回源源站配置，若不填则默认不修改。
                     * 
                     */
                    IncrementalMigrationHttpOriginConfig GetHttpOriginConfig() const;

                    /**
                     * 设置HTTP 回源源站配置，若不填则默认不修改。
                     * @param _httpOriginConfig HTTP 回源源站配置，若不填则默认不修改。
                     * 
                     */
                    void SetHttpOriginConfig(const IncrementalMigrationHttpOriginConfig& _httpOriginConfig);

                    /**
                     * 判断参数 HttpOriginConfig 是否已赋值
                     * @return HttpOriginConfig 是否已赋值
                     * 
                     */
                    bool HttpOriginConfigHasBeenSet() const;

                private:

                    /**
                     * <b>点播[专业版](/document/product/266/115396)[应用](/document/product/266/14574) ID。</b>
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                    /**
                     * 策略生效的存储桶 ID。
                     */
                    std::string m_bucketId;
                    bool m_bucketIdHasBeenSet;

                    /**
                     * 增量迁移策略 ID。
                     */
                    std::string m_strategyId;
                    bool m_strategyIdHasBeenSet;

                    /**
                     * 策略名称。若不填充或填充空字符串，则不修改。
                     */
                    std::string m_strategyName;
                    bool m_strategyNameHasBeenSet;

                    /**
                     * 源站类型。取值有：<li>HTTP：HTTP 源。</li>若不填或填充空字符串，则不修改。
                     */
                    std::string m_originType;
                    bool m_originTypeHasBeenSet;

                    /**
                     * HTTP 回源源站配置，若不填则默认不修改。
                     */
                    IncrementalMigrationHttpOriginConfig m_httpOriginConfig;
                    bool m_httpOriginConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20240718_MODEL_MODIFYINCREMENTALMIGRATIONSTRATEGYREQUEST_H_
