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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEVULTOPRESPONSE_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEVULTOPRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/VulTopInfo.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * DescribeVulTop返回参数结构体
                */
                class DescribeVulTopResponse : public AbstractModel
                {
                public:
                    DescribeVulTopResponse();
                    ~DescribeVulTopResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取漏洞top列表
                     * @return VulTopList 漏洞top列表
                     * 
                     */
                    std::vector<VulTopInfo> GetVulTopList() const;

                    /**
                     * 判断参数 VulTopList 是否已赋值
                     * @return VulTopList 是否已赋值
                     * 
                     */
                    bool VulTopListHasBeenSet() const;

                private:

                    /**
                     * 漏洞top列表
                     */
                    std::vector<VulTopInfo> m_vulTopList;
                    bool m_vulTopListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEVULTOPRESPONSE_H_
