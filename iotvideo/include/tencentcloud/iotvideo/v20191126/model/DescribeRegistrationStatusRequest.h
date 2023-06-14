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

#ifndef TENCENTCLOUD_IOTVIDEO_V20191126_MODEL_DESCRIBEREGISTRATIONSTATUSREQUEST_H_
#define TENCENTCLOUD_IOTVIDEO_V20191126_MODEL_DESCRIBEREGISTRATIONSTATUSREQUEST_H_

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
                * DescribeRegistrationStatus请求参数结构体
                */
                class DescribeRegistrationStatusRequest : public AbstractModel
                {
                public:
                    DescribeRegistrationStatusRequest();
                    ~DescribeRegistrationStatusRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取终端用户的唯一ID列表，0<元素数量<=100
                     * @return CunionIds 终端用户的唯一ID列表，0<元素数量<=100
                     * 
                     */
                    std::vector<std::string> GetCunionIds() const;

                    /**
                     * 设置终端用户的唯一ID列表，0<元素数量<=100
                     * @param _cunionIds 终端用户的唯一ID列表，0<元素数量<=100
                     * 
                     */
                    void SetCunionIds(const std::vector<std::string>& _cunionIds);

                    /**
                     * 判断参数 CunionIds 是否已赋值
                     * @return CunionIds 是否已赋值
                     * 
                     */
                    bool CunionIdsHasBeenSet() const;

                private:

                    /**
                     * 终端用户的唯一ID列表，0<元素数量<=100
                     */
                    std::vector<std::string> m_cunionIds;
                    bool m_cunionIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTVIDEO_V20191126_MODEL_DESCRIBEREGISTRATIONSTATUSREQUEST_H_
