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

#ifndef TENCENTCLOUD_ESSBASIC_V20210526_MODEL_JUMPEVENT_H_
#define TENCENTCLOUD_ESSBASIC_V20210526_MODEL_JUMPEVENT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Essbasic
    {
        namespace V20210526
        {
            namespace Model
            {
                /**
                * 跳转事件的结构体，其中包括认证期间收录，授权书审核，企业认证的回跳事件。
                */
                class JumpEvent : public AbstractModel
                {
                public:
                    JumpEvent();
                    ~JumpEvent() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取跳转事件枚举，
* 1 - 企业收录。
* 2 - 超管授权书审核。
* 3 - 认证完成。
                     * @return JumpEventType 跳转事件枚举，
* 1 - 企业收录。
* 2 - 超管授权书审核。
* 3 - 认证完成。
                     * 
                     */
                    uint64_t GetJumpEventType() const;

                    /**
                     * 设置跳转事件枚举，
* 1 - 企业收录。
* 2 - 超管授权书审核。
* 3 - 认证完成。
                     * @param _jumpEventType 跳转事件枚举，
* 1 - 企业收录。
* 2 - 超管授权书审核。
* 3 - 认证完成。
                     * 
                     */
                    void SetJumpEventType(const uint64_t& _jumpEventType);

                    /**
                     * 判断参数 JumpEventType 是否已赋值
                     * @return JumpEventType 是否已赋值
                     * 
                     */
                    bool JumpEventTypeHasBeenSet() const;

                    /**
                     * 获取为认证成功后页面进行回跳的URL，请确保回跳地址的可用性。
Endpoint如果是APP 类型，请传递<font color="red">"true"</font>
如果 Endpoint 是 H5 类型，请参考文档[跳转电子签H5](https://qian.tencent.com/developers/partner/openqianh5)
p.s. 如果Endpoint是 APP，传递的跳转地址无效，不会进行跳转，仅会进行回跳。
                     * @return JumpUrl 为认证成功后页面进行回跳的URL，请确保回跳地址的可用性。
Endpoint如果是APP 类型，请传递<font color="red">"true"</font>
如果 Endpoint 是 H5 类型，请参考文档[跳转电子签H5](https://qian.tencent.com/developers/partner/openqianh5)
p.s. 如果Endpoint是 APP，传递的跳转地址无效，不会进行跳转，仅会进行回跳。
                     * 
                     */
                    std::string GetJumpUrl() const;

                    /**
                     * 设置为认证成功后页面进行回跳的URL，请确保回跳地址的可用性。
Endpoint如果是APP 类型，请传递<font color="red">"true"</font>
如果 Endpoint 是 H5 类型，请参考文档[跳转电子签H5](https://qian.tencent.com/developers/partner/openqianh5)
p.s. 如果Endpoint是 APP，传递的跳转地址无效，不会进行跳转，仅会进行回跳。
                     * @param _jumpUrl 为认证成功后页面进行回跳的URL，请确保回跳地址的可用性。
Endpoint如果是APP 类型，请传递<font color="red">"true"</font>
如果 Endpoint 是 H5 类型，请参考文档[跳转电子签H5](https://qian.tencent.com/developers/partner/openqianh5)
p.s. 如果Endpoint是 APP，传递的跳转地址无效，不会进行跳转，仅会进行回跳。
                     * 
                     */
                    void SetJumpUrl(const std::string& _jumpUrl);

                    /**
                     * 判断参数 JumpUrl 是否已赋值
                     * @return JumpUrl 是否已赋值
                     * 
                     */
                    bool JumpUrlHasBeenSet() const;

                private:

                    /**
                     * 跳转事件枚举，
* 1 - 企业收录。
* 2 - 超管授权书审核。
* 3 - 认证完成。
                     */
                    uint64_t m_jumpEventType;
                    bool m_jumpEventTypeHasBeenSet;

                    /**
                     * 为认证成功后页面进行回跳的URL，请确保回跳地址的可用性。
Endpoint如果是APP 类型，请传递<font color="red">"true"</font>
如果 Endpoint 是 H5 类型，请参考文档[跳转电子签H5](https://qian.tencent.com/developers/partner/openqianh5)
p.s. 如果Endpoint是 APP，传递的跳转地址无效，不会进行跳转，仅会进行回跳。
                     */
                    std::string m_jumpUrl;
                    bool m_jumpUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20210526_MODEL_JUMPEVENT_H_
