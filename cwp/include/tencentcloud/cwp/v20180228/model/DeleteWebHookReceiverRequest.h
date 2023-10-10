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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DELETEWEBHOOKRECEIVERREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DELETEWEBHOOKRECEIVERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * DeleteWebHookReceiver请求参数结构体
                */
                class DeleteWebHookReceiverRequest : public AbstractModel
                {
                public:
                    DeleteWebHookReceiverRequest();
                    ~DeleteWebHookReceiverRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取id数组
                     * @return Ids id数组
                     * 
                     */
                    std::vector<int64_t> GetIds() const;

                    /**
                     * 设置id数组
                     * @param _ids id数组
                     * 
                     */
                    void SetIds(const std::vector<int64_t>& _ids);

                    /**
                     * 判断参数 Ids 是否已赋值
                     * @return Ids 是否已赋值
                     * 
                     */
                    bool IdsHasBeenSet() const;

                private:

                    /**
                     * id数组
                     */
                    std::vector<int64_t> m_ids;
                    bool m_idsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DELETEWEBHOOKRECEIVERREQUEST_H_
