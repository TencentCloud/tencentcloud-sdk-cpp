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

#ifndef TENCENTCLOUD_SSL_V20191205_MODEL_DESCRIBEPACKAGESREQUEST_H_
#define TENCENTCLOUD_SSL_V20191205_MODEL_DESCRIBEPACKAGESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ssl
    {
        namespace V20191205
        {
            namespace Model
            {
                /**
                * DescribePackages请求参数结构体
                */
                class DescribePackagesRequest : public AbstractModel
                {
                public:
                    DescribePackagesRequest();
                    ~DescribePackagesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取偏移量，默认0。
                     * @return Offset 偏移量，默认0。
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置偏移量，默认0。
                     * @param _offset 偏移量，默认0。
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取限制数目，默认20。
                     * @return Limit 限制数目，默认20。
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置限制数目，默认20。
                     * @param _limit 限制数目，默认20。
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取按状态筛选。状态值包括usable(可用)，used(已用)，expired(已过期)，refund(已退款)

                     * @return Status 按状态筛选。状态值包括usable(可用)，used(已用)，expired(已过期)，refund(已退款)

                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置按状态筛选。状态值包括usable(可用)，used(已用)，expired(已过期)，refund(已退款)

                     * @param _status 按状态筛选。状态值包括usable(可用)，used(已用)，expired(已过期)，refund(已退款)

                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取按过期时间升序或降序排列，可选值为asc(升序)和desc(降序)
                     * @return ExpireTime 按过期时间升序或降序排列，可选值为asc(升序)和desc(降序)
                     * 
                     */
                    std::string GetExpireTime() const;

                    /**
                     * 设置按过期时间升序或降序排列，可选值为asc(升序)和desc(降序)
                     * @param _expireTime 按过期时间升序或降序排列，可选值为asc(升序)和desc(降序)
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
                     * 获取按权益包ID搜索。
                     * @return PackageId 按权益包ID搜索。
                     * 
                     */
                    std::string GetPackageId() const;

                    /**
                     * 设置按权益包ID搜索。
                     * @param _packageId 按权益包ID搜索。
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
                     * 获取按权益包类型搜索。类型包括：ssl_100(证书批量权益100点)，ssl_500(证书批量权益500点），ssl_2000(证书批量权益2000点）
                     * @return Type 按权益包类型搜索。类型包括：ssl_100(证书批量权益100点)，ssl_500(证书批量权益500点），ssl_2000(证书批量权益2000点）
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置按权益包类型搜索。类型包括：ssl_100(证书批量权益100点)，ssl_500(证书批量权益500点），ssl_2000(证书批量权益2000点）
                     * @param _type 按权益包类型搜索。类型包括：ssl_100(证书批量权益100点)，ssl_500(证书批量权益500点），ssl_2000(证书批量权益2000点）
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取子产品编号
                     * @return Pid 子产品编号
                     * 
                     */
                    int64_t GetPid() const;

                    /**
                     * 设置子产品编号
                     * @param _pid 子产品编号
                     * 
                     */
                    void SetPid(const int64_t& _pid);

                    /**
                     * 判断参数 Pid 是否已赋值
                     * @return Pid 是否已赋值
                     * 
                     */
                    bool PidHasBeenSet() const;

                private:

                    /**
                     * 偏移量，默认0。
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 限制数目，默认20。
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 按状态筛选。状态值包括usable(可用)，used(已用)，expired(已过期)，refund(已退款)

                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 按过期时间升序或降序排列，可选值为asc(升序)和desc(降序)
                     */
                    std::string m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * 按权益包ID搜索。
                     */
                    std::string m_packageId;
                    bool m_packageIdHasBeenSet;

                    /**
                     * 按权益包类型搜索。类型包括：ssl_100(证书批量权益100点)，ssl_500(证书批量权益500点），ssl_2000(证书批量权益2000点）
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 子产品编号
                     */
                    int64_t m_pid;
                    bool m_pidHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSL_V20191205_MODEL_DESCRIBEPACKAGESREQUEST_H_
