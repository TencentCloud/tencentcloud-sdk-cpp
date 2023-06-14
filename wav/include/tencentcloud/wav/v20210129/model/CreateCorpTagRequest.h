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

#ifndef TENCENTCLOUD_WAV_V20210129_MODEL_CREATECORPTAGREQUEST_H_
#define TENCENTCLOUD_WAV_V20210129_MODEL_CREATECORPTAGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wav/v20210129/model/TagInfo.h>


namespace TencentCloud
{
    namespace Wav
    {
        namespace V20210129
        {
            namespace Model
            {
                /**
                * CreateCorpTag请求参数结构体
                */
                class CreateCorpTagRequest : public AbstractModel
                {
                public:
                    CreateCorpTagRequest();
                    ~CreateCorpTagRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取标签组名称，最长为15个字符
                     * @return GroupName 标签组名称，最长为15个字符
                     * 
                     */
                    std::string GetGroupName() const;

                    /**
                     * 设置标签组名称，最长为15个字符
                     * @param _groupName 标签组名称，最长为15个字符
                     * 
                     */
                    void SetGroupName(const std::string& _groupName);

                    /**
                     * 判断参数 GroupName 是否已赋值
                     * @return GroupName 是否已赋值
                     * 
                     */
                    bool GroupNameHasBeenSet() const;

                    /**
                     * 获取标签信息数组
                     * @return Tags 标签信息数组
                     * 
                     */
                    std::vector<TagInfo> GetTags() const;

                    /**
                     * 设置标签信息数组
                     * @param _tags 标签信息数组
                     * 
                     */
                    void SetTags(const std::vector<TagInfo>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取标签组次序值。sort值大的排序靠前。有效的值范围是[0, 2^32)
                     * @return Sort 标签组次序值。sort值大的排序靠前。有效的值范围是[0, 2^32)
                     * 
                     */
                    uint64_t GetSort() const;

                    /**
                     * 设置标签组次序值。sort值大的排序靠前。有效的值范围是[0, 2^32)
                     * @param _sort 标签组次序值。sort值大的排序靠前。有效的值范围是[0, 2^32)
                     * 
                     */
                    void SetSort(const uint64_t& _sort);

                    /**
                     * 判断参数 Sort 是否已赋值
                     * @return Sort 是否已赋值
                     * 
                     */
                    bool SortHasBeenSet() const;

                private:

                    /**
                     * 标签组名称，最长为15个字符
                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                    /**
                     * 标签信息数组
                     */
                    std::vector<TagInfo> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 标签组次序值。sort值大的排序靠前。有效的值范围是[0, 2^32)
                     */
                    uint64_t m_sort;
                    bool m_sortHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAV_V20210129_MODEL_CREATECORPTAGREQUEST_H_
