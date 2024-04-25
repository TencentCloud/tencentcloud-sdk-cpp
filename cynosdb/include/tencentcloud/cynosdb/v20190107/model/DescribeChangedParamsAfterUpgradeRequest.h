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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBECHANGEDPARAMSAFTERUPGRADEREQUEST_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBECHANGEDPARAMSAFTERUPGRADEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * DescribeChangedParamsAfterUpgrade请求参数结构体
                */
                class DescribeChangedParamsAfterUpgradeRequest : public AbstractModel
                {
                public:
                    DescribeChangedParamsAfterUpgradeRequest();
                    ~DescribeChangedParamsAfterUpgradeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取集群ID
                     * @return InstanceId 集群ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置集群ID
                     * @param _instanceId 集群ID
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
                     * 获取变配后的CPU
                     * @return DstCpu 变配后的CPU
                     * 
                     */
                    int64_t GetDstCpu() const;

                    /**
                     * 设置变配后的CPU
                     * @param _dstCpu 变配后的CPU
                     * 
                     */
                    void SetDstCpu(const int64_t& _dstCpu);

                    /**
                     * 判断参数 DstCpu 是否已赋值
                     * @return DstCpu 是否已赋值
                     * 
                     */
                    bool DstCpuHasBeenSet() const;

                    /**
                     * 获取变配后的MEM，单位G
                     * @return DstMem 变配后的MEM，单位G
                     * 
                     */
                    int64_t GetDstMem() const;

                    /**
                     * 设置变配后的MEM，单位G
                     * @param _dstMem 变配后的MEM，单位G
                     * 
                     */
                    void SetDstMem(const int64_t& _dstMem);

                    /**
                     * 判断参数 DstMem 是否已赋值
                     * @return DstMem 是否已赋值
                     * 
                     */
                    bool DstMemHasBeenSet() const;

                private:

                    /**
                     * 集群ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 变配后的CPU
                     */
                    int64_t m_dstCpu;
                    bool m_dstCpuHasBeenSet;

                    /**
                     * 变配后的MEM，单位G
                     */
                    int64_t m_dstMem;
                    bool m_dstMemHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBECHANGEDPARAMSAFTERUPGRADEREQUEST_H_
