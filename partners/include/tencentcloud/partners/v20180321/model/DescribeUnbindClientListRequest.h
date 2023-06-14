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

#ifndef TENCENTCLOUD_PARTNERS_V20180321_MODEL_DESCRIBEUNBINDCLIENTLISTREQUEST_H_
#define TENCENTCLOUD_PARTNERS_V20180321_MODEL_DESCRIBEUNBINDCLIENTLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Partners
    {
        namespace V20180321
        {
            namespace Model
            {
                /**
                * DescribeUnbindClientList请求参数结构体
                */
                class DescribeUnbindClientListRequest : public AbstractModel
                {
                public:
                    DescribeUnbindClientListRequest();
                    ~DescribeUnbindClientListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取解绑状态：0:所有,1:审核中,2已解绑
                     * @return Status 解绑状态：0:所有,1:审核中,2已解绑
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置解绑状态：0:所有,1:审核中,2已解绑
                     * @param _status 解绑状态：0:所有,1:审核中,2已解绑
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取偏移量
                     * @return Offset 偏移量
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置偏移量
                     * @param _offset 偏移量
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
                     * 获取限制数目
                     * @return Limit 限制数目
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置限制数目
                     * @param _limit 限制数目
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
                     * 获取解绑账号ID
                     * @return UnbindUin 解绑账号ID
                     * 
                     */
                    std::string GetUnbindUin() const;

                    /**
                     * 设置解绑账号ID
                     * @param _unbindUin 解绑账号ID
                     * 
                     */
                    void SetUnbindUin(const std::string& _unbindUin);

                    /**
                     * 判断参数 UnbindUin 是否已赋值
                     * @return UnbindUin 是否已赋值
                     * 
                     */
                    bool UnbindUinHasBeenSet() const;

                    /**
                     * 获取解绑申请时间范围起始点
                     * @return ApplyTimeStart 解绑申请时间范围起始点
                     * 
                     */
                    std::string GetApplyTimeStart() const;

                    /**
                     * 设置解绑申请时间范围起始点
                     * @param _applyTimeStart 解绑申请时间范围起始点
                     * 
                     */
                    void SetApplyTimeStart(const std::string& _applyTimeStart);

                    /**
                     * 判断参数 ApplyTimeStart 是否已赋值
                     * @return ApplyTimeStart 是否已赋值
                     * 
                     */
                    bool ApplyTimeStartHasBeenSet() const;

                    /**
                     * 获取解绑申请时间范围终止点
                     * @return ApplyTimeEnd 解绑申请时间范围终止点
                     * 
                     */
                    std::string GetApplyTimeEnd() const;

                    /**
                     * 设置解绑申请时间范围终止点
                     * @param _applyTimeEnd 解绑申请时间范围终止点
                     * 
                     */
                    void SetApplyTimeEnd(const std::string& _applyTimeEnd);

                    /**
                     * 判断参数 ApplyTimeEnd 是否已赋值
                     * @return ApplyTimeEnd 是否已赋值
                     * 
                     */
                    bool ApplyTimeEndHasBeenSet() const;

                    /**
                     * 获取对申请时间的升序降序，值：asc，desc
                     * @return OrderDirection 对申请时间的升序降序，值：asc，desc
                     * 
                     */
                    std::string GetOrderDirection() const;

                    /**
                     * 设置对申请时间的升序降序，值：asc，desc
                     * @param _orderDirection 对申请时间的升序降序，值：asc，desc
                     * 
                     */
                    void SetOrderDirection(const std::string& _orderDirection);

                    /**
                     * 判断参数 OrderDirection 是否已赋值
                     * @return OrderDirection 是否已赋值
                     * 
                     */
                    bool OrderDirectionHasBeenSet() const;

                private:

                    /**
                     * 解绑状态：0:所有,1:审核中,2已解绑
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 偏移量
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 限制数目
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 解绑账号ID
                     */
                    std::string m_unbindUin;
                    bool m_unbindUinHasBeenSet;

                    /**
                     * 解绑申请时间范围起始点
                     */
                    std::string m_applyTimeStart;
                    bool m_applyTimeStartHasBeenSet;

                    /**
                     * 解绑申请时间范围终止点
                     */
                    std::string m_applyTimeEnd;
                    bool m_applyTimeEndHasBeenSet;

                    /**
                     * 对申请时间的升序降序，值：asc，desc
                     */
                    std::string m_orderDirection;
                    bool m_orderDirectionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_PARTNERS_V20180321_MODEL_DESCRIBEUNBINDCLIENTLISTREQUEST_H_
