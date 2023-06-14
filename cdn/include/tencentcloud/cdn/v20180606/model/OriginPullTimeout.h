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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_ORIGINPULLTIMEOUT_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_ORIGINPULLTIMEOUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            namespace Model
            {
                /**
                * 回源超时配置
                */
                class OriginPullTimeout : public AbstractModel
                {
                public:
                    OriginPullTimeout();
                    ~OriginPullTimeout() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取回源建连超时时间，单位为秒，要求5~60之间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ConnectTimeout 回源建连超时时间，单位为秒，要求5~60之间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetConnectTimeout() const;

                    /**
                     * 设置回源建连超时时间，单位为秒，要求5~60之间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _connectTimeout 回源建连超时时间，单位为秒，要求5~60之间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetConnectTimeout(const uint64_t& _connectTimeout);

                    /**
                     * 判断参数 ConnectTimeout 是否已赋值
                     * @return ConnectTimeout 是否已赋值
                     * 
                     */
                    bool ConnectTimeoutHasBeenSet() const;

                    /**
                     * 获取回源接收超时时间，单位为秒，要求10 ~ 300之间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ReceiveTimeout 回源接收超时时间，单位为秒，要求10 ~ 300之间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetReceiveTimeout() const;

                    /**
                     * 设置回源接收超时时间，单位为秒，要求10 ~ 300之间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _receiveTimeout 回源接收超时时间，单位为秒，要求10 ~ 300之间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetReceiveTimeout(const uint64_t& _receiveTimeout);

                    /**
                     * 判断参数 ReceiveTimeout 是否已赋值
                     * @return ReceiveTimeout 是否已赋值
                     * 
                     */
                    bool ReceiveTimeoutHasBeenSet() const;

                private:

                    /**
                     * 回源建连超时时间，单位为秒，要求5~60之间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_connectTimeout;
                    bool m_connectTimeoutHasBeenSet;

                    /**
                     * 回源接收超时时间，单位为秒，要求10 ~ 300之间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_receiveTimeout;
                    bool m_receiveTimeoutHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_ORIGINPULLTIMEOUT_H_
