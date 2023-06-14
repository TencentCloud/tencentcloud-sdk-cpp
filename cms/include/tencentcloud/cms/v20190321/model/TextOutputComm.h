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

#ifndef TENCENTCLOUD_CMS_V20190321_MODEL_TEXTOUTPUTCOMM_H_
#define TENCENTCLOUD_CMS_V20190321_MODEL_TEXTOUTPUTCOMM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cms
    {
        namespace V20190321
        {
            namespace Model
            {
                /**
                * 消息类输出公共参数
                */
                class TextOutputComm : public AbstractModel
                {
                public:
                    TextOutputComm();
                    ~TextOutputComm() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取接口唯一ID，旁路调用接口返回有该字段，标识唯一接口
                     * @return BUCtrlID 接口唯一ID，旁路调用接口返回有该字段，标识唯一接口
                     * 
                     */
                    int64_t GetBUCtrlID() const;

                    /**
                     * 设置接口唯一ID，旁路调用接口返回有该字段，标识唯一接口
                     * @param _bUCtrlID 接口唯一ID，旁路调用接口返回有该字段，标识唯一接口
                     * 
                     */
                    void SetBUCtrlID(const int64_t& _bUCtrlID);

                    /**
                     * 判断参数 BUCtrlID 是否已赋值
                     * @return BUCtrlID 是否已赋值
                     * 
                     */
                    bool BUCtrlIDHasBeenSet() const;

                    /**
                     * 获取消息发送时间
                     * @return SendTime 消息发送时间
                     * 
                     */
                    int64_t GetSendTime() const;

                    /**
                     * 设置消息发送时间
                     * @param _sendTime 消息发送时间
                     * 
                     */
                    void SetSendTime(const int64_t& _sendTime);

                    /**
                     * 判断参数 SendTime 是否已赋值
                     * @return SendTime 是否已赋值
                     * 
                     */
                    bool SendTimeHasBeenSet() const;

                    /**
                     * 获取接入业务的唯一ID
                     * @return AppID 接入业务的唯一ID
                     * 
                     */
                    int64_t GetAppID() const;

                    /**
                     * 设置接入业务的唯一ID
                     * @param _appID 接入业务的唯一ID
                     * 
                     */
                    void SetAppID(const int64_t& _appID);

                    /**
                     * 判断参数 AppID 是否已赋值
                     * @return AppID 是否已赋值
                     * 
                     */
                    bool AppIDHasBeenSet() const;

                    /**
                     * 获取请求字段里的Common.Uin
                     * @return Uin 请求字段里的Common.Uin
                     * 
                     */
                    int64_t GetUin() const;

                    /**
                     * 设置请求字段里的Common.Uin
                     * @param _uin 请求字段里的Common.Uin
                     * 
                     */
                    void SetUin(const int64_t& _uin);

                    /**
                     * 判断参数 Uin 是否已赋值
                     * @return Uin 是否已赋值
                     * 
                     */
                    bool UinHasBeenSet() const;

                private:

                    /**
                     * 接口唯一ID，旁路调用接口返回有该字段，标识唯一接口
                     */
                    int64_t m_bUCtrlID;
                    bool m_bUCtrlIDHasBeenSet;

                    /**
                     * 消息发送时间
                     */
                    int64_t m_sendTime;
                    bool m_sendTimeHasBeenSet;

                    /**
                     * 接入业务的唯一ID
                     */
                    int64_t m_appID;
                    bool m_appIDHasBeenSet;

                    /**
                     * 请求字段里的Common.Uin
                     */
                    int64_t m_uin;
                    bool m_uinHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CMS_V20190321_MODEL_TEXTOUTPUTCOMM_H_
