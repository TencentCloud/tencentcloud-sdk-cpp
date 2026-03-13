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

#ifndef TENCENTCLOUD_SMS_V20210111_MODEL_SMSPACKAGESSTATISTICS_H_
#define TENCENTCLOUD_SMS_V20210111_MODEL_SMSPACKAGESSTATISTICS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Sms
    {
        namespace V20210111
        {
            namespace Model
            {
                /**
                * 套餐包信息统计响应包体
                */
                class SmsPackagesStatistics : public AbstractModel
                {
                public:
                    SmsPackagesStatistics();
                    ~SmsPackagesStatistics() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>套餐包创建时间，UNIX 时间戳。</p><p>单位：秒</p>
                     * @return PackageCreateTime <p>套餐包创建时间，UNIX 时间戳。</p><p>单位：秒</p>
                     * 
                     */
                    uint64_t GetPackageCreateTime() const;

                    /**
                     * 设置<p>套餐包创建时间，UNIX 时间戳。</p><p>单位：秒</p>
                     * @param _packageCreateTime <p>套餐包创建时间，UNIX 时间戳。</p><p>单位：秒</p>
                     * 
                     */
                    void SetPackageCreateTime(const uint64_t& _packageCreateTime);

                    /**
                     * 判断参数 PackageCreateTime 是否已赋值
                     * @return PackageCreateTime 是否已赋值
                     * 
                     */
                    bool PackageCreateTimeHasBeenSet() const;

                    /**
                     * 获取<p>套餐包生效时间，UNIX 时间戳。</p><p>单位：秒</p>
                     * @return PackageEffectiveTime <p>套餐包生效时间，UNIX 时间戳。</p><p>单位：秒</p>
                     * 
                     */
                    uint64_t GetPackageEffectiveTime() const;

                    /**
                     * 设置<p>套餐包生效时间，UNIX 时间戳。</p><p>单位：秒</p>
                     * @param _packageEffectiveTime <p>套餐包生效时间，UNIX 时间戳。</p><p>单位：秒</p>
                     * 
                     */
                    void SetPackageEffectiveTime(const uint64_t& _packageEffectiveTime);

                    /**
                     * 判断参数 PackageEffectiveTime 是否已赋值
                     * @return PackageEffectiveTime 是否已赋值
                     * 
                     */
                    bool PackageEffectiveTimeHasBeenSet() const;

                    /**
                     * 获取<p>套餐包过期时间，UNIX 时间戳。</p><p>单位：秒</p>
                     * @return PackageExpiredTime <p>套餐包过期时间，UNIX 时间戳。</p><p>单位：秒</p>
                     * 
                     */
                    uint64_t GetPackageExpiredTime() const;

                    /**
                     * 设置<p>套餐包过期时间，UNIX 时间戳。</p><p>单位：秒</p>
                     * @param _packageExpiredTime <p>套餐包过期时间，UNIX 时间戳。</p><p>单位：秒</p>
                     * 
                     */
                    void SetPackageExpiredTime(const uint64_t& _packageExpiredTime);

                    /**
                     * 判断参数 PackageExpiredTime 是否已赋值
                     * @return PackageExpiredTime 是否已赋值
                     * 
                     */
                    bool PackageExpiredTimeHasBeenSet() const;

                    /**
                     * 获取<p>套餐包条数。</p><p>单位：条</p>
                     * @return PackageAmount <p>套餐包条数。</p><p>单位：条</p>
                     * 
                     */
                    uint64_t GetPackageAmount() const;

                    /**
                     * 设置<p>套餐包条数。</p><p>单位：条</p>
                     * @param _packageAmount <p>套餐包条数。</p><p>单位：条</p>
                     * 
                     */
                    void SetPackageAmount(const uint64_t& _packageAmount);

                    /**
                     * 判断参数 PackageAmount 是否已赋值
                     * @return PackageAmount 是否已赋值
                     * 
                     */
                    bool PackageAmountHasBeenSet() const;

                    /**
                     * 获取<p>套餐包类别。</p><p>枚举值：</p><ul><li>0： 赠送套餐</li><li>1： 购买套餐包</li></ul>
                     * @return PackageType <p>套餐包类别。</p><p>枚举值：</p><ul><li>0： 赠送套餐</li><li>1： 购买套餐包</li></ul>
                     * 
                     */
                    uint64_t GetPackageType() const;

                    /**
                     * 设置<p>套餐包类别。</p><p>枚举值：</p><ul><li>0： 赠送套餐</li><li>1： 购买套餐包</li></ul>
                     * @param _packageType <p>套餐包类别。</p><p>枚举值：</p><ul><li>0： 赠送套餐</li><li>1： 购买套餐包</li></ul>
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
                     * 获取<p>套餐包 ID。</p>
                     * @return PackageId <p>套餐包 ID。</p>
                     * 
                     */
                    uint64_t GetPackageId() const;

                    /**
                     * 设置<p>套餐包 ID。</p>
                     * @param _packageId <p>套餐包 ID。</p>
                     * 
                     */
                    void SetPackageId(const uint64_t& _packageId);

                    /**
                     * 判断参数 PackageId 是否已赋值
                     * @return PackageId 是否已赋值
                     * 
                     */
                    bool PackageIdHasBeenSet() const;

                    /**
                     * 获取<p>当前使用套餐包条数。</p><p>单位：条</p>
                     * @return CurrentUsage <p>当前使用套餐包条数。</p><p>单位：条</p>
                     * 
                     */
                    uint64_t GetCurrentUsage() const;

                    /**
                     * 设置<p>当前使用套餐包条数。</p><p>单位：条</p>
                     * @param _currentUsage <p>当前使用套餐包条数。</p><p>单位：条</p>
                     * 
                     */
                    void SetCurrentUsage(const uint64_t& _currentUsage);

                    /**
                     * 判断参数 CurrentUsage 是否已赋值
                     * @return CurrentUsage 是否已赋值
                     * 
                     */
                    bool CurrentUsageHasBeenSet() const;

                private:

                    /**
                     * <p>套餐包创建时间，UNIX 时间戳。</p><p>单位：秒</p>
                     */
                    uint64_t m_packageCreateTime;
                    bool m_packageCreateTimeHasBeenSet;

                    /**
                     * <p>套餐包生效时间，UNIX 时间戳。</p><p>单位：秒</p>
                     */
                    uint64_t m_packageEffectiveTime;
                    bool m_packageEffectiveTimeHasBeenSet;

                    /**
                     * <p>套餐包过期时间，UNIX 时间戳。</p><p>单位：秒</p>
                     */
                    uint64_t m_packageExpiredTime;
                    bool m_packageExpiredTimeHasBeenSet;

                    /**
                     * <p>套餐包条数。</p><p>单位：条</p>
                     */
                    uint64_t m_packageAmount;
                    bool m_packageAmountHasBeenSet;

                    /**
                     * <p>套餐包类别。</p><p>枚举值：</p><ul><li>0： 赠送套餐</li><li>1： 购买套餐包</li></ul>
                     */
                    uint64_t m_packageType;
                    bool m_packageTypeHasBeenSet;

                    /**
                     * <p>套餐包 ID。</p>
                     */
                    uint64_t m_packageId;
                    bool m_packageIdHasBeenSet;

                    /**
                     * <p>当前使用套餐包条数。</p><p>单位：条</p>
                     */
                    uint64_t m_currentUsage;
                    bool m_currentUsageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SMS_V20210111_MODEL_SMSPACKAGESSTATISTICS_H_
