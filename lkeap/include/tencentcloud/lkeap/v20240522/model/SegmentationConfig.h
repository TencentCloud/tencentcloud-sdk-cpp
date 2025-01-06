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

#ifndef TENCENTCLOUD_LKEAP_V20240522_MODEL_SEGMENTATIONCONFIG_H_
#define TENCENTCLOUD_LKEAP_V20240522_MODEL_SEGMENTATIONCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lkeap
    {
        namespace V20240522
        {
            namespace Model
            {
                /**
                * 分段配置
                */
                class SegmentationConfig : public AbstractModel
                {
                public:
                    SegmentationConfig();
                    ~SegmentationConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取最大分片长度
                     * @return MaxChunkSize 最大分片长度
                     * 
                     */
                    int64_t GetMaxChunkSize() const;

                    /**
                     * 设置最大分片长度
                     * @param _maxChunkSize 最大分片长度
                     * 
                     */
                    void SetMaxChunkSize(const int64_t& _maxChunkSize);

                    /**
                     * 判断参数 MaxChunkSize 是否已赋值
                     * @return MaxChunkSize 是否已赋值
                     * 
                     */
                    bool MaxChunkSizeHasBeenSet() const;

                private:

                    /**
                     * 最大分片长度
                     */
                    int64_t m_maxChunkSize;
                    bool m_maxChunkSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKEAP_V20240522_MODEL_SEGMENTATIONCONFIG_H_
