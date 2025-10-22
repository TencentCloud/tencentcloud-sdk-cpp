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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_MULTIPATHGATEWAYORIGINACLINFO_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_MULTIPATHGATEWAYORIGINACLINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/MultiPathGatewayCurrentOriginACL.h>
#include <tencentcloud/teo/v20220901/model/MultiPathGatewayNextOriginACL.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * 多通道网关示例实例与回源 IP 网段的绑定关系，以及回源 IP 网段详情。
                */
                class MultiPathGatewayOriginACLInfo : public AbstractModel
                {
                public:
                    MultiPathGatewayOriginACLInfo();
                    ~MultiPathGatewayOriginACLInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取当前生效的回源 IP 网段。
                     * @return MultiPathGatewayCurrentOriginACL 当前生效的回源 IP 网段。
                     * 
                     */
                    MultiPathGatewayCurrentOriginACL GetMultiPathGatewayCurrentOriginACL() const;

                    /**
                     * 设置当前生效的回源 IP 网段。
                     * @param _multiPathGatewayCurrentOriginACL 当前生效的回源 IP 网段。
                     * 
                     */
                    void SetMultiPathGatewayCurrentOriginACL(const MultiPathGatewayCurrentOriginACL& _multiPathGatewayCurrentOriginACL);

                    /**
                     * 判断参数 MultiPathGatewayCurrentOriginACL 是否已赋值
                     * @return MultiPathGatewayCurrentOriginACL 是否已赋值
                     * 
                     */
                    bool MultiPathGatewayCurrentOriginACLHasBeenSet() const;

                    /**
                     * 获取当回源 IP 网段发生更新时，该字段会返回下一个版本将要生效的回源 IP 网段，包含与当前回源 IP 网段的对比。无更新时该字段为空。
                     * @return MultiPathGatewayNextOriginACL 当回源 IP 网段发生更新时，该字段会返回下一个版本将要生效的回源 IP 网段，包含与当前回源 IP 网段的对比。无更新时该字段为空。
                     * 
                     */
                    MultiPathGatewayNextOriginACL GetMultiPathGatewayNextOriginACL() const;

                    /**
                     * 设置当回源 IP 网段发生更新时，该字段会返回下一个版本将要生效的回源 IP 网段，包含与当前回源 IP 网段的对比。无更新时该字段为空。
                     * @param _multiPathGatewayNextOriginACL 当回源 IP 网段发生更新时，该字段会返回下一个版本将要生效的回源 IP 网段，包含与当前回源 IP 网段的对比。无更新时该字段为空。
                     * 
                     */
                    void SetMultiPathGatewayNextOriginACL(const MultiPathGatewayNextOriginACL& _multiPathGatewayNextOriginACL);

                    /**
                     * 判断参数 MultiPathGatewayNextOriginACL 是否已赋值
                     * @return MultiPathGatewayNextOriginACL 是否已赋值
                     * 
                     */
                    bool MultiPathGatewayNextOriginACLHasBeenSet() const;

                private:

                    /**
                     * 当前生效的回源 IP 网段。
                     */
                    MultiPathGatewayCurrentOriginACL m_multiPathGatewayCurrentOriginACL;
                    bool m_multiPathGatewayCurrentOriginACLHasBeenSet;

                    /**
                     * 当回源 IP 网段发生更新时，该字段会返回下一个版本将要生效的回源 IP 网段，包含与当前回源 IP 网段的对比。无更新时该字段为空。
                     */
                    MultiPathGatewayNextOriginACL m_multiPathGatewayNextOriginACL;
                    bool m_multiPathGatewayNextOriginACLHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_MULTIPATHGATEWAYORIGINACLINFO_H_
