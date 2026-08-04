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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_CHECKMODIFYPARTITIONREQUEST_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_CHECKMODIFYPARTITIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/ResourceQuota.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * CheckModifyPartition请求参数结构体
                */
                class CheckModifyPartitionRequest : public AbstractModel
                {
                public:
                    CheckModifyPartitionRequest();
                    ~CheckModifyPartitionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>分区编码</p>
                     * @return PartitionCode <p>分区编码</p>
                     * 
                     */
                    std::string GetPartitionCode() const;

                    /**
                     * 设置<p>分区编码</p>
                     * @param _partitionCode <p>分区编码</p>
                     * 
                     */
                    void SetPartitionCode(const std::string& _partitionCode);

                    /**
                     * 判断参数 PartitionCode 是否已赋值
                     * @return PartitionCode 是否已赋值
                     * 
                     */
                    bool PartitionCodeHasBeenSet() const;

                    /**
                     * 获取<p>目标资源配额列表（计费项+目标数量）</p>
                     * @return TargetResourceQuotaList <p>目标资源配额列表（计费项+目标数量）</p>
                     * 
                     */
                    std::vector<ResourceQuota> GetTargetResourceQuotaList() const;

                    /**
                     * 设置<p>目标资源配额列表（计费项+目标数量）</p>
                     * @param _targetResourceQuotaList <p>目标资源配额列表（计费项+目标数量）</p>
                     * 
                     */
                    void SetTargetResourceQuotaList(const std::vector<ResourceQuota>& _targetResourceQuotaList);

                    /**
                     * 判断参数 TargetResourceQuotaList 是否已赋值
                     * @return TargetResourceQuotaList 是否已赋值
                     * 
                     */
                    bool TargetResourceQuotaListHasBeenSet() const;

                private:

                    /**
                     * <p>分区编码</p>
                     */
                    std::string m_partitionCode;
                    bool m_partitionCodeHasBeenSet;

                    /**
                     * <p>目标资源配额列表（计费项+目标数量）</p>
                     */
                    std::vector<ResourceQuota> m_targetResourceQuotaList;
                    bool m_targetResourceQuotaListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_CHECKMODIFYPARTITIONREQUEST_H_
