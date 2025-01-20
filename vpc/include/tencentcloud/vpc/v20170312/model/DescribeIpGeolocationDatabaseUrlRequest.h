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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBEIPGEOLOCATIONDATABASEURLREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBEIPGEOLOCATIONDATABASEURLREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DescribeIpGeolocationDatabaseUrl请求参数结构体
                */
                class DescribeIpGeolocationDatabaseUrlRequest : public AbstractModel
                {
                public:
                    DescribeIpGeolocationDatabaseUrlRequest();
                    ~DescribeIpGeolocationDatabaseUrlRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取IP地理位置库协议类型，目前仅支持"ipv4"。
                     * @return Type IP地理位置库协议类型，目前仅支持"ipv4"。
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置IP地理位置库协议类型，目前仅支持"ipv4"。
                     * @param _type IP地理位置库协议类型，目前仅支持"ipv4"。
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                private:

                    /**
                     * IP地理位置库协议类型，目前仅支持"ipv4"。
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBEIPGEOLOCATIONDATABASEURLREQUEST_H_
