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

#ifndef TENCENTCLOUD_DTS_V20180330_MODEL_SWITCHDRTOMASTERRESPONSE_H_
#define TENCENTCLOUD_DTS_V20180330_MODEL_SWITCHDRTOMASTERRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dts
    {
        namespace V20180330
        {
            namespace Model
            {
                /**
                * SwitchDrToMaster返回参数结构体
                */
                class SwitchDrToMasterResponse : public AbstractModel
                {
                public:
                    SwitchDrToMasterResponse();
                    ~SwitchDrToMasterResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取后台异步任务请求id
                     * @return AsyncRequestId 后台异步任务请求id
                     */
                    std::string GetAsyncRequestId() const;

                    /**
                     * 判断参数 AsyncRequestId 是否已赋值
                     * @return AsyncRequestId 是否已赋值
                     */
                    bool AsyncRequestIdHasBeenSet() const;

                private:

                    /**
                     * 后台异步任务请求id
                     */
                    std::string m_asyncRequestId;
                    bool m_asyncRequestIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20180330_MODEL_SWITCHDRTOMASTERRESPONSE_H_
