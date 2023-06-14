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

#ifndef TENCENTCLOUD_WAV_V20210129_MODEL_TAGGROUP_H_
#define TENCENTCLOUD_WAV_V20210129_MODEL_TAGGROUP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wav/v20210129/model/TagDetailInfo.h>


namespace TencentCloud
{
    namespace Wav
    {
        namespace V20210129
        {
            namespace Model
            {
                /**
                * 标签组信息
                */
                class TagGroup : public AbstractModel
                {
                public:
                    TagGroup();
                    ~TagGroup() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取企微标签组id
                     * @return GroupId 企微标签组id
                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置企微标签组id
                     * @param _groupId 企微标签组id
                     * 
                     */
                    void SetGroupId(const std::string& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     * 
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取标签组业务id
                     * @return BizGroupId 标签组业务id
                     * 
                     */
                    std::string GetBizGroupId() const;

                    /**
                     * 设置标签组业务id
                     * @param _bizGroupId 标签组业务id
                     * 
                     */
                    void SetBizGroupId(const std::string& _bizGroupId);

                    /**
                     * 判断参数 BizGroupId 是否已赋值
                     * @return BizGroupId 是否已赋值
                     * 
                     */
                    bool BizGroupIdHasBeenSet() const;

                    /**
                     * 获取企微标签组名称，不能超过15个字符
                     * @return GroupName 企微标签组名称，不能超过15个字符
                     * 
                     */
                    std::string GetGroupName() const;

                    /**
                     * 设置企微标签组名称，不能超过15个字符
                     * @param _groupName 企微标签组名称，不能超过15个字符
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

                    /**
                     * 获取标签组创建时间,单位为秒
                     * @return CreateTime 标签组创建时间,单位为秒
                     * 
                     */
                    uint64_t GetCreateTime() const;

                    /**
                     * 设置标签组创建时间,单位为秒
                     * @param _createTime 标签组创建时间,单位为秒
                     * 
                     */
                    void SetCreateTime(const uint64_t& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取标签组内的标签列表, 上限为20
                     * @return Tags 标签组内的标签列表, 上限为20
                     * 
                     */
                    std::vector<TagDetailInfo> GetTags() const;

                    /**
                     * 设置标签组内的标签列表, 上限为20
                     * @param _tags 标签组内的标签列表, 上限为20
                     * 
                     */
                    void SetTags(const std::vector<TagDetailInfo>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                private:

                    /**
                     * 企微标签组id
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * 标签组业务id
                     */
                    std::string m_bizGroupId;
                    bool m_bizGroupIdHasBeenSet;

                    /**
                     * 企微标签组名称，不能超过15个字符
                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                    /**
                     * 标签组次序值。sort值大的排序靠前。有效的值范围是[0, 2^32)
                     */
                    uint64_t m_sort;
                    bool m_sortHasBeenSet;

                    /**
                     * 标签组创建时间,单位为秒
                     */
                    uint64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 标签组内的标签列表, 上限为20
                     */
                    std::vector<TagDetailInfo> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAV_V20210129_MODEL_TAGGROUP_H_
