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

#ifndef TENCENTCLOUD_IOTVIDEOINDUSTRY_V20201201_MODEL_MODIFYBINDSCENECHANNELSREQUEST_H_
#define TENCENTCLOUD_IOTVIDEOINDUSTRY_V20201201_MODEL_MODIFYBINDSCENECHANNELSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iotvideoindustry/v20201201/model/ChannelItem.h>


namespace TencentCloud
{
    namespace Iotvideoindustry
    {
        namespace V20201201
        {
            namespace Model
            {
                /**
                * ModifyBindSceneChannels请求参数结构体
                */
                class ModifyBindSceneChannelsRequest : public AbstractModel
                {
                public:
                    ModifyBindSceneChannelsRequest();
                    ~ModifyBindSceneChannelsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取场景ID
                     * @return SceneId 场景ID
                     * 
                     */
                    int64_t GetSceneId() const;

                    /**
                     * 设置场景ID
                     * @param _sceneId 场景ID
                     * 
                     */
                    void SetSceneId(const int64_t& _sceneId);

                    /**
                     * 判断参数 SceneId 是否已赋值
                     * @return SceneId 是否已赋值
                     * 
                     */
                    bool SceneIdHasBeenSet() const;

                    /**
                     * 获取1: 绑定 2: 解绑
                     * @return Type 1: 绑定 2: 解绑
                     * 
                     */
                    int64_t GetType() const;

                    /**
                     * 设置1: 绑定 2: 解绑
                     * @param _type 1: 绑定 2: 解绑
                     * 
                     */
                    void SetType(const int64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取通道列表
                     * @return Channels 通道列表
                     * 
                     */
                    std::vector<ChannelItem> GetChannels() const;

                    /**
                     * 设置通道列表
                     * @param _channels 通道列表
                     * 
                     */
                    void SetChannels(const std::vector<ChannelItem>& _channels);

                    /**
                     * 判断参数 Channels 是否已赋值
                     * @return Channels 是否已赋值
                     * 
                     */
                    bool ChannelsHasBeenSet() const;

                private:

                    /**
                     * 场景ID
                     */
                    int64_t m_sceneId;
                    bool m_sceneIdHasBeenSet;

                    /**
                     * 1: 绑定 2: 解绑
                     */
                    int64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 通道列表
                     */
                    std::vector<ChannelItem> m_channels;
                    bool m_channelsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTVIDEOINDUSTRY_V20201201_MODEL_MODIFYBINDSCENECHANNELSREQUEST_H_
