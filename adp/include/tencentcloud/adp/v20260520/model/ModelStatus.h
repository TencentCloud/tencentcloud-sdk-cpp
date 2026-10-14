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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_MODELSTATUS_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_MODELSTATUS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * <p>模型状态</p>
                */
                class ModelStatus : public AbstractModel
                {
                public:
                    ModelStatus();
                    ~ModelStatus() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>专属并发数</p>
                     * @return Concurrency <p>专属并发数</p>
                     * 
                     */
                    int64_t GetConcurrency() const;

                    /**
                     * 设置<p>专属并发数</p>
                     * @param _concurrency <p>专属并发数</p>
                     * 
                     */
                    void SetConcurrency(const int64_t& _concurrency);

                    /**
                     * 判断参数 Concurrency 是否已赋值
                     * @return Concurrency 是否已赋值
                     * 
                     */
                    bool ConcurrencyHasBeenSet() const;

                    /**
                     * 获取<p>是否专属并发</p>
                     * @return IsExclusive <p>是否专属并发</p>
                     * 
                     */
                    bool GetIsExclusive() const;

                    /**
                     * 设置<p>是否专属并发</p>
                     * @param _isExclusive <p>是否专属并发</p>
                     * 
                     */
                    void SetIsExclusive(const bool& _isExclusive);

                    /**
                     * 判断参数 IsExclusive 是否已赋值
                     * @return IsExclusive 是否已赋值
                     * 
                     */
                    bool IsExclusiveHasBeenSet() const;

                    /**
                     * 获取<p>是否支持在智能工作台直接体验（模型广场详情页：依赖 space_id 动态判定；false 时前端置灰「立即体验」按钮）</p>
                     * @return IsExperienceSupported <p>是否支持在智能工作台直接体验（模型广场详情页：依赖 space_id 动态判定；false 时前端置灰「立即体验」按钮）</p>
                     * 
                     */
                    bool GetIsExperienceSupported() const;

                    /**
                     * 设置<p>是否支持在智能工作台直接体验（模型广场详情页：依赖 space_id 动态判定；false 时前端置灰「立即体验」按钮）</p>
                     * @param _isExperienceSupported <p>是否支持在智能工作台直接体验（模型广场详情页：依赖 space_id 动态判定；false 时前端置灰「立即体验」按钮）</p>
                     * 
                     */
                    void SetIsExperienceSupported(const bool& _isExperienceSupported);

                    /**
                     * 判断参数 IsExperienceSupported 是否已赋值
                     * @return IsExperienceSupported 是否已赋值
                     * 
                     */
                    bool IsExperienceSupportedHasBeenSet() const;

                    /**
                     * 获取<p>资源状态</p><table><tr><td>枚举项</td><td>枚举值</td><td>描述</td></tr><tr><td>RESOURCE_STATUS_UNSPECIFIED</td><td>0</td><td>未指定</td></tr><tr><td>RESOURCE_STATUS_AVAILABLE</td><td>1</td><td>资源可用</td></tr><tr><td>RESOURCE_STATUS_EXHAUSTED</td><td>2</td><td>资源已用尽</td></tr></table>
                     * @return ResourceStatus <p>资源状态</p><table><tr><td>枚举项</td><td>枚举值</td><td>描述</td></tr><tr><td>RESOURCE_STATUS_UNSPECIFIED</td><td>0</td><td>未指定</td></tr><tr><td>RESOURCE_STATUS_AVAILABLE</td><td>1</td><td>资源可用</td></tr><tr><td>RESOURCE_STATUS_EXHAUSTED</td><td>2</td><td>资源已用尽</td></tr></table>
                     * 
                     */
                    int64_t GetResourceStatus() const;

                    /**
                     * 设置<p>资源状态</p><table><tr><td>枚举项</td><td>枚举值</td><td>描述</td></tr><tr><td>RESOURCE_STATUS_UNSPECIFIED</td><td>0</td><td>未指定</td></tr><tr><td>RESOURCE_STATUS_AVAILABLE</td><td>1</td><td>资源可用</td></tr><tr><td>RESOURCE_STATUS_EXHAUSTED</td><td>2</td><td>资源已用尽</td></tr></table>
                     * @param _resourceStatus <p>资源状态</p><table><tr><td>枚举项</td><td>枚举值</td><td>描述</td></tr><tr><td>RESOURCE_STATUS_UNSPECIFIED</td><td>0</td><td>未指定</td></tr><tr><td>RESOURCE_STATUS_AVAILABLE</td><td>1</td><td>资源可用</td></tr><tr><td>RESOURCE_STATUS_EXHAUSTED</td><td>2</td><td>资源已用尽</td></tr></table>
                     * 
                     */
                    void SetResourceStatus(const int64_t& _resourceStatus);

                    /**
                     * 判断参数 ResourceStatus 是否已赋值
                     * @return ResourceStatus 是否已赋值
                     * 
                     */
                    bool ResourceStatusHasBeenSet() const;

                    /**
                     * 获取<p>调用 RPM 上限（当前账号维度：有配置取配置，无配置取默认；0 表示未获取到）</p>
                     * @return RpmLimit <p>调用 RPM 上限（当前账号维度：有配置取配置，无配置取默认；0 表示未获取到）</p>
                     * 
                     */
                    std::string GetRpmLimit() const;

                    /**
                     * 设置<p>调用 RPM 上限（当前账号维度：有配置取配置，无配置取默认；0 表示未获取到）</p>
                     * @param _rpmLimit <p>调用 RPM 上限（当前账号维度：有配置取配置，无配置取默认；0 表示未获取到）</p>
                     * 
                     */
                    void SetRpmLimit(const std::string& _rpmLimit);

                    /**
                     * 判断参数 RpmLimit 是否已赋值
                     * @return RpmLimit 是否已赋值
                     * 
                     */
                    bool RpmLimitHasBeenSet() const;

                    /**
                     * 获取<p>调用 TPM 上限（当前账号维度：有配置取配置，无配置取默认；0 表示未获取到）</p>
                     * @return TpmLimit <p>调用 TPM 上限（当前账号维度：有配置取配置，无配置取默认；0 表示未获取到）</p>
                     * 
                     */
                    std::string GetTpmLimit() const;

                    /**
                     * 设置<p>调用 TPM 上限（当前账号维度：有配置取配置，无配置取默认；0 表示未获取到）</p>
                     * @param _tpmLimit <p>调用 TPM 上限（当前账号维度：有配置取配置，无配置取默认；0 表示未获取到）</p>
                     * 
                     */
                    void SetTpmLimit(const std::string& _tpmLimit);

                    /**
                     * 判断参数 TpmLimit 是否已赋值
                     * @return TpmLimit 是否已赋值
                     * 
                     */
                    bool TpmLimitHasBeenSet() const;

                private:

                    /**
                     * <p>专属并发数</p>
                     */
                    int64_t m_concurrency;
                    bool m_concurrencyHasBeenSet;

                    /**
                     * <p>是否专属并发</p>
                     */
                    bool m_isExclusive;
                    bool m_isExclusiveHasBeenSet;

                    /**
                     * <p>是否支持在智能工作台直接体验（模型广场详情页：依赖 space_id 动态判定；false 时前端置灰「立即体验」按钮）</p>
                     */
                    bool m_isExperienceSupported;
                    bool m_isExperienceSupportedHasBeenSet;

                    /**
                     * <p>资源状态</p><table><tr><td>枚举项</td><td>枚举值</td><td>描述</td></tr><tr><td>RESOURCE_STATUS_UNSPECIFIED</td><td>0</td><td>未指定</td></tr><tr><td>RESOURCE_STATUS_AVAILABLE</td><td>1</td><td>资源可用</td></tr><tr><td>RESOURCE_STATUS_EXHAUSTED</td><td>2</td><td>资源已用尽</td></tr></table>
                     */
                    int64_t m_resourceStatus;
                    bool m_resourceStatusHasBeenSet;

                    /**
                     * <p>调用 RPM 上限（当前账号维度：有配置取配置，无配置取默认；0 表示未获取到）</p>
                     */
                    std::string m_rpmLimit;
                    bool m_rpmLimitHasBeenSet;

                    /**
                     * <p>调用 TPM 上限（当前账号维度：有配置取配置，无配置取默认；0 表示未获取到）</p>
                     */
                    std::string m_tpmLimit;
                    bool m_tpmLimitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_MODELSTATUS_H_
