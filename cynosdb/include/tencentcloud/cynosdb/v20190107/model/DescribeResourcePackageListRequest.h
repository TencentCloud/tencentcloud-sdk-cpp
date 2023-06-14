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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBERESOURCEPACKAGELISTREQUEST_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBERESOURCEPACKAGELISTREQUEST_H_

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
                * DescribeResourcePackageList请求参数结构体
                */
                class DescribeResourcePackageListRequest : public AbstractModel
                {
                public:
                    DescribeResourcePackageListRequest();
                    ~DescribeResourcePackageListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取资源包唯一ID
                     * @return PackageId 资源包唯一ID
                     * 
                     */
                    std::vector<std::string> GetPackageId() const;

                    /**
                     * 设置资源包唯一ID
                     * @param _packageId 资源包唯一ID
                     * 
                     */
                    void SetPackageId(const std::vector<std::string>& _packageId);

                    /**
                     * 判断参数 PackageId 是否已赋值
                     * @return PackageId 是否已赋值
                     * 
                     */
                    bool PackageIdHasBeenSet() const;

                    /**
                     * 获取资源包名称
                     * @return PackageName 资源包名称
                     * 
                     */
                    std::vector<std::string> GetPackageName() const;

                    /**
                     * 设置资源包名称
                     * @param _packageName 资源包名称
                     * 
                     */
                    void SetPackageName(const std::vector<std::string>& _packageName);

                    /**
                     * 判断参数 PackageName 是否已赋值
                     * @return PackageName 是否已赋值
                     * 
                     */
                    bool PackageNameHasBeenSet() const;

                    /**
                     * 获取资源包类型
CCU-计算资源包，DISK-存储资源包
                     * @return PackageType 资源包类型
CCU-计算资源包，DISK-存储资源包
                     * 
                     */
                    std::vector<std::string> GetPackageType() const;

                    /**
                     * 设置资源包类型
CCU-计算资源包，DISK-存储资源包
                     * @param _packageType 资源包类型
CCU-计算资源包，DISK-存储资源包
                     * 
                     */
                    void SetPackageType(const std::vector<std::string>& _packageType);

                    /**
                     * 判断参数 PackageType 是否已赋值
                     * @return PackageType 是否已赋值
                     * 
                     */
                    bool PackageTypeHasBeenSet() const;

                    /**
                     * 获取资源包使用地域
china-中国内地通用，overseas-港澳台及海外通用
                     * @return PackageRegion 资源包使用地域
china-中国内地通用，overseas-港澳台及海外通用
                     * 
                     */
                    std::vector<std::string> GetPackageRegion() const;

                    /**
                     * 设置资源包使用地域
china-中国内地通用，overseas-港澳台及海外通用
                     * @param _packageRegion 资源包使用地域
china-中国内地通用，overseas-港澳台及海外通用
                     * 
                     */
                    void SetPackageRegion(const std::vector<std::string>& _packageRegion);

                    /**
                     * 判断参数 PackageRegion 是否已赋值
                     * @return PackageRegion 是否已赋值
                     * 
                     */
                    bool PackageRegionHasBeenSet() const;

                    /**
                     * 获取资源包状态
creating-创建中；
using-使用中；
expired-已过期；
normal_finish-使用完；
apply_refund-申请退费中；
refund-已退费。
                     * @return Status 资源包状态
creating-创建中；
using-使用中；
expired-已过期；
normal_finish-使用完；
apply_refund-申请退费中；
refund-已退费。
                     * 
                     */
                    std::vector<std::string> GetStatus() const;

                    /**
                     * 设置资源包状态
creating-创建中；
using-使用中；
expired-已过期；
normal_finish-使用完；
apply_refund-申请退费中；
refund-已退费。
                     * @param _status 资源包状态
creating-创建中；
using-使用中；
expired-已过期；
normal_finish-使用完；
apply_refund-申请退费中；
refund-已退费。
                     * 
                     */
                    void SetStatus(const std::vector<std::string>& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取排序条件，支持排序条件:startTime-生效时间，
expireTime-过期时间，packageUsedSpec-使用容量，packageTotalSpec-总存储量。
按照数组顺序排列；
                     * @return OrderBy 排序条件，支持排序条件:startTime-生效时间，
expireTime-过期时间，packageUsedSpec-使用容量，packageTotalSpec-总存储量。
按照数组顺序排列；
                     * 
                     */
                    std::vector<std::string> GetOrderBy() const;

                    /**
                     * 设置排序条件，支持排序条件:startTime-生效时间，
expireTime-过期时间，packageUsedSpec-使用容量，packageTotalSpec-总存储量。
按照数组顺序排列；
                     * @param _orderBy 排序条件，支持排序条件:startTime-生效时间，
expireTime-过期时间，packageUsedSpec-使用容量，packageTotalSpec-总存储量。
按照数组顺序排列；
                     * 
                     */
                    void SetOrderBy(const std::vector<std::string>& _orderBy);

                    /**
                     * 判断参数 OrderBy 是否已赋值
                     * @return OrderBy 是否已赋值
                     * 
                     */
                    bool OrderByHasBeenSet() const;

                    /**
                     * 获取排序方式，DESC-降序，ASC-升序
                     * @return OrderDirection 排序方式，DESC-降序，ASC-升序
                     * 
                     */
                    std::string GetOrderDirection() const;

                    /**
                     * 设置排序方式，DESC-降序，ASC-升序
                     * @param _orderDirection 排序方式，DESC-降序，ASC-升序
                     * 
                     */
                    void SetOrderDirection(const std::string& _orderDirection);

                    /**
                     * 判断参数 OrderDirection 是否已赋值
                     * @return OrderDirection 是否已赋值
                     * 
                     */
                    bool OrderDirectionHasBeenSet() const;

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
                     * 资源包唯一ID
                     */
                    std::vector<std::string> m_packageId;
                    bool m_packageIdHasBeenSet;

                    /**
                     * 资源包名称
                     */
                    std::vector<std::string> m_packageName;
                    bool m_packageNameHasBeenSet;

                    /**
                     * 资源包类型
CCU-计算资源包，DISK-存储资源包
                     */
                    std::vector<std::string> m_packageType;
                    bool m_packageTypeHasBeenSet;

                    /**
                     * 资源包使用地域
china-中国内地通用，overseas-港澳台及海外通用
                     */
                    std::vector<std::string> m_packageRegion;
                    bool m_packageRegionHasBeenSet;

                    /**
                     * 资源包状态
creating-创建中；
using-使用中；
expired-已过期；
normal_finish-使用完；
apply_refund-申请退费中；
refund-已退费。
                     */
                    std::vector<std::string> m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 排序条件，支持排序条件:startTime-生效时间，
expireTime-过期时间，packageUsedSpec-使用容量，packageTotalSpec-总存储量。
按照数组顺序排列；
                     */
                    std::vector<std::string> m_orderBy;
                    bool m_orderByHasBeenSet;

                    /**
                     * 排序方式，DESC-降序，ASC-升序
                     */
                    std::string m_orderDirection;
                    bool m_orderDirectionHasBeenSet;

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

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBERESOURCEPACKAGELISTREQUEST_H_
