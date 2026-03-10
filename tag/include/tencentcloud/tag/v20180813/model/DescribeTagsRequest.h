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

#ifndef TENCENTCLOUD_TAG_V20180813_MODEL_DESCRIBETAGSREQUEST_H_
#define TENCENTCLOUD_TAG_V20180813_MODEL_DESCRIBETAGSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tag
    {
        namespace V20180813
        {
            namespace Model
            {
                /**
                * DescribeTags请求参数结构体
                */
                class DescribeTagsRequest : public AbstractModel
                {
                public:
                    DescribeTagsRequest();
                    ~DescribeTagsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>标签键,与标签值同时存在或同时不存在，不存在时表示查询该用户所有标签</p>
                     * @return TagKey <p>标签键,与标签值同时存在或同时不存在，不存在时表示查询该用户所有标签</p>
                     * 
                     */
                    std::string GetTagKey() const;

                    /**
                     * 设置<p>标签键,与标签值同时存在或同时不存在，不存在时表示查询该用户所有标签</p>
                     * @param _tagKey <p>标签键,与标签值同时存在或同时不存在，不存在时表示查询该用户所有标签</p>
                     * 
                     */
                    void SetTagKey(const std::string& _tagKey);

                    /**
                     * 判断参数 TagKey 是否已赋值
                     * @return TagKey 是否已赋值
                     * 
                     */
                    bool TagKeyHasBeenSet() const;

                    /**
                     * 获取<p>标签值,与标签键同时存在或同时不存在，不存在时表示查询该用户所有标签</p>
                     * @return TagValue <p>标签值,与标签键同时存在或同时不存在，不存在时表示查询该用户所有标签</p>
                     * 
                     */
                    std::string GetTagValue() const;

                    /**
                     * 设置<p>标签值,与标签键同时存在或同时不存在，不存在时表示查询该用户所有标签</p>
                     * @param _tagValue <p>标签值,与标签键同时存在或同时不存在，不存在时表示查询该用户所有标签</p>
                     * 
                     */
                    void SetTagValue(const std::string& _tagValue);

                    /**
                     * 判断参数 TagValue 是否已赋值
                     * @return TagValue 是否已赋值
                     * 
                     */
                    bool TagValueHasBeenSet() const;

                    /**
                     * 获取<p>数据偏移量，默认为 0, 必须为Limit参数的整数倍</p>
                     * @return Offset <p>数据偏移量，默认为 0, 必须为Limit参数的整数倍</p>
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置<p>数据偏移量，默认为 0, 必须为Limit参数的整数倍</p>
                     * @param _offset <p>数据偏移量，默认为 0, 必须为Limit参数的整数倍</p>
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取<p>每页大小，默认为 15，最大1000</p>
                     * @return Limit <p>每页大小，默认为 15，最大1000</p>
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置<p>每页大小，默认为 15，最大1000</p>
                     * @param _limit <p>每页大小，默认为 15，最大1000</p>
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取<p>创建者用户 Uin，不传或为空只将 Uin 作为条件查询</p>
                     * @return CreateUin <p>创建者用户 Uin，不传或为空只将 Uin 作为条件查询</p>
                     * 
                     */
                    uint64_t GetCreateUin() const;

                    /**
                     * 设置<p>创建者用户 Uin，不传或为空只将 Uin 作为条件查询</p>
                     * @param _createUin <p>创建者用户 Uin，不传或为空只将 Uin 作为条件查询</p>
                     * 
                     */
                    void SetCreateUin(const uint64_t& _createUin);

                    /**
                     * 判断参数 CreateUin 是否已赋值
                     * @return CreateUin 是否已赋值
                     * 
                     */
                    bool CreateUinHasBeenSet() const;

                    /**
                     * 获取<p>标签键数组,与标签值同时存在或同时不存在，不存在时表示查询该用户所有标签,当与TagKey同时传递时只取本值</p>
                     * @return TagKeys <p>标签键数组,与标签值同时存在或同时不存在，不存在时表示查询该用户所有标签,当与TagKey同时传递时只取本值</p>
                     * 
                     */
                    std::vector<std::string> GetTagKeys() const;

                    /**
                     * 设置<p>标签键数组,与标签值同时存在或同时不存在，不存在时表示查询该用户所有标签,当与TagKey同时传递时只取本值</p>
                     * @param _tagKeys <p>标签键数组,与标签值同时存在或同时不存在，不存在时表示查询该用户所有标签,当与TagKey同时传递时只取本值</p>
                     * 
                     */
                    void SetTagKeys(const std::vector<std::string>& _tagKeys);

                    /**
                     * 判断参数 TagKeys 是否已赋值
                     * @return TagKeys 是否已赋值
                     * 
                     */
                    bool TagKeysHasBeenSet() const;

                    /**
                     * 获取<p>是否展现项目标签。1:展示  0:不展示</p>
                     * @return ShowProject <p>是否展现项目标签。1:展示  0:不展示</p>
                     * 
                     */
                    uint64_t GetShowProject() const;

                    /**
                     * 设置<p>是否展现项目标签。1:展示  0:不展示</p>
                     * @param _showProject <p>是否展现项目标签。1:展示  0:不展示</p>
                     * 
                     */
                    void SetShowProject(const uint64_t& _showProject);

                    /**
                     * 判断参数 ShowProject 是否已赋值
                     * @return ShowProject 是否已赋值
                     * 
                     */
                    bool ShowProjectHasBeenSet() const;

                private:

                    /**
                     * <p>标签键,与标签值同时存在或同时不存在，不存在时表示查询该用户所有标签</p>
                     */
                    std::string m_tagKey;
                    bool m_tagKeyHasBeenSet;

                    /**
                     * <p>标签值,与标签键同时存在或同时不存在，不存在时表示查询该用户所有标签</p>
                     */
                    std::string m_tagValue;
                    bool m_tagValueHasBeenSet;

                    /**
                     * <p>数据偏移量，默认为 0, 必须为Limit参数的整数倍</p>
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>每页大小，默认为 15，最大1000</p>
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>创建者用户 Uin，不传或为空只将 Uin 作为条件查询</p>
                     */
                    uint64_t m_createUin;
                    bool m_createUinHasBeenSet;

                    /**
                     * <p>标签键数组,与标签值同时存在或同时不存在，不存在时表示查询该用户所有标签,当与TagKey同时传递时只取本值</p>
                     */
                    std::vector<std::string> m_tagKeys;
                    bool m_tagKeysHasBeenSet;

                    /**
                     * <p>是否展现项目标签。1:展示  0:不展示</p>
                     */
                    uint64_t m_showProject;
                    bool m_showProjectHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TAG_V20180813_MODEL_DESCRIBETAGSREQUEST_H_
