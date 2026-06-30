/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_VM_V20210922_MODEL_DECODEPARAMS_H_
#define TENCENTCLOUD_VM_V20210922_MODEL_DECODEPARAMS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vm
    {
        namespace V20210922
        {
            namespace Model
            {
                /**
                * 视频解码参数
                */
                class DecodeParams : public AbstractModel
                {
                public:
                    DecodeParams();
                    ~DecodeParams() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>视频截帧参数</p><p>取值范围：[0, 30]</p>
                     * @return ImageFrequency <p>视频截帧参数</p><p>取值范围：[0, 30]</p>
                     * 
                     */
                    uint64_t GetImageFrequency() const;

                    /**
                     * 设置<p>视频截帧参数</p><p>取值范围：[0, 30]</p>
                     * @param _imageFrequency <p>视频截帧参数</p><p>取值范围：[0, 30]</p>
                     * 
                     */
                    void SetImageFrequency(const uint64_t& _imageFrequency);

                    /**
                     * 判断参数 ImageFrequency 是否已赋值
                     * @return ImageFrequency 是否已赋值
                     * 
                     */
                    bool ImageFrequencyHasBeenSet() const;

                private:

                    /**
                     * <p>视频截帧参数</p><p>取值范围：[0, 30]</p>
                     */
                    uint64_t m_imageFrequency;
                    bool m_imageFrequencyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VM_V20210922_MODEL_DECODEPARAMS_H_
