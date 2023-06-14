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

#ifndef TENCENTCLOUD_TBAAS_V20180416_MODEL_CHANNELDETAILFORUSER_H_
#define TENCENTCLOUD_TBAAS_V20180416_MODEL_CHANNELDETAILFORUSER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tbaas/v20180416/model/PeerDetailForUser.h>


namespace TencentCloud
{
    namespace Tbaas
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * 通道详情信息
                */
                class ChannelDetailForUser : public AbstractModel
                {
                public:
                    ChannelDetailForUser();
                    ~ChannelDetailForUser() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取通道名称
                     * @return ChannelName 通道名称
                     * 
                     */
                    std::string GetChannelName() const;

                    /**
                     * 设置通道名称
                     * @param _channelName 通道名称
                     * 
                     */
                    void SetChannelName(const std::string& _channelName);

                    /**
                     * 判断参数 ChannelName 是否已赋值
                     * @return ChannelName 是否已赋值
                     * 
                     */
                    bool ChannelNameHasBeenSet() const;

                    /**
                     * 获取当前组织加入通道的节点列表
                     * @return PeerList 当前组织加入通道的节点列表
                     * 
                     */
                    std::vector<PeerDetailForUser> GetPeerList() const;

                    /**
                     * 设置当前组织加入通道的节点列表
                     * @param _peerList 当前组织加入通道的节点列表
                     * 
                     */
                    void SetPeerList(const std::vector<PeerDetailForUser>& _peerList);

                    /**
                     * 判断参数 PeerList 是否已赋值
                     * @return PeerList 是否已赋值
                     * 
                     */
                    bool PeerListHasBeenSet() const;

                private:

                    /**
                     * 通道名称
                     */
                    std::string m_channelName;
                    bool m_channelNameHasBeenSet;

                    /**
                     * 当前组织加入通道的节点列表
                     */
                    std::vector<PeerDetailForUser> m_peerList;
                    bool m_peerListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TBAAS_V20180416_MODEL_CHANNELDETAILFORUSER_H_
