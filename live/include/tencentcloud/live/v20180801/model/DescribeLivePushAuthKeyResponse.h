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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBELIVEPUSHAUTHKEYRESPONSE_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBELIVEPUSHAUTHKEYRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/live/v20180801/model/PushAuthKeyInfo.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * DescribeLivePushAuthKey返回参数结构体
                */
                class DescribeLivePushAuthKeyResponse : public AbstractModel
                {
                public:
                    DescribeLivePushAuthKeyResponse();
                    ~DescribeLivePushAuthKeyResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取推流鉴权key信息。
                     * @return PushAuthKeyInfo 推流鉴权key信息。
                     * 
                     */
                    PushAuthKeyInfo GetPushAuthKeyInfo() const;

                    /**
                     * 判断参数 PushAuthKeyInfo 是否已赋值
                     * @return PushAuthKeyInfo 是否已赋值
                     * 
                     */
                    bool PushAuthKeyInfoHasBeenSet() const;

                private:

                    /**
                     * 推流鉴权key信息。
                     */
                    PushAuthKeyInfo m_pushAuthKeyInfo;
                    bool m_pushAuthKeyInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBELIVEPUSHAUTHKEYRESPONSE_H_
