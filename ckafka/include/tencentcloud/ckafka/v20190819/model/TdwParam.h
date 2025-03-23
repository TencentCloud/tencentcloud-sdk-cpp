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
                     * 
                     */
                    std::string GetBid() const;

                    /**
                     * 设置Tdw的bid
                     * @param _bid Tdw的bid
                     * 
                     */
                    void SetBid(const std::string& _bid);

                    /**
                     * 判断参数 Bid 是否已赋值
                     * @return Bid 是否已赋值
                     * 
                     */
                    bool BidHasBeenSet() const;

                    /**
                     * 获取Tdw的tid
                     * @return Tid Tdw的tid
                     * 
                     */
                    std::string GetTid() const;

                    /**
                     * 设置Tdw的tid
                     * @param _tid Tdw的tid
                     * 
                     */
                    void SetTid(const std::string& _tid);

                    /**
                     * 判断参数 Tid 是否已赋值
                     * @return Tid 是否已赋值
                     * 
                     */
                    bool TidHasBeenSet() const;

                    /**
                     * 获取默认true
                     * @return IsDomestic 默认true
                     * 
                     */
                    bool GetIsDomestic() const;

                    /**
                     * 设置默认true
                     * @param _isDomestic 默认true
                     * 
                     */
                    void SetIsDomestic(const bool& _isDomestic);

                    /**
                     * 判断参数 IsDomestic 是否已赋值
                     * @return IsDomestic 是否已赋值
                     * 
                     */
                    bool IsDomesticHasBeenSet() const;

                    /**
                     * 获取TDW地址，默认tl-tdbank-tdmanager.tencent-distribute.com
                     * @return TdwHost TDW地址，默认tl-tdbank-tdmanager.tencent-distribute.com
                     * 
                     */
                    std::string GetTdwHost() const;

                    /**
                     * 设置TDW地址，默认tl-tdbank-tdmanager.tencent-distribute.com
                     * @param _tdwHost TDW地址，默认tl-tdbank-tdmanager.tencent-distribute.com
                     * 
                     */
                    void SetTdwHost(const std::string& _tdwHost);

                    /**
                     * 判断参数 TdwHost 是否已赋值
                     * @return TdwHost 是否已赋值
                     * 
                     */
                    bool TdwHostHasBeenSet() const;

                    /**
                     * 获取TDW端口，默认8099
                     * @return TdwPort TDW端口，默认8099
                     * 
                     */
                    int64_t GetTdwPort() const;

                    /**
                     * 设置TDW端口，默认8099
                     * @param _tdwPort TDW端口，默认8099
                     * 
                     */
                    void SetTdwPort(const int64_t& _tdwPort);

                    /**
                     * 判断参数 TdwPort 是否已赋值
                     * @return TdwPort 是否已赋值
                     * 
                     */
                    bool TdwPortHasBeenSet() const;

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
                     * 默认true
                     */
                    bool m_isDomestic;
                    bool m_isDomesticHasBeenSet;

                    /**
                     * TDW地址，默认tl-tdbank-tdmanager.tencent-distribute.com
                     */
                    std::string m_tdwHost;
                    bool m_tdwHostHasBeenSet;

                    /**
                     * TDW端口，默认8099
                     */
                    int64_t m_tdwPort;
                    bool m_tdwPortHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_TDWPARAM_H_
