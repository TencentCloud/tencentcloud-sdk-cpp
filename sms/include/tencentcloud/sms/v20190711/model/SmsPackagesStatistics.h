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

#ifndef TENCENTCLOUD_SMS_V20190711_MODEL_SMSPACKAGESSTATISTICS_H_
#define TENCENTCLOUD_SMS_V20190711_MODEL_SMSPACKAGESSTATISTICS_H_

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
        namespace V20190711
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
                     * 获取套餐包创建时间，标准时间，例如：2019-10-08 17:18:37。
                     * @return PackageCreateTime 套餐包创建时间，标准时间，例如：2019-10-08 17:18:37。
                     * 
                     */
                    std::string GetPackageCreateTime() const;

                    /**
                     * 设置套餐包创建时间，标准时间，例如：2019-10-08 17:18:37。
                     * @param _packageCreateTime 套餐包创建时间，标准时间，例如：2019-10-08 17:18:37。
                     * 
                     */
                    void SetPackageCreateTime(const std::string& _packageCreateTime);

                    /**
                     * 判断参数 PackageCreateTime 是否已赋值
                     * @return PackageCreateTime 是否已赋值
                     * 
                     */
                    bool PackageCreateTimeHasBeenSet() const;

                    /**
                     * 获取套餐包创建时间，UNIX 时间戳（单位：秒）。
                     * @return PackageCreateUnixTime 套餐包创建时间，UNIX 时间戳（单位：秒）。
                     * 
                     */
                    uint64_t GetPackageCreateUnixTime() const;

                    /**
                     * 设置套餐包创建时间，UNIX 时间戳（单位：秒）。
                     * @param _packageCreateUnixTime 套餐包创建时间，UNIX 时间戳（单位：秒）。
                     * 
                     */
                    void SetPackageCreateUnixTime(const uint64_t& _packageCreateUnixTime);

                    /**
                     * 判断参数 PackageCreateUnixTime 是否已赋值
                     * @return PackageCreateUnixTime 是否已赋值
                     * 
                     */
                    bool PackageCreateUnixTimeHasBeenSet() const;

                    /**
                     * 获取套餐包生效时间，标准时间，例如：2019-10-08 17:18:37。
                     * @return PackageEffectiveTime 套餐包生效时间，标准时间，例如：2019-10-08 17:18:37。
                     * 
                     */
                    std::string GetPackageEffectiveTime() const;

                    /**
                     * 设置套餐包生效时间，标准时间，例如：2019-10-08 17:18:37。
                     * @param _packageEffectiveTime 套餐包生效时间，标准时间，例如：2019-10-08 17:18:37。
                     * 
                     */
                    void SetPackageEffectiveTime(const std::string& _packageEffectiveTime);

                    /**
                     * 判断参数 PackageEffectiveTime 是否已赋值
                     * @return PackageEffectiveTime 是否已赋值
                     * 
                     */
                    bool PackageEffectiveTimeHasBeenSet() const;

                    /**
                     * 获取套餐包生效时间，UNIX 时间戳（单位：秒）。
                     * @return PackageEffectiveUnixTime 套餐包生效时间，UNIX 时间戳（单位：秒）。
                     * 
                     */
                    uint64_t GetPackageEffectiveUnixTime() const;

                    /**
                     * 设置套餐包生效时间，UNIX 时间戳（单位：秒）。
                     * @param _packageEffectiveUnixTime 套餐包生效时间，UNIX 时间戳（单位：秒）。
                     * 
                     */
                    void SetPackageEffectiveUnixTime(const uint64_t& _packageEffectiveUnixTime);

                    /**
                     * 判断参数 PackageEffectiveUnixTime 是否已赋值
                     * @return PackageEffectiveUnixTime 是否已赋值
                     * 
                     */
                    bool PackageEffectiveUnixTimeHasBeenSet() const;

                    /**
                     * 获取套餐包过期时间，标准时间，例如：2019-10-08 17:18:37。
                     * @return PackageExpiredTime 套餐包过期时间，标准时间，例如：2019-10-08 17:18:37。
                     * 
                     */
                    std::string GetPackageExpiredTime() const;

                    /**
                     * 设置套餐包过期时间，标准时间，例如：2019-10-08 17:18:37。
                     * @param _packageExpiredTime 套餐包过期时间，标准时间，例如：2019-10-08 17:18:37。
                     * 
                     */
                    void SetPackageExpiredTime(const std::string& _packageExpiredTime);

                    /**
                     * 判断参数 PackageExpiredTime 是否已赋值
                     * @return PackageExpiredTime 是否已赋值
                     * 
                     */
                    bool PackageExpiredTimeHasBeenSet() const;

                    /**
                     * 获取套餐包过期时间，UNIX 时间戳（单位：秒）。
                     * @return PackageExpiredUnixTime 套餐包过期时间，UNIX 时间戳（单位：秒）。
                     * 
                     */
                    uint64_t GetPackageExpiredUnixTime() const;

                    /**
                     * 设置套餐包过期时间，UNIX 时间戳（单位：秒）。
                     * @param _packageExpiredUnixTime 套餐包过期时间，UNIX 时间戳（单位：秒）。
                     * 
                     */
                    void SetPackageExpiredUnixTime(const uint64_t& _packageExpiredUnixTime);

                    /**
                     * 判断参数 PackageExpiredUnixTime 是否已赋值
                     * @return PackageExpiredUnixTime 是否已赋值
                     * 
                     */
                    bool PackageExpiredUnixTimeHasBeenSet() const;

                    /**
                     * 获取套餐包条数。
                     * @return AmountOfPackage 套餐包条数。
                     * 
                     */
                    uint64_t GetAmountOfPackage() const;

                    /**
                     * 设置套餐包条数。
                     * @param _amountOfPackage 套餐包条数。
                     * 
                     */
                    void SetAmountOfPackage(const uint64_t& _amountOfPackage);

                    /**
                     * 判断参数 AmountOfPackage 是否已赋值
                     * @return AmountOfPackage 是否已赋值
                     * 
                     */
                    bool AmountOfPackageHasBeenSet() const;

                    /**
                     * 获取0表示赠送套餐包，1表示购买套餐包。
                     * @return TypeOfPackage 0表示赠送套餐包，1表示购买套餐包。
                     * 
                     */
                    uint64_t GetTypeOfPackage() const;

                    /**
                     * 设置0表示赠送套餐包，1表示购买套餐包。
                     * @param _typeOfPackage 0表示赠送套餐包，1表示购买套餐包。
                     * 
                     */
                    void SetTypeOfPackage(const uint64_t& _typeOfPackage);

                    /**
                     * 判断参数 TypeOfPackage 是否已赋值
                     * @return TypeOfPackage 是否已赋值
                     * 
                     */
                    bool TypeOfPackageHasBeenSet() const;

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
                     * 获取当前使用量。
                     * @return CurrentUsage 当前使用量。
                     * 
                     */
                    uint64_t GetCurrentUsage() const;

                    /**
                     * 设置当前使用量。
                     * @param _currentUsage 当前使用量。
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
                     * 套餐包创建时间，标准时间，例如：2019-10-08 17:18:37。
                     */
                    std::string m_packageCreateTime;
                    bool m_packageCreateTimeHasBeenSet;

                    /**
                     * 套餐包创建时间，UNIX 时间戳（单位：秒）。
                     */
                    uint64_t m_packageCreateUnixTime;
                    bool m_packageCreateUnixTimeHasBeenSet;

                    /**
                     * 套餐包生效时间，标准时间，例如：2019-10-08 17:18:37。
                     */
                    std::string m_packageEffectiveTime;
                    bool m_packageEffectiveTimeHasBeenSet;

                    /**
                     * 套餐包生效时间，UNIX 时间戳（单位：秒）。
                     */
                    uint64_t m_packageEffectiveUnixTime;
                    bool m_packageEffectiveUnixTimeHasBeenSet;

                    /**
                     * 套餐包过期时间，标准时间，例如：2019-10-08 17:18:37。
                     */
                    std::string m_packageExpiredTime;
                    bool m_packageExpiredTimeHasBeenSet;

                    /**
                     * 套餐包过期时间，UNIX 时间戳（单位：秒）。
                     */
                    uint64_t m_packageExpiredUnixTime;
                    bool m_packageExpiredUnixTimeHasBeenSet;

                    /**
                     * 套餐包条数。
                     */
                    uint64_t m_amountOfPackage;
                    bool m_amountOfPackageHasBeenSet;

                    /**
                     * 0表示赠送套餐包，1表示购买套餐包。
                     */
                    uint64_t m_typeOfPackage;
                    bool m_typeOfPackageHasBeenSet;

                    /**
                     * 套餐包 ID。
                     */
                    uint64_t m_packageId;
                    bool m_packageIdHasBeenSet;

                    /**
                     * 当前使用量。
                     */
                    uint64_t m_currentUsage;
                    bool m_currentUsageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SMS_V20190711_MODEL_SMSPACKAGESSTATISTICS_H_
