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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBECVMQUOTAREQUEST_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBECVMQUOTAREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * DescribeCvmQuota请求参数结构体
                */
                class DescribeCvmQuotaRequest : public AbstractModel
                {
                public:
                    DescribeCvmQuotaRequest();
                    ~DescribeCvmQuotaRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取EMR集群ID
                     * @return ClusterId EMR集群ID
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置EMR集群ID
                     * @param _clusterId EMR集群ID
                     * 
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取区ID
                     * @return ZoneId 区ID
                     * 
                     */
                    int64_t GetZoneId() const;

                    /**
                     * 设置区ID
                     * @param _zoneId 区ID
                     * 
                     */
                    void SetZoneId(const int64_t& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                private:

                    /**
                     * EMR集群ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 区ID
                     */
                    int64_t m_zoneId;
                    bool m_zoneIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBECVMQUOTAREQUEST_H_
