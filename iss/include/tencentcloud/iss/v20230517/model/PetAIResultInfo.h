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

#ifndef TENCENTCLOUD_ISS_V20230517_MODEL_PETAIRESULTINFO_H_
#define TENCENTCLOUD_ISS_V20230517_MODEL_PETAIRESULTINFO_H_

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
                * 宠物识别结果详情
                */
                class PetAIResultInfo : public AbstractModel
                {
                public:
                    PetAIResultInfo();
                    ~PetAIResultInfo() = default;
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
                     * 获取宠物信息
                     * @return PetInfo 宠物信息
                     * 
                     */
                    std::vector<BaseAIResultInfo> GetPetInfo() const;

                    /**
                     * 设置宠物信息
                     * @param _petInfo 宠物信息
                     * 
                     */
                    void SetPetInfo(const std::vector<BaseAIResultInfo>& _petInfo);

                    /**
                     * 判断参数 PetInfo 是否已赋值
                     * @return PetInfo 是否已赋值
                     * 
                     */
                    bool PetInfoHasBeenSet() const;

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
                     * 宠物信息
                     */
                    std::vector<BaseAIResultInfo> m_petInfo;
                    bool m_petInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ISS_V20230517_MODEL_PETAIRESULTINFO_H_
