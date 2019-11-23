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

#ifndef TENCENTCLOUD_NLP_V20190408_MODEL_EVILTOKEN_H_
#define TENCENTCLOUD_NLP_V20190408_MODEL_EVILTOKEN_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Nlp
    {
        namespace V20190408
        {
            namespace Model
            {
                /**
                * 文本审核结果
                */
                class EvilToken : public AbstractModel
                {
                public:
                    EvilToken();
                    ~EvilToken() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取文本是否恶意：
0、正常；
1、恶意；
2、可疑送审
                     * @return EvilFlag 文本是否恶意：
0、正常；
1、恶意；
2、可疑送审
                     */
                    uint64_t GetEvilFlag() const;

                    /**
                     * 设置文本是否恶意：
0、正常；
1、恶意；
2、可疑送审
                     * @param EvilFlag 文本是否恶意：
0、正常；
1、恶意；
2、可疑送审
                     */
                    void SetEvilFlag(const uint64_t& _evilFlag);

                    /**
                     * 判断参数 EvilFlag 是否已赋值
                     * @return EvilFlag 是否已赋值
                     */
                    bool EvilFlagHasBeenSet() const;

                    /**
                     * 获取恶意关键词组
                     * @return EvilKeywords 恶意关键词组
                     */
                    std::vector<std::string> GetEvilKeywords() const;

                    /**
                     * 设置恶意关键词组
                     * @param EvilKeywords 恶意关键词组
                     */
                    void SetEvilKeywords(const std::vector<std::string>& _evilKeywords);

                    /**
                     * 判断参数 EvilKeywords 是否已赋值
                     * @return EvilKeywords 是否已赋值
                     */
                    bool EvilKeywordsHasBeenSet() const;

                    /**
                     * 获取文本恶意类型：
0、正常；
1、政治；
2、色情；
3、辱骂/低俗；
4、暴恐/毒品；
5、广告/灌水；
6、迷信/邪教；
7、其他违法（如跨站追杀/恶意竞争等）；
8、综合；
9、联系方式/链接
                     * @return EvilType 文本恶意类型：
0、正常；
1、政治；
2、色情；
3、辱骂/低俗；
4、暴恐/毒品；
5、广告/灌水；
6、迷信/邪教；
7、其他违法（如跨站追杀/恶意竞争等）；
8、综合；
9、联系方式/链接
                     */
                    uint64_t GetEvilType() const;

                    /**
                     * 设置文本恶意类型：
0、正常；
1、政治；
2、色情；
3、辱骂/低俗；
4、暴恐/毒品；
5、广告/灌水；
6、迷信/邪教；
7、其他违法（如跨站追杀/恶意竞争等）；
8、综合；
9、联系方式/链接
                     * @param EvilType 文本恶意类型：
0、正常；
1、政治；
2、色情；
3、辱骂/低俗；
4、暴恐/毒品；
5、广告/灌水；
6、迷信/邪教；
7、其他违法（如跨站追杀/恶意竞争等）；
8、综合；
9、联系方式/链接
                     */
                    void SetEvilType(const uint64_t& _evilType);

                    /**
                     * 判断参数 EvilType 是否已赋值
                     * @return EvilType 是否已赋值
                     */
                    bool EvilTypeHasBeenSet() const;

                private:

                    /**
                     * 文本是否恶意：
0、正常；
1、恶意；
2、可疑送审
                     */
                    uint64_t m_evilFlag;
                    bool m_evilFlagHasBeenSet;

                    /**
                     * 恶意关键词组
                     */
                    std::vector<std::string> m_evilKeywords;
                    bool m_evilKeywordsHasBeenSet;

                    /**
                     * 文本恶意类型：
0、正常；
1、政治；
2、色情；
3、辱骂/低俗；
4、暴恐/毒品；
5、广告/灌水；
6、迷信/邪教；
7、其他违法（如跨站追杀/恶意竞争等）；
8、综合；
9、联系方式/链接
                     */
                    uint64_t m_evilType;
                    bool m_evilTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_NLP_V20190408_MODEL_EVILTOKEN_H_
