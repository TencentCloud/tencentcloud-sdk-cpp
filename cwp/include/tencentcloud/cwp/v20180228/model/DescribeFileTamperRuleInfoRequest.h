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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEFILETAMPERRULEINFOREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEFILETAMPERRULEINFOREQUEST_H_

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
                * DescribeFileTamperRuleInfo请求参数结构体
                */
                class DescribeFileTamperRuleInfoRequest : public AbstractModel
                {
                public:
                    DescribeFileTamperRuleInfoRequest();
                    ~DescribeFileTamperRuleInfoRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取规则id
                     * @return Id 规则id
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置规则id
                     * @param _id 规则id
                     * 
                     */
                    void SetId(const uint64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取控制返回的uuids 数量
                     * @return Limit 控制返回的uuids 数量
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置控制返回的uuids 数量
                     * @param _limit 控制返回的uuids 数量
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
                     * 获取控制返回的uuids 数量，起始位置
                     * @return Offset 控制返回的uuids 数量，起始位置
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置控制返回的uuids 数量，起始位置
                     * @param _offset 控制返回的uuids 数量，起始位置
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
                     * 规则id
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 控制返回的uuids 数量
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 控制返回的uuids 数量，起始位置
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEFILETAMPERRULEINFOREQUEST_H_
