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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_PLATFORMINFO_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_PLATFORMINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcb/v20180608/model/PlatFormResourceInfo.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * 平台版资源信息
                */
                class PlatformInfo : public AbstractModel
                {
                public:
                    PlatformInfo();
                    ~PlatformInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>平台版套餐id</p>
                     * @return PlatformId <p>平台版套餐id</p>
                     * 
                     */
                    std::string GetPlatformId() const;

                    /**
                     * 设置<p>平台版套餐id</p>
                     * @param _platformId <p>平台版套餐id</p>
                     * 
                     */
                    void SetPlatformId(const std::string& _platformId);

                    /**
                     * 判断参数 PlatformId 是否已赋值
                     * @return PlatformId 是否已赋值
                     * 
                     */
                    bool PlatformIdHasBeenSet() const;

                    /**
                     * 获取<p>套餐别名</p>
                     * @return Alias <p>套餐别名</p>
                     * 
                     */
                    std::string GetAlias() const;

                    /**
                     * 设置<p>套餐别名</p>
                     * @param _alias <p>套餐别名</p>
                     * 
                     */
                    void SetAlias(const std::string& _alias);

                    /**
                     * 判断参数 Alias 是否已赋值
                     * @return Alias 是否已赋值
                     * 
                     */
                    bool AliasHasBeenSet() const;

                    /**
                     * 获取<p>套餐id</p>
                     * @return PackageId <p>套餐id</p>
                     * 
                     */
                    std::string GetPackageId() const;

                    /**
                     * 设置<p>套餐id</p>
                     * @param _packageId <p>套餐id</p>
                     * 
                     */
                    void SetPackageId(const std::string& _packageId);

                    /**
                     * 判断参数 PackageId 是否已赋值
                     * @return PackageId 是否已赋值
                     * 
                     */
                    bool PackageIdHasBeenSet() const;

                    /**
                     * 获取<p>计费状态</p><p>枚举值：</p><ul><li>normal： 正常</li><li>isolated： 已隔离</li><li>destroyed： 已销毁</li></ul>
                     * @return BillStatus <p>计费状态</p><p>枚举值：</p><ul><li>normal： 正常</li><li>isolated： 已隔离</li><li>destroyed： 已销毁</li></ul>
                     * 
                     */
                    std::string GetBillStatus() const;

                    /**
                     * 设置<p>计费状态</p><p>枚举值：</p><ul><li>normal： 正常</li><li>isolated： 已隔离</li><li>destroyed： 已销毁</li></ul>
                     * @param _billStatus <p>计费状态</p><p>枚举值：</p><ul><li>normal： 正常</li><li>isolated： 已隔离</li><li>destroyed： 已销毁</li></ul>
                     * 
                     */
                    void SetBillStatus(const std::string& _billStatus);

                    /**
                     * 判断参数 BillStatus 是否已赋值
                     * @return BillStatus 是否已赋值
                     * 
                     */
                    bool BillStatusHasBeenSet() const;

                    /**
                     * 获取<p>套餐资源状态</p><p>枚举值：</p><ul><li>0： 可用</li><li>5： 发货中</li></ul>
                     * @return Status <p>套餐资源状态</p><p>枚举值：</p><ul><li>0： 可用</li><li>5： 发货中</li></ul>
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置<p>套餐资源状态</p><p>枚举值：</p><ul><li>0： 可用</li><li>5： 发货中</li></ul>
                     * @param _status <p>套餐资源状态</p><p>枚举值：</p><ul><li>0： 可用</li><li>5： 发货中</li></ul>
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
                     * 获取<p>资源配置</p>
                     * @return Spec <p>资源配置</p>
                     * 
                     */
                    std::string GetSpec() const;

                    /**
                     * 设置<p>资源配置</p>
                     * @param _spec <p>资源配置</p>
                     * 
                     */
                    void SetSpec(const std::string& _spec);

                    /**
                     * 判断参数 Spec 是否已赋值
                     * @return Spec 是否已赋值
                     * 
                     */
                    bool SpecHasBeenSet() const;

                    /**
                     * 获取<p>购买时间</p><p>参数格式：YYYY-MM-DD hh:mm:ss</p>
                     * @return BillTime <p>购买时间</p><p>参数格式：YYYY-MM-DD hh:mm:ss</p>
                     * 
                     */
                    std::string GetBillTime() const;

                    /**
                     * 设置<p>购买时间</p><p>参数格式：YYYY-MM-DD hh:mm:ss</p>
                     * @param _billTime <p>购买时间</p><p>参数格式：YYYY-MM-DD hh:mm:ss</p>
                     * 
                     */
                    void SetBillTime(const std::string& _billTime);

                    /**
                     * 判断参数 BillTime 是否已赋值
                     * @return BillTime 是否已赋值
                     * 
                     */
                    bool BillTimeHasBeenSet() const;

                    /**
                     * 获取<p>套餐过期时间</p><p>参数格式：YYYY-MM-DD hh:mm:ss</p>
                     * @return ExpireTime <p>套餐过期时间</p><p>参数格式：YYYY-MM-DD hh:mm:ss</p>
                     * 
                     */
                    std::string GetExpireTime() const;

                    /**
                     * 设置<p>套餐过期时间</p><p>参数格式：YYYY-MM-DD hh:mm:ss</p>
                     * @param _expireTime <p>套餐过期时间</p><p>参数格式：YYYY-MM-DD hh:mm:ss</p>
                     * 
                     */
                    void SetExpireTime(const std::string& _expireTime);

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     * 
                     */
                    bool ExpireTimeHasBeenSet() const;

                    /**
                     * 获取<p>是否自动续费</p><p>枚举值：</p><ul><li>0： 未设置</li><li>1： 自动续费</li><li>2： 设置为到期不续费</li></ul>
                     * @return IsAutoRenew <p>是否自动续费</p><p>枚举值：</p><ul><li>0： 未设置</li><li>1： 自动续费</li><li>2： 设置为到期不续费</li></ul>
                     * 
                     */
                    uint64_t GetIsAutoRenew() const;

                    /**
                     * 设置<p>是否自动续费</p><p>枚举值：</p><ul><li>0： 未设置</li><li>1： 自动续费</li><li>2： 设置为到期不续费</li></ul>
                     * @param _isAutoRenew <p>是否自动续费</p><p>枚举值：</p><ul><li>0： 未设置</li><li>1： 自动续费</li><li>2： 设置为到期不续费</li></ul>
                     * 
                     */
                    void SetIsAutoRenew(const uint64_t& _isAutoRenew);

                    /**
                     * 判断参数 IsAutoRenew 是否已赋值
                     * @return IsAutoRenew 是否已赋值
                     * 
                     */
                    bool IsAutoRenewHasBeenSet() const;

                    /**
                     * 获取<p>资源信息列表</p>
                     * @return Resources <p>资源信息列表</p>
                     * 
                     */
                    std::vector<PlatFormResourceInfo> GetResources() const;

                    /**
                     * 设置<p>资源信息列表</p>
                     * @param _resources <p>资源信息列表</p>
                     * 
                     */
                    void SetResources(const std::vector<PlatFormResourceInfo>& _resources);

                    /**
                     * 判断参数 Resources 是否已赋值
                     * @return Resources 是否已赋值
                     * 
                     */
                    bool ResourcesHasBeenSet() const;

                    /**
                     * 获取<p>所属地域</p><p>枚举值：</p><ul><li>ap-shanghai： 上海</li><li>ap-singapore： 新加坡</li></ul>
                     * @return Region <p>所属地域</p><p>枚举值：</p><ul><li>ap-shanghai： 上海</li><li>ap-singapore： 新加坡</li></ul>
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置<p>所属地域</p><p>枚举值：</p><ul><li>ap-shanghai： 上海</li><li>ap-singapore： 新加坡</li></ul>
                     * @param _region <p>所属地域</p><p>枚举值：</p><ul><li>ap-shanghai： 上海</li><li>ap-singapore： 新加坡</li></ul>
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                private:

                    /**
                     * <p>平台版套餐id</p>
                     */
                    std::string m_platformId;
                    bool m_platformIdHasBeenSet;

                    /**
                     * <p>套餐别名</p>
                     */
                    std::string m_alias;
                    bool m_aliasHasBeenSet;

                    /**
                     * <p>套餐id</p>
                     */
                    std::string m_packageId;
                    bool m_packageIdHasBeenSet;

                    /**
                     * <p>计费状态</p><p>枚举值：</p><ul><li>normal： 正常</li><li>isolated： 已隔离</li><li>destroyed： 已销毁</li></ul>
                     */
                    std::string m_billStatus;
                    bool m_billStatusHasBeenSet;

                    /**
                     * <p>套餐资源状态</p><p>枚举值：</p><ul><li>0： 可用</li><li>5： 发货中</li></ul>
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>资源配置</p>
                     */
                    std::string m_spec;
                    bool m_specHasBeenSet;

                    /**
                     * <p>购买时间</p><p>参数格式：YYYY-MM-DD hh:mm:ss</p>
                     */
                    std::string m_billTime;
                    bool m_billTimeHasBeenSet;

                    /**
                     * <p>套餐过期时间</p><p>参数格式：YYYY-MM-DD hh:mm:ss</p>
                     */
                    std::string m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * <p>是否自动续费</p><p>枚举值：</p><ul><li>0： 未设置</li><li>1： 自动续费</li><li>2： 设置为到期不续费</li></ul>
                     */
                    uint64_t m_isAutoRenew;
                    bool m_isAutoRenewHasBeenSet;

                    /**
                     * <p>资源信息列表</p>
                     */
                    std::vector<PlatFormResourceInfo> m_resources;
                    bool m_resourcesHasBeenSet;

                    /**
                     * <p>所属地域</p><p>枚举值：</p><ul><li>ap-shanghai： 上海</li><li>ap-singapore： 新加坡</li></ul>
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_PLATFORMINFO_H_
