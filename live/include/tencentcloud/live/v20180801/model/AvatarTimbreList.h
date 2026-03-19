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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_AVATARTIMBRELIST_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_AVATARTIMBRELIST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/live/v20180801/model/AvatarTimbreInfo.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * 数字人音色信息列表。
                */
                class AvatarTimbreList : public AbstractModel
                {
                public:
                    AvatarTimbreList();
                    ~AvatarTimbreList() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取音色 类型。
                     * @return TimbreType 音色 类型。
                     * 
                     */
                    std::string GetTimbreType() const;

                    /**
                     * 设置音色 类型。
                     * @param _timbreType 音色 类型。
                     * 
                     */
                    void SetTimbreType(const std::string& _timbreType);

                    /**
                     * 判断参数 TimbreType 是否已赋值
                     * @return TimbreType 是否已赋值
                     * 
                     */
                    bool TimbreTypeHasBeenSet() const;

                    /**
                     * 获取音色信息列表。
                     * @return TimbreInfoList 音色信息列表。
                     * 
                     */
                    std::vector<AvatarTimbreInfo> GetTimbreInfoList() const;

                    /**
                     * 设置音色信息列表。
                     * @param _timbreInfoList 音色信息列表。
                     * 
                     */
                    void SetTimbreInfoList(const std::vector<AvatarTimbreInfo>& _timbreInfoList);

                    /**
                     * 判断参数 TimbreInfoList 是否已赋值
                     * @return TimbreInfoList 是否已赋值
                     * 
                     */
                    bool TimbreInfoListHasBeenSet() const;

                private:

                    /**
                     * 音色 类型。
                     */
                    std::string m_timbreType;
                    bool m_timbreTypeHasBeenSet;

                    /**
                     * 音色信息列表。
                     */
                    std::vector<AvatarTimbreInfo> m_timbreInfoList;
                    bool m_timbreInfoListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_AVATARTIMBRELIST_H_
