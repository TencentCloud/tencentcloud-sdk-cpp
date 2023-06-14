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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_SORT_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_SORT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            namespace Model
            {
                /**
                * 查询结果排序条件
                */
                class Sort : public AbstractModel
                {
                public:
                    Sort();
                    ~Sort() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取排序字段，当前支持：
createTime，域名创建时间
certExpireTime，证书过期时间
默认createTime。
                     * @return Key 排序字段，当前支持：
createTime，域名创建时间
certExpireTime，证书过期时间
默认createTime。
                     * 
                     */
                    std::string GetKey() const;

                    /**
                     * 设置排序字段，当前支持：
createTime，域名创建时间
certExpireTime，证书过期时间
默认createTime。
                     * @param _key 排序字段，当前支持：
createTime，域名创建时间
certExpireTime，证书过期时间
默认createTime。
                     * 
                     */
                    void SetKey(const std::string& _key);

                    /**
                     * 判断参数 Key 是否已赋值
                     * @return Key 是否已赋值
                     * 
                     */
                    bool KeyHasBeenSet() const;

                    /**
                     * 获取asc/desc，默认desc。
                     * @return Sequence asc/desc，默认desc。
                     * 
                     */
                    std::string GetSequence() const;

                    /**
                     * 设置asc/desc，默认desc。
                     * @param _sequence asc/desc，默认desc。
                     * 
                     */
                    void SetSequence(const std::string& _sequence);

                    /**
                     * 判断参数 Sequence 是否已赋值
                     * @return Sequence 是否已赋值
                     * 
                     */
                    bool SequenceHasBeenSet() const;

                private:

                    /**
                     * 排序字段，当前支持：
createTime，域名创建时间
certExpireTime，证书过期时间
默认createTime。
                     */
                    std::string m_key;
                    bool m_keyHasBeenSet;

                    /**
                     * asc/desc，默认desc。
                     */
                    std::string m_sequence;
                    bool m_sequenceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_SORT_H_
