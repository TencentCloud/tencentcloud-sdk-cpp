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

#ifndef TENCENTCLOUD_AME_V20190916_MODEL_KTVMUSICTAGGROUP_H_
#define TENCENTCLOUD_AME_V20190916_MODEL_KTVMUSICTAGGROUP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ame/v20190916/model/KTVMusicTagInfo.h>


namespace TencentCloud
{
    namespace Ame
    {
        namespace V20190916
        {
            namespace Model
            {
                /**
                * 即使广播曲库歌曲标签分组信息
                */
                class KTVMusicTagGroup : public AbstractModel
                {
                public:
                    KTVMusicTagGroup();
                    ~KTVMusicTagGroup() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取标签分组英文名
                     * @return EnglishGroupName 标签分组英文名
                     * 
                     */
                    std::string GetEnglishGroupName() const;

                    /**
                     * 设置标签分组英文名
                     * @param _englishGroupName 标签分组英文名
                     * 
                     */
                    void SetEnglishGroupName(const std::string& _englishGroupName);

                    /**
                     * 判断参数 EnglishGroupName 是否已赋值
                     * @return EnglishGroupName 是否已赋值
                     * 
                     */
                    bool EnglishGroupNameHasBeenSet() const;

                    /**
                     * 获取标签分组中文名
                     * @return ChineseGroupName 标签分组中文名
                     * 
                     */
                    std::string GetChineseGroupName() const;

                    /**
                     * 设置标签分组中文名
                     * @param _chineseGroupName 标签分组中文名
                     * 
                     */
                    void SetChineseGroupName(const std::string& _chineseGroupName);

                    /**
                     * 判断参数 ChineseGroupName 是否已赋值
                     * @return ChineseGroupName 是否已赋值
                     * 
                     */
                    bool ChineseGroupNameHasBeenSet() const;

                    /**
                     * 获取标签分类下标签列表
                     * @return TagSet 标签分类下标签列表
                     * 
                     */
                    std::vector<KTVMusicTagInfo> GetTagSet() const;

                    /**
                     * 设置标签分类下标签列表
                     * @param _tagSet 标签分类下标签列表
                     * 
                     */
                    void SetTagSet(const std::vector<KTVMusicTagInfo>& _tagSet);

                    /**
                     * 判断参数 TagSet 是否已赋值
                     * @return TagSet 是否已赋值
                     * 
                     */
                    bool TagSetHasBeenSet() const;

                private:

                    /**
                     * 标签分组英文名
                     */
                    std::string m_englishGroupName;
                    bool m_englishGroupNameHasBeenSet;

                    /**
                     * 标签分组中文名
                     */
                    std::string m_chineseGroupName;
                    bool m_chineseGroupNameHasBeenSet;

                    /**
                     * 标签分类下标签列表
                     */
                    std::vector<KTVMusicTagInfo> m_tagSet;
                    bool m_tagSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AME_V20190916_MODEL_KTVMUSICTAGGROUP_H_
