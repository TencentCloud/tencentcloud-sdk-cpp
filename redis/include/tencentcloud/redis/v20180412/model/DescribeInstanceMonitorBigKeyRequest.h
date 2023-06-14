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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBEINSTANCEMONITORBIGKEYREQUEST_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBEINSTANCEMONITORBIGKEYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Redis
    {
        namespace V20180412
        {
            namespace Model
            {
                /**
                * DescribeInstanceMonitorBigKey请求参数结构体
                */
                class DescribeInstanceMonitorBigKeyRequest : public AbstractModel
                {
                public:
                    DescribeInstanceMonitorBigKeyRequest();
                    ~DescribeInstanceMonitorBigKeyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例Id
                     * @return InstanceId 实例Id
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例Id
                     * @param _instanceId 实例Id
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
                     * 获取请求类型：1——string类型，2——所有类型
                     * @return ReqType 请求类型：1——string类型，2——所有类型
                     * 
                     */
                    int64_t GetReqType() const;

                    /**
                     * 设置请求类型：1——string类型，2——所有类型
                     * @param _reqType 请求类型：1——string类型，2——所有类型
                     * 
                     */
                    void SetReqType(const int64_t& _reqType);

                    /**
                     * 判断参数 ReqType 是否已赋值
                     * @return ReqType 是否已赋值
                     * 
                     */
                    bool ReqTypeHasBeenSet() const;

                    /**
                     * 获取时间；例如："20190219"
                     * @return Date 时间；例如："20190219"
                     * 
                     */
                    std::string GetDate() const;

                    /**
                     * 设置时间；例如："20190219"
                     * @param _date 时间；例如："20190219"
                     * 
                     */
                    void SetDate(const std::string& _date);

                    /**
                     * 判断参数 Date 是否已赋值
                     * @return Date 是否已赋值
                     * 
                     */
                    bool DateHasBeenSet() const;

                private:

                    /**
                     * 实例Id
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 请求类型：1——string类型，2——所有类型
                     */
                    int64_t m_reqType;
                    bool m_reqTypeHasBeenSet;

                    /**
                     * 时间；例如："20190219"
                     */
                    std::string m_date;
                    bool m_dateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBEINSTANCEMONITORBIGKEYREQUEST_H_
