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

#ifndef TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_PORTSEGMENT_H_
#define TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_PORTSEGMENT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Antiddos
    {
        namespace V20200309
        {
            namespace Model
            {
                /**
                * 端口段信息
                */
                class PortSegment : public AbstractModel
                {
                public:
                    PortSegment();
                    ~PortSegment() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取起始端口，取值1~65535
                     * @return BeginPort 起始端口，取值1~65535
                     * 
                     */
                    uint64_t GetBeginPort() const;

                    /**
                     * 设置起始端口，取值1~65535
                     * @param _beginPort 起始端口，取值1~65535
                     * 
                     */
                    void SetBeginPort(const uint64_t& _beginPort);

                    /**
                     * 判断参数 BeginPort 是否已赋值
                     * @return BeginPort 是否已赋值
                     * 
                     */
                    bool BeginPortHasBeenSet() const;

                    /**
                     * 获取结束端口，取值1~65535，必须不小于起始端口
                     * @return EndPort 结束端口，取值1~65535，必须不小于起始端口
                     * 
                     */
                    uint64_t GetEndPort() const;

                    /**
                     * 设置结束端口，取值1~65535，必须不小于起始端口
                     * @param _endPort 结束端口，取值1~65535，必须不小于起始端口
                     * 
                     */
                    void SetEndPort(const uint64_t& _endPort);

                    /**
                     * 判断参数 EndPort 是否已赋值
                     * @return EndPort 是否已赋值
                     * 
                     */
                    bool EndPortHasBeenSet() const;

                private:

                    /**
                     * 起始端口，取值1~65535
                     */
                    uint64_t m_beginPort;
                    bool m_beginPortHasBeenSet;

                    /**
                     * 结束端口，取值1~65535，必须不小于起始端口
                     */
                    uint64_t m_endPort;
                    bool m_endPortHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_PORTSEGMENT_H_
