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

#ifndef TENCENTCLOUD_SES_V20201002_MODEL_LISTRECEIVERSREQUEST_H_
#define TENCENTCLOUD_SES_V20201002_MODEL_LISTRECEIVERSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ses
    {
        namespace V20201002
        {
            namespace Model
            {
                /**
                * ListReceivers请求参数结构体
                */
                class ListReceiversRequest : public AbstractModel
                {
                public:
                    ListReceiversRequest();
                    ~ListReceiversRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取偏移量，整型，从0开始
                     * @return Offset 偏移量，整型，从0开始
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置偏移量，整型，从0开始
                     * @param _offset 偏移量，整型，从0开始
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
                     * 获取限制数目，整型，不超过100
                     * @return Limit 限制数目，整型，不超过100
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置限制数目，整型，不超过100
                     * @param _limit 限制数目，整型，不超过100
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
                     * 获取列表状态(1 待上传 2 上传中  3传完成)，若查询所有就不传这个字段
                     * @return Status 列表状态(1 待上传 2 上传中  3传完成)，若查询所有就不传这个字段
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置列表状态(1 待上传 2 上传中  3传完成)，若查询所有就不传这个字段
                     * @param _status 列表状态(1 待上传 2 上传中  3传完成)，若查询所有就不传这个字段
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取列表名称的关键字，模糊查询
                     * @return KeyWord 列表名称的关键字，模糊查询
                     * 
                     */
                    std::string GetKeyWord() const;

                    /**
                     * 设置列表名称的关键字，模糊查询
                     * @param _keyWord 列表名称的关键字，模糊查询
                     * 
                     */
                    void SetKeyWord(const std::string& _keyWord);

                    /**
                     * 判断参数 KeyWord 是否已赋值
                     * @return KeyWord 是否已赋值
                     * 
                     */
                    bool KeyWordHasBeenSet() const;

                private:

                    /**
                     * 偏移量，整型，从0开始
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 限制数目，整型，不超过100
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 列表状态(1 待上传 2 上传中  3传完成)，若查询所有就不传这个字段
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 列表名称的关键字，模糊查询
                     */
                    std::string m_keyWord;
                    bool m_keyWordHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SES_V20201002_MODEL_LISTRECEIVERSREQUEST_H_
