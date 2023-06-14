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

#ifndef TENCENTCLOUD_IOTVIDEO_V20191126_MODEL_DESCRIBEBINDDEVREQUEST_H_
#define TENCENTCLOUD_IOTVIDEO_V20191126_MODEL_DESCRIBEBINDDEVREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotvideo
    {
        namespace V20191126
        {
            namespace Model
            {
                /**
                * DescribeBindDev请求参数结构体
                */
                class DescribeBindDevRequest : public AbstractModel
                {
                public:
                    DescribeBindDevRequest();
                    ~DescribeBindDevRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取终端用户在IoT Video上的唯一标识ID
                     * @return AccessId 终端用户在IoT Video上的唯一标识ID
                     * 
                     */
                    std::string GetAccessId() const;

                    /**
                     * 设置终端用户在IoT Video上的唯一标识ID
                     * @param _accessId 终端用户在IoT Video上的唯一标识ID
                     * 
                     */
                    void SetAccessId(const std::string& _accessId);

                    /**
                     * 判断参数 AccessId 是否已赋值
                     * @return AccessId 是否已赋值
                     * 
                     */
                    bool AccessIdHasBeenSet() const;

                private:

                    /**
                     * 终端用户在IoT Video上的唯一标识ID
                     */
                    std::string m_accessId;
                    bool m_accessIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTVIDEO_V20191126_MODEL_DESCRIBEBINDDEVREQUEST_H_
