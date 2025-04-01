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

#ifndef TENCENTCLOUD_VOD_V20240718_MODEL_CREATEINCREMENTALMIGRATIONSTRATEGYREQUEST_H_
#define TENCENTCLOUD_VOD_V20240718_MODEL_CREATEINCREMENTALMIGRATIONSTRATEGYREQUEST_H_

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
                * CreateIncrementalMigrationStrategy请求参数结构体
                */
                class CreateIncrementalMigrationStrategyRequest : public AbstractModel
                {
                public:
                    CreateIncrementalMigrationStrategyRequest();
                    ~CreateIncrementalMigrationStrategyRequest() = default;
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
                     * 获取增量迁移策略名称，名称长度不超过100个字符，允许的字符为：`中文、英文、0-9、_、-`。
                     * @return StrategyName 增量迁移策略名称，名称长度不超过100个字符，允许的字符为：`中文、英文、0-9、_、-`。
                     * 
                     */
                    std::string GetStrategyName() const;

                    /**
                     * 设置增量迁移策略名称，名称长度不超过100个字符，允许的字符为：`中文、英文、0-9、_、-`。
                     * @param _strategyName 增量迁移策略名称，名称长度不超过100个字符，允许的字符为：`中文、英文、0-9、_、-`。
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
                     * 获取源站类型。取值有：
<li>HTTP：HTTP 源。</li>
                     * @return OriginType 源站类型。取值有：
<li>HTTP：HTTP 源。</li>
                     * 
                     */
                    std::string GetOriginType() const;

                    /**
                     * 设置源站类型。取值有：
<li>HTTP：HTTP 源。</li>
                     * @param _originType 源站类型。取值有：
<li>HTTP：HTTP 源。</li>
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
                     * 获取增量迁移 HTTP 回源源站配置，当 OriginType 取值 `HTTP` 时必填。
                     * @return HttpOriginConfig 增量迁移 HTTP 回源源站配置，当 OriginType 取值 `HTTP` 时必填。
                     * 
                     */
                    IncrementalMigrationHttpOriginConfig GetHttpOriginConfig() const;

                    /**
                     * 设置增量迁移 HTTP 回源源站配置，当 OriginType 取值 `HTTP` 时必填。
                     * @param _httpOriginConfig 增量迁移 HTTP 回源源站配置，当 OriginType 取值 `HTTP` 时必填。
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
                     * 增量迁移策略名称，名称长度不超过100个字符，允许的字符为：`中文、英文、0-9、_、-`。
                     */
                    std::string m_strategyName;
                    bool m_strategyNameHasBeenSet;

                    /**
                     * 源站类型。取值有：
<li>HTTP：HTTP 源。</li>
                     */
                    std::string m_originType;
                    bool m_originTypeHasBeenSet;

                    /**
                     * 增量迁移 HTTP 回源源站配置，当 OriginType 取值 `HTTP` 时必填。
                     */
                    IncrementalMigrationHttpOriginConfig m_httpOriginConfig;
                    bool m_httpOriginConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20240718_MODEL_CREATEINCREMENTALMIGRATIONSTRATEGYREQUEST_H_
