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

#ifndef TENCENTCLOUD_GAAP_V20180529_MODEL_DESTADDRESSINFO_H_
#define TENCENTCLOUD_GAAP_V20180529_MODEL_DESTADDRESSINFO_H_

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
                * 网络加速的目标地址信息
                */
                class DestAddressInfo : public AbstractModel
                {
                public:
                    DestAddressInfo();
                    ~DestAddressInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取加速的目标IP，可多ip一起加速
                     * @return DestIp 加速的目标IP，可多ip一起加速
                     */
                    std::vector<std::string> GetDestIp() const;

                    /**
                     * 设置加速的目标IP，可多ip一起加速
                     * @param DestIp 加速的目标IP，可多ip一起加速
                     */
                    void SetDestIp(const std::vector<std::string>& _destIp);

                    /**
                     * 判断参数 DestIp 是否已赋值
                     * @return DestIp 是否已赋值
                     */
                    bool DestIpHasBeenSet() const;

                private:

                    /**
                     * 加速的目标IP，可多ip一起加速
                     */
                    std::vector<std::string> m_destIp;
                    bool m_destIpHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GAAP_V20180529_MODEL_DESTADDRESSINFO_H_
