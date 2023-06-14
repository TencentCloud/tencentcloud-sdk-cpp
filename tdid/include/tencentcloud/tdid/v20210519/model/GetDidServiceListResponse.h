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

#ifndef TENCENTCLOUD_TDID_V20210519_MODEL_GETDIDSERVICELISTRESPONSE_H_
#define TENCENTCLOUD_TDID_V20210519_MODEL_GETDIDSERVICELISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tdid/v20210519/model/DidServiceInfo.h>


namespace TencentCloud
{
    namespace Tdid
    {
        namespace V20210519
        {
            namespace Model
            {
                /**
                * GetDidServiceList返回参数结构体
                */
                class GetDidServiceListResponse : public AbstractModel
                {
                public:
                    GetDidServiceListResponse();
                    ~GetDidServiceListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取DID服务列表
                     * @return DidServiceList DID服务列表
                     * 
                     */
                    std::vector<DidServiceInfo> GetDidServiceList() const;

                    /**
                     * 判断参数 DidServiceList 是否已赋值
                     * @return DidServiceList 是否已赋值
                     * 
                     */
                    bool DidServiceListHasBeenSet() const;

                private:

                    /**
                     * DID服务列表
                     */
                    std::vector<DidServiceInfo> m_didServiceList;
                    bool m_didServiceListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDID_V20210519_MODEL_GETDIDSERVICELISTRESPONSE_H_
