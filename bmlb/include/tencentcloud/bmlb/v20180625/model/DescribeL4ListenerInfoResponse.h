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

#ifndef TENCENTCLOUD_BMLB_V20180625_MODEL_DESCRIBEL4LISTENERINFORESPONSE_H_
#define TENCENTCLOUD_BMLB_V20180625_MODEL_DESCRIBEL4LISTENERINFORESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/bmlb/v20180625/model/L4ListenerInfo.h>


namespace TencentCloud
{
    namespace Bmlb
    {
        namespace V20180625
        {
            namespace Model
            {
                /**
                * DescribeL4ListenerInfo返回参数结构体
                */
                class DescribeL4ListenerInfoResponse : public AbstractModel
                {
                public:
                    DescribeL4ListenerInfoResponse();
                    ~DescribeL4ListenerInfoResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取返回的四层监听器列表。
                     * @return ListenerSet 返回的四层监听器列表。
                     * 
                     */
                    std::vector<L4ListenerInfo> GetListenerSet() const;

                    /**
                     * 判断参数 ListenerSet 是否已赋值
                     * @return ListenerSet 是否已赋值
                     * 
                     */
                    bool ListenerSetHasBeenSet() const;

                private:

                    /**
                     * 返回的四层监听器列表。
                     */
                    std::vector<L4ListenerInfo> m_listenerSet;
                    bool m_listenerSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BMLB_V20180625_MODEL_DESCRIBEL4LISTENERINFORESPONSE_H_
