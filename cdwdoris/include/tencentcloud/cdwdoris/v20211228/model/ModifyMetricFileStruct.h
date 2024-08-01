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

#ifndef TENCENTCLOUD_CDWDORIS_V20211228_MODEL_MODIFYMETRICFILESTRUCT_H_
#define TENCENTCLOUD_CDWDORIS_V20211228_MODEL_MODIFYMETRICFILESTRUCT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdwdoris
    {
        namespace V20211228
        {
            namespace Model
            {
                /**
                * 用户是否关注监控指标入参
                */
                class ModifyMetricFileStruct : public AbstractModel
                {
                public:
                    ModifyMetricFileStruct();
                    ~ModifyMetricFileStruct() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取唯一id
                     * @return Id 唯一id
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置唯一id
                     * @param _id 唯一id
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
                     * 获取是否关注
                     * @return IfAttention 是否关注
                     * 
                     */
                    std::string GetIfAttention() const;

                    /**
                     * 设置是否关注
                     * @param _ifAttention 是否关注
                     * 
                     */
                    void SetIfAttention(const std::string& _ifAttention);

                    /**
                     * 判断参数 IfAttention 是否已赋值
                     * @return IfAttention 是否已赋值
                     * 
                     */
                    bool IfAttentionHasBeenSet() const;

                private:

                    /**
                     * 唯一id
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 是否关注
                     */
                    std::string m_ifAttention;
                    bool m_ifAttentionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWDORIS_V20211228_MODEL_MODIFYMETRICFILESTRUCT_H_
