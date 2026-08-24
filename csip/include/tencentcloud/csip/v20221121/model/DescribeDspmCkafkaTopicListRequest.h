/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEDSPMCKAFKATOPICLISTREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEDSPMCKAFKATOPICLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DescribeDspmCkafkaTopicList请求参数结构体
                */
                class DescribeDspmCkafkaTopicListRequest : public AbstractModel
                {
                public:
                    DescribeDspmCkafkaTopicListRequest();
                    ~DescribeDspmCkafkaTopicListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取ckafka的实例接入类型
                     * @return VipType ckafka的实例接入类型
                     * 
                     */
                    int64_t GetVipType() const;

                    /**
                     * 设置ckafka的实例接入类型
                     * @param _vipType ckafka的实例接入类型
                     * 
                     */
                    void SetVipType(const int64_t& _vipType);

                    /**
                     * 判断参数 VipType 是否已赋值
                     * @return VipType 是否已赋值
                     * 
                     */
                    bool VipTypeHasBeenSet() const;

                    /**
                     * 获取ckafka的实例地域
                     * @return RegionId ckafka的实例地域
                     * 
                     */
                    std::string GetRegionId() const;

                    /**
                     * 设置ckafka的实例地域
                     * @param _regionId ckafka的实例地域
                     * 
                     */
                    void SetRegionId(const std::string& _regionId);

                    /**
                     * 判断参数 RegionId 是否已赋值
                     * @return RegionId 是否已赋值
                     * 
                     */
                    bool RegionIdHasBeenSet() const;

                    /**
                     * 获取ckafka的实例id
                     * @return InstanceId ckafka的实例id
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置ckafka的实例id
                     * @param _instanceId ckafka的实例id
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取ckafka的实例名称
                     * @return InstanceName ckafka的实例名称
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置ckafka的实例名称
                     * @param _instanceName ckafka的实例名称
                     * 
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     * 
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取<p>集团账号的成员id</p>
                     * @return MemberId <p>集团账号的成员id</p>
                     * 
                     */
                    std::vector<std::string> GetMemberId() const;

                    /**
                     * 设置<p>集团账号的成员id</p>
                     * @param _memberId <p>集团账号的成员id</p>
                     * 
                     */
                    void SetMemberId(const std::vector<std::string>& _memberId);

                    /**
                     * 判断参数 MemberId 是否已赋值
                     * @return MemberId 是否已赋值
                     * 
                     */
                    bool MemberIdHasBeenSet() const;

                private:

                    /**
                     * ckafka的实例接入类型
                     */
                    int64_t m_vipType;
                    bool m_vipTypeHasBeenSet;

                    /**
                     * ckafka的实例地域
                     */
                    std::string m_regionId;
                    bool m_regionIdHasBeenSet;

                    /**
                     * ckafka的实例id
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * ckafka的实例名称
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * <p>集团账号的成员id</p>
                     */
                    std::vector<std::string> m_memberId;
                    bool m_memberIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEDSPMCKAFKATOPICLISTREQUEST_H_
