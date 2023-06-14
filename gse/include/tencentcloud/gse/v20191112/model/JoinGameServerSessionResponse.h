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

#ifndef TENCENTCLOUD_GSE_V20191112_MODEL_JOINGAMESERVERSESSIONRESPONSE_H_
#define TENCENTCLOUD_GSE_V20191112_MODEL_JOINGAMESERVERSESSIONRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/gse/v20191112/model/PlayerSession.h>


namespace TencentCloud
{
    namespace Gse
    {
        namespace V20191112
        {
            namespace Model
            {
                /**
                * JoinGameServerSession返回参数结构体
                */
                class JoinGameServerSessionResponse : public AbstractModel
                {
                public:
                    JoinGameServerSessionResponse();
                    ~JoinGameServerSessionResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取玩家会话
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PlayerSession 玩家会话
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    PlayerSession GetPlayerSession() const;

                    /**
                     * 判断参数 PlayerSession 是否已赋值
                     * @return PlayerSession 是否已赋值
                     * 
                     */
                    bool PlayerSessionHasBeenSet() const;

                private:

                    /**
                     * 玩家会话
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    PlayerSession m_playerSession;
                    bool m_playerSessionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GSE_V20191112_MODEL_JOINGAMESERVERSESSIONRESPONSE_H_
