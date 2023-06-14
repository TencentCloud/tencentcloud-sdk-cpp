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

#ifndef TENCENTCLOUD_IECP_V20210914_MODEL_GETMARKETCOMPONENTREQUEST_H_
#define TENCENTCLOUD_IECP_V20210914_MODEL_GETMARKETCOMPONENTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iecp
    {
        namespace V20210914
        {
            namespace Model
            {
                /**
                * GetMarketComponent请求参数结构体
                */
                class GetMarketComponentRequest : public AbstractModel
                {
                public:
                    GetMarketComponentRequest();
                    ~GetMarketComponentRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取组件ID
                     * @return ID 组件ID
                     * 
                     */
                    int64_t GetID() const;

                    /**
                     * 设置组件ID
                     * @param _iD 组件ID
                     * 
                     */
                    void SetID(const int64_t& _iD);

                    /**
                     * 判断参数 ID 是否已赋值
                     * @return ID 是否已赋值
                     * 
                     */
                    bool IDHasBeenSet() const;

                private:

                    /**
                     * 组件ID
                     */
                    int64_t m_iD;
                    bool m_iDHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IECP_V20210914_MODEL_GETMARKETCOMPONENTREQUEST_H_
