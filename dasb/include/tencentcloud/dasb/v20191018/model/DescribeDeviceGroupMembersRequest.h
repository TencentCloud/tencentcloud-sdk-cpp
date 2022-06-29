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

#ifndef TENCENTCLOUD_DASB_V20191018_MODEL_DESCRIBEDEVICEGROUPMEMBERSREQUEST_H_
#define TENCENTCLOUD_DASB_V20191018_MODEL_DESCRIBEDEVICEGROUPMEMBERSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dasb
    {
        namespace V20191018
        {
            namespace Model
            {
                /**
                * DescribeDeviceGroupMembers请求参数结构体
                */
                class DescribeDeviceGroupMembersRequest : public AbstractModel
                {
                public:
                    DescribeDeviceGroupMembersRequest();
                    ~DescribeDeviceGroupMembersRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取资产组ID
                     * @return Id 资产组ID
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置资产组ID
                     * @param Id 资产组ID
                     */
                    void SetId(const uint64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取true - 查询已在该资产组的资产，false - 查询未在该资产组的资产
                     * @return Bound true - 查询已在该资产组的资产，false - 查询未在该资产组的资产
                     */
                    bool GetBound() const;

                    /**
                     * 设置true - 查询已在该资产组的资产，false - 查询未在该资产组的资产
                     * @param Bound true - 查询已在该资产组的资产，false - 查询未在该资产组的资产
                     */
                    void SetBound(const bool& _bound);

                    /**
                     * 判断参数 Bound 是否已赋值
                     * @return Bound 是否已赋值
                     */
                    bool BoundHasBeenSet() const;

                    /**
                     * 获取资产名或资产IP，模糊查询
                     * @return Name 资产名或资产IP，模糊查询
                     */
                    std::string GetName() const;

                    /**
                     * 设置资产名或资产IP，模糊查询
                     * @param Name 资产名或资产IP，模糊查询
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取分页偏移位置
                     * @return Offset 分页偏移位置
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置分页偏移位置
                     * @param Offset 分页偏移位置
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取每页条目数，默认20, 最大500
                     * @return Limit 每页条目数，默认20, 最大500
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置每页条目数，默认20, 最大500
                     * @param Limit 每页条目数，默认20, 最大500
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取资产类型，1 - Linux，2 - Windows，3 - MySQL，4 - SQLServer
                     * @return Kind 资产类型，1 - Linux，2 - Windows，3 - MySQL，4 - SQLServer
                     */
                    uint64_t GetKind() const;

                    /**
                     * 设置资产类型，1 - Linux，2 - Windows，3 - MySQL，4 - SQLServer
                     * @param Kind 资产类型，1 - Linux，2 - Windows，3 - MySQL，4 - SQLServer
                     */
                    void SetKind(const uint64_t& _kind);

                    /**
                     * 判断参数 Kind 是否已赋值
                     * @return Kind 是否已赋值
                     */
                    bool KindHasBeenSet() const;

                private:

                    /**
                     * 资产组ID
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * true - 查询已在该资产组的资产，false - 查询未在该资产组的资产
                     */
                    bool m_bound;
                    bool m_boundHasBeenSet;

                    /**
                     * 资产名或资产IP，模糊查询
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 分页偏移位置
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 每页条目数，默认20, 最大500
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 资产类型，1 - Linux，2 - Windows，3 - MySQL，4 - SQLServer
                     */
                    uint64_t m_kind;
                    bool m_kindHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DASB_V20191018_MODEL_DESCRIBEDEVICEGROUPMEMBERSREQUEST_H_
