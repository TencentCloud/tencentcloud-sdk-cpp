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

#ifndef TENCENTCLOUD_CDWDORIS_V20211228_MODEL_UPDATECOOLDOWNREQUEST_H_
#define TENCENTCLOUD_CDWDORIS_V20211228_MODEL_UPDATECOOLDOWNREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdwdoris
    {
        namespace V20211228
        {
            namespace Model
            {
                /**
                * UpdateCoolDown请求参数结构体
                */
                class UpdateCoolDownRequest : public AbstractModel
                {
                public:
                    UpdateCoolDownRequest();
                    ~UpdateCoolDownRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取集群id
                     * @return InstanceId 集群id
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置集群id
                     * @param _instanceId 集群id
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
                     * 获取是否启用 0：不启用 1：启用
                     * @return Enable 是否启用 0：不启用 1：启用
                     * 
                     */
                    int64_t GetEnable() const;

                    /**
                     * 设置是否启用 0：不启用 1：启用
                     * @param _enable 是否启用 0：不启用 1：启用
                     * 
                     */
                    void SetEnable(const int64_t& _enable);

                    /**
                     * 判断参数 Enable 是否已赋值
                     * @return Enable 是否已赋值
                     * 
                     */
                    bool EnableHasBeenSet() const;

                    /**
                     * 获取用户存放冷热分层数据Cos桶地址
                     * @return Bucket 用户存放冷热分层数据Cos桶地址
                     * 
                     */
                    std::string GetBucket() const;

                    /**
                     * 设置用户存放冷热分层数据Cos桶地址
                     * @param _bucket 用户存放冷热分层数据Cos桶地址
                     * 
                     */
                    void SetBucket(const std::string& _bucket);

                    /**
                     * 判断参数 Bucket 是否已赋值
                     * @return Bucket 是否已赋值
                     * 
                     */
                    bool BucketHasBeenSet() const;

                private:

                    /**
                     * 集群id
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 是否启用 0：不启用 1：启用
                     */
                    int64_t m_enable;
                    bool m_enableHasBeenSet;

                    /**
                     * 用户存放冷热分层数据Cos桶地址
                     */
                    std::string m_bucket;
                    bool m_bucketHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWDORIS_V20211228_MODEL_UPDATECOOLDOWNREQUEST_H_
