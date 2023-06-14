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

#ifndef TENCENTCLOUD_IE_V20200304_MODEL_MUXINFO_H_
#define TENCENTCLOUD_IE_V20200304_MODEL_MUXINFO_H_

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
                * 流封装信息
                */
                class MuxInfo : public AbstractModel
                {
                public:
                    MuxInfo();
                    ~MuxInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取删除流，可选项：video,audio。
                     * @return DeleteStream 删除流，可选项：video,audio。
                     * 
                     */
                    std::string GetDeleteStream() const;

                    /**
                     * 设置删除流，可选项：video,audio。
                     * @param _deleteStream 删除流，可选项：video,audio。
                     * 
                     */
                    void SetDeleteStream(const std::string& _deleteStream);

                    /**
                     * 判断参数 DeleteStream 是否已赋值
                     * @return DeleteStream 是否已赋值
                     * 
                     */
                    bool DeleteStreamHasBeenSet() const;

                    /**
                     * 获取Flv 参数，目前支持add_keyframe_index
                     * @return FlvFlags Flv 参数，目前支持add_keyframe_index
                     * 
                     */
                    std::string GetFlvFlags() const;

                    /**
                     * 设置Flv 参数，目前支持add_keyframe_index
                     * @param _flvFlags Flv 参数，目前支持add_keyframe_index
                     * 
                     */
                    void SetFlvFlags(const std::string& _flvFlags);

                    /**
                     * 判断参数 FlvFlags 是否已赋值
                     * @return FlvFlags 是否已赋值
                     * 
                     */
                    bool FlvFlagsHasBeenSet() const;

                private:

                    /**
                     * 删除流，可选项：video,audio。
                     */
                    std::string m_deleteStream;
                    bool m_deleteStreamHasBeenSet;

                    /**
                     * Flv 参数，目前支持add_keyframe_index
                     */
                    std::string m_flvFlags;
                    bool m_flvFlagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IE_V20200304_MODEL_MUXINFO_H_
