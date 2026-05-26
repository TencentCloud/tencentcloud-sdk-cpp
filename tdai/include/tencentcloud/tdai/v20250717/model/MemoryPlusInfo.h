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

#ifndef TENCENTCLOUD_TDAI_V20250717_MODEL_MEMORYPLUSINFO_H_
#define TENCENTCLOUD_TDAI_V20250717_MODEL_MEMORYPLUSINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tdai/v20250717/model/ResourceTag.h>


namespace TencentCloud
{
    namespace Tdai
    {
        namespace V20250717
        {
            namespace Model
            {
                /**
                * Memory正式版实例列表元素信息
                */
                class MemoryPlusInfo : public AbstractModel
                {
                public:
                    MemoryPlusInfo();
                    ~MemoryPlusInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>实例id</p>
                     * @return SpaceId <p>实例id</p>
                     * 
                     */
                    std::string GetSpaceId() const;

                    /**
                     * 设置<p>实例id</p>
                     * @param _spaceId <p>实例id</p>
                     * 
                     */
                    void SetSpaceId(const std::string& _spaceId);

                    /**
                     * 判断参数 SpaceId 是否已赋值
                     * @return SpaceId 是否已赋值
                     * 
                     */
                    bool SpaceIdHasBeenSet() const;

                    /**
                     * 获取<p>实例名称</p>
                     * @return Name <p>实例名称</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>实例名称</p>
                     * @param _name <p>实例名称</p>
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
                     * 获取<p>描述</p>
                     * @return Description <p>描述</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>描述</p>
                     * @param _description <p>描述</p>
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取<p>实例状态</p>
                     * @return Status <p>实例状态</p>
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置<p>实例状态</p>
                     * @param _status <p>实例状态</p>
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
                     * 获取<p>地域</p>
                     * @return Region <p>地域</p>
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置<p>地域</p>
                     * @param _region <p>地域</p>
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取<p>记忆条数</p>
                     * @return MemoryUsage <p>记忆条数</p>
                     * 
                     */
                    int64_t GetMemoryUsage() const;

                    /**
                     * 设置<p>记忆条数</p>
                     * @param _memoryUsage <p>记忆条数</p>
                     * 
                     */
                    void SetMemoryUsage(const int64_t& _memoryUsage);

                    /**
                     * 判断参数 MemoryUsage 是否已赋值
                     * @return MemoryUsage 是否已赋值
                     * 
                     */
                    bool MemoryUsageHasBeenSet() const;

                    /**
                     * 获取<p>当月积分数</p>
                     * @return CreditUsage <p>当月积分数</p>
                     * 
                     */
                    double GetCreditUsage() const;

                    /**
                     * 设置<p>当月积分数</p>
                     * @param _creditUsage <p>当月积分数</p>
                     * 
                     */
                    void SetCreditUsage(const double& _creditUsage);

                    /**
                     * 判断参数 CreditUsage 是否已赋值
                     * @return CreditUsage 是否已赋值
                     * 
                     */
                    bool CreditUsageHasBeenSet() const;

                    /**
                     * 获取<p>资源标签</p>
                     * @return ResourceTags <p>资源标签</p>
                     * 
                     */
                    std::vector<ResourceTag> GetResourceTags() const;

                    /**
                     * 设置<p>资源标签</p>
                     * @param _resourceTags <p>资源标签</p>
                     * 
                     */
                    void SetResourceTags(const std::vector<ResourceTag>& _resourceTags);

                    /**
                     * 判断参数 ResourceTags 是否已赋值
                     * @return ResourceTags 是否已赋值
                     * 
                     */
                    bool ResourceTagsHasBeenSet() const;

                    /**
                     * 获取<p>创建时间</p>
                     * @return CreatedAt <p>创建时间</p>
                     * 
                     */
                    std::string GetCreatedAt() const;

                    /**
                     * 设置<p>创建时间</p>
                     * @param _createdAt <p>创建时间</p>
                     * 
                     */
                    void SetCreatedAt(const std::string& _createdAt);

                    /**
                     * 判断参数 CreatedAt 是否已赋值
                     * @return CreatedAt 是否已赋值
                     * 
                     */
                    bool CreatedAtHasBeenSet() const;

                    /**
                     * 获取<p>隔离时间</p>
                     * @return IsolatedAt <p>隔离时间</p>
                     * 
                     */
                    std::string GetIsolatedAt() const;

                    /**
                     * 设置<p>隔离时间</p>
                     * @param _isolatedAt <p>隔离时间</p>
                     * 
                     */
                    void SetIsolatedAt(const std::string& _isolatedAt);

                    /**
                     * 判断参数 IsolatedAt 是否已赋值
                     * @return IsolatedAt 是否已赋值
                     * 
                     */
                    bool IsolatedAtHasBeenSet() const;

                    /**
                     * 获取<p>到期时间</p>
                     * @return ExpiredAt <p>到期时间</p>
                     * 
                     */
                    std::string GetExpiredAt() const;

                    /**
                     * 设置<p>到期时间</p>
                     * @param _expiredAt <p>到期时间</p>
                     * 
                     */
                    void SetExpiredAt(const std::string& _expiredAt);

                    /**
                     * 判断参数 ExpiredAt 是否已赋值
                     * @return ExpiredAt 是否已赋值
                     * 
                     */
                    bool ExpiredAtHasBeenSet() const;

                    /**
                     * 获取<p>到期销毁时间</p>
                     * @return DestroyAt <p>到期销毁时间</p>
                     * 
                     */
                    std::string GetDestroyAt() const;

                    /**
                     * 设置<p>到期销毁时间</p>
                     * @param _destroyAt <p>到期销毁时间</p>
                     * 
                     */
                    void SetDestroyAt(const std::string& _destroyAt);

                    /**
                     * 判断参数 DestroyAt 是否已赋值
                     * @return DestroyAt 是否已赋值
                     * 
                     */
                    bool DestroyAtHasBeenSet() const;

                private:

                    /**
                     * <p>实例id</p>
                     */
                    std::string m_spaceId;
                    bool m_spaceIdHasBeenSet;

                    /**
                     * <p>实例名称</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>描述</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>实例状态</p>
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>地域</p>
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * <p>记忆条数</p>
                     */
                    int64_t m_memoryUsage;
                    bool m_memoryUsageHasBeenSet;

                    /**
                     * <p>当月积分数</p>
                     */
                    double m_creditUsage;
                    bool m_creditUsageHasBeenSet;

                    /**
                     * <p>资源标签</p>
                     */
                    std::vector<ResourceTag> m_resourceTags;
                    bool m_resourceTagsHasBeenSet;

                    /**
                     * <p>创建时间</p>
                     */
                    std::string m_createdAt;
                    bool m_createdAtHasBeenSet;

                    /**
                     * <p>隔离时间</p>
                     */
                    std::string m_isolatedAt;
                    bool m_isolatedAtHasBeenSet;

                    /**
                     * <p>到期时间</p>
                     */
                    std::string m_expiredAt;
                    bool m_expiredAtHasBeenSet;

                    /**
                     * <p>到期销毁时间</p>
                     */
                    std::string m_destroyAt;
                    bool m_destroyAtHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDAI_V20250717_MODEL_MEMORYPLUSINFO_H_
