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

#ifndef TENCENTCLOUD_TCR_V20190924_MODEL_CREATEREPLICATIONINSTANCERESPONSE_H_
#define TENCENTCLOUD_TCR_V20190924_MODEL_CREATEREPLICATIONINSTANCERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcr
    {
        namespace V20190924
        {
            namespace Model
            {
                /**
                * CreateReplicationInstance返回参数结构体
                */
                class CreateReplicationInstanceResponse : public AbstractModel
                {
                public:
                    CreateReplicationInstanceResponse();
                    ~CreateReplicationInstanceResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取企业版复制实例Id
                     * @return ReplicationRegistryId 企业版复制实例Id
                     * 
                     */
                    std::string GetReplicationRegistryId() const;

                    /**
                     * 判断参数 ReplicationRegistryId 是否已赋值
                     * @return ReplicationRegistryId 是否已赋值
                     * 
                     */
                    bool ReplicationRegistryIdHasBeenSet() const;

                private:

                    /**
                     * 企业版复制实例Id
                     */
                    std::string m_replicationRegistryId;
                    bool m_replicationRegistryIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCR_V20190924_MODEL_CREATEREPLICATIONINSTANCERESPONSE_H_
