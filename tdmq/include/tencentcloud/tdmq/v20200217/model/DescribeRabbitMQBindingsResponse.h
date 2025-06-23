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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBERABBITMQBINDINGSRESPONSE_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBERABBITMQBINDINGSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tdmq/v20200217/model/RabbitMQBindingListInfo.h>


namespace TencentCloud
{
    namespace Tdmq
    {
        namespace V20200217
        {
            namespace Model
            {
                /**
                * DescribeRabbitMQBindings返回参数结构体
                */
                class DescribeRabbitMQBindingsResponse : public AbstractModel
                {
                public:
                    DescribeRabbitMQBindingsResponse();
                    ~DescribeRabbitMQBindingsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取路由关系列表
                     * @return BindingInfoList 路由关系列表
                     * 
                     */
                    std::vector<RabbitMQBindingListInfo> GetBindingInfoList() const;

                    /**
                     * 判断参数 BindingInfoList 是否已赋值
                     * @return BindingInfoList 是否已赋值
                     * 
                     */
                    bool BindingInfoListHasBeenSet() const;

                    /**
                     * 获取路由关系数量
                     * @return TotalCount 路由关系数量
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * 路由关系列表
                     */
                    std::vector<RabbitMQBindingListInfo> m_bindingInfoList;
                    bool m_bindingInfoListHasBeenSet;

                    /**
                     * 路由关系数量
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBERABBITMQBINDINGSRESPONSE_H_
