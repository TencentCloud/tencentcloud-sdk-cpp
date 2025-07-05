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

#ifndef TENCENTCLOUD_GSE_V20191112_MODEL_SEARCHGAMESERVERSESSIONSRESPONSE_H_
#define TENCENTCLOUD_GSE_V20191112_MODEL_SEARCHGAMESERVERSESSIONSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/gse/v20191112/model/GameServerSession.h>


namespace TencentCloud
{
    namespace Gse
    {
        namespace V20191112
        {
            namespace Model
            {
                /**
                * SearchGameServerSessions返回参数结构体
                */
                class SearchGameServerSessionsResponse : public AbstractModel
                {
                public:
                    SearchGameServerSessionsResponse();
                    ~SearchGameServerSessionsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取游戏服务器会话列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return GameServerSessions 游戏服务器会话列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<GameServerSession> GetGameServerSessions() const;

                    /**
                     * 判断参数 GameServerSessions 是否已赋值
                     * @return GameServerSessions 是否已赋值
                     * 
                     */
                    bool GameServerSessionsHasBeenSet() const;

                    /**
                     * 获取页偏移，用于查询下一页，最小长度不小于1个ASCII字符，最大长度不超过1024个ASCII字符
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NextToken 页偏移，用于查询下一页，最小长度不小于1个ASCII字符，最大长度不超过1024个ASCII字符
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetNextToken() const;

                    /**
                     * 判断参数 NextToken 是否已赋值
                     * @return NextToken 是否已赋值
                     * 
                     */
                    bool NextTokenHasBeenSet() const;

                private:

                    /**
                     * 游戏服务器会话列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<GameServerSession> m_gameServerSessions;
                    bool m_gameServerSessionsHasBeenSet;

                    /**
                     * 页偏移，用于查询下一页，最小长度不小于1个ASCII字符，最大长度不超过1024个ASCII字符
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_nextToken;
                    bool m_nextTokenHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GSE_V20191112_MODEL_SEARCHGAMESERVERSESSIONSRESPONSE_H_
