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

#ifndef TENCENTCLOUD_AME_V20190916_MODEL_KTVSINGERCATEGORYINFO_H_
#define TENCENTCLOUD_AME_V20190916_MODEL_KTVSINGERCATEGORYINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ame
    {
        namespace V20190916
        {
            namespace Model
            {
                /**
                * KTV歌手分类信息
                */
                class KTVSingerCategoryInfo : public AbstractModel
                {
                public:
                    KTVSingerCategoryInfo();
                    ~KTVSingerCategoryInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取分类中文名
                     * @return ChineseName 分类中文名
                     * 
                     */
                    std::string GetChineseName() const;

                    /**
                     * 设置分类中文名
                     * @param _chineseName 分类中文名
                     * 
                     */
                    void SetChineseName(const std::string& _chineseName);

                    /**
                     * 判断参数 ChineseName 是否已赋值
                     * @return ChineseName 是否已赋值
                     * 
                     */
                    bool ChineseNameHasBeenSet() const;

                    /**
                     * 获取分类英文名
                     * @return EnglishName 分类英文名
                     * 
                     */
                    std::string GetEnglishName() const;

                    /**
                     * 设置分类英文名
                     * @param _englishName 分类英文名
                     * 
                     */
                    void SetEnglishName(const std::string& _englishName);

                    /**
                     * 判断参数 EnglishName 是否已赋值
                     * @return EnglishName 是否已赋值
                     * 
                     */
                    bool EnglishNameHasBeenSet() const;

                private:

                    /**
                     * 分类中文名
                     */
                    std::string m_chineseName;
                    bool m_chineseNameHasBeenSet;

                    /**
                     * 分类英文名
                     */
                    std::string m_englishName;
                    bool m_englishNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AME_V20190916_MODEL_KTVSINGERCATEGORYINFO_H_
