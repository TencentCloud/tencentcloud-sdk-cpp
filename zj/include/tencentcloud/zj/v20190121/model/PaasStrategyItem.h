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

#ifndef TENCENTCLOUD_ZJ_V20190121_MODEL_PAASSTRATEGYITEM_H_
#define TENCENTCLOUD_ZJ_V20190121_MODEL_PAASSTRATEGYITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Zj
    {
        namespace V20190121
        {
            namespace Model
            {
                /**
                * 短信活动策略元素
                */
                class PaasStrategyItem : public AbstractModel
                {
                public:
                    PaasStrategyItem();
                    ~PaasStrategyItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取短信模板id或超级短信样例id
                     * @return Id 短信模板id或超级短信样例id
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置短信模板id或超级短信样例id
                     * @param _id 短信模板id或超级短信样例id
                     * 
                     */
                    void SetId(const int64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取素材类型 0-普短 1-超短
                     * @return ContentType 素材类型 0-普短 1-超短
                     * 
                     */
                    int64_t GetContentType() const;

                    /**
                     * 设置素材类型 0-普短 1-超短
                     * @param _contentType 素材类型 0-普短 1-超短
                     * 
                     */
                    void SetContentType(const int64_t& _contentType);

                    /**
                     * 判断参数 ContentType 是否已赋值
                     * @return ContentType 是否已赋值
                     * 
                     */
                    bool ContentTypeHasBeenSet() const;

                private:

                    /**
                     * 短信模板id或超级短信样例id
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 素材类型 0-普短 1-超短
                     */
                    int64_t m_contentType;
                    bool m_contentTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ZJ_V20190121_MODEL_PAASSTRATEGYITEM_H_
