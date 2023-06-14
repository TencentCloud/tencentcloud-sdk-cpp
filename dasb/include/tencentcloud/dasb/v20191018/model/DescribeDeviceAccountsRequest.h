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

#ifndef TENCENTCLOUD_DASB_V20191018_MODEL_DESCRIBEDEVICEACCOUNTSREQUEST_H_
#define TENCENTCLOUD_DASB_V20191018_MODEL_DESCRIBEDEVICEACCOUNTSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dasb
    {
        namespace V20191018
        {
            namespace Model
            {
                /**
                * DescribeDeviceAccounts请求参数结构体
                */
                class DescribeDeviceAccountsRequest : public AbstractModel
                {
                public:
                    DescribeDeviceAccountsRequest();
                    ~DescribeDeviceAccountsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取主机账号ID集合，非必需，如果使用IdSet则忽略其他过滤参数
                     * @return IdSet 主机账号ID集合，非必需，如果使用IdSet则忽略其他过滤参数
                     * 
                     */
                    std::vector<uint64_t> GetIdSet() const;

                    /**
                     * 设置主机账号ID集合，非必需，如果使用IdSet则忽略其他过滤参数
                     * @param _idSet 主机账号ID集合，非必需，如果使用IdSet则忽略其他过滤参数
                     * 
                     */
                    void SetIdSet(const std::vector<uint64_t>& _idSet);

                    /**
                     * 判断参数 IdSet 是否已赋值
                     * @return IdSet 是否已赋值
                     * 
                     */
                    bool IdSetHasBeenSet() const;

                    /**
                     * 获取主机账号名，模糊查询，不能单独出现，必须于DeviceId一起提交
                     * @return Account 主机账号名，模糊查询，不能单独出现，必须于DeviceId一起提交
                     * 
                     */
                    std::string GetAccount() const;

                    /**
                     * 设置主机账号名，模糊查询，不能单独出现，必须于DeviceId一起提交
                     * @param _account 主机账号名，模糊查询，不能单独出现，必须于DeviceId一起提交
                     * 
                     */
                    void SetAccount(const std::string& _account);

                    /**
                     * 判断参数 Account 是否已赋值
                     * @return Account 是否已赋值
                     * 
                     */
                    bool AccountHasBeenSet() const;

                    /**
                     * 获取主机ID，未使用IdSet时必须携带
                     * @return DeviceId 主机ID，未使用IdSet时必须携带
                     * 
                     */
                    uint64_t GetDeviceId() const;

                    /**
                     * 设置主机ID，未使用IdSet时必须携带
                     * @param _deviceId 主机ID，未使用IdSet时必须携带
                     * 
                     */
                    void SetDeviceId(const uint64_t& _deviceId);

                    /**
                     * 判断参数 DeviceId 是否已赋值
                     * @return DeviceId 是否已赋值
                     * 
                     */
                    bool DeviceIdHasBeenSet() const;

                    /**
                     * 获取分页偏移位置，默认值为0
                     * @return Offset 分页偏移位置，默认值为0
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置分页偏移位置，默认值为0
                     * @param _offset 分页偏移位置，默认值为0
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取每页条目数量，默认20
                     * @return Limit 每页条目数量，默认20
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置每页条目数量，默认20
                     * @param _limit 每页条目数量，默认20
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * 主机账号ID集合，非必需，如果使用IdSet则忽略其他过滤参数
                     */
                    std::vector<uint64_t> m_idSet;
                    bool m_idSetHasBeenSet;

                    /**
                     * 主机账号名，模糊查询，不能单独出现，必须于DeviceId一起提交
                     */
                    std::string m_account;
                    bool m_accountHasBeenSet;

                    /**
                     * 主机ID，未使用IdSet时必须携带
                     */
                    uint64_t m_deviceId;
                    bool m_deviceIdHasBeenSet;

                    /**
                     * 分页偏移位置，默认值为0
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 每页条目数量，默认20
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DASB_V20191018_MODEL_DESCRIBEDEVICEACCOUNTSREQUEST_H_
