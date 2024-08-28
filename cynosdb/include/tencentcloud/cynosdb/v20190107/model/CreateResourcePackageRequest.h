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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_CREATERESOURCEPACKAGEREQUEST_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_CREATERESOURCEPACKAGEREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * CreateResourcePackage请求参数结构体
                */
                class CreateResourcePackageRequest : public AbstractModel
                {
                public:
                    CreateResourcePackageRequest();
                    ~CreateResourcePackageRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例类型，目前固定传cynosdb-serverless
                     * @return InstanceType 实例类型，目前固定传cynosdb-serverless
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置实例类型，目前固定传cynosdb-serverless
                     * @param _instanceType 实例类型，目前固定传cynosdb-serverless
                     * 
                     */
                    void SetInstanceType(const std::string& _instanceType);

                    /**
                     * 判断参数 InstanceType 是否已赋值
                     * @return InstanceType 是否已赋值
                     * 
                     */
                    bool InstanceTypeHasBeenSet() const;

                    /**
                     * 获取资源包使用地域chineseMainland-中国内地通用，overseas-港澳台及海外通用
                     * @return PackageRegion 资源包使用地域chineseMainland-中国内地通用，overseas-港澳台及海外通用
                     * 
                     */
                    std::string GetPackageRegion() const;

                    /**
                     * 设置资源包使用地域chineseMainland-中国内地通用，overseas-港澳台及海外通用
                     * @param _packageRegion 资源包使用地域chineseMainland-中国内地通用，overseas-港澳台及海外通用
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
                     * 获取资源包类型：CCU-计算资源包，DISK-存储资源包
                     * @return PackageType 资源包类型：CCU-计算资源包，DISK-存储资源包
                     * 
                     */
                    std::string GetPackageType() const;

                    /**
                     * 设置资源包类型：CCU-计算资源包，DISK-存储资源包
                     * @param _packageType 资源包类型：CCU-计算资源包，DISK-存储资源包
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
                     * 获取资源包大小，计算资源单位：万个；存储资源：GB
                     * @return PackageSpec 资源包大小，计算资源单位：万个；存储资源：GB
                     * 
                     */
                    double GetPackageSpec() const;

                    /**
                     * 设置资源包大小，计算资源单位：万个；存储资源：GB
                     * @param _packageSpec 资源包大小，计算资源单位：万个；存储资源：GB
                     * 
                     */
                    void SetPackageSpec(const double& _packageSpec);

                    /**
                     * 判断参数 PackageSpec 是否已赋值
                     * @return PackageSpec 是否已赋值
                     * 
                     */
                    bool PackageSpecHasBeenSet() const;

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

                    /**
                     * 获取购买资源包个数
                     * @return PackageCount 购买资源包个数
                     * 
                     */
                    int64_t GetPackageCount() const;

                    /**
                     * 设置购买资源包个数
                     * @param _packageCount 购买资源包个数
                     * 
                     */
                    void SetPackageCount(const int64_t& _packageCount);

                    /**
                     * 判断参数 PackageCount 是否已赋值
                     * @return PackageCount 是否已赋值
                     * 
                     */
                    bool PackageCountHasBeenSet() const;

                    /**
                     * 获取资源包名称
                     * @return PackageName 资源包名称
                     * 
                     */
                    std::string GetPackageName() const;

                    /**
                     * 设置资源包名称
                     * @param _packageName 资源包名称
                     * 
                     */
                    void SetPackageName(const std::string& _packageName);

                    /**
                     * 判断参数 PackageName 是否已赋值
                     * @return PackageName 是否已赋值
                     * 
                     */
                    bool PackageNameHasBeenSet() const;

                private:

                    /**
                     * 实例类型，目前固定传cynosdb-serverless
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * 资源包使用地域chineseMainland-中国内地通用，overseas-港澳台及海外通用
                     */
                    std::string m_packageRegion;
                    bool m_packageRegionHasBeenSet;

                    /**
                     * 资源包类型：CCU-计算资源包，DISK-存储资源包
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
                     * 资源包大小，计算资源单位：万个；存储资源：GB
                     */
                    double m_packageSpec;
                    bool m_packageSpecHasBeenSet;

                    /**
                     * 资源包有效期，单位:天
                     */
                    int64_t m_expireDay;
                    bool m_expireDayHasBeenSet;

                    /**
                     * 购买资源包个数
                     */
                    int64_t m_packageCount;
                    bool m_packageCountHasBeenSet;

                    /**
                     * 资源包名称
                     */
                    std::string m_packageName;
                    bool m_packageNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_CREATERESOURCEPACKAGEREQUEST_H_
