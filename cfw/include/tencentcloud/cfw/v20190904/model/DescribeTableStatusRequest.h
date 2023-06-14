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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBETABLESTATUSREQUEST_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBETABLESTATUSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * DescribeTableStatus请求参数结构体
                */
                class DescribeTableStatusRequest : public AbstractModel
                {
                public:
                    DescribeTableStatusRequest();
                    ~DescribeTableStatusRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取EdgeId值两个vpc间的边id vpc填Edgeid，不要填Area；
                     * @return EdgeId EdgeId值两个vpc间的边id vpc填Edgeid，不要填Area；
                     * 
                     */
                    std::string GetEdgeId() const;

                    /**
                     * 设置EdgeId值两个vpc间的边id vpc填Edgeid，不要填Area；
                     * @param _edgeId EdgeId值两个vpc间的边id vpc填Edgeid，不要填Area；
                     * 
                     */
                    void SetEdgeId(const std::string& _edgeId);

                    /**
                     * 判断参数 EdgeId 是否已赋值
                     * @return EdgeId 是否已赋值
                     * 
                     */
                    bool EdgeIdHasBeenSet() const;

                    /**
                     * 获取状态值，0：检查表的状态 确实只有一个默认值
                     * @return Status 状态值，0：检查表的状态 确实只有一个默认值
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置状态值，0：检查表的状态 确实只有一个默认值
                     * @param _status 状态值，0：检查表的状态 确实只有一个默认值
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
                     * 获取Nat所在地域 NAT填Area，不要填Edgeid；
                     * @return Area Nat所在地域 NAT填Area，不要填Edgeid；
                     * 
                     */
                    std::string GetArea() const;

                    /**
                     * 设置Nat所在地域 NAT填Area，不要填Edgeid；
                     * @param _area Nat所在地域 NAT填Area，不要填Edgeid；
                     * 
                     */
                    void SetArea(const std::string& _area);

                    /**
                     * 判断参数 Area 是否已赋值
                     * @return Area 是否已赋值
                     * 
                     */
                    bool AreaHasBeenSet() const;

                    /**
                     * 获取方向，0：出站，1：入站 默认值为 0
                     * @return Direction 方向，0：出站，1：入站 默认值为 0
                     * 
                     */
                    uint64_t GetDirection() const;

                    /**
                     * 设置方向，0：出站，1：入站 默认值为 0
                     * @param _direction 方向，0：出站，1：入站 默认值为 0
                     * 
                     */
                    void SetDirection(const uint64_t& _direction);

                    /**
                     * 判断参数 Direction 是否已赋值
                     * @return Direction 是否已赋值
                     * 
                     */
                    bool DirectionHasBeenSet() const;

                private:

                    /**
                     * EdgeId值两个vpc间的边id vpc填Edgeid，不要填Area；
                     */
                    std::string m_edgeId;
                    bool m_edgeIdHasBeenSet;

                    /**
                     * 状态值，0：检查表的状态 确实只有一个默认值
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Nat所在地域 NAT填Area，不要填Edgeid；
                     */
                    std::string m_area;
                    bool m_areaHasBeenSet;

                    /**
                     * 方向，0：出站，1：入站 默认值为 0
                     */
                    uint64_t m_direction;
                    bool m_directionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBETABLESTATUSREQUEST_H_
