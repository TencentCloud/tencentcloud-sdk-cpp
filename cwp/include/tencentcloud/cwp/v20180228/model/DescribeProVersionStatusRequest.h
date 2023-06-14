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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEPROVERSIONSTATUSREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEPROVERSIONSTATUSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * DescribeProVersionStatus请求参数结构体
                */
                class DescribeProVersionStatusRequest : public AbstractModel
                {
                public:
                    DescribeProVersionStatusRequest();
                    ~DescribeProVersionStatusRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取主机安全客户端UUID、填写"all"表示所有主机。
                     * @return Uuid 主机安全客户端UUID、填写"all"表示所有主机。
                     * 
                     */
                    std::string GetUuid() const;

                    /**
                     * 设置主机安全客户端UUID、填写"all"表示所有主机。
                     * @param _uuid 主机安全客户端UUID、填写"all"表示所有主机。
                     * 
                     */
                    void SetUuid(const std::string& _uuid);

                    /**
                     * 判断参数 Uuid 是否已赋值
                     * @return Uuid 是否已赋值
                     * 
                     */
                    bool UuidHasBeenSet() const;

                private:

                    /**
                     * 主机安全客户端UUID、填写"all"表示所有主机。
                     */
                    std::string m_uuid;
                    bool m_uuidHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEPROVERSIONSTATUSREQUEST_H_
