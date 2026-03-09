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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_ADVANCEDELEMENTINFO_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_ADVANCEDELEMENTINFO_H_

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
                * 自定义主体信息
                */
                class AdvancedElementInfo : public AbstractModel
                {
                public:
                    AdvancedElementInfo();
                    ~AdvancedElementInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>主体 ID。</p>
                     * @return ElementId <p>主体 ID。</p>
                     * 
                     */
                    std::string GetElementId() const;

                    /**
                     * 设置<p>主体 ID。</p>
                     * @param _elementId <p>主体 ID。</p>
                     * 
                     */
                    void SetElementId(const std::string& _elementId);

                    /**
                     * 判断参数 ElementId 是否已赋值
                     * @return ElementId 是否已赋值
                     * 
                     */
                    bool ElementIdHasBeenSet() const;

                    /**
                     * 获取<p>主体信息。</p>
                     * @return ElementInfo <p>主体信息。</p>
                     * 
                     */
                    std::string GetElementInfo() const;

                    /**
                     * 设置<p>主体信息。</p>
                     * @param _elementInfo <p>主体信息。</p>
                     * 
                     */
                    void SetElementInfo(const std::string& _elementInfo);

                    /**
                     * 判断参数 ElementInfo 是否已赋值
                     * @return ElementInfo 是否已赋值
                     * 
                     */
                    bool ElementInfoHasBeenSet() const;

                private:

                    /**
                     * <p>主体 ID。</p>
                     */
                    std::string m_elementId;
                    bool m_elementIdHasBeenSet;

                    /**
                     * <p>主体信息。</p>
                     */
                    std::string m_elementInfo;
                    bool m_elementInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_ADVANCEDELEMENTINFO_H_
