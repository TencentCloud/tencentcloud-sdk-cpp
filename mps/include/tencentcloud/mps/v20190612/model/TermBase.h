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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_TERMBASE_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_TERMBASE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * 术语表
                */
                class TermBase : public AbstractModel
                {
                public:
                    TermBase();
                    ~TermBase() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>术语原语言</p>
                     * @return Src <p>术语原语言</p>
                     * 
                     */
                    std::string GetSrc() const;

                    /**
                     * 设置<p>术语原语言</p>
                     * @param _src <p>术语原语言</p>
                     * 
                     */
                    void SetSrc(const std::string& _src);

                    /**
                     * 判断参数 Src 是否已赋值
                     * @return Src 是否已赋值
                     * 
                     */
                    bool SrcHasBeenSet() const;

                    /**
                     * 获取<p>术语目标语言</p>
                     * @return Dst <p>术语目标语言</p>
                     * 
                     */
                    std::string GetDst() const;

                    /**
                     * 设置<p>术语目标语言</p>
                     * @param _dst <p>术语目标语言</p>
                     * 
                     */
                    void SetDst(const std::string& _dst);

                    /**
                     * 判断参数 Dst 是否已赋值
                     * @return Dst 是否已赋值
                     * 
                     */
                    bool DstHasBeenSet() const;

                private:

                    /**
                     * <p>术语原语言</p>
                     */
                    std::string m_src;
                    bool m_srcHasBeenSet;

                    /**
                     * <p>术语目标语言</p>
                     */
                    std::string m_dst;
                    bool m_dstHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_TERMBASE_H_
