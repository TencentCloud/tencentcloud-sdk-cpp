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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_SUBTITLEPOSITION_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_SUBTITLEPOSITION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * 字幕位置信息
                */
                class SubtitlePosition : public AbstractModel
                {
                public:
                    SubtitlePosition();
                    ~SubtitlePosition() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取居中位置时Y的坐标值
                     * @return CenterY 居中位置时Y的坐标值
                     * 
                     */
                    int64_t GetCenterY() const;

                    /**
                     * 设置居中位置时Y的坐标值
                     * @param _centerY 居中位置时Y的坐标值
                     * 
                     */
                    void SetCenterY(const int64_t& _centerY);

                    /**
                     * 判断参数 CenterY 是否已赋值
                     * @return CenterY 是否已赋值
                     * 
                     */
                    bool CenterYHasBeenSet() const;

                private:

                    /**
                     * 居中位置时Y的坐标值
                     */
                    int64_t m_centerY;
                    bool m_centerYHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_SUBTITLEPOSITION_H_
