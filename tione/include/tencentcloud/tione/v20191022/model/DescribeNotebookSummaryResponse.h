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

#ifndef TENCENTCLOUD_TIONE_V20191022_MODEL_DESCRIBENOTEBOOKSUMMARYRESPONSE_H_
#define TENCENTCLOUD_TIONE_V20191022_MODEL_DESCRIBENOTEBOOKSUMMARYRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tione
    {
        namespace V20191022
        {
            namespace Model
            {
                /**
                * DescribeNotebookSummary返回参数结构体
                */
                class DescribeNotebookSummaryResponse : public AbstractModel
                {
                public:
                    DescribeNotebookSummaryResponse();
                    ~DescribeNotebookSummaryResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取实例总数
                     * @return AllInstanceCnt 实例总数
                     * 
                     */
                    int64_t GetAllInstanceCnt() const;

                    /**
                     * 判断参数 AllInstanceCnt 是否已赋值
                     * @return AllInstanceCnt 是否已赋值
                     * 
                     */
                    bool AllInstanceCntHasBeenSet() const;

                    /**
                     * 获取计费实例总数
                     * @return BillingInstanceCnt 计费实例总数
                     * 
                     */
                    int64_t GetBillingInstanceCnt() const;

                    /**
                     * 判断参数 BillingInstanceCnt 是否已赋值
                     * @return BillingInstanceCnt 是否已赋值
                     * 
                     */
                    bool BillingInstanceCntHasBeenSet() const;

                    /**
                     * 获取仅存储计费的实例总数
                     * @return StorageOnlyBillingInstanceCnt 仅存储计费的实例总数
                     * 
                     */
                    int64_t GetStorageOnlyBillingInstanceCnt() const;

                    /**
                     * 判断参数 StorageOnlyBillingInstanceCnt 是否已赋值
                     * @return StorageOnlyBillingInstanceCnt 是否已赋值
                     * 
                     */
                    bool StorageOnlyBillingInstanceCntHasBeenSet() const;

                    /**
                     * 获取计算和存储都计费的实例总数
                     * @return ComputingBillingInstanceCnt 计算和存储都计费的实例总数
                     * 
                     */
                    int64_t GetComputingBillingInstanceCnt() const;

                    /**
                     * 判断参数 ComputingBillingInstanceCnt 是否已赋值
                     * @return ComputingBillingInstanceCnt 是否已赋值
                     * 
                     */
                    bool ComputingBillingInstanceCntHasBeenSet() const;

                private:

                    /**
                     * 实例总数
                     */
                    int64_t m_allInstanceCnt;
                    bool m_allInstanceCntHasBeenSet;

                    /**
                     * 计费实例总数
                     */
                    int64_t m_billingInstanceCnt;
                    bool m_billingInstanceCntHasBeenSet;

                    /**
                     * 仅存储计费的实例总数
                     */
                    int64_t m_storageOnlyBillingInstanceCnt;
                    bool m_storageOnlyBillingInstanceCntHasBeenSet;

                    /**
                     * 计算和存储都计费的实例总数
                     */
                    int64_t m_computingBillingInstanceCnt;
                    bool m_computingBillingInstanceCntHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20191022_MODEL_DESCRIBENOTEBOOKSUMMARYRESPONSE_H_
