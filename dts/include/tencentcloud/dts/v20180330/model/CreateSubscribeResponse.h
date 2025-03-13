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

#ifndef TENCENTCLOUD_DTS_V20180330_MODEL_CREATESUBSCRIBERESPONSE_H_
#define TENCENTCLOUD_DTS_V20180330_MODEL_CREATESUBSCRIBERESPONSE_H_

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
                * CreateSubscribe返回参数结构体
                */
                class CreateSubscribeResponse : public AbstractModel
                {
                public:
                    CreateSubscribeResponse();
                    ~CreateSubscribeResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取数据订阅实例的ID数组
                     * @return SubscribeIds 数据订阅实例的ID数组
                     * 
                     */
                    std::vector<std::string> GetSubscribeIds() const;

                    /**
                     * 判断参数 SubscribeIds 是否已赋值
                     * @return SubscribeIds 是否已赋值
                     * 
                     */
                    bool SubscribeIdsHasBeenSet() const;

                private:

                    /**
                     * 数据订阅实例的ID数组
                     */
                    std::vector<std::string> m_subscribeIds;
                    bool m_subscribeIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20180330_MODEL_CREATESUBSCRIBERESPONSE_H_
