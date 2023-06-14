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

#ifndef TENCENTCLOUD_IOTVIDEOINDUSTRY_V20201201_MODEL_DESCRIBEMESSAGEFORWARDREQUEST_H_
#define TENCENTCLOUD_IOTVIDEOINDUSTRY_V20201201_MODEL_DESCRIBEMESSAGEFORWARDREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotvideoindustry
    {
        namespace V20201201
        {
            namespace Model
            {
                /**
                * DescribeMessageForward请求参数结构体
                */
                class DescribeMessageForwardRequest : public AbstractModel
                {
                public:
                    DescribeMessageForwardRequest();
                    ~DescribeMessageForwardRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取配置ID
                     * @return IntId 配置ID
                     * 
                     */
                    int64_t GetIntId() const;

                    /**
                     * 设置配置ID
                     * @param _intId 配置ID
                     * 
                     */
                    void SetIntId(const int64_t& _intId);

                    /**
                     * 判断参数 IntId 是否已赋值
                     * @return IntId 是否已赋值
                     * 
                     */
                    bool IntIdHasBeenSet() const;

                private:

                    /**
                     * 配置ID
                     */
                    int64_t m_intId;
                    bool m_intIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTVIDEOINDUSTRY_V20201201_MODEL_DESCRIBEMESSAGEFORWARDREQUEST_H_
