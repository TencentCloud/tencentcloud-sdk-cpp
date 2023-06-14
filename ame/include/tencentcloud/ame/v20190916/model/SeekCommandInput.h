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

#ifndef TENCENTCLOUD_AME_V20190916_MODEL_SEEKCOMMANDINPUT_H_
#define TENCENTCLOUD_AME_V20190916_MODEL_SEEKCOMMANDINPUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ame
    {
        namespace V20190916
        {
            namespace Model
            {
                /**
                * 调整播放进度指令参数
                */
                class SeekCommandInput : public AbstractModel
                {
                public:
                    SeekCommandInput();
                    ~SeekCommandInput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取播放位置，单位：毫秒。
                     * @return Position 播放位置，单位：毫秒。
                     * 
                     */
                    uint64_t GetPosition() const;

                    /**
                     * 设置播放位置，单位：毫秒。
                     * @param _position 播放位置，单位：毫秒。
                     * 
                     */
                    void SetPosition(const uint64_t& _position);

                    /**
                     * 判断参数 Position 是否已赋值
                     * @return Position 是否已赋值
                     * 
                     */
                    bool PositionHasBeenSet() const;

                private:

                    /**
                     * 播放位置，单位：毫秒。
                     */
                    uint64_t m_position;
                    bool m_positionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AME_V20190916_MODEL_SEEKCOMMANDINPUT_H_
