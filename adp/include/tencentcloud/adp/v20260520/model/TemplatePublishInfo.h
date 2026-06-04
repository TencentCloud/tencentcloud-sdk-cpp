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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_TEMPLATEPUBLISHINFO_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_TEMPLATEPUBLISHINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * 模版中心同步信息(私有化独有 - 公有云/SaaS 版本忽略此字段)
                */
                class TemplatePublishInfo : public AbstractModel
                {
                public:
                    TemplatePublishInfo();
                    ~TemplatePublishInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取是否已同步到模版中心
                     * @return IsPublished 是否已同步到模版中心
                     * 
                     */
                    bool GetIsPublished() const;

                    /**
                     * 设置是否已同步到模版中心
                     * @param _isPublished 是否已同步到模版中心
                     * 
                     */
                    void SetIsPublished(const bool& _isPublished);

                    /**
                     * 判断参数 IsPublished 是否已赋值
                     * @return IsPublished 是否已赋值
                     * 
                     */
                    bool IsPublishedHasBeenSet() const;

                private:

                    /**
                     * 是否已同步到模版中心
                     */
                    bool m_isPublished;
                    bool m_isPublishedHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_TEMPLATEPUBLISHINFO_H_
