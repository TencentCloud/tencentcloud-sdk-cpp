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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_TDWPARAM_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_TDWPARAM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ckafka
    {
        namespace V20190819
        {
            namespace Model
            {
                /**
                * Tdw类型入参
                */
                class TdwParam : public AbstractModel
                {
                public:
                    TdwParam();
                    ~TdwParam() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Tdw的bid
                     * @return Bid Tdw的bid
                     */
                    std::string GetBid() const;

                    /**
                     * 设置Tdw的bid
                     * @param Bid Tdw的bid
                     */
                    void SetBid(const std::string& _bid);

                    /**
                     * 判断参数 Bid 是否已赋值
                     * @return Bid 是否已赋值
                     */
                    bool BidHasBeenSet() const;

                    /**
                     * 获取Tdw的tid
                     * @return Tid Tdw的tid
                     */
                    std::string GetTid() const;

                    /**
                     * 设置Tdw的tid
                     * @param Tid Tdw的tid
                     */
                    void SetTid(const std::string& _tid);

                    /**
                     * 判断参数 Tid 是否已赋值
                     * @return Tid 是否已赋值
                     */
                    bool TidHasBeenSet() const;

                    /**
                     * 获取是否为国内站，默认true
                     * @return IsDomestic 是否为国内站，默认true
                     */
                    bool GetIsDomestic() const;

                    /**
                     * 设置是否为国内站，默认true
                     * @param IsDomestic 是否为国内站，默认true
                     */
                    void SetIsDomestic(const bool& _isDomestic);

                    /**
                     * 判断参数 IsDomestic 是否已赋值
                     * @return IsDomestic 是否已赋值
                     */
                    bool IsDomesticHasBeenSet() const;

                private:

                    /**
                     * Tdw的bid
                     */
                    std::string m_bid;
                    bool m_bidHasBeenSet;

                    /**
                     * Tdw的tid
                     */
                    std::string m_tid;
                    bool m_tidHasBeenSet;

                    /**
                     * 是否为国内站，默认true
                     */
                    bool m_isDomestic;
                    bool m_isDomesticHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_TDWPARAM_H_
