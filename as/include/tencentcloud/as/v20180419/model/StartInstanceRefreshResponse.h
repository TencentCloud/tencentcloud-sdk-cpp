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

#ifndef TENCENTCLOUD_AS_V20180419_MODEL_STARTINSTANCEREFRESHRESPONSE_H_
#define TENCENTCLOUD_AS_V20180419_MODEL_STARTINSTANCEREFRESHRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace As
    {
        namespace V20180419
        {
            namespace Model
            {
                /**
                * StartInstanceRefresh返回参数结构体
                */
                class StartInstanceRefreshResponse : public AbstractModel
                {
                public:
                    StartInstanceRefreshResponse();
                    ~StartInstanceRefreshResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取刷新活动 ID。
                     * @return RefreshActivityId 刷新活动 ID。
                     * 
                     */
                    std::string GetRefreshActivityId() const;

                    /**
                     * 判断参数 RefreshActivityId 是否已赋值
                     * @return RefreshActivityId 是否已赋值
                     * 
                     */
                    bool RefreshActivityIdHasBeenSet() const;

                private:

                    /**
                     * 刷新活动 ID。
                     */
                    std::string m_refreshActivityId;
                    bool m_refreshActivityIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AS_V20180419_MODEL_STARTINSTANCEREFRESHRESPONSE_H_
