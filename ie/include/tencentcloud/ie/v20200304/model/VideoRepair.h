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

#ifndef TENCENTCLOUD_IE_V20200304_MODEL_VIDEOREPAIR_H_
#define TENCENTCLOUD_IE_V20200304_MODEL_VIDEOREPAIR_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ie
    {
        namespace V20200304
        {
            namespace Model
            {
                /**
                * 综合画质修复，包括：去噪，去毛刺，细节增强，主观画质提升。
                */
                class VideoRepair : public AbstractModel
                {
                public:
                    VideoRepair();
                    ~VideoRepair() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取画质修复类型，可选值：weak，normal，strong;
默认值: weak
                     * @return Type 画质修复类型，可选值：weak，normal，strong;
默认值: weak
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置画质修复类型，可选值：weak，normal，strong;
默认值: weak
                     * @param _type 画质修复类型，可选值：weak，normal，strong;
默认值: weak
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                private:

                    /**
                     * 画质修复类型，可选值：weak，normal，strong;
默认值: weak
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IE_V20200304_MODEL_VIDEOREPAIR_H_
