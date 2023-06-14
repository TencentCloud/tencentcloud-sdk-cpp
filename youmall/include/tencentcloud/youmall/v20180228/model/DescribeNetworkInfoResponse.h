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

#ifndef TENCENTCLOUD_YOUMALL_V20180228_MODEL_DESCRIBENETWORKINFORESPONSE_H_
#define TENCENTCLOUD_YOUMALL_V20180228_MODEL_DESCRIBENETWORKINFORESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/youmall/v20180228/model/NetworkLastInfo.h>


namespace TencentCloud
{
    namespace Youmall
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * DescribeNetworkInfo返回参数结构体
                */
                class DescribeNetworkInfoResponse : public AbstractModel
                {
                public:
                    DescribeNetworkInfoResponse();
                    ~DescribeNetworkInfoResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取网络状态详情
                     * @return InstanceSet 网络状态详情
                     * 
                     */
                    NetworkLastInfo GetInstanceSet() const;

                    /**
                     * 判断参数 InstanceSet 是否已赋值
                     * @return InstanceSet 是否已赋值
                     * 
                     */
                    bool InstanceSetHasBeenSet() const;

                private:

                    /**
                     * 网络状态详情
                     */
                    NetworkLastInfo m_instanceSet;
                    bool m_instanceSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_YOUMALL_V20180228_MODEL_DESCRIBENETWORKINFORESPONSE_H_
