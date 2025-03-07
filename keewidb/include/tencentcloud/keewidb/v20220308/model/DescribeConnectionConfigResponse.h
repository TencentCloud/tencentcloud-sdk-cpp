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

#ifndef TENCENTCLOUD_KEEWIDB_V20220308_MODEL_DESCRIBECONNECTIONCONFIGRESPONSE_H_
#define TENCENTCLOUD_KEEWIDB_V20220308_MODEL_DESCRIBECONNECTIONCONFIGRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Keewidb
    {
        namespace V20220308
        {
            namespace Model
            {
                /**
                * DescribeConnectionConfig返回参数结构体
                */
                class DescribeConnectionConfigResponse : public AbstractModel
                {
                public:
                    DescribeConnectionConfigResponse();
                    ~DescribeConnectionConfigResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取单分片入流量带宽限制，单位：MB。
                     * @return InNetLimit 单分片入流量带宽限制，单位：MB。
                     * 
                     */
                    int64_t GetInNetLimit() const;

                    /**
                     * 判断参数 InNetLimit 是否已赋值
                     * @return InNetLimit 是否已赋值
                     * 
                     */
                    bool InNetLimitHasBeenSet() const;

                    /**
                     * 获取单分片出流量带宽限制，单位：MB。
                     * @return OutNetLimit 单分片出流量带宽限制，单位：MB。
                     * 
                     */
                    int64_t GetOutNetLimit() const;

                    /**
                     * 判断参数 OutNetLimit 是否已赋值
                     * @return OutNetLimit 是否已赋值
                     * 
                     */
                    bool OutNetLimitHasBeenSet() const;

                    /**
                     * 获取实例当前单分片连接数限制。
                     * @return ClientLimit 实例当前单分片连接数限制。
                     * 
                     */
                    int64_t GetClientLimit() const;

                    /**
                     * 判断参数 ClientLimit 是否已赋值
                     * @return ClientLimit 是否已赋值
                     * 
                     */
                    bool ClientLimitHasBeenSet() const;

                    /**
                     * 获取单分片连接数限制最小值。
                     * @return ClientLimitMin 单分片连接数限制最小值。
                     * 
                     */
                    int64_t GetClientLimitMin() const;

                    /**
                     * 判断参数 ClientLimitMin 是否已赋值
                     * @return ClientLimitMin 是否已赋值
                     * 
                     */
                    bool ClientLimitMinHasBeenSet() const;

                    /**
                     * 获取单分片连接数限制最大值。
                     * @return ClientLimitMax 单分片连接数限制最大值。
                     * 
                     */
                    int64_t GetClientLimitMax() const;

                    /**
                     * 判断参数 ClientLimitMax 是否已赋值
                     * @return ClientLimitMax 是否已赋值
                     * 
                     */
                    bool ClientLimitMaxHasBeenSet() const;

                private:

                    /**
                     * 单分片入流量带宽限制，单位：MB。
                     */
                    int64_t m_inNetLimit;
                    bool m_inNetLimitHasBeenSet;

                    /**
                     * 单分片出流量带宽限制，单位：MB。
                     */
                    int64_t m_outNetLimit;
                    bool m_outNetLimitHasBeenSet;

                    /**
                     * 实例当前单分片连接数限制。
                     */
                    int64_t m_clientLimit;
                    bool m_clientLimitHasBeenSet;

                    /**
                     * 单分片连接数限制最小值。
                     */
                    int64_t m_clientLimitMin;
                    bool m_clientLimitMinHasBeenSet;

                    /**
                     * 单分片连接数限制最大值。
                     */
                    int64_t m_clientLimitMax;
                    bool m_clientLimitMaxHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_KEEWIDB_V20220308_MODEL_DESCRIBECONNECTIONCONFIGRESPONSE_H_
