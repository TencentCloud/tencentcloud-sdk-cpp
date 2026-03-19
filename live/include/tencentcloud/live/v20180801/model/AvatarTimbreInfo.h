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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_AVATARTIMBREINFO_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_AVATARTIMBREINFO_H_

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
                * 数字人声音信息。
                */
                class AvatarTimbreInfo : public AbstractModel
                {
                public:
                    AvatarTimbreInfo();
                    ~AvatarTimbreInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取音色 Key。
                     * @return TimbreKey 音色 Key。
                     * 
                     */
                    std::string GetTimbreKey() const;

                    /**
                     * 设置音色 Key。
                     * @param _timbreKey 音色 Key。
                     * 
                     */
                    void SetTimbreKey(const std::string& _timbreKey);

                    /**
                     * 判断参数 TimbreKey 是否已赋值
                     * @return TimbreKey 是否已赋值
                     * 
                     */
                    bool TimbreKeyHasBeenSet() const;

                    /**
                     * 获取音色名称。
                     * @return TimbreName 音色名称。
                     * 
                     */
                    std::string GetTimbreName() const;

                    /**
                     * 设置音色名称。
                     * @param _timbreName 音色名称。
                     * 
                     */
                    void SetTimbreName(const std::string& _timbreName);

                    /**
                     * 判断参数 TimbreName 是否已赋值
                     * @return TimbreName 是否已赋值
                     * 
                     */
                    bool TimbreNameHasBeenSet() const;

                    /**
                     * 获取音色描述。
                     * @return TimbreDesc 音色描述。
                     * 
                     */
                    std::string GetTimbreDesc() const;

                    /**
                     * 设置音色描述。
                     * @param _timbreDesc 音色描述。
                     * 
                     */
                    void SetTimbreDesc(const std::string& _timbreDesc);

                    /**
                     * 判断参数 TimbreDesc 是否已赋值
                     * @return TimbreDesc 是否已赋值
                     * 
                     */
                    bool TimbreDescHasBeenSet() const;

                    /**
                     * 获取音色试听样例 URL。
                     * @return TimbreSample 音色试听样例 URL。
                     * 
                     */
                    std::string GetTimbreSample() const;

                    /**
                     * 设置音色试听样例 URL。
                     * @param _timbreSample 音色试听样例 URL。
                     * 
                     */
                    void SetTimbreSample(const std::string& _timbreSample);

                    /**
                     * 判断参数 TimbreSample 是否已赋值
                     * @return TimbreSample 是否已赋值
                     * 
                     */
                    bool TimbreSampleHasBeenSet() const;

                    /**
                     * 获取音色性别，male:男音，femal:女音。
                     * @return TimbreGender 音色性别，male:男音，femal:女音。
                     * 
                     */
                    std::string GetTimbreGender() const;

                    /**
                     * 设置音色性别，male:男音，femal:女音。
                     * @param _timbreGender 音色性别，male:男音，femal:女音。
                     * 
                     */
                    void SetTimbreGender(const std::string& _timbreGender);

                    /**
                     * 判断参数 TimbreGender 是否已赋值
                     * @return TimbreGender 是否已赋值
                     * 
                     */
                    bool TimbreGenderHasBeenSet() const;

                private:

                    /**
                     * 音色 Key。
                     */
                    std::string m_timbreKey;
                    bool m_timbreKeyHasBeenSet;

                    /**
                     * 音色名称。
                     */
                    std::string m_timbreName;
                    bool m_timbreNameHasBeenSet;

                    /**
                     * 音色描述。
                     */
                    std::string m_timbreDesc;
                    bool m_timbreDescHasBeenSet;

                    /**
                     * 音色试听样例 URL。
                     */
                    std::string m_timbreSample;
                    bool m_timbreSampleHasBeenSet;

                    /**
                     * 音色性别，male:男音，femal:女音。
                     */
                    std::string m_timbreGender;
                    bool m_timbreGenderHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_AVATARTIMBREINFO_H_
