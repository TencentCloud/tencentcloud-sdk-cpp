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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_MODIFYCCNREGIONBANDWIDTHLIMITSTYPEREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_MODIFYCCNREGIONBANDWIDTHLIMITSTYPEREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * ModifyCcnRegionBandwidthLimitsType请求参数结构体
                */
                class ModifyCcnRegionBandwidthLimitsTypeRequest : public AbstractModel
                {
                public:
                    ModifyCcnRegionBandwidthLimitsTypeRequest();
                    ~ModifyCcnRegionBandwidthLimitsTypeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取云联网实例ID。
                     * @return CcnId 云联网实例ID。
                     * 
                     */
                    std::string GetCcnId() const;

                    /**
                     * 设置云联网实例ID。
                     * @param _ccnId 云联网实例ID。
                     * 
                     */
                    void SetCcnId(const std::string& _ccnId);

                    /**
                     * 判断参数 CcnId 是否已赋值
                     * @return CcnId 是否已赋值
                     * 
                     */
                    bool CcnIdHasBeenSet() const;

                    /**
                     * 获取云联网限速类型，INTER_REGION_LIMIT：地域间限速，OUTER_REGION_LIMIT：地域出口限速。默认值：OUTER_REGION_LIMIT。
                     * @return BandwidthLimitType 云联网限速类型，INTER_REGION_LIMIT：地域间限速，OUTER_REGION_LIMIT：地域出口限速。默认值：OUTER_REGION_LIMIT。
                     * 
                     */
                    std::string GetBandwidthLimitType() const;

                    /**
                     * 设置云联网限速类型，INTER_REGION_LIMIT：地域间限速，OUTER_REGION_LIMIT：地域出口限速。默认值：OUTER_REGION_LIMIT。
                     * @param _bandwidthLimitType 云联网限速类型，INTER_REGION_LIMIT：地域间限速，OUTER_REGION_LIMIT：地域出口限速。默认值：OUTER_REGION_LIMIT。
                     * 
                     */
                    void SetBandwidthLimitType(const std::string& _bandwidthLimitType);

                    /**
                     * 判断参数 BandwidthLimitType 是否已赋值
                     * @return BandwidthLimitType 是否已赋值
                     * 
                     */
                    bool BandwidthLimitTypeHasBeenSet() const;

                private:

                    /**
                     * 云联网实例ID。
                     */
                    std::string m_ccnId;
                    bool m_ccnIdHasBeenSet;

                    /**
                     * 云联网限速类型，INTER_REGION_LIMIT：地域间限速，OUTER_REGION_LIMIT：地域出口限速。默认值：OUTER_REGION_LIMIT。
                     */
                    std::string m_bandwidthLimitType;
                    bool m_bandwidthLimitTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_MODIFYCCNREGIONBANDWIDTHLIMITSTYPEREQUEST_H_
