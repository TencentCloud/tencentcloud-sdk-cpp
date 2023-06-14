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

#ifndef TENCENTCLOUD_GAAP_V20180529_MODEL_SRCADDRESSINFO_H_
#define TENCENTCLOUD_GAAP_V20180529_MODEL_SRCADDRESSINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Gaap
    {
        namespace V20180529
        {
            namespace Model
            {
                /**
                * 网络加速的原地址信息
                */
                class SrcAddressInfo : public AbstractModel
                {
                public:
                    SrcAddressInfo();
                    ~SrcAddressInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取内网Ip4地址
                     * @return SrcIpv4 内网Ip4地址
                     * 
                     */
                    std::string GetSrcIpv4() const;

                    /**
                     * 设置内网Ip4地址
                     * @param _srcIpv4 内网Ip4地址
                     * 
                     */
                    void SetSrcIpv4(const std::string& _srcIpv4);

                    /**
                     * 判断参数 SrcIpv4 是否已赋值
                     * @return SrcIpv4 是否已赋值
                     * 
                     */
                    bool SrcIpv4HasBeenSet() const;

                    /**
                     * 获取公网Ip4地址
                     * @return SrcPublicIpv4 公网Ip4地址
                     * 
                     */
                    std::string GetSrcPublicIpv4() const;

                    /**
                     * 设置公网Ip4地址
                     * @param _srcPublicIpv4 公网Ip4地址
                     * 
                     */
                    void SetSrcPublicIpv4(const std::string& _srcPublicIpv4);

                    /**
                     * 判断参数 SrcPublicIpv4 是否已赋值
                     * @return SrcPublicIpv4 是否已赋值
                     * 
                     */
                    bool SrcPublicIpv4HasBeenSet() const;

                private:

                    /**
                     * 内网Ip4地址
                     */
                    std::string m_srcIpv4;
                    bool m_srcIpv4HasBeenSet;

                    /**
                     * 公网Ip4地址
                     */
                    std::string m_srcPublicIpv4;
                    bool m_srcPublicIpv4HasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GAAP_V20180529_MODEL_SRCADDRESSINFO_H_
