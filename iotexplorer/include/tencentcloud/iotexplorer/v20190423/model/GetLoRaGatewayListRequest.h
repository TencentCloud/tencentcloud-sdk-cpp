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

#ifndef TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_GETLORAGATEWAYLISTREQUEST_H_
#define TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_GETLORAGATEWAYLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotexplorer
    {
        namespace V20190423
        {
            namespace Model
            {
                /**
                * GetLoRaGatewayList请求参数结构体
                */
                class GetLoRaGatewayListRequest : public AbstractModel
                {
                public:
                    GetLoRaGatewayListRequest();
                    ~GetLoRaGatewayListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取是否是社区网关
                     * @return IsCommunity 是否是社区网关
                     * 
                     */
                    bool GetIsCommunity() const;

                    /**
                     * 设置是否是社区网关
                     * @param _isCommunity 是否是社区网关
                     * 
                     */
                    void SetIsCommunity(const bool& _isCommunity);

                    /**
                     * 判断参数 IsCommunity 是否已赋值
                     * @return IsCommunity 是否已赋值
                     * 
                     */
                    bool IsCommunityHasBeenSet() const;

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
                     * 获取限制个数
                     * @return Limit 限制个数
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置限制个数
                     * @param _limit 限制个数
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
                     * 是否是社区网关
                     */
                    bool m_isCommunity;
                    bool m_isCommunityHasBeenSet;

                    /**
                     * 偏移量
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 限制个数
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_GETLORAGATEWAYLISTREQUEST_H_
