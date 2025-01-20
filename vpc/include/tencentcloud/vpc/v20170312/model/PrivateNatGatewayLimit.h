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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_PRIVATENATGATEWAYLIMIT_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_PRIVATENATGATEWAYLIMIT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * 可创建的私网网关配额数量
                */
                class PrivateNatGatewayLimit : public AbstractModel
                {
                public:
                    PrivateNatGatewayLimit();
                    ~PrivateNatGatewayLimit() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取私有网络唯一`ID`。
                     * @return UniqVpcId 私有网络唯一`ID`。
                     * 
                     */
                    std::string GetUniqVpcId() const;

                    /**
                     * 设置私有网络唯一`ID`。
                     * @param _uniqVpcId 私有网络唯一`ID`。
                     * 
                     */
                    void SetUniqVpcId(const std::string& _uniqVpcId);

                    /**
                     * 判断参数 UniqVpcId 是否已赋值
                     * @return UniqVpcId 是否已赋值
                     * 
                     */
                    bool UniqVpcIdHasBeenSet() const;

                    /**
                     * 获取Vpc下总计可创建私网网关数量。
                     * @return TotalLimit Vpc下总计可创建私网网关数量。
                     * 
                     */
                    uint64_t GetTotalLimit() const;

                    /**
                     * 设置Vpc下总计可创建私网网关数量。
                     * @param _totalLimit Vpc下总计可创建私网网关数量。
                     * 
                     */
                    void SetTotalLimit(const uint64_t& _totalLimit);

                    /**
                     * 判断参数 TotalLimit 是否已赋值
                     * @return TotalLimit 是否已赋值
                     * 
                     */
                    bool TotalLimitHasBeenSet() const;

                    /**
                     * 获取可创建私网网关数量。
                     * @return Available 可创建私网网关数量。
                     * 
                     */
                    uint64_t GetAvailable() const;

                    /**
                     * 设置可创建私网网关数量。
                     * @param _available 可创建私网网关数量。
                     * 
                     */
                    void SetAvailable(const uint64_t& _available);

                    /**
                     * 判断参数 Available 是否已赋值
                     * @return Available 是否已赋值
                     * 
                     */
                    bool AvailableHasBeenSet() const;

                private:

                    /**
                     * 私有网络唯一`ID`。
                     */
                    std::string m_uniqVpcId;
                    bool m_uniqVpcIdHasBeenSet;

                    /**
                     * Vpc下总计可创建私网网关数量。
                     */
                    uint64_t m_totalLimit;
                    bool m_totalLimitHasBeenSet;

                    /**
                     * 可创建私网网关数量。
                     */
                    uint64_t m_available;
                    bool m_availableHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_PRIVATENATGATEWAYLIMIT_H_
