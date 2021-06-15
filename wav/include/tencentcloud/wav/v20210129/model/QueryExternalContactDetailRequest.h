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

#ifndef TENCENTCLOUD_WAV_V20210129_MODEL_QUERYEXTERNALCONTACTDETAILREQUEST_H_
#define TENCENTCLOUD_WAV_V20210129_MODEL_QUERYEXTERNALCONTACTDETAILREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wav
    {
        namespace V20210129
        {
            namespace Model
            {
                /**
                * QueryExternalContactDetail请求参数结构体
                */
                class QueryExternalContactDetailRequest : public AbstractModel
                {
                public:
                    QueryExternalContactDetailRequest();
                    ~QueryExternalContactDetailRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取外部联系人的userid，注意不是企业成员的帐号
                     * @return ExternalUserId 外部联系人的userid，注意不是企业成员的帐号
                     */
                    std::string GetExternalUserId() const;

                    /**
                     * 设置外部联系人的userid，注意不是企业成员的帐号
                     * @param ExternalUserId 外部联系人的userid，注意不是企业成员的帐号
                     */
                    void SetExternalUserId(const std::string& _externalUserId);

                    /**
                     * 判断参数 ExternalUserId 是否已赋值
                     * @return ExternalUserId 是否已赋值
                     */
                    bool ExternalUserIdHasBeenSet() const;

                    /**
                     * 获取用于分页查询的游标，字符串类型，由上一次调用返回，首次调用可不填
                     * @return Cursor 用于分页查询的游标，字符串类型，由上一次调用返回，首次调用可不填
                     */
                    std::string GetCursor() const;

                    /**
                     * 设置用于分页查询的游标，字符串类型，由上一次调用返回，首次调用可不填
                     * @param Cursor 用于分页查询的游标，字符串类型，由上一次调用返回，首次调用可不填
                     */
                    void SetCursor(const std::string& _cursor);

                    /**
                     * 判断参数 Cursor 是否已赋值
                     * @return Cursor 是否已赋值
                     */
                    bool CursorHasBeenSet() const;

                    /**
                     * 获取返回的最大记录数，整型，最大值100，默认值50，超过最大值时取最大值
                     * @return Limit 返回的最大记录数，整型，最大值100，默认值50，超过最大值时取最大值
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置返回的最大记录数，整型，最大值100，默认值50，超过最大值时取最大值
                     * @param Limit 返回的最大记录数，整型，最大值100，默认值50，超过最大值时取最大值
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * 外部联系人的userid，注意不是企业成员的帐号
                     */
                    std::string m_externalUserId;
                    bool m_externalUserIdHasBeenSet;

                    /**
                     * 用于分页查询的游标，字符串类型，由上一次调用返回，首次调用可不填
                     */
                    std::string m_cursor;
                    bool m_cursorHasBeenSet;

                    /**
                     * 返回的最大记录数，整型，最大值100，默认值50，超过最大值时取最大值
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAV_V20210129_MODEL_QUERYEXTERNALCONTACTDETAILREQUEST_H_
