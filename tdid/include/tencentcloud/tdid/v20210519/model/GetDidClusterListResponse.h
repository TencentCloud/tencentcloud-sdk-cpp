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

#ifndef TENCENTCLOUD_TDID_V20210519_MODEL_GETDIDCLUSTERLISTRESPONSE_H_
#define TENCENTCLOUD_TDID_V20210519_MODEL_GETDIDCLUSTERLISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tdid/v20210519/model/DidCluster.h>


namespace TencentCloud
{
    namespace Tdid
    {
        namespace V20210519
        {
            namespace Model
            {
                /**
                * GetDidClusterList返回参数结构体
                */
                class GetDidClusterListResponse : public AbstractModel
                {
                public:
                    GetDidClusterListResponse();
                    ~GetDidClusterListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取DID网络列表
                     * @return DidClusterList DID网络列表
                     */
                    std::vector<DidCluster> GetDidClusterList() const;

                    /**
                     * 判断参数 DidClusterList 是否已赋值
                     * @return DidClusterList 是否已赋值
                     */
                    bool DidClusterListHasBeenSet() const;

                private:

                    /**
                     * DID网络列表
                     */
                    std::vector<DidCluster> m_didClusterList;
                    bool m_didClusterListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDID_V20210519_MODEL_GETDIDCLUSTERLISTRESPONSE_H_
