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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBERESOURCEPACKAGESALESPECREQUEST_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBERESOURCEPACKAGESALESPECREQUEST_H_

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
                * DescribeResourcePackageSaleSpec请求参数结构体
                */
                class DescribeResourcePackageSaleSpecRequest : public AbstractModel
                {
                public:
                    DescribeResourcePackageSaleSpecRequest();
                    ~DescribeResourcePackageSaleSpecRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例类型
                     * @return InstanceType 实例类型
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置实例类型
                     * @param _instanceType 实例类型
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
                     * 获取资源包使用地域
china-中国内地通用，overseas-港澳台及海外通用
                     * @return PackageRegion 资源包使用地域
china-中国内地通用，overseas-港澳台及海外通用
                     * 
                     */
                    std::string GetPackageRegion() const;

                    /**
                     * 设置资源包使用地域
china-中国内地通用，overseas-港澳台及海外通用
                     * @param _packageRegion 资源包使用地域
china-中国内地通用，overseas-港澳台及海外通用
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
                     * 获取偏移量
                     * @return Offset 偏移量
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置偏移量
                     * @param _offset 偏移量
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取限制
                     * @return Limit 限制
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置限制
                     * @param _limit 限制
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * 实例类型
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * 资源包使用地域
china-中国内地通用，overseas-港澳台及海外通用
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
                     * 偏移量
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 限制
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBERESOURCEPACKAGESALESPECREQUEST_H_
