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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_SALEPACKAGESPEC_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_SALEPACKAGESPEC_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * 资源包明细说明
                */
                class SalePackageSpec : public AbstractModel
                {
                public:
                    SalePackageSpec();
                    ~SalePackageSpec() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取资源包使用地域
                     * @return PackageRegion 资源包使用地域
                     * 
                     */
                    std::string GetPackageRegion() const;

                    /**
                     * 设置资源包使用地域
                     * @param _packageRegion 资源包使用地域
                     * 
                     */
                    void SetPackageRegion(const std::string& _packageRegion);

                    /**
                     * 判断参数 PackageRegion 是否已赋值
                     * @return PackageRegion 是否已赋值
                     * 
                     */
                    bool PackageRegionHasBeenSet() const;

                    /**
                     * 获取资源包类型
CCU-计算资源包
DISK-存储资源包
                     * @return PackageType 资源包类型
CCU-计算资源包
DISK-存储资源包
                     * 
                     */
                    std::string GetPackageType() const;

                    /**
                     * 设置资源包类型
CCU-计算资源包
DISK-存储资源包
                     * @param _packageType 资源包类型
CCU-计算资源包
DISK-存储资源包
                     * 
                     */
                    void SetPackageType(const std::string& _packageType);

                    /**
                     * 判断参数 PackageType 是否已赋值
                     * @return PackageType 是否已赋值
                     * 
                     */
                    bool PackageTypeHasBeenSet() const;

                    /**
                     * 获取资源包版本
base-基础版本，common-通用版本，enterprise-企业版本
                     * @return PackageVersion 资源包版本
base-基础版本，common-通用版本，enterprise-企业版本
                     * 
                     */
                    std::string GetPackageVersion() const;

                    /**
                     * 设置资源包版本
base-基础版本，common-通用版本，enterprise-企业版本
                     * @param _packageVersion 资源包版本
base-基础版本，common-通用版本，enterprise-企业版本
                     * 
                     */
                    void SetPackageVersion(const std::string& _packageVersion);

                    /**
                     * 判断参数 PackageVersion 是否已赋值
                     * @return PackageVersion 是否已赋值
                     * 
                     */
                    bool PackageVersionHasBeenSet() const;

                    /**
                     * 获取当前版本资源包最小资源数，计算资源单位：个；存储资源：GB
                     * @return MinPackageSpec 当前版本资源包最小资源数，计算资源单位：个；存储资源：GB
                     * 
                     */
                    double GetMinPackageSpec() const;

                    /**
                     * 设置当前版本资源包最小资源数，计算资源单位：个；存储资源：GB
                     * @param _minPackageSpec 当前版本资源包最小资源数，计算资源单位：个；存储资源：GB
                     * 
                     */
                    void SetMinPackageSpec(const double& _minPackageSpec);

                    /**
                     * 判断参数 MinPackageSpec 是否已赋值
                     * @return MinPackageSpec 是否已赋值
                     * 
                     */
                    bool MinPackageSpecHasBeenSet() const;

                    /**
                     * 获取当前版本资源包最大资源数，计算资源单位：个；存储资源：GB
                     * @return MaxPackageSpec 当前版本资源包最大资源数，计算资源单位：个；存储资源：GB
                     * 
                     */
                    double GetMaxPackageSpec() const;

                    /**
                     * 设置当前版本资源包最大资源数，计算资源单位：个；存储资源：GB
                     * @param _maxPackageSpec 当前版本资源包最大资源数，计算资源单位：个；存储资源：GB
                     * 
                     */
                    void SetMaxPackageSpec(const double& _maxPackageSpec);

                    /**
                     * 判断参数 MaxPackageSpec 是否已赋值
                     * @return MaxPackageSpec 是否已赋值
                     * 
                     */
                    bool MaxPackageSpecHasBeenSet() const;

                    /**
                     * 获取资源包有效期，单位:天
                     * @return ExpireDay 资源包有效期，单位:天
                     * 
                     */
                    int64_t GetExpireDay() const;

                    /**
                     * 设置资源包有效期，单位:天
                     * @param _expireDay 资源包有效期，单位:天
                     * 
                     */
                    void SetExpireDay(const int64_t& _expireDay);

                    /**
                     * 判断参数 ExpireDay 是否已赋值
                     * @return ExpireDay 是否已赋值
                     * 
                     */
                    bool ExpireDayHasBeenSet() const;

                private:

                    /**
                     * 资源包使用地域
                     */
                    std::string m_packageRegion;
                    bool m_packageRegionHasBeenSet;

                    /**
                     * 资源包类型
CCU-计算资源包
DISK-存储资源包
                     */
                    std::string m_packageType;
                    bool m_packageTypeHasBeenSet;

                    /**
                     * 资源包版本
base-基础版本，common-通用版本，enterprise-企业版本
                     */
                    std::string m_packageVersion;
                    bool m_packageVersionHasBeenSet;

                    /**
                     * 当前版本资源包最小资源数，计算资源单位：个；存储资源：GB
                     */
                    double m_minPackageSpec;
                    bool m_minPackageSpecHasBeenSet;

                    /**
                     * 当前版本资源包最大资源数，计算资源单位：个；存储资源：GB
                     */
                    double m_maxPackageSpec;
                    bool m_maxPackageSpecHasBeenSet;

                    /**
                     * 资源包有效期，单位:天
                     */
                    int64_t m_expireDay;
                    bool m_expireDayHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_SALEPACKAGESPEC_H_
