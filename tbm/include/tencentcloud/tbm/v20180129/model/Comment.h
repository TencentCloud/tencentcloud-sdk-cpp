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

#ifndef TENCENTCLOUD_TBM_V20180129_MODEL_COMMENT_H_
#define TENCENTCLOUD_TBM_V20180129_MODEL_COMMENT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tbm
    {
        namespace V20180129
        {
            namespace Model
            {
                /**
                * 用户好评差评个数信息
                */
                class Comment : public AbstractModel
                {
                public:
                    Comment();
                    ~Comment() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取评论的日期
                     * @return Date 评论的日期
                     * 
                     */
                    std::string GetDate() const;

                    /**
                     * 设置评论的日期
                     * @param _date 评论的日期
                     * 
                     */
                    void SetDate(const std::string& _date);

                    /**
                     * 判断参数 Date 是否已赋值
                     * @return Date 是否已赋值
                     * 
                     */
                    bool DateHasBeenSet() const;

                    /**
                     * 获取差评的个数
                     * @return NegCommentCount 差评的个数
                     * 
                     */
                    uint64_t GetNegCommentCount() const;

                    /**
                     * 设置差评的个数
                     * @param _negCommentCount 差评的个数
                     * 
                     */
                    void SetNegCommentCount(const uint64_t& _negCommentCount);

                    /**
                     * 判断参数 NegCommentCount 是否已赋值
                     * @return NegCommentCount 是否已赋值
                     * 
                     */
                    bool NegCommentCountHasBeenSet() const;

                    /**
                     * 获取好评的个数
                     * @return PosCommentCount 好评的个数
                     * 
                     */
                    uint64_t GetPosCommentCount() const;

                    /**
                     * 设置好评的个数
                     * @param _posCommentCount 好评的个数
                     * 
                     */
                    void SetPosCommentCount(const uint64_t& _posCommentCount);

                    /**
                     * 判断参数 PosCommentCount 是否已赋值
                     * @return PosCommentCount 是否已赋值
                     * 
                     */
                    bool PosCommentCountHasBeenSet() const;

                private:

                    /**
                     * 评论的日期
                     */
                    std::string m_date;
                    bool m_dateHasBeenSet;

                    /**
                     * 差评的个数
                     */
                    uint64_t m_negCommentCount;
                    bool m_negCommentCountHasBeenSet;

                    /**
                     * 好评的个数
                     */
                    uint64_t m_posCommentCount;
                    bool m_posCommentCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TBM_V20180129_MODEL_COMMENT_H_
