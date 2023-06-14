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

#ifndef TENCENTCLOUD_AME_V20190916_MODEL_SETREALVOLUMECOMMANDINPUT_H_
#define TENCENTCLOUD_AME_V20190916_MODEL_SETREALVOLUMECOMMANDINPUT_H_

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
                * 设置真实音量。
                */
                class SetRealVolumeCommandInput : public AbstractModel
                {
                public:
                    SetRealVolumeCommandInput();
                    ~SetRealVolumeCommandInput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取真实音量大小，取值范围为 0~100，默认值为 50。
                     * @return RealVolume 真实音量大小，取值范围为 0~100，默认值为 50。
                     * 
                     */
                    int64_t GetRealVolume() const;

                    /**
                     * 设置真实音量大小，取值范围为 0~100，默认值为 50。
                     * @param _realVolume 真实音量大小，取值范围为 0~100，默认值为 50。
                     * 
                     */
                    void SetRealVolume(const int64_t& _realVolume);

                    /**
                     * 判断参数 RealVolume 是否已赋值
                     * @return RealVolume 是否已赋值
                     * 
                     */
                    bool RealVolumeHasBeenSet() const;

                private:

                    /**
                     * 真实音量大小，取值范围为 0~100，默认值为 50。
                     */
                    int64_t m_realVolume;
                    bool m_realVolumeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AME_V20190916_MODEL_SETREALVOLUMECOMMANDINPUT_H_
