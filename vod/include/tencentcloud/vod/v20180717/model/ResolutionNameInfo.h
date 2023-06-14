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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_RESOLUTIONNAMEINFO_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_RESOLUTIONNAMEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * 播放器子流名字信息
                */
                class ResolutionNameInfo : public AbstractModel
                {
                public:
                    ResolutionNameInfo();
                    ~ResolutionNameInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取视频短边长度，单位：像素。
                     * @return MinEdgeLength 视频短边长度，单位：像素。
                     * 
                     */
                    uint64_t GetMinEdgeLength() const;

                    /**
                     * 设置视频短边长度，单位：像素。
                     * @param _minEdgeLength 视频短边长度，单位：像素。
                     * 
                     */
                    void SetMinEdgeLength(const uint64_t& _minEdgeLength);

                    /**
                     * 判断参数 MinEdgeLength 是否已赋值
                     * @return MinEdgeLength 是否已赋值
                     * 
                     */
                    bool MinEdgeLengthHasBeenSet() const;

                    /**
                     * 获取展示名字。
                     * @return Name 展示名字。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置展示名字。
                     * @param _name 展示名字。
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                private:

                    /**
                     * 视频短边长度，单位：像素。
                     */
                    uint64_t m_minEdgeLength;
                    bool m_minEdgeLengthHasBeenSet;

                    /**
                     * 展示名字。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_RESOLUTIONNAMEINFO_H_
