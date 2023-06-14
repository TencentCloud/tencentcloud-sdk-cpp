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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBEIPGEOLOCATIONINFOSREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBEIPGEOLOCATIONINFOSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vpc/v20170312/model/IpField.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DescribeIpGeolocationInfos请求参数结构体
                */
                class DescribeIpGeolocationInfosRequest : public AbstractModel
                {
                public:
                    DescribeIpGeolocationInfosRequest();
                    ~DescribeIpGeolocationInfosRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取需查询的IP地址列表，目前仅支持IPv4地址。查询的IP地址数量上限为100个。
                     * @return AddressIps 需查询的IP地址列表，目前仅支持IPv4地址。查询的IP地址数量上限为100个。
                     * 
                     */
                    std::vector<std::string> GetAddressIps() const;

                    /**
                     * 设置需查询的IP地址列表，目前仅支持IPv4地址。查询的IP地址数量上限为100个。
                     * @param _addressIps 需查询的IP地址列表，目前仅支持IPv4地址。查询的IP地址数量上限为100个。
                     * 
                     */
                    void SetAddressIps(const std::vector<std::string>& _addressIps);

                    /**
                     * 判断参数 AddressIps 是否已赋值
                     * @return AddressIps 是否已赋值
                     * 
                     */
                    bool AddressIpsHasBeenSet() const;

                    /**
                     * 获取需查询的IP地址的字段信息。
                     * @return Fields 需查询的IP地址的字段信息。
                     * 
                     */
                    IpField GetFields() const;

                    /**
                     * 设置需查询的IP地址的字段信息。
                     * @param _fields 需查询的IP地址的字段信息。
                     * 
                     */
                    void SetFields(const IpField& _fields);

                    /**
                     * 判断参数 Fields 是否已赋值
                     * @return Fields 是否已赋值
                     * 
                     */
                    bool FieldsHasBeenSet() const;

                private:

                    /**
                     * 需查询的IP地址列表，目前仅支持IPv4地址。查询的IP地址数量上限为100个。
                     */
                    std::vector<std::string> m_addressIps;
                    bool m_addressIpsHasBeenSet;

                    /**
                     * 需查询的IP地址的字段信息。
                     */
                    IpField m_fields;
                    bool m_fieldsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBEIPGEOLOCATIONINFOSREQUEST_H_
