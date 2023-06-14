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

#ifndef TENCENTCLOUD_GME_V20180711_MODEL_USERMICSTATUS_H_
#define TENCENTCLOUD_GME_V20180711_MODEL_USERMICSTATUS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Gme
    {
        namespace V20180711
        {
            namespace Model
            {
                /**
                * 用户麦克风状态
                */
                class UserMicStatus : public AbstractModel
                {
                public:
                    UserMicStatus();
                    ~UserMicStatus() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取开麦状态。1表示关闭麦克风，2表示打开麦克风。
                     * @return EnableMic 开麦状态。1表示关闭麦克风，2表示打开麦克风。
                     * 
                     */
                    int64_t GetEnableMic() const;

                    /**
                     * 设置开麦状态。1表示关闭麦克风，2表示打开麦克风。
                     * @param _enableMic 开麦状态。1表示关闭麦克风，2表示打开麦克风。
                     * 
                     */
                    void SetEnableMic(const int64_t& _enableMic);

                    /**
                     * 判断参数 EnableMic 是否已赋值
                     * @return EnableMic 是否已赋值
                     * 
                     */
                    bool EnableMicHasBeenSet() const;

                    /**
                     * 获取客户端用于标识用户的Openid。（Uid、StrUid必须填一个，优先处理StrUid。）
                     * @return Uid 客户端用于标识用户的Openid。（Uid、StrUid必须填一个，优先处理StrUid。）
                     * 
                     */
                    int64_t GetUid() const;

                    /**
                     * 设置客户端用于标识用户的Openid。（Uid、StrUid必须填一个，优先处理StrUid。）
                     * @param _uid 客户端用于标识用户的Openid。（Uid、StrUid必须填一个，优先处理StrUid。）
                     * 
                     */
                    void SetUid(const int64_t& _uid);

                    /**
                     * 判断参数 Uid 是否已赋值
                     * @return Uid 是否已赋值
                     * 
                     */
                    bool UidHasBeenSet() const;

                    /**
                     * 获取客户端用于标识字符串型用户的Openid。（Uid、StrUid必须填一个，优先处理StrUid。）
                     * @return StrUid 客户端用于标识字符串型用户的Openid。（Uid、StrUid必须填一个，优先处理StrUid。）
                     * 
                     */
                    std::string GetStrUid() const;

                    /**
                     * 设置客户端用于标识字符串型用户的Openid。（Uid、StrUid必须填一个，优先处理StrUid。）
                     * @param _strUid 客户端用于标识字符串型用户的Openid。（Uid、StrUid必须填一个，优先处理StrUid。）
                     * 
                     */
                    void SetStrUid(const std::string& _strUid);

                    /**
                     * 判断参数 StrUid 是否已赋值
                     * @return StrUid 是否已赋值
                     * 
                     */
                    bool StrUidHasBeenSet() const;

                private:

                    /**
                     * 开麦状态。1表示关闭麦克风，2表示打开麦克风。
                     */
                    int64_t m_enableMic;
                    bool m_enableMicHasBeenSet;

                    /**
                     * 客户端用于标识用户的Openid。（Uid、StrUid必须填一个，优先处理StrUid。）
                     */
                    int64_t m_uid;
                    bool m_uidHasBeenSet;

                    /**
                     * 客户端用于标识字符串型用户的Openid。（Uid、StrUid必须填一个，优先处理StrUid。）
                     */
                    std::string m_strUid;
                    bool m_strUidHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GME_V20180711_MODEL_USERMICSTATUS_H_
