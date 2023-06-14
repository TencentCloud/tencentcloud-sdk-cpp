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

#ifndef TENCENTCLOUD_TIW_V20190919_MODEL_SNAPSHOTWHITEBOARD_H_
#define TENCENTCLOUD_TIW_V20190919_MODEL_SNAPSHOTWHITEBOARD_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tiw
    {
        namespace V20190919
        {
            namespace Model
            {
                /**
                * 生成白板板书时的白板参数，例如白板宽高等
                */
                class SnapshotWhiteboard : public AbstractModel
                {
                public:
                    SnapshotWhiteboard();
                    ~SnapshotWhiteboard() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取白板宽度大小，默认为1280，有效取值范围[0，2560]
                     * @return Width 白板宽度大小，默认为1280，有效取值范围[0，2560]
                     * 
                     */
                    uint64_t GetWidth() const;

                    /**
                     * 设置白板宽度大小，默认为1280，有效取值范围[0，2560]
                     * @param _width 白板宽度大小，默认为1280，有效取值范围[0，2560]
                     * 
                     */
                    void SetWidth(const uint64_t& _width);

                    /**
                     * 判断参数 Width 是否已赋值
                     * @return Width 是否已赋值
                     * 
                     */
                    bool WidthHasBeenSet() const;

                    /**
                     * 获取白板高度大小，默认为720，有效取值范围[0，2560]
                     * @return Height 白板高度大小，默认为720，有效取值范围[0，2560]
                     * 
                     */
                    uint64_t GetHeight() const;

                    /**
                     * 设置白板高度大小，默认为720，有效取值范围[0，2560]
                     * @param _height 白板高度大小，默认为720，有效取值范围[0，2560]
                     * 
                     */
                    void SetHeight(const uint64_t& _height);

                    /**
                     * 判断参数 Height 是否已赋值
                     * @return Height 是否已赋值
                     * 
                     */
                    bool HeightHasBeenSet() const;

                    /**
                     * 获取白板初始化参数的JSON转义字符串，透传到白板 SDK
                     * @return InitParams 白板初始化参数的JSON转义字符串，透传到白板 SDK
                     * 
                     */
                    std::string GetInitParams() const;

                    /**
                     * 设置白板初始化参数的JSON转义字符串，透传到白板 SDK
                     * @param _initParams 白板初始化参数的JSON转义字符串，透传到白板 SDK
                     * 
                     */
                    void SetInitParams(const std::string& _initParams);

                    /**
                     * 判断参数 InitParams 是否已赋值
                     * @return InitParams 是否已赋值
                     * 
                     */
                    bool InitParamsHasBeenSet() const;

                private:

                    /**
                     * 白板宽度大小，默认为1280，有效取值范围[0，2560]
                     */
                    uint64_t m_width;
                    bool m_widthHasBeenSet;

                    /**
                     * 白板高度大小，默认为720，有效取值范围[0，2560]
                     */
                    uint64_t m_height;
                    bool m_heightHasBeenSet;

                    /**
                     * 白板初始化参数的JSON转义字符串，透传到白板 SDK
                     */
                    std::string m_initParams;
                    bool m_initParamsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIW_V20190919_MODEL_SNAPSHOTWHITEBOARD_H_
