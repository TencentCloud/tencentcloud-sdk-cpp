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

#ifndef TENCENTCLOUD_IOTVIDEO_V20201215_MODEL_CHECKFORWARDAUTHREQUEST_H_
#define TENCENTCLOUD_IOTVIDEO_V20201215_MODEL_CHECKFORWARDAUTHREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotvideo
    {
        namespace V20201215
        {
            namespace Model
            {
                /**
                * CheckForwardAuth请求参数结构体
                */
                class CheckForwardAuthRequest : public AbstractModel
                {
                public:
                    CheckForwardAuthRequest();
                    ~CheckForwardAuthRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取控制台Skey
                     * @return Skey 控制台Skey
                     * 
                     */
                    std::string GetSkey() const;

                    /**
                     * 设置控制台Skey
                     * @param _skey 控制台Skey
                     * 
                     */
                    void SetSkey(const std::string& _skey);

                    /**
                     * 判断参数 Skey 是否已赋值
                     * @return Skey 是否已赋值
                     * 
                     */
                    bool SkeyHasBeenSet() const;

                    /**
                     * 获取队列类型 0.CMQ  1.Ckafka
                     * @return QueueType 队列类型 0.CMQ  1.Ckafka
                     * 
                     */
                    uint64_t GetQueueType() const;

                    /**
                     * 设置队列类型 0.CMQ  1.Ckafka
                     * @param _queueType 队列类型 0.CMQ  1.Ckafka
                     * 
                     */
                    void SetQueueType(const uint64_t& _queueType);

                    /**
                     * 判断参数 QueueType 是否已赋值
                     * @return QueueType 是否已赋值
                     * 
                     */
                    bool QueueTypeHasBeenSet() const;

                private:

                    /**
                     * 控制台Skey
                     */
                    std::string m_skey;
                    bool m_skeyHasBeenSet;

                    /**
                     * 队列类型 0.CMQ  1.Ckafka
                     */
                    uint64_t m_queueType;
                    bool m_queueTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTVIDEO_V20201215_MODEL_CHECKFORWARDAUTHREQUEST_H_
