/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEHOSTVULITEMVPRINFORESPONSE_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEHOSTVULITEMVPRINFORESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/VPRLabel.h>
#include <tencentcloud/csip/v20221121/model/VPRRatingInfo.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DescribeHostVulItemVPRInfo返回参数结构体
                */
                class DescribeHostVulItemVPRInfoResponse : public AbstractModel
                {
                public:
                    DescribeHostVulItemVPRInfoResponse();
                    ~DescribeHostVulItemVPRInfoResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>VPR Label</p>
                     * @return Label <p>VPR Label</p>
                     * 
                     */
                    std::vector<VPRLabel> GetLabel() const;

                    /**
                     * 判断参数 Label 是否已赋值
                     * @return Label 是否已赋值
                     * 
                     */
                    bool LabelHasBeenSet() const;

                    /**
                     * 获取<p>VPR评级过程和结果</p>
                     * @return VRPRatingInfo <p>VPR评级过程和结果</p>
                     * 
                     */
                    VPRRatingInfo GetVRPRatingInfo() const;

                    /**
                     * 判断参数 VRPRatingInfo 是否已赋值
                     * @return VRPRatingInfo 是否已赋值
                     * 
                     */
                    bool VRPRatingInfoHasBeenSet() const;

                private:

                    /**
                     * <p>VPR Label</p>
                     */
                    std::vector<VPRLabel> m_label;
                    bool m_labelHasBeenSet;

                    /**
                     * <p>VPR评级过程和结果</p>
                     */
                    VPRRatingInfo m_vRPRatingInfo;
                    bool m_vRPRatingInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEHOSTVULITEMVPRINFORESPONSE_H_
