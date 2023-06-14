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

#ifndef TENCENTCLOUD_YINSUDA_V20220527_MODEL_JOINROOMINPUT_H_
#define TENCENTCLOUD_YINSUDA_V20220527_MODEL_JOINROOMINPUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/yinsuda/v20220527/model/TRTCJoinRoomInput.h>


namespace TencentCloud
{
    namespace Yinsuda
    {
        namespace V20220527
        {
            namespace Model
            {
                /**
                * 直播进房输入参数
                */
                class JoinRoomInput : public AbstractModel
                {
                public:
                    JoinRoomInput();
                    ~JoinRoomInput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取TRTC进房参数
                     * @return TRTCJoinRoomInput TRTC进房参数
                     * 
                     */
                    TRTCJoinRoomInput GetTRTCJoinRoomInput() const;

                    /**
                     * 设置TRTC进房参数
                     * @param _tRTCJoinRoomInput TRTC进房参数
                     * 
                     */
                    void SetTRTCJoinRoomInput(const TRTCJoinRoomInput& _tRTCJoinRoomInput);

                    /**
                     * 判断参数 TRTCJoinRoomInput 是否已赋值
                     * @return TRTCJoinRoomInput 是否已赋值
                     * 
                     */
                    bool TRTCJoinRoomInputHasBeenSet() const;

                private:

                    /**
                     * TRTC进房参数
                     */
                    TRTCJoinRoomInput m_tRTCJoinRoomInput;
                    bool m_tRTCJoinRoomInputHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_YINSUDA_V20220527_MODEL_JOINROOMINPUT_H_
