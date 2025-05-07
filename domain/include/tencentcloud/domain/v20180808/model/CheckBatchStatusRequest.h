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

#ifndef TENCENTCLOUD_DOMAIN_V20180808_MODEL_CHECKBATCHSTATUSREQUEST_H_
#define TENCENTCLOUD_DOMAIN_V20180808_MODEL_CHECKBATCHSTATUSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Domain
    {
        namespace V20180808
        {
            namespace Model
            {
                /**
                * CheckBatchStatus请求参数结构体
                */
                class CheckBatchStatusRequest : public AbstractModel
                {
                public:
                    CheckBatchStatusRequest();
                    ~CheckBatchStatusRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取操作日志 ID数组，最多 200 个
可通过任意批量操作接口获取，例如：
[BatchModifyDomainInfo](https://cloud.tencent.com/document/product/242/49197)
[ModifyDomainDNSBatch](https://cloud.tencent.com/document/product/242/49211)
[ModifyDomainOwnerBatch](https://cloud.tencent.com/document/product/242/49196)
[UpdateProhibitionBatch](https://cloud.tencent.com/document/api/242/49193)
[TransferProhibitionBatch](https://cloud.tencent.com/document/api/242/49194)
[TransferInDomainBatch](https://cloud.tencent.com/document/api/242/49195)
                     * @return LogIds 操作日志 ID数组，最多 200 个
可通过任意批量操作接口获取，例如：
[BatchModifyDomainInfo](https://cloud.tencent.com/document/product/242/49197)
[ModifyDomainDNSBatch](https://cloud.tencent.com/document/product/242/49211)
[ModifyDomainOwnerBatch](https://cloud.tencent.com/document/product/242/49196)
[UpdateProhibitionBatch](https://cloud.tencent.com/document/api/242/49193)
[TransferProhibitionBatch](https://cloud.tencent.com/document/api/242/49194)
[TransferInDomainBatch](https://cloud.tencent.com/document/api/242/49195)
                     * 
                     */
                    std::vector<uint64_t> GetLogIds() const;

                    /**
                     * 设置操作日志 ID数组，最多 200 个
可通过任意批量操作接口获取，例如：
[BatchModifyDomainInfo](https://cloud.tencent.com/document/product/242/49197)
[ModifyDomainDNSBatch](https://cloud.tencent.com/document/product/242/49211)
[ModifyDomainOwnerBatch](https://cloud.tencent.com/document/product/242/49196)
[UpdateProhibitionBatch](https://cloud.tencent.com/document/api/242/49193)
[TransferProhibitionBatch](https://cloud.tencent.com/document/api/242/49194)
[TransferInDomainBatch](https://cloud.tencent.com/document/api/242/49195)
                     * @param _logIds 操作日志 ID数组，最多 200 个
可通过任意批量操作接口获取，例如：
[BatchModifyDomainInfo](https://cloud.tencent.com/document/product/242/49197)
[ModifyDomainDNSBatch](https://cloud.tencent.com/document/product/242/49211)
[ModifyDomainOwnerBatch](https://cloud.tencent.com/document/product/242/49196)
[UpdateProhibitionBatch](https://cloud.tencent.com/document/api/242/49193)
[TransferProhibitionBatch](https://cloud.tencent.com/document/api/242/49194)
[TransferInDomainBatch](https://cloud.tencent.com/document/api/242/49195)
                     * 
                     */
                    void SetLogIds(const std::vector<uint64_t>& _logIds);

                    /**
                     * 判断参数 LogIds 是否已赋值
                     * @return LogIds 是否已赋值
                     * 
                     */
                    bool LogIdsHasBeenSet() const;

                private:

                    /**
                     * 操作日志 ID数组，最多 200 个
可通过任意批量操作接口获取，例如：
[BatchModifyDomainInfo](https://cloud.tencent.com/document/product/242/49197)
[ModifyDomainDNSBatch](https://cloud.tencent.com/document/product/242/49211)
[ModifyDomainOwnerBatch](https://cloud.tencent.com/document/product/242/49196)
[UpdateProhibitionBatch](https://cloud.tencent.com/document/api/242/49193)
[TransferProhibitionBatch](https://cloud.tencent.com/document/api/242/49194)
[TransferInDomainBatch](https://cloud.tencent.com/document/api/242/49195)
                     */
                    std::vector<uint64_t> m_logIds;
                    bool m_logIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DOMAIN_V20180808_MODEL_CHECKBATCHSTATUSREQUEST_H_
