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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_TARGETREGIONINFO_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_TARGETREGIONINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * 负载均衡实例所绑定的后端服务的信息，包括所属地域、所属网络。
                */
                class TargetRegionInfo : public AbstractModel
                {
                public:
                    TargetRegionInfo();
                    ~TargetRegionInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Target所属地域，如 ap-guangzhou
                     * @return Region Target所属地域，如 ap-guangzhou
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置Target所属地域，如 ap-guangzhou
                     * @param _region Target所属地域，如 ap-guangzhou
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
                     * 获取Target所属网络，私有网络格式如 vpc-abcd1234，如果是基础网络，则为"0"
                     * @return VpcId Target所属网络，私有网络格式如 vpc-abcd1234，如果是基础网络，则为"0"
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置Target所属网络，私有网络格式如 vpc-abcd1234，如果是基础网络，则为"0"
                     * @param _vpcId Target所属网络，私有网络格式如 vpc-abcd1234，如果是基础网络，则为"0"
                     * 
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     * 
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取Target所属网络，私有网络格式如86323，如果是基础网络，则为0
                     * @return NumericalVpcId Target所属网络，私有网络格式如86323，如果是基础网络，则为0
                     * 
                     */
                    int64_t GetNumericalVpcId() const;

                    /**
                     * 设置Target所属网络，私有网络格式如86323，如果是基础网络，则为0
                     * @param _numericalVpcId Target所属网络，私有网络格式如86323，如果是基础网络，则为0
                     * 
                     */
                    void SetNumericalVpcId(const int64_t& _numericalVpcId);

                    /**
                     * 判断参数 NumericalVpcId 是否已赋值
                     * @return NumericalVpcId 是否已赋值
                     * 
                     */
                    bool NumericalVpcIdHasBeenSet() const;

                private:

                    /**
                     * Target所属地域，如 ap-guangzhou
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * Target所属网络，私有网络格式如 vpc-abcd1234，如果是基础网络，则为"0"
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * Target所属网络，私有网络格式如86323，如果是基础网络，则为0
                     */
                    int64_t m_numericalVpcId;
                    bool m_numericalVpcIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_TARGETREGIONINFO_H_
