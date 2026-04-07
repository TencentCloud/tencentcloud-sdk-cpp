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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_SLATEINFO_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_SLATEINFO_H_

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
                * 线性组装频道垫片配置。
                */
                class SlateInfo : public AbstractModel
                {
                public:
                    SlateInfo();
                    ~SlateInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取source location的ID。
                     * @return SourceLocationId source location的ID。
                     * 
                     */
                    std::string GetSourceLocationId() const;

                    /**
                     * 设置source location的ID。
                     * @param _sourceLocationId source location的ID。
                     * 
                     */
                    void SetSourceLocationId(const std::string& _sourceLocationId);

                    /**
                     * 判断参数 SourceLocationId 是否已赋值
                     * @return SourceLocationId 是否已赋值
                     * 
                     */
                    bool SourceLocationIdHasBeenSet() const;

                    /**
                     * 获取对应的vod垫片内容源名称。
                     * @return VodSourceName 对应的vod垫片内容源名称。
                     * 
                     */
                    std::string GetVodSourceName() const;

                    /**
                     * 设置对应的vod垫片内容源名称。
                     * @param _vodSourceName 对应的vod垫片内容源名称。
                     * 
                     */
                    void SetVodSourceName(const std::string& _vodSourceName);

                    /**
                     * 判断参数 VodSourceName 是否已赋值
                     * @return VodSourceName 是否已赋值
                     * 
                     */
                    bool VodSourceNameHasBeenSet() const;

                private:

                    /**
                     * source location的ID。
                     */
                    std::string m_sourceLocationId;
                    bool m_sourceLocationIdHasBeenSet;

                    /**
                     * 对应的vod垫片内容源名称。
                     */
                    std::string m_vodSourceName;
                    bool m_vodSourceNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_SLATEINFO_H_
