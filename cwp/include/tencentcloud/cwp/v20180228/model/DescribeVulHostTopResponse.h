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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEVULHOSTTOPRESPONSE_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEVULHOSTTOPRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/VulHostTopInfo.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * DescribeVulHostTop返回参数结构体
                */
                class DescribeVulHostTopResponse : public AbstractModel
                {
                public:
                    DescribeVulHostTopResponse();
                    ~DescribeVulHostTopResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取服务器风险top列表
                     * @return VulHostTopList 服务器风险top列表
                     * 
                     */
                    std::vector<VulHostTopInfo> GetVulHostTopList() const;

                    /**
                     * 判断参数 VulHostTopList 是否已赋值
                     * @return VulHostTopList 是否已赋值
                     * 
                     */
                    bool VulHostTopListHasBeenSet() const;

                private:

                    /**
                     * 服务器风险top列表
                     */
                    std::vector<VulHostTopInfo> m_vulHostTopList;
                    bool m_vulHostTopListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEVULHOSTTOPRESPONSE_H_
