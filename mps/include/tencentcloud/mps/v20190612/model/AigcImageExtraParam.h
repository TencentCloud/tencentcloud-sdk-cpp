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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_AIGCIMAGEEXTRAPARAM_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_AIGCIMAGEEXTRAPARAM_H_

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
                * 用于AIGC创作图片时用到的扩展参数信息。
                */
                class AigcImageExtraParam : public AbstractModel
                {
                public:
                    AigcImageExtraParam();
                    ~AigcImageExtraParam() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取指定所生成视频的宽高比。

不同模型支持的宽高比:
1. GEM支持：1:1、3:2、2:3、3:4、4:3、4:5、5:4、9:16、16:9 和 21:9。

注：具体模型的宽高比参数，可查看相应模型官网获取更完整描述。
                     * @return AspectRatio 指定所生成视频的宽高比。

不同模型支持的宽高比:
1. GEM支持：1:1、3:2、2:3、3:4、4:3、4:5、5:4、9:16、16:9 和 21:9。

注：具体模型的宽高比参数，可查看相应模型官网获取更完整描述。
                     * 
                     */
                    std::string GetAspectRatio() const;

                    /**
                     * 设置指定所生成视频的宽高比。

不同模型支持的宽高比:
1. GEM支持：1:1、3:2、2:3、3:4、4:3、4:5、5:4、9:16、16:9 和 21:9。

注：具体模型的宽高比参数，可查看相应模型官网获取更完整描述。
                     * @param _aspectRatio 指定所生成视频的宽高比。

不同模型支持的宽高比:
1. GEM支持：1:1、3:2、2:3、3:4、4:3、4:5、5:4、9:16、16:9 和 21:9。

注：具体模型的宽高比参数，可查看相应模型官网获取更完整描述。
                     * 
                     */
                    void SetAspectRatio(const std::string& _aspectRatio);

                    /**
                     * 判断参数 AspectRatio 是否已赋值
                     * @return AspectRatio 是否已赋值
                     * 
                     */
                    bool AspectRatioHasBeenSet() const;

                    /**
                     * 获取指定图片输出分辨率。

支持该参数的模型：
支持选择: 720P, 1080P, 2K, 4K。

                     * @return Resolution 指定图片输出分辨率。

支持该参数的模型：
支持选择: 720P, 1080P, 2K, 4K。

                     * 
                     */
                    std::string GetResolution() const;

                    /**
                     * 设置指定图片输出分辨率。

支持该参数的模型：
支持选择: 720P, 1080P, 2K, 4K。

                     * @param _resolution 指定图片输出分辨率。

支持该参数的模型：
支持选择: 720P, 1080P, 2K, 4K。

                     * 
                     */
                    void SetResolution(const std::string& _resolution);

                    /**
                     * 判断参数 Resolution 是否已赋值
                     * @return Resolution 是否已赋值
                     * 
                     */
                    bool ResolutionHasBeenSet() const;

                private:

                    /**
                     * 指定所生成视频的宽高比。

不同模型支持的宽高比:
1. GEM支持：1:1、3:2、2:3、3:4、4:3、4:5、5:4、9:16、16:9 和 21:9。

注：具体模型的宽高比参数，可查看相应模型官网获取更完整描述。
                     */
                    std::string m_aspectRatio;
                    bool m_aspectRatioHasBeenSet;

                    /**
                     * 指定图片输出分辨率。

支持该参数的模型：
支持选择: 720P, 1080P, 2K, 4K。

                     */
                    std::string m_resolution;
                    bool m_resolutionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_AIGCIMAGEEXTRAPARAM_H_
