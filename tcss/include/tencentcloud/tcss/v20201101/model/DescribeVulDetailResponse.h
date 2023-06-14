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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEVULDETAILRESPONSE_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEVULDETAILRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcss/v20201101/model/VulDetailInfo.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * DescribeVulDetail返回参数结构体
                */
                class DescribeVulDetailResponse : public AbstractModel
                {
                public:
                    DescribeVulDetailResponse();
                    ~DescribeVulDetailResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取漏洞详情信息
                     * @return VulInfo 漏洞详情信息
                     * 
                     */
                    VulDetailInfo GetVulInfo() const;

                    /**
                     * 判断参数 VulInfo 是否已赋值
                     * @return VulInfo 是否已赋值
                     * 
                     */
                    bool VulInfoHasBeenSet() const;

                private:

                    /**
                     * 漏洞详情信息
                     */
                    VulDetailInfo m_vulInfo;
                    bool m_vulInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEVULDETAILRESPONSE_H_
