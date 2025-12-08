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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_MPSAIMEDIAINFO_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_MPSAIMEDIAINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/MPSAiMediaItem.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * 使用MPS进行处理后的智能媒体信息
                */
                class MPSAiMediaInfo : public AbstractModel
                {
                public:
                    MPSAiMediaInfo();
                    ~MPSAiMediaInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取MPS处理后的智能媒体信息列表
                     * @return AiMediaList MPS处理后的智能媒体信息列表
                     * 
                     */
                    std::vector<MPSAiMediaItem> GetAiMediaList() const;

                    /**
                     * 设置MPS处理后的智能媒体信息列表
                     * @param _aiMediaList MPS处理后的智能媒体信息列表
                     * 
                     */
                    void SetAiMediaList(const std::vector<MPSAiMediaItem>& _aiMediaList);

                    /**
                     * 判断参数 AiMediaList 是否已赋值
                     * @return AiMediaList 是否已赋值
                     * 
                     */
                    bool AiMediaListHasBeenSet() const;

                private:

                    /**
                     * MPS处理后的智能媒体信息列表
                     */
                    std::vector<MPSAiMediaItem> m_aiMediaList;
                    bool m_aiMediaListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_MPSAIMEDIAINFO_H_
