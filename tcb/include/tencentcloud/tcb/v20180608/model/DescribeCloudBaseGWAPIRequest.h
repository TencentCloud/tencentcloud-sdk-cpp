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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_DESCRIBECLOUDBASEGWAPIREQUEST_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_DESCRIBECLOUDBASEGWAPIREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * DescribeCloudBaseGWAPI请求参数结构体
                */
                class DescribeCloudBaseGWAPIRequest : public AbstractModel
                {
                public:
                    DescribeCloudBaseGWAPIRequest();
                    ~DescribeCloudBaseGWAPIRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取服务ID
                     * @return ServiceId 服务ID
                     * 
                     */
                    std::string GetServiceId() const;

                    /**
                     * 设置服务ID
                     * @param _serviceId 服务ID
                     * 
                     */
                    void SetServiceId(const std::string& _serviceId);

                    /**
                     * 判断参数 ServiceId 是否已赋值
                     * @return ServiceId 是否已赋值
                     * 
                     */
                    bool ServiceIdHasBeenSet() const;

                    /**
                     * 获取API域名
                     * @return Domain API域名
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置API域名
                     * @param _domain API域名
                     * 
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取API Path
                     * @return Path API Path
                     * 
                     */
                    std::string GetPath() const;

                    /**
                     * 设置API Path
                     * @param _path API Path
                     * 
                     */
                    void SetPath(const std::string& _path);

                    /**
                     * 判断参数 Path 是否已赋值
                     * @return Path 是否已赋值
                     * 
                     */
                    bool PathHasBeenSet() const;

                    /**
                     * 获取API ID
                     * @return APIId API ID
                     * 
                     */
                    std::string GetAPIId() const;

                    /**
                     * 设置API ID
                     * @param _aPIId API ID
                     * 
                     */
                    void SetAPIId(const std::string& _aPIId);

                    /**
                     * 判断参数 APIId 是否已赋值
                     * @return APIId 是否已赋值
                     * 
                     */
                    bool APIIdHasBeenSet() const;

                    /**
                     * 获取API类型，1为云函数，2为容器
                     * @return Type API类型，1为云函数，2为容器
                     * 
                     */
                    int64_t GetType() const;

                    /**
                     * 设置API类型，1为云函数，2为容器
                     * @param _type API类型，1为云函数，2为容器
                     * 
                     */
                    void SetType(const int64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取API名，Type为1时为云函数名，Type为2时为容器服务名
                     * @return Name API名，Type为1时为云函数名，Type为2时为容器服务名
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置API名，Type为1时为云函数名，Type为2时为容器服务名
                     * @param _name API名，Type为1时为云函数名，Type为2时为容器服务名
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取查询的分页参数，用于设置查询的偏移位置，0表示从头开始
                     * @return Offset 查询的分页参数，用于设置查询的偏移位置，0表示从头开始
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置查询的分页参数，用于设置查询的偏移位置，0表示从头开始
                     * @param _offset 查询的分页参数，用于设置查询的偏移位置，0表示从头开始
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
                     * 获取查询的分页参数，用于表示每次查询的最大返回数据量
                     * @return Limit 查询的分页参数，用于表示每次查询的最大返回数据量
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置查询的分页参数，用于表示每次查询的最大返回数据量
                     * @param _limit 查询的分页参数，用于表示每次查询的最大返回数据量
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
                     * 获取是否启用多地域
                     * @return EnableRegion 是否启用多地域
                     * 
                     */
                    bool GetEnableRegion() const;

                    /**
                     * 设置是否启用多地域
                     * @param _enableRegion 是否启用多地域
                     * 
                     */
                    void SetEnableRegion(const bool& _enableRegion);

                    /**
                     * 判断参数 EnableRegion 是否已赋值
                     * @return EnableRegion 是否已赋值
                     * 
                     */
                    bool EnableRegionHasBeenSet() const;

                    /**
                     * 获取是否使用统一域名
                     * @return EnableUnion 是否使用统一域名
                     * 
                     */
                    bool GetEnableUnion() const;

                    /**
                     * 设置是否使用统一域名
                     * @param _enableUnion 是否使用统一域名
                     * 
                     */
                    void SetEnableUnion(const bool& _enableUnion);

                    /**
                     * 判断参数 EnableUnion 是否已赋值
                     * @return EnableUnion 是否已赋值
                     * 
                     */
                    bool EnableUnionHasBeenSet() const;

                private:

                    /**
                     * 服务ID
                     */
                    std::string m_serviceId;
                    bool m_serviceIdHasBeenSet;

                    /**
                     * API域名
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * API Path
                     */
                    std::string m_path;
                    bool m_pathHasBeenSet;

                    /**
                     * API ID
                     */
                    std::string m_aPIId;
                    bool m_aPIIdHasBeenSet;

                    /**
                     * API类型，1为云函数，2为容器
                     */
                    int64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * API名，Type为1时为云函数名，Type为2时为容器服务名
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 查询的分页参数，用于设置查询的偏移位置，0表示从头开始
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 查询的分页参数，用于表示每次查询的最大返回数据量
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 是否启用多地域
                     */
                    bool m_enableRegion;
                    bool m_enableRegionHasBeenSet;

                    /**
                     * 是否使用统一域名
                     */
                    bool m_enableUnion;
                    bool m_enableUnionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_DESCRIBECLOUDBASEGWAPIREQUEST_H_
