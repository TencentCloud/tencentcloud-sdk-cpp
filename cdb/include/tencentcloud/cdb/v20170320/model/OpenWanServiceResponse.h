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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_OPENWANSERVICERESPONSE_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_OPENWANSERVICERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * OpenWanService返回参数结构体
                */
                class OpenWanServiceResponse : public AbstractModel
                {
                public:
                    OpenWanServiceResponse();
                    ~OpenWanServiceResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取异步任务的请求 ID，可使用此 ID 查询异步任务的执行结果。
                     * @return AsyncRequestId 异步任务的请求 ID，可使用此 ID 查询异步任务的执行结果。
                     * 
                     */
                    std::string GetAsyncRequestId() const;

                    /**
                     * 判断参数 AsyncRequestId 是否已赋值
                     * @return AsyncRequestId 是否已赋值
                     * 
                     */
                    bool AsyncRequestIdHasBeenSet() const;

                private:

                    /**
                     * 异步任务的请求 ID，可使用此 ID 查询异步任务的执行结果。
                     */
                    std::string m_asyncRequestId;
                    bool m_asyncRequestIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_OPENWANSERVICERESPONSE_H_
