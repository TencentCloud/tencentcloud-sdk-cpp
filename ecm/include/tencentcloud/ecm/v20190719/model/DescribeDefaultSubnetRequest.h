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

#ifndef TENCENTCLOUD_ECM_V20190719_MODEL_DESCRIBEDEFAULTSUBNETREQUEST_H_
#define TENCENTCLOUD_ECM_V20190719_MODEL_DESCRIBEDEFAULTSUBNETREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ecm
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * DescribeDefaultSubnet请求参数结构体
                */
                class DescribeDefaultSubnetRequest : public AbstractModel
                {
                public:
                    DescribeDefaultSubnetRequest();
                    ~DescribeDefaultSubnetRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取ECM地域
                     * @return EcmRegion ECM地域
                     * 
                     */
                    std::string GetEcmRegion() const;

                    /**
                     * 设置ECM地域
                     * @param _ecmRegion ECM地域
                     * 
                     */
                    void SetEcmRegion(const std::string& _ecmRegion);

                    /**
                     * 判断参数 EcmRegion 是否已赋值
                     * @return EcmRegion 是否已赋值
                     * 
                     */
                    bool EcmRegionHasBeenSet() const;

                    /**
                     * 获取ECM可用区
                     * @return Zone ECM可用区
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置ECM可用区
                     * @param _zone ECM可用区
                     * 
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     * 
                     */
                    bool ZoneHasBeenSet() const;

                private:

                    /**
                     * ECM地域
                     */
                    std::string m_ecmRegion;
                    bool m_ecmRegionHasBeenSet;

                    /**
                     * ECM可用区
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECM_V20190719_MODEL_DESCRIBEDEFAULTSUBNETREQUEST_H_
