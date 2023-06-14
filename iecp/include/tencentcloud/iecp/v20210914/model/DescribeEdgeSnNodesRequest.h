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

#ifndef TENCENTCLOUD_IECP_V20210914_MODEL_DESCRIBEEDGESNNODESREQUEST_H_
#define TENCENTCLOUD_IECP_V20210914_MODEL_DESCRIBEEDGESNNODESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iecp
    {
        namespace V20210914
        {
            namespace Model
            {
                /**
                * DescribeEdgeSnNodes请求参数结构体
                */
                class DescribeEdgeSnNodesRequest : public AbstractModel
                {
                public:
                    DescribeEdgeSnNodesRequest();
                    ~DescribeEdgeSnNodesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取边缘单元ID
                     * @return EdgeUnitId 边缘单元ID
                     * 
                     */
                    uint64_t GetEdgeUnitId() const;

                    /**
                     * 设置边缘单元ID
                     * @param _edgeUnitId 边缘单元ID
                     * 
                     */
                    void SetEdgeUnitId(const uint64_t& _edgeUnitId);

                    /**
                     * 判断参数 EdgeUnitId 是否已赋值
                     * @return EdgeUnitId 是否已赋值
                     * 
                     */
                    bool EdgeUnitIdHasBeenSet() const;

                    /**
                     * 获取根据节点名称模糊匹配
                     * @return NamePattern 根据节点名称模糊匹配
                     * 
                     */
                    std::string GetNamePattern() const;

                    /**
                     * 设置根据节点名称模糊匹配
                     * @param _namePattern 根据节点名称模糊匹配
                     * 
                     */
                    void SetNamePattern(const std::string& _namePattern);

                    /**
                     * 判断参数 NamePattern 是否已赋值
                     * @return NamePattern 是否已赋值
                     * 
                     */
                    bool NamePatternHasBeenSet() const;

                    /**
                     * 获取根据设备SN模糊匹配
                     * @return SNPattern 根据设备SN模糊匹配
                     * 
                     */
                    std::string GetSNPattern() const;

                    /**
                     * 设置根据设备SN模糊匹配
                     * @param _sNPattern 根据设备SN模糊匹配
                     * 
                     */
                    void SetSNPattern(const std::string& _sNPattern);

                    /**
                     * 判断参数 SNPattern 是否已赋值
                     * @return SNPattern 是否已赋值
                     * 
                     */
                    bool SNPatternHasBeenSet() const;

                    /**
                     * 获取根据备注批次信息模糊匹配
                     * @return RemarkPattern 根据备注批次信息模糊匹配
                     * 
                     */
                    std::string GetRemarkPattern() const;

                    /**
                     * 设置根据备注批次信息模糊匹配
                     * @param _remarkPattern 根据备注批次信息模糊匹配
                     * 
                     */
                    void SetRemarkPattern(const std::string& _remarkPattern);

                    /**
                     * 判断参数 RemarkPattern 是否已赋值
                     * @return RemarkPattern 是否已赋值
                     * 
                     */
                    bool RemarkPatternHasBeenSet() const;

                    /**
                     * 获取默认0
                     * @return Offset 默认0
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置默认0
                     * @param _offset 默认0
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
                     * 获取默认20
                     * @return Limit 默认20
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置默认20
                     * @param _limit 默认20
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * 边缘单元ID
                     */
                    uint64_t m_edgeUnitId;
                    bool m_edgeUnitIdHasBeenSet;

                    /**
                     * 根据节点名称模糊匹配
                     */
                    std::string m_namePattern;
                    bool m_namePatternHasBeenSet;

                    /**
                     * 根据设备SN模糊匹配
                     */
                    std::string m_sNPattern;
                    bool m_sNPatternHasBeenSet;

                    /**
                     * 根据备注批次信息模糊匹配
                     */
                    std::string m_remarkPattern;
                    bool m_remarkPatternHasBeenSet;

                    /**
                     * 默认0
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 默认20
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IECP_V20210914_MODEL_DESCRIBEEDGESNNODESREQUEST_H_
