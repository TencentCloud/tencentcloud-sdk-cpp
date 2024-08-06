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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_TAGVOTESUM_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_TAGVOTESUM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * 基于表的标签统计信息
                */
                class TagVoteSum : public AbstractModel
                {
                public:
                    TagVoteSum();
                    ~TagVoteSum() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取标签id
                     * @return TagId 标签id
                     * 
                     */
                    int64_t GetTagId() const;

                    /**
                     * 设置标签id
                     * @param _tagId 标签id
                     * 
                     */
                    void SetTagId(const int64_t& _tagId);

                    /**
                     * 判断参数 TagId 是否已赋值
                     * @return TagId 是否已赋值
                     * 
                     */
                    bool TagIdHasBeenSet() const;

                    /**
                     * 获取该表该标签投票次数
                     * @return VoteSum 该表该标签投票次数
                     * 
                     */
                    int64_t GetVoteSum() const;

                    /**
                     * 设置该表该标签投票次数
                     * @param _voteSum 该表该标签投票次数
                     * 
                     */
                    void SetVoteSum(const int64_t& _voteSum);

                    /**
                     * 判断参数 VoteSum 是否已赋值
                     * @return VoteSum 是否已赋值
                     * 
                     */
                    bool VoteSumHasBeenSet() const;

                    /**
                     * 获取当前用户对这张表是否加了该标签 true 已添加 false 未添加
                     * @return Status 当前用户对这张表是否加了该标签 true 已添加 false 未添加
                     * 
                     */
                    bool GetStatus() const;

                    /**
                     * 设置当前用户对这张表是否加了该标签 true 已添加 false 未添加
                     * @param _status 当前用户对这张表是否加了该标签 true 已添加 false 未添加
                     * 
                     */
                    void SetStatus(const bool& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取标签名
                     * @return TagName 标签名
                     * 
                     */
                    std::string GetTagName() const;

                    /**
                     * 设置标签名
                     * @param _tagName 标签名
                     * 
                     */
                    void SetTagName(const std::string& _tagName);

                    /**
                     * 判断参数 TagName 是否已赋值
                     * @return TagName 是否已赋值
                     * 
                     */
                    bool TagNameHasBeenSet() const;

                private:

                    /**
                     * 标签id
                     */
                    int64_t m_tagId;
                    bool m_tagIdHasBeenSet;

                    /**
                     * 该表该标签投票次数
                     */
                    int64_t m_voteSum;
                    bool m_voteSumHasBeenSet;

                    /**
                     * 当前用户对这张表是否加了该标签 true 已添加 false 未添加
                     */
                    bool m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 标签名
                     */
                    std::string m_tagName;
                    bool m_tagNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_TAGVOTESUM_H_
