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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_PLAYCODETOTALINFO_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_PLAYCODETOTALINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * 各状态码的总次数，支持大多数的 HTTP 协议返回码。
                */
                class PlayCodeTotalInfo : public AbstractModel
                {
                public:
                    PlayCodeTotalInfo();
                    ~PlayCodeTotalInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取HTTP code，可选值包括:
400，403，404，500，502，503，504。
                     * @return Code HTTP code，可选值包括:
400，403，404，500，502，503，504。
                     * 
                     */
                    std::string GetCode() const;

                    /**
                     * 设置HTTP code，可选值包括:
400，403，404，500，502，503，504。
                     * @param _code HTTP code，可选值包括:
400，403，404，500，502，503，504。
                     * 
                     */
                    void SetCode(const std::string& _code);

                    /**
                     * 判断参数 Code 是否已赋值
                     * @return Code 是否已赋值
                     * 
                     */
                    bool CodeHasBeenSet() const;

                    /**
                     * 获取总次数。
                     * @return Num 总次数。
                     * 
                     */
                    uint64_t GetNum() const;

                    /**
                     * 设置总次数。
                     * @param _num 总次数。
                     * 
                     */
                    void SetNum(const uint64_t& _num);

                    /**
                     * 判断参数 Num 是否已赋值
                     * @return Num 是否已赋值
                     * 
                     */
                    bool NumHasBeenSet() const;

                private:

                    /**
                     * HTTP code，可选值包括:
400，403，404，500，502，503，504。
                     */
                    std::string m_code;
                    bool m_codeHasBeenSet;

                    /**
                     * 总次数。
                     */
                    uint64_t m_num;
                    bool m_numHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_PLAYCODETOTALINFO_H_
