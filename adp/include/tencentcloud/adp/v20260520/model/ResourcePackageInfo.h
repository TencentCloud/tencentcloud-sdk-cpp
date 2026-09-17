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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_RESOURCEPACKAGEINFO_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_RESOURCEPACKAGEINFO_H_

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
                * 计费套餐包用量信息
                */
                class ResourcePackageInfo : public AbstractModel
                {
                public:
                    ResourcePackageInfo();
                    ~ResourcePackageInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>套餐类型</p><p>枚举值：</p><ul><li>1： 免费版</li><li>2： 专业版</li><li>3： 企业版</li></ul>
                     * @return PackageType <p>套餐类型</p><p>枚举值：</p><ul><li>1： 免费版</li><li>2： 专业版</li><li>3： 企业版</li></ul>
                     * 
                     */
                    uint64_t GetPackageType() const;

                    /**
                     * 设置<p>套餐类型</p><p>枚举值：</p><ul><li>1： 免费版</li><li>2： 专业版</li><li>3： 企业版</li></ul>
                     * @param _packageType <p>套餐类型</p><p>枚举值：</p><ul><li>1： 免费版</li><li>2： 专业版</li><li>3： 企业版</li></ul>
                     * 
                     */
                    void SetPackageType(const uint64_t& _packageType);

                    /**
                     * 判断参数 PackageType 是否已赋值
                     * @return PackageType 是否已赋值
                     * 
                     */
                    bool PackageTypeHasBeenSet() const;

                    /**
                     * 获取<p>资源包总量</p>
                     * @return ResourceTotal <p>资源包总量</p>
                     * 
                     */
                    int64_t GetResourceTotal() const;

                    /**
                     * 设置<p>资源包总量</p>
                     * @param _resourceTotal <p>资源包总量</p>
                     * 
                     */
                    void SetResourceTotal(const int64_t& _resourceTotal);

                    /**
                     * 判断参数 ResourceTotal 是否已赋值
                     * @return ResourceTotal 是否已赋值
                     * 
                     */
                    bool ResourceTotalHasBeenSet() const;

                    /**
                     * 获取<p>资源包用量</p>
                     * @return ResourceUsage <p>资源包用量</p>
                     * 
                     */
                    double GetResourceUsage() const;

                    /**
                     * 设置<p>资源包用量</p>
                     * @param _resourceUsage <p>资源包用量</p>
                     * 
                     */
                    void SetResourceUsage(const double& _resourceUsage);

                    /**
                     * 判断参数 ResourceUsage 是否已赋值
                     * @return ResourceUsage 是否已赋值
                     * 
                     */
                    bool ResourceUsageHasBeenSet() const;

                    /**
                     * 获取<p>知识库容量</p>
                     * @return KnowledgeCapacity <p>知识库容量</p>
                     * 
                     */
                    double GetKnowledgeCapacity() const;

                    /**
                     * 设置<p>知识库容量</p>
                     * @param _knowledgeCapacity <p>知识库容量</p>
                     * 
                     */
                    void SetKnowledgeCapacity(const double& _knowledgeCapacity);

                    /**
                     * 判断参数 KnowledgeCapacity 是否已赋值
                     * @return KnowledgeCapacity 是否已赋值
                     * 
                     */
                    bool KnowledgeCapacityHasBeenSet() const;

                    /**
                     * 获取<p>知识库用量</p>
                     * @return KnowledgeUsage <p>知识库用量</p>
                     * 
                     */
                    double GetKnowledgeUsage() const;

                    /**
                     * 设置<p>知识库用量</p>
                     * @param _knowledgeUsage <p>知识库用量</p>
                     * 
                     */
                    void SetKnowledgeUsage(const double& _knowledgeUsage);

                    /**
                     * 判断参数 KnowledgeUsage 是否已赋值
                     * @return KnowledgeUsage 是否已赋值
                     * 
                     */
                    bool KnowledgeUsageHasBeenSet() const;

                    /**
                     * 获取<p>资源包状态</p><p>枚举值：</p><ul><li>1： 正常</li><li>3： 已到期</li><li>4： 即将到期</li></ul>
                     * @return ResourceStatus <p>资源包状态</p><p>枚举值：</p><ul><li>1： 正常</li><li>3： 已到期</li><li>4： 即将到期</li></ul>
                     * 
                     */
                    uint64_t GetResourceStatus() const;

                    /**
                     * 设置<p>资源包状态</p><p>枚举值：</p><ul><li>1： 正常</li><li>3： 已到期</li><li>4： 即将到期</li></ul>
                     * @param _resourceStatus <p>资源包状态</p><p>枚举值：</p><ul><li>1： 正常</li><li>3： 已到期</li><li>4： 即将到期</li></ul>
                     * 
                     */
                    void SetResourceStatus(const uint64_t& _resourceStatus);

                    /**
                     * 判断参数 ResourceStatus 是否已赋值
                     * @return ResourceStatus 是否已赋值
                     * 
                     */
                    bool ResourceStatusHasBeenSet() const;

                private:

                    /**
                     * <p>套餐类型</p><p>枚举值：</p><ul><li>1： 免费版</li><li>2： 专业版</li><li>3： 企业版</li></ul>
                     */
                    uint64_t m_packageType;
                    bool m_packageTypeHasBeenSet;

                    /**
                     * <p>资源包总量</p>
                     */
                    int64_t m_resourceTotal;
                    bool m_resourceTotalHasBeenSet;

                    /**
                     * <p>资源包用量</p>
                     */
                    double m_resourceUsage;
                    bool m_resourceUsageHasBeenSet;

                    /**
                     * <p>知识库容量</p>
                     */
                    double m_knowledgeCapacity;
                    bool m_knowledgeCapacityHasBeenSet;

                    /**
                     * <p>知识库用量</p>
                     */
                    double m_knowledgeUsage;
                    bool m_knowledgeUsageHasBeenSet;

                    /**
                     * <p>资源包状态</p><p>枚举值：</p><ul><li>1： 正常</li><li>3： 已到期</li><li>4： 即将到期</li></ul>
                     */
                    uint64_t m_resourceStatus;
                    bool m_resourceStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_RESOURCEPACKAGEINFO_H_
