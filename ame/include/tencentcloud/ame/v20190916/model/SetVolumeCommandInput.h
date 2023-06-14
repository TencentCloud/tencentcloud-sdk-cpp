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

#ifndef TENCENTCLOUD_AME_V20190916_MODEL_SETVOLUMECOMMANDINPUT_H_
#define TENCENTCLOUD_AME_V20190916_MODEL_SETVOLUMECOMMANDINPUT_H_

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
                * 设置音量。
                */
                class SetVolumeCommandInput : public AbstractModel
                {
                public:
                    SetVolumeCommandInput();
                    ~SetVolumeCommandInput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取音量大小，取值范围为 0~100，默认值为 50。
                     * @return Volume 音量大小，取值范围为 0~100，默认值为 50。
                     * 
                     */
                    int64_t GetVolume() const;

                    /**
                     * 设置音量大小，取值范围为 0~100，默认值为 50。
                     * @param _volume 音量大小，取值范围为 0~100，默认值为 50。
                     * 
                     */
                    void SetVolume(const int64_t& _volume);

                    /**
                     * 判断参数 Volume 是否已赋值
                     * @return Volume 是否已赋值
                     * 
                     */
                    bool VolumeHasBeenSet() const;

                private:

                    /**
                     * 音量大小，取值范围为 0~100，默认值为 50。
                     */
                    int64_t m_volume;
                    bool m_volumeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AME_V20190916_MODEL_SETVOLUMECOMMANDINPUT_H_
