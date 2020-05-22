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

#ifndef TENCENTCLOUD_CMS_V20190321_MODEL_CALLBACKACK_H_
#define TENCENTCLOUD_CMS_V20190321_MODEL_CALLBACKACK_H_

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
                * 回调ACK
                */
                class CallBackAck : public AbstractModel
                {
                public:
                    CallBackAck();
                    ~CallBackAck() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取异步ACK-CODE
                     * @return StdRetCode 异步ACK-CODE
                     */
                    int64_t GetStdRetCode() const;

                    /**
                     * 设置异步ACK-CODE
                     * @param StdRetCode 异步ACK-CODE
                     */
                    void SetStdRetCode(const int64_t& _stdRetCode);

                    /**
                     * 判断参数 StdRetCode 是否已赋值
                     * @return StdRetCode 是否已赋值
                     */
                    bool StdRetCodeHasBeenSet() const;

                    /**
                     * 获取异步ACK
                     * @return StdRetMsg 异步ACK
                     */
                    std::string GetStdRetMsg() const;

                    /**
                     * 设置异步ACK
                     * @param StdRetMsg 异步ACK
                     */
                    void SetStdRetMsg(const std::string& _stdRetMsg);

                    /**
                     * 判断参数 StdRetMsg 是否已赋值
                     * @return StdRetMsg 是否已赋值
                     */
                    bool StdRetMsgHasBeenSet() const;

                private:

                    /**
                     * 异步ACK-CODE
                     */
                    int64_t m_stdRetCode;
                    bool m_stdRetCodeHasBeenSet;

                    /**
                     * 异步ACK
                     */
                    std::string m_stdRetMsg;
                    bool m_stdRetMsgHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CMS_V20190321_MODEL_CALLBACKACK_H_
