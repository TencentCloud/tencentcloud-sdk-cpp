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

#ifndef TENCENTCLOUD_IOTVIDEOINDUSTRY_V20201201_MODEL_DESCRIBEXP2PDATAREQUEST_H_
#define TENCENTCLOUD_IOTVIDEOINDUSTRY_V20201201_MODEL_DESCRIBEXP2PDATAREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotvideoindustry
    {
        namespace V20201201
        {
            namespace Model
            {
                /**
                * DescribeXP2PData请求参数结构体
                */
                class DescribeXP2PDataRequest : public AbstractModel
                {
                public:
                    DescribeXP2PDataRequest();
                    ~DescribeXP2PDataRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取P2P应用ID
                     * @return P2PAppId P2P应用ID
                     * 
                     */
                    std::string GetP2PAppId() const;

                    /**
                     * 设置P2P应用ID
                     * @param _p2PAppId P2P应用ID
                     * 
                     */
                    void SetP2PAppId(const std::string& _p2PAppId);

                    /**
                     * 判断参数 P2PAppId 是否已赋值
                     * @return P2PAppId 是否已赋值
                     * 
                     */
                    bool P2PAppIdHasBeenSet() const;

                    /**
                     * 获取查询开始时间，时间戳秒
                     * @return From 查询开始时间，时间戳秒
                     * 
                     */
                    int64_t GetFrom() const;

                    /**
                     * 设置查询开始时间，时间戳秒
                     * @param _from 查询开始时间，时间戳秒
                     * 
                     */
                    void SetFrom(const int64_t& _from);

                    /**
                     * 判断参数 From 是否已赋值
                     * @return From 是否已赋值
                     * 
                     */
                    bool FromHasBeenSet() const;

                    /**
                     * 获取查询结束时间，时间戳秒
                     * @return To 查询结束时间，时间戳秒
                     * 
                     */
                    int64_t GetTo() const;

                    /**
                     * 设置查询结束时间，时间戳秒
                     * @param _to 查询结束时间，时间戳秒
                     * 
                     */
                    void SetTo(const int64_t& _to);

                    /**
                     * 判断参数 To 是否已赋值
                     * @return To 是否已赋值
                     * 
                     */
                    bool ToHasBeenSet() const;

                    /**
                     * 获取P2P通路ID
                     * @return P2PChannelId P2P通路ID
                     * 
                     */
                    std::string GetP2PChannelId() const;

                    /**
                     * 设置P2P通路ID
                     * @param _p2PChannelId P2P通路ID
                     * 
                     */
                    void SetP2PChannelId(const std::string& _p2PChannelId);

                    /**
                     * 判断参数 P2PChannelId 是否已赋值
                     * @return P2PChannelId 是否已赋值
                     * 
                     */
                    bool P2PChannelIdHasBeenSet() const;

                private:

                    /**
                     * P2P应用ID
                     */
                    std::string m_p2PAppId;
                    bool m_p2PAppIdHasBeenSet;

                    /**
                     * 查询开始时间，时间戳秒
                     */
                    int64_t m_from;
                    bool m_fromHasBeenSet;

                    /**
                     * 查询结束时间，时间戳秒
                     */
                    int64_t m_to;
                    bool m_toHasBeenSet;

                    /**
                     * P2P通路ID
                     */
                    std::string m_p2PChannelId;
                    bool m_p2PChannelIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTVIDEOINDUSTRY_V20201201_MODEL_DESCRIBEXP2PDATAREQUEST_H_
