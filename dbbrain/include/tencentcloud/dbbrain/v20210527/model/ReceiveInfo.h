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

#ifndef TENCENTCLOUD_DBBRAIN_V20210527_MODEL_RECEIVEINFO_H_
#define TENCENTCLOUD_DBBRAIN_V20210527_MODEL_RECEIVEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dbbrain/v20210527/model/ReceiveUin.h>


namespace TencentCloud
{
    namespace Dbbrain
    {
        namespace V20210527
        {
            namespace Model
            {
                /**
                * 接收组信息
                */
                class ReceiveInfo : public AbstractModel
                {
                public:
                    ReceiveInfo();
                    ~ReceiveInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取接收组
                     * @return ReceiveGroup 接收组
                     * 
                     */
                    std::vector<int64_t> GetReceiveGroup() const;

                    /**
                     * 设置接收组
                     * @param _receiveGroup 接收组
                     * 
                     */
                    void SetReceiveGroup(const std::vector<int64_t>& _receiveGroup);

                    /**
                     * 判断参数 ReceiveGroup 是否已赋值
                     * @return ReceiveGroup 是否已赋值
                     * 
                     */
                    bool ReceiveGroupHasBeenSet() const;

                    /**
                     * 获取最后接收时间
                     * @return EndReceiveTime 最后接收时间
                     * 
                     */
                    std::string GetEndReceiveTime() const;

                    /**
                     * 设置最后接收时间
                     * @param _endReceiveTime 最后接收时间
                     * 
                     */
                    void SetEndReceiveTime(const std::string& _endReceiveTime);

                    /**
                     * 判断参数 EndReceiveTime 是否已赋值
                     * @return EndReceiveTime 是否已赋值
                     * 
                     */
                    bool EndReceiveTimeHasBeenSet() const;

                    /**
                     * 获取接收名
                     * @return ReceiveName 接收名
                     * 
                     */
                    std::string GetReceiveName() const;

                    /**
                     * 设置接收名
                     * @param _receiveName 接收名
                     * 
                     */
                    void SetReceiveName(const std::string& _receiveName);

                    /**
                     * 判断参数 ReceiveName 是否已赋值
                     * @return ReceiveName 是否已赋值
                     * 
                     */
                    bool ReceiveNameHasBeenSet() const;

                    /**
                     * 获取推送渠道
                     * @return SendChannel 推送渠道
                     * 
                     */
                    std::vector<int64_t> GetSendChannel() const;

                    /**
                     * 设置推送渠道
                     * @param _sendChannel 推送渠道
                     * 
                     */
                    void SetSendChannel(const std::vector<int64_t>& _sendChannel);

                    /**
                     * 判断参数 SendChannel 是否已赋值
                     * @return SendChannel 是否已赋值
                     * 
                     */
                    bool SendChannelHasBeenSet() const;

                    /**
                     * 获取开始时间
                     * @return StartReceiveTime 开始时间
                     * 
                     */
                    std::string GetStartReceiveTime() const;

                    /**
                     * 设置开始时间
                     * @param _startReceiveTime 开始时间
                     * 
                     */
                    void SetStartReceiveTime(const std::string& _startReceiveTime);

                    /**
                     * 判断参数 StartReceiveTime 是否已赋值
                     * @return StartReceiveTime 是否已赋值
                     * 
                     */
                    bool StartReceiveTimeHasBeenSet() const;

                    /**
                     * 获取接收用户列表
                     * @return ReceiveUin 接收用户列表
                     * 
                     */
                    std::vector<ReceiveUin> GetReceiveUin() const;

                    /**
                     * 设置接收用户列表
                     * @param _receiveUin 接收用户列表
                     * 
                     */
                    void SetReceiveUin(const std::vector<ReceiveUin>& _receiveUin);

                    /**
                     * 判断参数 ReceiveUin 是否已赋值
                     * @return ReceiveUin 是否已赋值
                     * 
                     */
                    bool ReceiveUinHasBeenSet() const;

                private:

                    /**
                     * 接收组
                     */
                    std::vector<int64_t> m_receiveGroup;
                    bool m_receiveGroupHasBeenSet;

                    /**
                     * 最后接收时间
                     */
                    std::string m_endReceiveTime;
                    bool m_endReceiveTimeHasBeenSet;

                    /**
                     * 接收名
                     */
                    std::string m_receiveName;
                    bool m_receiveNameHasBeenSet;

                    /**
                     * 推送渠道
                     */
                    std::vector<int64_t> m_sendChannel;
                    bool m_sendChannelHasBeenSet;

                    /**
                     * 开始时间
                     */
                    std::string m_startReceiveTime;
                    bool m_startReceiveTimeHasBeenSet;

                    /**
                     * 接收用户列表
                     */
                    std::vector<ReceiveUin> m_receiveUin;
                    bool m_receiveUinHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBBRAIN_V20210527_MODEL_RECEIVEINFO_H_
