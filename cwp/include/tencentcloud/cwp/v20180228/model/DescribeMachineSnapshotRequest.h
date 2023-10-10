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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEMACHINESNAPSHOTREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEMACHINESNAPSHOTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * DescribeMachineSnapshot请求参数结构体
                */
                class DescribeMachineSnapshotRequest : public AbstractModel
                {
                public:
                    DescribeMachineSnapshotRequest();
                    ~DescribeMachineSnapshotRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取cvm id 集合
                     * @return Quuids cvm id 集合
                     * 
                     */
                    std::vector<std::string> GetQuuids() const;

                    /**
                     * 设置cvm id 集合
                     * @param _quuids cvm id 集合
                     * 
                     */
                    void SetQuuids(const std::vector<std::string>& _quuids);

                    /**
                     * 判断参数 Quuids 是否已赋值
                     * @return Quuids 是否已赋值
                     * 
                     */
                    bool QuuidsHasBeenSet() const;

                    /**
                     * 获取查询快照类型0 最近一个 1所有
                     * @return Type 查询快照类型0 最近一个 1所有
                     * 
                     */
                    uint64_t GetType() const;

                    /**
                     * 设置查询快照类型0 最近一个 1所有
                     * @param _type 查询快照类型0 最近一个 1所有
                     * 
                     */
                    void SetType(const uint64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取分页个数
                     * @return Limit 分页个数
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置分页个数
                     * @param _limit 分页个数
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
                     * 获取分页步长
                     * @return Offset 分页步长
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置分页步长
                     * @param _offset 分页步长
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                private:

                    /**
                     * cvm id 集合
                     */
                    std::vector<std::string> m_quuids;
                    bool m_quuidsHasBeenSet;

                    /**
                     * 查询快照类型0 最近一个 1所有
                     */
                    uint64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 分页个数
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 分页步长
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEMACHINESNAPSHOTREQUEST_H_
