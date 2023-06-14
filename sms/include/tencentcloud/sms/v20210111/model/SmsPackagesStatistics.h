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
                     * 获取套餐包创建时间，UNIX 时间戳（单位：秒）。
                     * @return PackageCreateTime 套餐包创建时间，UNIX 时间戳（单位：秒）。
                     * 
                     */
                    uint64_t GetPackageCreateTime() const;

                    /**
                     * 设置套餐包创建时间，UNIX 时间戳（单位：秒）。
                     * @param _packageCreateTime 套餐包创建时间，UNIX 时间戳（单位：秒）。
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
                     * 获取套餐包生效时间，UNIX 时间戳（单位：秒）。
                     * @return PackageEffectiveTime 套餐包生效时间，UNIX 时间戳（单位：秒）。
                     * 
                     */
                    uint64_t GetPackageEffectiveTime() const;

                    /**
                     * 设置套餐包生效时间，UNIX 时间戳（单位：秒）。
                     * @param _packageEffectiveTime 套餐包生效时间，UNIX 时间戳（单位：秒）。
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
                     * 获取套餐包过期时间，UNIX 时间戳（单位：秒）。
                     * @return PackageExpiredTime 套餐包过期时间，UNIX 时间戳（单位：秒）。
                     * 
                     */
                    uint64_t GetPackageExpiredTime() const;

                    /**
                     * 设置套餐包过期时间，UNIX 时间戳（单位：秒）。
                     * @param _packageExpiredTime 套餐包过期时间，UNIX 时间戳（单位：秒）。
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
                     * 获取套餐包条数。
                     * @return PackageAmount 套餐包条数。
                     * 
                     */
                    uint64_t GetPackageAmount() const;

                    /**
                     * 设置套餐包条数。
                     * @param _packageAmount 套餐包条数。
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
                     * 获取套餐包类别，0表示赠送套餐包，1表示购买套餐包。
                     * @return PackageType 套餐包类别，0表示赠送套餐包，1表示购买套餐包。
                     * 
                     */
                    uint64_t GetPackageType() const;

                    /**
                     * 设置套餐包类别，0表示赠送套餐包，1表示购买套餐包。
                     * @param _packageType 套餐包类别，0表示赠送套餐包，1表示购买套餐包。
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
                     * 获取套餐包 ID。
                     * @return PackageId 套餐包 ID。
                     * 
                     */
                    uint64_t GetPackageId() const;

                    /**
                     * 设置套餐包 ID。
                     * @param _packageId 套餐包 ID。
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
                     * 获取当前使用套餐包条数。
                     * @return CurrentUsage 当前使用套餐包条数。
                     * 
                     */
                    uint64_t GetCurrentUsage() const;

                    /**
                     * 设置当前使用套餐包条数。
                     * @param _currentUsage 当前使用套餐包条数。
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
                     * 套餐包创建时间，UNIX 时间戳（单位：秒）。
                     */
                    uint64_t m_packageCreateTime;
                    bool m_packageCreateTimeHasBeenSet;

                    /**
                     * 套餐包生效时间，UNIX 时间戳（单位：秒）。
                     */
                    uint64_t m_packageEffectiveTime;
                    bool m_packageEffectiveTimeHasBeenSet;

                    /**
                     * 套餐包过期时间，UNIX 时间戳（单位：秒）。
                     */
                    uint64_t m_packageExpiredTime;
                    bool m_packageExpiredTimeHasBeenSet;

                    /**
                     * 套餐包条数。
                     */
                    uint64_t m_packageAmount;
                    bool m_packageAmountHasBeenSet;

                    /**
                     * 套餐包类别，0表示赠送套餐包，1表示购买套餐包。
                     */
                    uint64_t m_packageType;
                    bool m_packageTypeHasBeenSet;

                    /**
                     * 套餐包 ID。
                     */
                    uint64_t m_packageId;
                    bool m_packageIdHasBeenSet;

                    /**
                     * 当前使用套餐包条数。
                     */
                    uint64_t m_currentUsage;
                    bool m_currentUsageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SMS_V20210111_MODEL_SMSPACKAGESSTATISTICS_H_
