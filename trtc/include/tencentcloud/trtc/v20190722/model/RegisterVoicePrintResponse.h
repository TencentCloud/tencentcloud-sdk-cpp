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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_REGISTERVOICEPRINTRESPONSE_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_REGISTERVOICEPRINTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Trtc
    {
        namespace V20190722
        {
            namespace Model
            {
                /**
                * RegisterVoicePrint返回参数结构体
                */
                class RegisterVoicePrintResponse : public AbstractModel
                {
                public:
                    RegisterVoicePrintResponse();
                    ~RegisterVoicePrintResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取声纹信息ID
                     * @return VoicePrintId 声纹信息ID
                     * 
                     */
                    std::string GetVoicePrintId() const;

                    /**
                     * 判断参数 VoicePrintId 是否已赋值
                     * @return VoicePrintId 是否已赋值
                     * 
                     */
                    bool VoicePrintIdHasBeenSet() const;

                private:

                    /**
                     * 声纹信息ID
                     */
                    std::string m_voicePrintId;
                    bool m_voicePrintIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_REGISTERVOICEPRINTRESPONSE_H_
