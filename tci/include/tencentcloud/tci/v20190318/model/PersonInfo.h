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

#ifndef TENCENTCLOUD_TCI_V20190318_MODEL_PERSONINFO_H_
#define TENCENTCLOUD_TCI_V20190318_MODEL_PERSONINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tci
    {
        namespace V20190318
        {
            namespace Model
            {
                /**
                * 人员信息
                */
                class PersonInfo : public AbstractModel
                {
                public:
                    PersonInfo();
                    ~PersonInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取需要匹配的人员的ID列表。
                     * @return PersonId 需要匹配的人员的ID列表。
                     * 
                     */
                    std::string GetPersonId() const;

                    /**
                     * 设置需要匹配的人员的ID列表。
                     * @param _personId 需要匹配的人员的ID列表。
                     * 
                     */
                    void SetPersonId(const std::string& _personId);

                    /**
                     * 判断参数 PersonId 是否已赋值
                     * @return PersonId 是否已赋值
                     * 
                     */
                    bool PersonIdHasBeenSet() const;

                    /**
                     * 获取视频集锦开始封面照片。
                     * @return CoverBeginUrl 视频集锦开始封面照片。
                     * 
                     */
                    std::string GetCoverBeginUrl() const;

                    /**
                     * 设置视频集锦开始封面照片。
                     * @param _coverBeginUrl 视频集锦开始封面照片。
                     * 
                     */
                    void SetCoverBeginUrl(const std::string& _coverBeginUrl);

                    /**
                     * 判断参数 CoverBeginUrl 是否已赋值
                     * @return CoverBeginUrl 是否已赋值
                     * 
                     */
                    bool CoverBeginUrlHasBeenSet() const;

                    /**
                     * 获取视频集锦结束封面照片。
                     * @return CoverEndUrl 视频集锦结束封面照片。
                     * 
                     */
                    std::string GetCoverEndUrl() const;

                    /**
                     * 设置视频集锦结束封面照片。
                     * @param _coverEndUrl 视频集锦结束封面照片。
                     * 
                     */
                    void SetCoverEndUrl(const std::string& _coverEndUrl);

                    /**
                     * 判断参数 CoverEndUrl 是否已赋值
                     * @return CoverEndUrl 是否已赋值
                     * 
                     */
                    bool CoverEndUrlHasBeenSet() const;

                private:

                    /**
                     * 需要匹配的人员的ID列表。
                     */
                    std::string m_personId;
                    bool m_personIdHasBeenSet;

                    /**
                     * 视频集锦开始封面照片。
                     */
                    std::string m_coverBeginUrl;
                    bool m_coverBeginUrlHasBeenSet;

                    /**
                     * 视频集锦结束封面照片。
                     */
                    std::string m_coverEndUrl;
                    bool m_coverEndUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCI_V20190318_MODEL_PERSONINFO_H_
