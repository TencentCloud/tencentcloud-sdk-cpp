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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_IMAGECONTENTREVIEWINPUT_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_IMAGECONTENTREVIEWINPUT_H_

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
                * 图片智能内容识别任务输入
                */
                class ImageContentReviewInput : public AbstractModel
                {
                public:
                    ImageContentReviewInput();
                    ~ImageContentReviewInput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取图片智能内容审核模板 ID。当前只支持：
<li>10：所有审核类型均打开。</li>
                     * @return Definition 图片智能内容审核模板 ID。当前只支持：
<li>10：所有审核类型均打开。</li>
                     * 
                     */
                    uint64_t GetDefinition() const;

                    /**
                     * 设置图片智能内容审核模板 ID。当前只支持：
<li>10：所有审核类型均打开。</li>
                     * @param _definition 图片智能内容审核模板 ID。当前只支持：
<li>10：所有审核类型均打开。</li>
                     * 
                     */
                    void SetDefinition(const uint64_t& _definition);

                    /**
                     * 判断参数 Definition 是否已赋值
                     * @return Definition 是否已赋值
                     * 
                     */
                    bool DefinitionHasBeenSet() const;

                private:

                    /**
                     * 图片智能内容审核模板 ID。当前只支持：
<li>10：所有审核类型均打开。</li>
                     */
                    uint64_t m_definition;
                    bool m_definitionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_IMAGECONTENTREVIEWINPUT_H_
