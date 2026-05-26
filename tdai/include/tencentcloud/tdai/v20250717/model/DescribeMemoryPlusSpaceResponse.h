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

#ifndef TENCENTCLOUD_TDAI_V20250717_MODEL_DESCRIBEMEMORYPLUSSPACERESPONSE_H_
#define TENCENTCLOUD_TDAI_V20250717_MODEL_DESCRIBEMEMORYPLUSSPACERESPONSE_H_

#include <string>
#include <vector>
#include <map>
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
                * DescribeMemoryPlusSpace返回参数结构体
                */
                class DescribeMemoryPlusSpaceResponse : public AbstractModel
                {
                public:
                    DescribeMemoryPlusSpaceResponse();
                    ~DescribeMemoryPlusSpaceResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Memory 实例 ID。</p>
                     * @return SpaceId <p>Memory 实例 ID。</p>
                     * 
                     */
                    std::string GetSpaceId() const;

                    /**
                     * 判断参数 SpaceId 是否已赋值
                     * @return SpaceId 是否已赋值
                     * 
                     */
                    bool SpaceIdHasBeenSet() const;

                    /**
                     * 获取<p>Memory 实例的自定义名称。</p>
                     * @return Name <p>Memory 实例的自定义名称。</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取<p>Memory 实例的简要描述，包括使用场景、用途或背景信息，便于日常运维识别。</p>
                     * @return Description <p>Memory 实例的简要描述，包括使用场景、用途或背景信息，便于日常运维识别。</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取<p>腾讯云账号的 APPID。</p>
                     * @return AppId <p>腾讯云账号的 APPID。</p>
                     * 
                     */
                    int64_t GetAppId() const;

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取<p>Memroy 实例所属地域。</p>
                     * @return Region <p>Memroy 实例所属地域。</p>
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取<p>Memory 实例的标签信息。</p>
                     * @return ResourceTags <p>Memory 实例的标签信息。</p>
                     * 
                     */
                    std::vector<ResourceTag> GetResourceTags() const;

                    /**
                     * 判断参数 ResourceTags 是否已赋值
                     * @return ResourceTags 是否已赋值
                     * 
                     */
                    bool ResourceTagsHasBeenSet() const;

                    /**
                     * 获取<p>Memory 实例当前运行状态。</p><ul><li>1：运行中。</li><li>2：创建中。</li><li>3：销毁中。</li><li>4：已销毁。</li><li>5：隔离中。</li><li>6：已隔离。</li><li>7：恢复中。</li></ul>
                     * @return Status <p>Memory 实例当前运行状态。</p><ul><li>1：运行中。</li><li>2：创建中。</li><li>3：销毁中。</li><li>4：已销毁。</li><li>5：隔离中。</li><li>6：已隔离。</li><li>7：恢复中。</li></ul>
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>Memory 实例计费模式。</p><ul><li>-1：免费体验。</li><li>0：包年包月。</li><li>1：按量计费。</li></ul>
                     * @return PayMode <p>Memory 实例计费模式。</p><ul><li>-1：免费体验。</li><li>0：包年包月。</li><li>1：按量计费。</li></ul>
                     * 
                     */
                    int64_t GetPayMode() const;

                    /**
                     * 判断参数 PayMode 是否已赋值
                     * @return PayMode 是否已赋值
                     * 
                     */
                    bool PayModeHasBeenSet() const;

                    /**
                     * 获取<p>Memory 版本信息：v1。</p>
                     * @return Version <p>Memory 版本信息：v1。</p>
                     * 
                     */
                    std::string GetVersion() const;

                    /**
                     * 判断参数 Version 是否已赋值
                     * @return Version 是否已赋值
                     * 
                     */
                    bool VersionHasBeenSet() const;

                    /**
                     * 获取<p>Memory 当前已写入的记忆条数。</p>
                     * @return MemoryUsage <p>Memory 当前已写入的记忆条数。</p>
                     * 
                     */
                    int64_t GetMemoryUsage() const;

                    /**
                     * 判断参数 MemoryUsage 是否已赋值
                     * @return MemoryUsage 是否已赋值
                     * 
                     */
                    bool MemoryUsageHasBeenSet() const;

                    /**
                     * 获取<p>Memory 实例记忆条数配额上限。</p>
                     * @return MemoryLimit <p>Memory 实例记忆条数配额上限。</p>
                     * 
                     */
                    int64_t GetMemoryLimit() const;

                    /**
                     * 判断参数 MemoryLimit 是否已赋值
                     * @return MemoryLimit 是否已赋值
                     * 
                     */
                    bool MemoryLimitHasBeenSet() const;

                    /**
                     * 获取<p>Memory 实例当前 Credit 的使用数量。</p>
                     * @return CreditUsage <p>Memory 实例当前 Credit 的使用数量。</p>
                     * 
                     */
                    double GetCreditUsage() const;

                    /**
                     * 判断参数 CreditUsage 是否已赋值
                     * @return CreditUsage 是否已赋值
                     * 
                     */
                    bool CreditUsageHasBeenSet() const;

                    /**
                     * 获取<p>Memory 实例 Credit 的最大使用数量。</p>
                     * @return CreditLimit <p>Memory 实例 Credit 的最大使用数量。</p>
                     * 
                     */
                    double GetCreditLimit() const;

                    /**
                     * 判断参数 CreditLimit 是否已赋值
                     * @return CreditLimit 是否已赋值
                     * 
                     */
                    bool CreditLimitHasBeenSet() const;

                    /**
                     * 获取<p>Memory 实例的内网访问地址。</p>
                     * @return AccessUrl <p>Memory 实例的内网访问地址。</p>
                     * 
                     */
                    std::string GetAccessUrl() const;

                    /**
                     * 判断参数 AccessUrl 是否已赋值
                     * @return AccessUrl 是否已赋值
                     * 
                     */
                    bool AccessUrlHasBeenSet() const;

                    /**
                     * 获取<p>Memory 实例的外网访问地址。</p>
                     * @return WanAccessUrl <p>Memory 实例的外网访问地址。</p>
                     * 
                     */
                    std::string GetWanAccessUrl() const;

                    /**
                     * 判断参数 WanAccessUrl 是否已赋值
                     * @return WanAccessUrl 是否已赋值
                     * 
                     */
                    bool WanAccessUrlHasBeenSet() const;

                    /**
                     * 获取<p>Memory 实例的创建时间。</p>
                     * @return CreatedAt <p>Memory 实例的创建时间。</p>
                     * 
                     */
                    std::string GetCreatedAt() const;

                    /**
                     * 判断参数 CreatedAt 是否已赋值
                     * @return CreatedAt 是否已赋值
                     * 
                     */
                    bool CreatedAtHasBeenSet() const;

                    /**
                     * 获取<p>Memory 实例的到期时间。</p>
                     * @return ExpiredAt <p>Memory 实例的到期时间。</p>
                     * 
                     */
                    std::string GetExpiredAt() const;

                    /**
                     * 判断参数 ExpiredAt 是否已赋值
                     * @return ExpiredAt 是否已赋值
                     * 
                     */
                    bool ExpiredAtHasBeenSet() const;

                    /**
                     * 获取<p>Memory 实例的隔离时间。</p>
                     * @return IsolatedAt <p>Memory 实例的隔离时间。</p>
                     * 
                     */
                    std::string GetIsolatedAt() const;

                    /**
                     * 判断参数 IsolatedAt 是否已赋值
                     * @return IsolatedAt 是否已赋值
                     * 
                     */
                    bool IsolatedAtHasBeenSet() const;

                    /**
                     * 获取<p>到期销毁时间</p>
                     * @return DestroyAt <p>到期销毁时间</p>
                     * 
                     */
                    std::string GetDestroyAt() const;

                    /**
                     * 判断参数 DestroyAt 是否已赋值
                     * @return DestroyAt 是否已赋值
                     * 
                     */
                    bool DestroyAtHasBeenSet() const;

                private:

                    /**
                     * <p>Memory 实例 ID。</p>
                     */
                    std::string m_spaceId;
                    bool m_spaceIdHasBeenSet;

                    /**
                     * <p>Memory 实例的自定义名称。</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>Memory 实例的简要描述，包括使用场景、用途或背景信息，便于日常运维识别。</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>腾讯云账号的 APPID。</p>
                     */
                    int64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * <p>Memroy 实例所属地域。</p>
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * <p>Memory 实例的标签信息。</p>
                     */
                    std::vector<ResourceTag> m_resourceTags;
                    bool m_resourceTagsHasBeenSet;

                    /**
                     * <p>Memory 实例当前运行状态。</p><ul><li>1：运行中。</li><li>2：创建中。</li><li>3：销毁中。</li><li>4：已销毁。</li><li>5：隔离中。</li><li>6：已隔离。</li><li>7：恢复中。</li></ul>
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>Memory 实例计费模式。</p><ul><li>-1：免费体验。</li><li>0：包年包月。</li><li>1：按量计费。</li></ul>
                     */
                    int64_t m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * <p>Memory 版本信息：v1。</p>
                     */
                    std::string m_version;
                    bool m_versionHasBeenSet;

                    /**
                     * <p>Memory 当前已写入的记忆条数。</p>
                     */
                    int64_t m_memoryUsage;
                    bool m_memoryUsageHasBeenSet;

                    /**
                     * <p>Memory 实例记忆条数配额上限。</p>
                     */
                    int64_t m_memoryLimit;
                    bool m_memoryLimitHasBeenSet;

                    /**
                     * <p>Memory 实例当前 Credit 的使用数量。</p>
                     */
                    double m_creditUsage;
                    bool m_creditUsageHasBeenSet;

                    /**
                     * <p>Memory 实例 Credit 的最大使用数量。</p>
                     */
                    double m_creditLimit;
                    bool m_creditLimitHasBeenSet;

                    /**
                     * <p>Memory 实例的内网访问地址。</p>
                     */
                    std::string m_accessUrl;
                    bool m_accessUrlHasBeenSet;

                    /**
                     * <p>Memory 实例的外网访问地址。</p>
                     */
                    std::string m_wanAccessUrl;
                    bool m_wanAccessUrlHasBeenSet;

                    /**
                     * <p>Memory 实例的创建时间。</p>
                     */
                    std::string m_createdAt;
                    bool m_createdAtHasBeenSet;

                    /**
                     * <p>Memory 实例的到期时间。</p>
                     */
                    std::string m_expiredAt;
                    bool m_expiredAtHasBeenSet;

                    /**
                     * <p>Memory 实例的隔离时间。</p>
                     */
                    std::string m_isolatedAt;
                    bool m_isolatedAtHasBeenSet;

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

#endif // !TENCENTCLOUD_TDAI_V20250717_MODEL_DESCRIBEMEMORYPLUSSPACERESPONSE_H_
