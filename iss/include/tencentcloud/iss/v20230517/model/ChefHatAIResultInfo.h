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

#ifndef TENCENTCLOUD_ISS_V20230517_MODEL_CHEFHATAIRESULTINFO_H_
#define TENCENTCLOUD_ISS_V20230517_MODEL_CHEFHATAIRESULTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iss/v20230517/model/BaseAIResultInfo.h>


namespace TencentCloud
{
    namespace Iss
    {
        namespace V20230517
        {
            namespace Model
            {
                /**
                * 厨师帽识别结果详情
                */
                class ChefHatAIResultInfo : public AbstractModel
                {
                public:
                    ChefHatAIResultInfo();
                    ~ChefHatAIResultInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取时间字符串
                     * @return Time 时间字符串
                     * 
                     */
                    std::string GetTime() const;

                    /**
                     * 设置时间字符串
                     * @param _time 时间字符串
                     * 
                     */
                    void SetTime(const std::string& _time);

                    /**
                     * 判断参数 Time 是否已赋值
                     * @return Time 是否已赋值
                     * 
                     */
                    bool TimeHasBeenSet() const;

                    /**
                     * 获取截图 URL
                     * @return Url 截图 URL
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置截图 URL
                     * @param _url 截图 URL
                     * 
                     */
                    void SetUrl(const std::string& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     * 
                     */
                    bool UrlHasBeenSet() const;

                    /**
                     * 获取厨师帽信息
                     * @return ChefHatInfo 厨师帽信息
                     * 
                     */
                    std::vector<BaseAIResultInfo> GetChefHatInfo() const;

                    /**
                     * 设置厨师帽信息
                     * @param _chefHatInfo 厨师帽信息
                     * 
                     */
                    void SetChefHatInfo(const std::vector<BaseAIResultInfo>& _chefHatInfo);

                    /**
                     * 判断参数 ChefHatInfo 是否已赋值
                     * @return ChefHatInfo 是否已赋值
                     * 
                     */
                    bool ChefHatInfoHasBeenSet() const;

                private:

                    /**
                     * 时间字符串
                     */
                    std::string m_time;
                    bool m_timeHasBeenSet;

                    /**
                     * 截图 URL
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * 厨师帽信息
                     */
                    std::vector<BaseAIResultInfo> m_chefHatInfo;
                    bool m_chefHatInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ISS_V20230517_MODEL_CHEFHATAIRESULTINFO_H_
