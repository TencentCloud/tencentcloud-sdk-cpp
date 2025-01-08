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

#ifndef TENCENTCLOUD_DC_V20180410_MODEL_INTERNETADDRESSSTATISTICS_H_
#define TENCENTCLOUD_DC_V20180410_MODEL_INTERNETADDRESSSTATISTICS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dc
    {
        namespace V20180410
        {
            namespace Model
            {
                /**
                * 互联网公网地址统计
                */
                class InternetAddressStatistics : public AbstractModel
                {
                public:
                    InternetAddressStatistics();
                    ~InternetAddressStatistics() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取地域
                     * @return Region 地域
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置地域
                     * @param _region 地域
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取互联网公网地址数量
                     * @return SubnetNum 互联网公网地址数量
                     * 
                     */
                    int64_t GetSubnetNum() const;

                    /**
                     * 设置互联网公网地址数量
                     * @param _subnetNum 互联网公网地址数量
                     * 
                     */
                    void SetSubnetNum(const int64_t& _subnetNum);

                    /**
                     * 判断参数 SubnetNum 是否已赋值
                     * @return SubnetNum 是否已赋值
                     * 
                     */
                    bool SubnetNumHasBeenSet() const;

                private:

                    /**
                     * 地域
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 互联网公网地址数量
                     */
                    int64_t m_subnetNum;
                    bool m_subnetNumHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DC_V20180410_MODEL_INTERNETADDRESSSTATISTICS_H_
