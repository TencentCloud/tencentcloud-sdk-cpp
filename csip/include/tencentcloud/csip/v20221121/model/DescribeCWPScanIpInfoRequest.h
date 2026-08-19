/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBECWPSCANIPINFOREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBECWPSCANIPINFOREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DescribeCWPScanIpInfo请求参数结构体
                */
                class DescribeCWPScanIpInfoRequest : public AbstractModel
                {
                public:
                    DescribeCWPScanIpInfoRequest();
                    ~DescribeCWPScanIpInfoRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>IP地址</p>
                     * @return IP <p>IP地址</p>
                     * 
                     */
                    std::string GetIP() const;

                    /**
                     * 设置<p>IP地址</p>
                     * @param _iP <p>IP地址</p>
                     * 
                     */
                    void SetIP(const std::string& _iP);

                    /**
                     * 判断参数 IP 是否已赋值
                     * @return IP 是否已赋值
                     * 
                     */
                    bool IPHasBeenSet() const;

                private:

                    /**
                     * <p>IP地址</p>
                     */
                    std::string m_iP;
                    bool m_iPHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBECWPSCANIPINFOREQUEST_H_
