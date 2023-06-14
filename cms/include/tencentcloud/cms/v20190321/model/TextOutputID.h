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

#ifndef TENCENTCLOUD_CMS_V20190321_MODEL_TEXTOUTPUTID_H_
#define TENCENTCLOUD_CMS_V20190321_MODEL_TEXTOUTPUTID_H_

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
                * 消息类输出ID参数
                */
                class TextOutputID : public AbstractModel
                {
                public:
                    TextOutputID();
                    ~TextOutputID() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取接入业务的唯一ID
                     * @return MsgID 接入业务的唯一ID
                     * 
                     */
                    std::string GetMsgID() const;

                    /**
                     * 设置接入业务的唯一ID
                     * @param _msgID 接入业务的唯一ID
                     * 
                     */
                    void SetMsgID(const std::string& _msgID);

                    /**
                     * 判断参数 MsgID 是否已赋值
                     * @return MsgID 是否已赋值
                     * 
                     */
                    bool MsgIDHasBeenSet() const;

                    /**
                     * 获取用户账号uin，对应请求协议里的Content.User.Uin。旁路结果有回带，串联结果无该字段
                     * @return Uin 用户账号uin，对应请求协议里的Content.User.Uin。旁路结果有回带，串联结果无该字段
                     * 
                     */
                    std::string GetUin() const;

                    /**
                     * 设置用户账号uin，对应请求协议里的Content.User.Uin。旁路结果有回带，串联结果无该字段
                     * @param _uin 用户账号uin，对应请求协议里的Content.User.Uin。旁路结果有回带，串联结果无该字段
                     * 
                     */
                    void SetUin(const std::string& _uin);

                    /**
                     * 判断参数 Uin 是否已赋值
                     * @return Uin 是否已赋值
                     * 
                     */
                    bool UinHasBeenSet() const;

                private:

                    /**
                     * 接入业务的唯一ID
                     */
                    std::string m_msgID;
                    bool m_msgIDHasBeenSet;

                    /**
                     * 用户账号uin，对应请求协议里的Content.User.Uin。旁路结果有回带，串联结果无该字段
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CMS_V20190321_MODEL_TEXTOUTPUTID_H_
