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

#ifndef TENCENTCLOUD_VOD_V20240718_MODEL_DELETEINCREMENTALMIGRATIONSTRATEGYREQUEST_H_
#define TENCENTCLOUD_VOD_V20240718_MODEL_DELETEINCREMENTALMIGRATIONSTRATEGYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20240718
        {
            namespace Model
            {
                /**
                * DeleteIncrementalMigrationStrategy请求参数结构体
                */
                class DeleteIncrementalMigrationStrategyRequest : public AbstractModel
                {
                public:
                    DeleteIncrementalMigrationStrategyRequest();
                    ~DeleteIncrementalMigrationStrategyRequest() = default;
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

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20240718_MODEL_DELETEINCREMENTALMIGRATIONSTRATEGYREQUEST_H_
