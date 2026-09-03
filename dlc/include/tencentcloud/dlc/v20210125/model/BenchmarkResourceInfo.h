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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_BENCHMARKRESOURCEINFO_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_BENCHMARKRESOURCEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * 评测容器自身资源规格
                */
                class BenchmarkResourceInfo : public AbstractModel
                {
                public:
                    BenchmarkResourceInfo();
                    ~BenchmarkResourceInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>评测容器所在资源包 ID</p>
                     * @return ResourcePartitionId <p>评测容器所在资源包 ID</p>
                     * 
                     */
                    std::string GetResourcePartitionId() const;

                    /**
                     * 设置<p>评测容器所在资源包 ID</p>
                     * @param _resourcePartitionId <p>评测容器所在资源包 ID</p>
                     * 
                     */
                    void SetResourcePartitionId(const std::string& _resourcePartitionId);

                    /**
                     * 判断参数 ResourcePartitionId 是否已赋值
                     * @return ResourcePartitionId 是否已赋值
                     * 
                     */
                    bool ResourcePartitionIdHasBeenSet() const;

                    /**
                     * 获取<p>评测容器所在资源组</p>
                     * @return Queue <p>评测容器所在资源组</p>
                     * 
                     */
                    std::string GetQueue() const;

                    /**
                     * 设置<p>评测容器所在资源组</p>
                     * @param _queue <p>评测容器所在资源组</p>
                     * 
                     */
                    void SetQueue(const std::string& _queue);

                    /**
                     * 判断参数 Queue 是否已赋值
                     * @return Queue 是否已赋值
                     * 
                     */
                    bool QueueHasBeenSet() const;

                    /**
                     * 获取<p>评测容器计费项（规格）</p>
                     * @return BillingItem <p>评测容器计费项（规格）</p>
                     * 
                     */
                    std::string GetBillingItem() const;

                    /**
                     * 设置<p>评测容器计费项（规格）</p>
                     * @param _billingItem <p>评测容器计费项（规格）</p>
                     * 
                     */
                    void SetBillingItem(const std::string& _billingItem);

                    /**
                     * 判断参数 BillingItem 是否已赋值
                     * @return BillingItem 是否已赋值
                     * 
                     */
                    bool BillingItemHasBeenSet() const;

                    /**
                     * 获取<p>规格数量</p>
                     * @return Spec <p>规格数量</p>
                     * 
                     */
                    int64_t GetSpec() const;

                    /**
                     * 设置<p>规格数量</p>
                     * @param _spec <p>规格数量</p>
                     * 
                     */
                    void SetSpec(const int64_t& _spec);

                    /**
                     * 判断参数 Spec 是否已赋值
                     * @return Spec 是否已赋值
                     * 
                     */
                    bool SpecHasBeenSet() const;

                private:

                    /**
                     * <p>评测容器所在资源包 ID</p>
                     */
                    std::string m_resourcePartitionId;
                    bool m_resourcePartitionIdHasBeenSet;

                    /**
                     * <p>评测容器所在资源组</p>
                     */
                    std::string m_queue;
                    bool m_queueHasBeenSet;

                    /**
                     * <p>评测容器计费项（规格）</p>
                     */
                    std::string m_billingItem;
                    bool m_billingItemHasBeenSet;

                    /**
                     * <p>规格数量</p>
                     */
                    int64_t m_spec;
                    bool m_specHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_BENCHMARKRESOURCEINFO_H_
