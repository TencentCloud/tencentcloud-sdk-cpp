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

#ifndef TENCENTCLOUD_IE_V20200304_MODEL_FRAMETAGRESULT_H_
#define TENCENTCLOUD_IE_V20200304_MODEL_FRAMETAGRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ie/v20200304/model/FrameTagItem.h>


namespace TencentCloud
{
    namespace Ie
    {
        namespace V20200304
        {
            namespace Model
            {
                /**
                * 帧标签结果
                */
                class FrameTagResult : public AbstractModel
                {
                public:
                    FrameTagResult();
                    ~FrameTagResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取帧标签结果数组
                     * @return FrameTagItems 帧标签结果数组
                     * 
                     */
                    std::vector<FrameTagItem> GetFrameTagItems() const;

                    /**
                     * 设置帧标签结果数组
                     * @param _frameTagItems 帧标签结果数组
                     * 
                     */
                    void SetFrameTagItems(const std::vector<FrameTagItem>& _frameTagItems);

                    /**
                     * 判断参数 FrameTagItems 是否已赋值
                     * @return FrameTagItems 是否已赋值
                     * 
                     */
                    bool FrameTagItemsHasBeenSet() const;

                private:

                    /**
                     * 帧标签结果数组
                     */
                    std::vector<FrameTagItem> m_frameTagItems;
                    bool m_frameTagItemsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IE_V20200304_MODEL_FRAMETAGRESULT_H_
