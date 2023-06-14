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

#ifndef TENCENTCLOUD_BMA_V20210624_MODEL_CREATEBPOFFLINETICKETREQUEST_H_
#define TENCENTCLOUD_BMA_V20210624_MODEL_CREATEBPOFFLINETICKETREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bma
    {
        namespace V20210624
        {
            namespace Model
            {
                /**
                * CreateBPOfflineTicket请求参数结构体
                */
                class CreateBPOfflineTicketRequest : public AbstractModel
                {
                public:
                    CreateBPOfflineTicketRequest();
                    ~CreateBPOfflineTicketRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取仿冒网址ID
                     * @return FakeURLId 仿冒网址ID
                     * 
                     */
                    int64_t GetFakeURLId() const;

                    /**
                     * 设置仿冒网址ID
                     * @param _fakeURLId 仿冒网址ID
                     * 
                     */
                    void SetFakeURLId(const int64_t& _fakeURLId);

                    /**
                     * 判断参数 FakeURLId 是否已赋值
                     * @return FakeURLId 是否已赋值
                     * 
                     */
                    bool FakeURLIdHasBeenSet() const;

                private:

                    /**
                     * 仿冒网址ID
                     */
                    int64_t m_fakeURLId;
                    bool m_fakeURLIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BMA_V20210624_MODEL_CREATEBPOFFLINETICKETREQUEST_H_
