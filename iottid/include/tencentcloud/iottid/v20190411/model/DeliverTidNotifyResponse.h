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

#ifndef TENCENTCLOUD_IOTTID_V20190411_MODEL_DELIVERTIDNOTIFYRESPONSE_H_
#define TENCENTCLOUD_IOTTID_V20190411_MODEL_DELIVERTIDNOTIFYRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iottid
    {
        namespace V20190411
        {
            namespace Model
            {
                /**
                * DeliverTidNotify返回参数结构体
                */
                class DeliverTidNotifyResponse : public AbstractModel
                {
                public:
                    DeliverTidNotifyResponse();
                    ~DeliverTidNotifyResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取剩余空发数量
                     * @return RemaindCount 剩余空发数量
                     * 
                     */
                    uint64_t GetRemaindCount() const;

                    /**
                     * 判断参数 RemaindCount 是否已赋值
                     * @return RemaindCount 是否已赋值
                     * 
                     */
                    bool RemaindCountHasBeenSet() const;

                    /**
                     * 获取已回执的TID编码
                     * @return Tid 已回执的TID编码
                     * 
                     */
                    std::string GetTid() const;

                    /**
                     * 判断参数 Tid 是否已赋值
                     * @return Tid 是否已赋值
                     * 
                     */
                    bool TidHasBeenSet() const;

                    /**
                     * 获取产品公钥
                     * @return ProductKey 产品公钥
                     * 
                     */
                    std::string GetProductKey() const;

                    /**
                     * 判断参数 ProductKey 是否已赋值
                     * @return ProductKey 是否已赋值
                     * 
                     */
                    bool ProductKeyHasBeenSet() const;

                private:

                    /**
                     * 剩余空发数量
                     */
                    uint64_t m_remaindCount;
                    bool m_remaindCountHasBeenSet;

                    /**
                     * 已回执的TID编码
                     */
                    std::string m_tid;
                    bool m_tidHasBeenSet;

                    /**
                     * 产品公钥
                     */
                    std::string m_productKey;
                    bool m_productKeyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTTID_V20190411_MODEL_DELIVERTIDNOTIFYRESPONSE_H_
