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

#ifndef TENCENTCLOUD_DSGC_V20190723_MODEL_AKSKLEAK_H_
#define TENCENTCLOUD_DSGC_V20190723_MODEL_AKSKLEAK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dsgc
    {
        namespace V20190723
        {
            namespace Model
            {
                /**
                * AKSK泄漏信息
                */
                class AKSKLeak : public AbstractModel
                {
                public:
                    AKSKLeak();
                    ~AKSKLeak() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取AK编码
                     * @return AK AK编码
                     * 
                     */
                    std::string GetAK() const;

                    /**
                     * 设置AK编码
                     * @param _aK AK编码
                     * 
                     */
                    void SetAK(const std::string& _aK);

                    /**
                     * 判断参数 AK 是否已赋值
                     * @return AK 是否已赋值
                     * 
                     */
                    bool AKHasBeenSet() const;

                    /**
                     * 获取SK编码
                     * @return SK SK编码
                     * 
                     */
                    std::string GetSK() const;

                    /**
                     * 设置SK编码
                     * @param _sK SK编码
                     * 
                     */
                    void SetSK(const std::string& _sK);

                    /**
                     * 判断参数 SK 是否已赋值
                     * @return SK 是否已赋值
                     * 
                     */
                    bool SKHasBeenSet() const;

                    /**
                     * 获取URL编码
                     * @return URL URL编码
                     * 
                     */
                    std::string GetURL() const;

                    /**
                     * 设置URL编码
                     * @param _uRL URL编码
                     * 
                     */
                    void SetURL(const std::string& _uRL);

                    /**
                     * 判断参数 URL 是否已赋值
                     * @return URL 是否已赋值
                     * 
                     */
                    bool URLHasBeenSet() const;

                private:

                    /**
                     * AK编码
                     */
                    std::string m_aK;
                    bool m_aKHasBeenSet;

                    /**
                     * SK编码
                     */
                    std::string m_sK;
                    bool m_sKHasBeenSet;

                    /**
                     * URL编码
                     */
                    std::string m_uRL;
                    bool m_uRLHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DSGC_V20190723_MODEL_AKSKLEAK_H_
