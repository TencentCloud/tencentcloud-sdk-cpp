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

#ifndef TENCENTCLOUD_MONGODB_V20190725_MODEL_SCALEUPDBINSTANCECPUREQUEST_H_
#define TENCENTCLOUD_MONGODB_V20190725_MODEL_SCALEUPDBINSTANCECPUREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mongodb
    {
        namespace V20190725
        {
            namespace Model
            {
                /**
                * ScaleUpDBInstanceCpu请求参数结构体
                */
                class ScaleUpDBInstanceCpuRequest : public AbstractModel
                {
                public:
                    ScaleUpDBInstanceCpuRequest();
                    ~ScaleUpDBInstanceCpuRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>实例ID</p>
                     * @return InstanceId <p>实例ID</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>实例ID</p>
                     * @param _instanceId <p>实例ID</p>
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
                     * 获取<p>要扩容的CPU核数（增量），每个节点都会增加这么多核数</p>
                     * @return ExtraCpu <p>要扩容的CPU核数（增量），每个节点都会增加这么多核数</p>
                     * 
                     */
                    int64_t GetExtraCpu() const;

                    /**
                     * 设置<p>要扩容的CPU核数（增量），每个节点都会增加这么多核数</p>
                     * @param _extraCpu <p>要扩容的CPU核数（增量），每个节点都会增加这么多核数</p>
                     * 
                     */
                    void SetExtraCpu(const int64_t& _extraCpu);

                    /**
                     * 判断参数 ExtraCpu 是否已赋值
                     * @return ExtraCpu 是否已赋值
                     * 
                     */
                    bool ExtraCpuHasBeenSet() const;

                private:

                    /**
                     * <p>实例ID</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>要扩容的CPU核数（增量），每个节点都会增加这么多核数</p>
                     */
                    int64_t m_extraCpu;
                    bool m_extraCpuHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONGODB_V20190725_MODEL_SCALEUPDBINSTANCECPUREQUEST_H_
